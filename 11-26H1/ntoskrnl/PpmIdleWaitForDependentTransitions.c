/*
 * XREFs of PpmIdleWaitForDependentTransitions @ 0x140605474
 * Callers:
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140604774 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     PpmIdleTransitionStall @ 0x1406051FC (PpmIdleTransitionStall.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmIdleWaitForDependentTransitions(__int64 a1)
{
  unsigned __int16 *v1; // rax
  unsigned int v2; // ebx
  __int64 Prcb; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+32h] [rbp-2Eh]
  __int16 v11; // [rsp+36h] [rbp-2Ah]
  _QWORD v12[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h]
  unsigned int v14; // [rsp+70h] [rbp+10h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 8);
  v2 = 0;
  v10 = 0;
  v11 = 0;
  v14 = 0;
  v9 = 0;
  v8[1] = v1;
  v8[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v8) )
  {
    Prcb = KeGetPrcb(v14);
    v13 = 0LL;
    BYTE12(v13) = 1;
    v5 = Prcb;
    v6 = *(_QWORD *)(Prcb + 34880);
    v12[0] = 0LL;
    *(_QWORD *)&v13 = Prcb;
    v12[1] = PopIdleTransitionTimeout;
    while ( !(unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 664), v4) )
    {
      if ( (*(_DWORD *)(v5 + 34972) & 0xFF000000) != 0x5000000 )
        return (unsigned int)-1073741782;
      PpmIdleTransitionStall((__int64)v12);
    }
  }
  return v2;
}
