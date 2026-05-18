/*
 * XREFs of sub_180085CB0 @ 0x180085CB0
 * Callers:
 *     sub_180085A18 @ 0x180085A18 (sub_180085A18.c)
 * Callees:
 *     sub_180085270 @ 0x180085270 (sub_180085270.c)
 *     sub_180085298 @ 0x180085298 (sub_180085298.c)
 *     sub_1800852C0 @ 0x1800852C0 (sub_1800852C0.c)
 *     sub_1800853D8 @ 0x1800853D8 (sub_1800853D8.c)
 */

__int64 __fastcall sub_180085CB0(float a1, float a2, char a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  float v8; // xmm11_4
  float v9; // xmm6_4
  int v10; // xmm9_4
  int v11; // ebx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // [rsp+28h] [rbp-91h] BYREF
  __int64 v18; // [rsp+30h] [rbp-89h] BYREF
  float v19; // [rsp+38h] [rbp-81h]
  __int64 v20; // [rsp+40h] [rbp-79h] BYREF
  int v21; // [rsp+48h] [rbp-71h]

  v8 = (float)a4;
  v9 = (float)(a1 + a1) / (float)a4;
  if ( a3 )
    v10 = -1082130432;
  else
    v10 = 1065353216;
  v11 = 0;
  do
  {
    v12 = 0;
    do
    {
      v13 = *(_QWORD *)(a5 + 8);
      *((float *)&v18 + 1) = a2;
      v19 = (float)((float)-v9 * (float)v11) - (float)-a1;
      *(float *)&v18 = (float)((float)v12 * v9) - a1;
      if ( v13 == *(_QWORD *)(a5 + 16) )
        sub_1800853D8((void **)a5, v13, &v18);
      else
        sub_180085298(a5, (__int64)&v18);
      v14 = *(_QWORD *)(a6 + 8);
      HIDWORD(v20) = v10;
      LODWORD(v20) = 0;
      v21 = 0;
      if ( v14 == *(_QWORD *)(a6 + 16) )
        sub_1800853D8((void **)a6, v14, &v20);
      else
        sub_180085298(a6, (__int64)&v20);
      v15 = *(_QWORD *)(a7 + 8);
      *((float *)&v17 + 1) = (float)v11 / v8;
      *(float *)&v17 = (float)v12 / v8;
      if ( v15 == *(_QWORD *)(a7 + 16) )
        result = (__int64)sub_1800852C0((void **)a7, v15, &v17);
      else
        result = sub_180085270(a7, &v17);
      ++v12;
    }
    while ( v12 <= (unsigned int)a4 );
    ++v11;
  }
  while ( v11 <= (unsigned int)a4 );
  return result;
}
