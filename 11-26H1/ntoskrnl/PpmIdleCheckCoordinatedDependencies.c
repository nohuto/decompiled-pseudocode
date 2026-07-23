/*
 * XREFs of PpmIdleCheckCoordinatedDependencies @ 0x140604244
 * Callers:
 *     PpmIdleCheckCoordinatedDependency @ 0x1406043C0 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140604774 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1406043C0 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleCheckCoordinatedProcessorDependency @ 0x1406046D4 (PpmIdleCheckCoordinatedProcessorDependency.c)
 *     PpmIdleSelectCoordinatedProcessorDependency @ 0x140605148 (PpmIdleSelectCoordinatedProcessorDependency.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedDependencies(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned __int64 *a12)
{
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 result; // rax
  unsigned __int64 v18; // rbx
  int Prcb; // eax
  _QWORD v20[2]; // [rsp+60h] [rbp-38h] BYREF
  int v21; // [rsp+B0h] [rbp+18h]

  v21 = a3;
  v20[0] = 0LL;
  v15 = 0LL;
  *a12 = -1LL;
  while ( (unsigned int)v15 < a7 )
  {
    v16 = *(_DWORD *)(a8 + 24 * v15);
    if ( v16 == -1 )
    {
      result = PpmIdleCheckCoordinatedDependency(a1, a2, a4, a5, a6, a3, a8 + 8 + 24 * v15, a9, a10, a11, (__int64)v20);
    }
    else
    {
      if ( v16 == *(_DWORD *)(a1 + 36) )
      {
        v18 = -1LL;
        v20[0] = -1LL;
        result = PpmIdleSelectCoordinatedProcessorDependency(a1, a2, a4, a5, a8 + 8 + 24 * v15, a9);
        goto LABEL_9;
      }
      Prcb = KeGetPrcb(v16);
      result = PpmIdleCheckCoordinatedProcessorDependency(Prcb, a4, (int)a8 + 8 + 24 * (int)v15, a11, (__int64)v20);
    }
    v18 = v20[0];
LABEL_9:
    if ( result )
      return result;
    a3 = v21;
    if ( *a12 < v18 )
      v18 = *a12;
    v15 = (unsigned int)(v15 + 1);
    *a12 = v18;
  }
  return 0LL;
}
