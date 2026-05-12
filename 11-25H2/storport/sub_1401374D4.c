/*
 * XREFs of sub_1401374D4 @ 0x1401374D4
 * Callers:
 *     sub_1401359CC @ 0x1401359CC (sub_1401359CC.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 */

__int64 __fastcall sub_1401374D4(int **a1, int a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v8; // esi
  int *v12; // rcx
  _QWORD v13[3]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  result = 0LL;
  v13[1] = 0LL;
  v8 = 0;
  v15 = 0;
  while ( a5 )
  {
    v13[0] = v8;
    v12 = *a1;
    v13[2] = a6;
    v14 = a5;
    sub_1400859FC(v12, "SetBandMetadata", 0, 23, v8, a5);
    result = sub_140137E38((_DWORD)a1, a2, 0, 23, (__int64)sub_140136390, (__int64)v13, 0LL, 0LL, 0LL, 0LL);
    if ( (int)result < 0 )
      break;
    a6 += v14;
    v8 += v14;
    a5 -= v14;
  }
  return result;
}
