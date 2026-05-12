/*
 * XREFs of RaidUnitAbortSrbCompletion @ 0x1400A6D90
 * Callers:
 *     <none>
 * Callees:
 *     StorFreeSynchronousScsiRequest @ 0x140008740 (StorFreeSynchronousScsiRequest.c)
 *     RaidAdapterRequestComplete @ 0x14000E730 (RaidAdapterRequestComplete.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     StorEtwMiniportBugAbortBrokenEvent @ 0x1400B0F38 (StorEtwMiniportBugAbortBrokenEvent.c)
 */

__int64 __fastcall RaidUnitAbortSrbCompletion(__int64 a1, IRP *a2, _BYTE *a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  char *DeviceExtension; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // rcx
  void *v15; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 64LL;
  v6 = 64LL;
  DeviceExtension = (char *)a2->Tail.Overlay.CurrentStackLocation[-1].DeviceObject->DeviceExtension;
  if ( a3[2] != 40 )
    v6 = 24LL;
  BugCheckParameter4 = **(_QWORD **)&a3[v6];
  v9 = 96LL;
  if ( *(_BYTE *)(BugCheckParameter4 + 2) != 40 )
    v9 = 48LL;
  v10 = *(_QWORD *)(v9 + BugCheckParameter4);
  *(_BYTE *)(v10 + 17) &= ~4u;
  if ( a2->IoStatus.Status >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 776), 2, 1) != 4 )
    {
      v14 = *((_QWORD *)DeviceExtension + 3);
      *(_OWORD *)BugCheckParameter2 = 0LL;
      RaidDriverGetName(*(_QWORD *)(v14 + 16), (__int64)BugCheckParameter2);
      if ( MiniportBugActionPolicy == 1 )
      {
        StorEtwMiniportBugAbortBrokenEvent(v10, BugCheckParameter2);
      }
      else if ( MiniportBugActionPolicy == 2 )
      {
        KeBugCheckEx(0xF0u, 2uLL, BugCheckParameter2[1], (ULONG_PTR)a3, BugCheckParameter4);
      }
      _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 776), 3, 2);
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 776), 3, 1) == 4 )
LABEL_7:
    RaidAdapterRequestComplete(*((_QWORD *)DeviceExtension + 3), v10, 1);
LABEL_8:
  v11 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v12 = *(_DWORD *)(v11 + *((_QWORD *)DeviceExtension + 5));
  while ( (v12 & 1) == 0 )
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + *((_QWORD *)DeviceExtension + 5)), v12 - 2, v12);
    if ( v13 == v12 )
      goto LABEL_20;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
LABEL_20:
  StorFreeSynchronousScsiRequest(a2);
  if ( a3[2] != 40 )
    v3 = 24LL;
  v15 = *(void **)&a3[v3];
  if ( v15 )
    ExFreePoolWithTag(v15, 0x72536152u);
  ExFreePoolWithTag(a3, 0x72536152u);
  return 3221225494LL;
}
