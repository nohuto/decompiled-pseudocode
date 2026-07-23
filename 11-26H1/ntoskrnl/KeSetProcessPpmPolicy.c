/*
 * XREFs of KeSetProcessPpmPolicy @ 0x140203314
 * Callers:
 *     PsSetProcessPowerThrottlingState @ 0x140617EEC (PsSetProcessPowerThrottlingState.c)
 *     PspRefreshProcessUserPresencePpmPolicyCallback @ 0x140618260 (PspRefreshProcessUserPresencePpmPolicyCallback.c)
 *     PspSetProcessBamPpmPolicy @ 0x1407F64F0 (PspSetProcessBamPpmPolicy.c)
 * Callees:
 *     KiReleaseProcessLockExclusive @ 0x140203410 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x140203770 (KiAcquireProcessLockExclusive.c)
 *     KiUpdateProcessThreadQos @ 0x140204184 (KiUpdateProcessThreadQos.c)
 */

__int64 __fastcall KeSetProcessPpmPolicy(__int64 a1, int a2)
{
  int v2; // edi
  signed __int32 v4; // eax
  unsigned int v5; // r8d
  signed __int32 v6; // ett
  __int64 v7; // rdx
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  v2 = a2 << 7;
  KiAcquireProcessLockExclusive(a1, &v9);
  v4 = *(_DWORD *)(a1 + 136);
  do
  {
    v5 = v2 | v4 & 0xFFFFF87F;
    if ( v5 == v4 )
      break;
    v6 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), v5, v4);
  }
  while ( v6 != v4 );
  KiUpdateProcessThreadQos(a1);
  LOBYTE(v7) = v9;
  return KiReleaseProcessLockExclusive(a1, v7);
}
