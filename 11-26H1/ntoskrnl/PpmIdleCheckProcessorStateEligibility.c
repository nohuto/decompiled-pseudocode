/*
 * XREFs of PpmIdleCheckProcessorStateEligibility @ 0x140604A7C
 * Callers:
 *     PpmIdleSelectStates @ 0x1402F70FC (PpmIdleSelectStates.c)
 *     PpmIdleSelectCoordinatedProcessorDependency @ 0x140605148 (PpmIdleSelectCoordinatedProcessorDependency.c)
 * Callees:
 *     PpmCheckIdleVeto @ 0x1406041D8 (PpmCheckIdleVeto.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmIdleCheckProcessorStateEligibility(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // r10
  __int64 result; // rax
  unsigned int v10; // r9d
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r11

  v6 = *(_QWORD *)(a1 + 34880);
  if ( *(_DWORD *)(v6 + 44) == 3 && PpmIdleVetoBias )
    return 4294967294LL;
  v10 = a5;
  v11 = 352 * (a5 + 3LL);
  if ( *(_BYTE *)(v11 + v6 + 343) )
    return 2147483658LL;
  if ( a2 != -1 && a5 > (a2 & 0x7FFFFFFFu) )
    return 8LL * (a2 >= 0) + 2147483656LL;
  if ( !*(_BYTE *)(v11 + v6 + 338) && *(_BYTE *)(v6 + 715) )
    return 2147483655LL;
  if ( a6 )
    goto LABEL_19;
  v12 = PpmCheckIdleVeto(v11 + v6 + 296);
  if ( v12 )
    return v12 | 0x100000000LL;
  if ( (unsigned int)(a3 + *(_DWORD *)(v13 + v6 + 280)) > *(_DWORD *)(v14 + 34952) )
    return 2147483650LL;
  if ( *(unsigned int *)(v13 + v6 + 284) > a4 )
    return 2147483651LL;
LABEL_19:
  result = *(_QWORD *)(v6 + 632);
  if ( result )
    return (unsigned int)guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 664), v10);
  return result;
}
