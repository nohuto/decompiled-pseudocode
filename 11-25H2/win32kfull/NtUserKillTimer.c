/*
 * XREFs of NtUserKillTimer @ 0x140019980
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 */

__int64 __fastcall NtUserKillTimer(__int64 a1, int a2)
{
  int Timer; // ebx
  __int64 v5; // rax
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v7);
  Timer = 0;
  if ( !a1 )
  {
    LODWORD(v5) = 0;
    goto LABEL_3;
  }
  v5 = ValidateHwnd(a1);
  if ( v5 )
LABEL_3:
    Timer = FindTimer(v5, a2, 0, 1, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v7);
  UserSessionSwitchLeaveCrit();
  return Timer;
}
