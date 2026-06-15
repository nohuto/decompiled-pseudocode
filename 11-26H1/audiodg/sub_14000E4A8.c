/*
 * XREFs of sub_14000E4A8 @ 0x14000E4A8
 * Callers:
 *     sub_14000E3CC @ 0x14000E3CC (sub_14000E3CC.c)
 * Callees:
 *     sub_14000E9A8 @ 0x14000E9A8 (sub_14000E9A8.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14000E4A8(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r8d
  _QWORD *i; // rdx
  ATL::CAtlException *v17; // rbx
  ATL::CAtlException *v18; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  v7 = 48LL * a4;
  v8 = *(_QWORD *)(v7 + a1);
  if ( !*(_QWORD *)(v7 + a1 + 32) )
  {
    try
    {
      v13 = sub_14000E9A8();
      if ( !v13 )
        sub_14004639C(2147942414LL, v14);
      v15 = *(_DWORD *)(v7 + a1 + 40) - 1;
      for ( i = (_QWORD *)(v13 + 8 * (2LL * (unsigned int)v15 + 1 + (unsigned int)v15)); v15 >= 0; --v15 )
      {
        *i = *(_QWORD *)(v7 + a1 + 32);
        *(_QWORD *)(v7 + a1 + 32) = i;
        i -= 3;
      }
    }
    catch ( ATL::CAtlException *v18 )
    {
      v17 = v18;
      if ( *(_DWORD *)v18 == -1073741571 )
        o__resetstkoflw();
      return *(unsigned int *)v17;
    }
  }
  v9 = *(__int64 **)(v7 + a1 + 32);
  v10 = *v9;
  v9[2] = a2;
  *(_QWORD *)(v7 + a1 + 32) = v10;
  v9[1] = 0LL;
  *v9 = v8;
  ++*(_QWORD *)(v7 + a1 + 16);
  v11 = *(_QWORD *)(v7 + a1);
  if ( v11 )
    *(_QWORD *)(v11 + 8) = v9;
  else
    *(_QWORD *)(v7 + a1 + 8) = v9;
  *(_QWORD *)(v7 + a1) = v9;
  return v6;
}
