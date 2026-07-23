/*
 * XREFs of HvlSkCrashdumpCallbackRoutine @ 0x1405C2F30
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvlpSnapshotCrashArea @ 0x1405C3764 (HvlpSnapshotCrashArea.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HvlSkCrashdumpCallbackRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  ULONG_PTR v9; // r9
  ULONG_PTR Blink; // r8
  ULONG_PTR v11; // rdx
  ULONG v12; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-18h]

  Flink = VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink;
  CurrentPrcb = KeGetCurrentPrcb();
  HvlpSnapshotCrashArea(a1, a2, a3, a4);
  if ( Flink && (HIDWORD(Flink->Flink) & 1) != 0 )
  {
    if ( HIDWORD(Flink[10].Blink) == CurrentPrcb->Number )
    {
      LOBYTE(v7) = 1;
      HvlEnlightenments &= 0x2000u;
      guard_dispatch_icall_no_overrides(v7, v6);
      guard_dispatch_icall_no_overrides(1LL, v8);
      KiHypervisorInitiatedCrashDump = 1;
      v9 = (ULONG_PTR)Flink[2].Flink;
      Blink = (ULONG_PTR)Flink[1].Blink;
      v11 = (ULONG_PTR)Flink[1].Flink;
      v12 = (ULONG)Flink->Blink;
      BugCheckParameter4 = (ULONG_PTR)Flink[2].Blink;
      PoAllProcIntrDisabled = 1;
      KeBugCheckEx(v12, v11, Blink, v9, BugCheckParameter4);
    }
    while ( 1 )
      _mm_pause();
  }
  return 0;
}
