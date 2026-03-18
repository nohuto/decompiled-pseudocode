/*
 * XREFs of NtDCompositionNotifySuperWetInkWork @ 0x140227090
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F5A0 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x140056150 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionNotifySuperWetInkWork(int a1)
{
  int v1; // ebx
  struct DirectComposition::CApplicationChannel *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rcx
  struct DirectComposition::CApplicationChannel *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v1 >= 0 )
  {
    v2 = v6;
    v3 = *((_QWORD *)v6 + 5);
    DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(v3 + 16));
    v4 = *(_QWORD *)(v3 + 88);
    if ( v4 )
      KeSetEvent(*(PRKEVENT *)(v4 + 8), 1, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 16));
    KeLeaveCriticalRegion();
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v2)(v2);
  }
  return (unsigned int)v1;
}
