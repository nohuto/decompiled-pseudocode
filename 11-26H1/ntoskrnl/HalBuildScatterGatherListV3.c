/*
 * XREFs of HalBuildScatterGatherListV3 @ 0x140439C00
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuildScatterGatherList @ 0x14043901C (HalpBuildScatterGatherList.c)
 */

__int64 __fastcall HalBuildScatterGatherListV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        int a10)
{
  __int64 v11; // [rsp+60h] [rbp-28h]
  __int64 v12; // [rsp+68h] [rbp-20h]

  return HalpBuildScatterGatherList(
           a1,
           a2,
           0LL,
           (__int64 **)a3,
           a4 - *(unsigned int *)(a3 + 44) - *(_QWORD *)(a3 + 32),
           a5,
           0,
           a6,
           a7,
           a8,
           a9,
           a10,
           v11,
           v12,
           0LL);
}
