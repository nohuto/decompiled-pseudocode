/*
 * XREFs of PdcPoVerifyPowerState @ 0x1407DF7E0
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifySystemPowerState @ 0x140B268C4 (PopVerifySystemPowerState.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-8h]

  v2 = a2;
  PopAcquirePolicyLock(a1, a2);
  PopVerifySystemPowerState(a1, v2);
  return PopReleasePolicyLock(v5, v4, v6, v7, v9);
}
