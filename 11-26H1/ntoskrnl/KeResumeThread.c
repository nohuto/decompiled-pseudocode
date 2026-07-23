/*
 * XREFs of KeResumeThread @ 0x140310BD0
 * Callers:
 *     PsMultiResumeThread @ 0x1404F76A8 (PsMultiResumeThread.c)
 *     PsMultiResumeProcess @ 0x14052A870 (PsMultiResumeProcess.c)
 *     KeAlertResumeThread @ 0x1405EE8E0 (KeAlertResumeThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v8; // eax
  unsigned int v9; // ebp
  char v11; // al

  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v4 + 736), v6, a3);
  v8 = *(char *)(v4 + 644);
  v9 = v8;
  if ( a2 > v8 )
    a2 = *(char *)(v4 + 644);
  if ( a2 )
  {
    if ( (_BYTE)v8 )
    {
      v11 = v8 - a2;
      *(_BYTE *)(v4 + 644) = v11;
      if ( !v11 && (*(_DWORD *)(v4 + 120) & 0x4000) == 0 )
        KiResumeThread(v4, CurrentPrcb, 0LL);
    }
  }
  _InterlockedAnd((volatile signed __int32 *)(v4 + 736), 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v9;
}
