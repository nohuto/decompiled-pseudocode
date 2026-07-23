/*
 * XREFs of HalGetScatterGatherListEx @ 0x14058B0D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuildScatterGatherList @ 0x14043901C (HalpBuildScatterGatherList.c)
 */

__int64 __fastcall HalGetScatterGatherListEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4,
        unsigned __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        int a11,
        int a12,
        _QWORD *a13)
{
  __int64 v14; // [rsp+60h] [rbp-28h]
  __int64 v15; // [rsp+68h] [rbp-20h]

  if ( a3 && (a8 || (a7 & 1) != 0 && a13) )
    return HalpBuildScatterGatherList(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, 0LL, 0, v14, v15, a13);
  else
    return 3221225485LL;
}
