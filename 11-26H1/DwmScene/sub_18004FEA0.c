/*
 * XREFs of sub_18004FEA0 @ 0x18004FEA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180016EFC @ 0x180016EFC (sub_180016EFC.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_18004FFB0 @ 0x18004FFB0 (sub_18004FFB0.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 */

__int64 __fastcall sub_18004FEA0(__int64 a1)
{
  __int64 *v1; // rsi
  _QWORD *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  _BYTE v10[20]; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+34h] [rbp-2Ch]
  int v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+3Ch] [rbp-24h]
  unsigned __int32 v14; // [rsp+40h] [rbp-20h]
  unsigned __int32 v15; // [rsp+44h] [rbp-1Ch]
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+4Ch] [rbp-14h]
  int v18; // [rsp+50h] [rbp-10h]

  v1 = (__int64 *)(a1 + 512);
  if ( !*(_QWORD *)(a1 + 512) )
  {
    v3 = (_QWORD *)sub_18007AB60(a1);
    v4 = sub_180016EFC(v3, v10);
    sub_180011F5C(v1, v4);
    if ( *(_QWORD *)&v10[8] )
      sub_180010EC8(*(__int64 *)&v10[8]);
    v5 = *v1;
    v6 = sub_180011CC4(v10, "Light Probe Sampler");
    sub_1800292C4(v5, (__int64)v6);
    v7 = *v1;
    *(_OWORD *)&v10[4] = 0uLL;
    v13 = 0;
    v14 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
    v15 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
    v16 = 0;
    v12 = 7;
    v17 = 0;
    v18 = 2139095039;
    *(_DWORD *)v10 = 3;
    v11 = 8;
    ((void (__fastcall *)(__int64, _BYTE *, _QWORD, __int64))sub_180052460)(v7, v10, 0LL, v8);
  }
  *(_OWORD *)v10 = xmmword_1800FA848;
  return sub_18004FFB0(a1, v10);
}
