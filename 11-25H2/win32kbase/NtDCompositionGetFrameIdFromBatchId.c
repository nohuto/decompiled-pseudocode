/*
 * XREFs of NtDCompositionGetFrameIdFromBatchId @ 0x140120880
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x140056150 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?GetFrameIdFromBatchId@CApplicationChannel@DirectComposition@@QEBA_KK@Z @ 0x14012B3D0 (-GetFrameIdFromBatchId@CApplicationChannel@DirectComposition@@QEBA_KK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameIdFromBatchId(int a1, unsigned int a2, void *a3)
{
  DirectComposition::CApplicationChannel *v5; // rdi
  signed int v6; // ebx
  struct DirectComposition::CApplicationChannel *v8; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 Src; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v8 = 0LL;
  Src = 0LL;
  v6 = a3 == 0LL ? 0xC000000D : 0;
  if ( a3 )
  {
    v6 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v8);
    v5 = v8;
  }
  if ( v6 >= 0 )
  {
    Src = DirectComposition::CApplicationChannel::GetFrameIdFromBatchId(v5, a2);
    if ( !Src )
      v6 = -1073741275;
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v5)(v5);
  }
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741275 )
    RtlCopyToUser(a3, &Src, 8uLL);
  return (unsigned int)v6;
}
