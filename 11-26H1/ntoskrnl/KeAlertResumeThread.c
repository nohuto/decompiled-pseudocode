/*
 * XREFs of KeAlertResumeThread @ 0x1405EE8E0
 * Callers:
 *     NtAlertResumeThread @ 0x1408028B0 (NtAlertResumeThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAlertThread @ 0x1403108E0 (KeAlertThread.c)
 *     KeResumeThread @ 0x140310BD0 (KeResumeThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeAlertResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // r8
  unsigned int v6; // edi

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  KeAlertThread(a1, 0LL, a3);
  v6 = KeResumeThread(a1, 1u, v5);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v6;
}
