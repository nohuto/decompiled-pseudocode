/*
 * XREFs of ExpTimeRefreshDpcRoutine @ 0x1404EF780
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x140536000 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1405531C8 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine7 @ 0x1407329F0 (KiCustomAccessRoutine7.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall ExpTimeRefreshDpcRoutine(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v8[90]; // [rsp+0h] [rbp-218h] BYREF
  _QWORD v9[20]; // [rsp+170h] [rbp-A8h] BYREF

  v9[15] = v8;
  memset_0(v9, 0, 0x60uLL);
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    v8[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v9[11] = a3;
    v9[8] = __ROL8__(a2, a3);
    v9[3] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine7(a2);
  }
  if ( _InterlockedIncrement(a2) == 1 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&ExpSysDbgLock.216, DelayedWorkQueue);
}
