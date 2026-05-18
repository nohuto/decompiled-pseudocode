/*
 * XREFs of sub_180011D1C @ 0x180011D1C
 * Callers:
 *     sub_180017938 @ 0x180017938 (sub_180017938.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001205C @ 0x18001205C (sub_18001205C.c)
 *     sub_1800BF300 @ 0x1800BF300 (sub_1800BF300.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180011D1C(__int64 a1, _OWORD *a2, _QWORD *a3, _QWORD *a4, int a5, int a6, unsigned int a7)
{
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF

  v14[0] = *a4;
  v14[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v15[0] = *a3;
  v15[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v16[0] = *a2;
  v16[1] = a2[1];
  ((void (__fastcall *)(__int64, _OWORD *, _QWORD *, _QWORD *))sub_1800BF300)(a1, v16, v15, v14);
  *(_QWORD *)a1 = &RenderOutputDwm::`vftable';
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_DWORD *)(a1 + 1704) = a5;
  *(_DWORD *)(a1 + 1708) = a6;
  v10 = a7;
  if ( a7 <= 1 )
    v10 = 1;
  *(_DWORD *)(a1 + 1712) = v10;
  *(float *)(a1 + 1716) = sub_18001205C();
  v11 = a3[1];
  if ( v11 )
    sub_180010EC8(v11);
  v12 = a4[1];
  if ( v12 )
    sub_180010EC8(v12);
  return a1;
}
