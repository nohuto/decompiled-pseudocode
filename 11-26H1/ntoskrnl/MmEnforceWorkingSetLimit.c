/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x140B00674
 * Callers:
 *     PspApplyWorkingSetLimits @ 0x140771F6C (PspApplyWorkingSetLimits.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B003D8 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140B3984C (PspAddProcessToWorkingSetChangeList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     MiEnforceWorkingSetLimit @ 0x14030E1D8 (MiEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, unsigned int a2)
{
  int v2; // edi
  unsigned int v5; // ebx
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  memset(v7, 0, sizeof(v7));
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v2 = 1;
    KiStackAttachProcess(a1, 0, (__int64)v7);
  }
  v5 = MiEnforceWorkingSetLimit((__int64)&a1[2].ReadyListHead.Blink, a2);
  if ( v2 )
    KiUnstackDetachProcess((__int64)v7, 0);
  return v5;
}
