/*
 * XREFs of sub_140063350 @ 0x140063350
 * Callers:
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_1400634EC @ 0x1400634EC (sub_1400634EC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall sub_140063350(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  ATL::CAtlException *v15; // rbx
  ATL::CAtlException *v16; // rbx
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v18; // [rsp+28h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  ATL::CAtlException *v21; // [rsp+40h] [rbp-48h] BYREF
  ATL::CAtlException *v22; // [rsp+50h] [rbp-38h] BYREF
  int v23; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+90h] [rbp+8h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v8 = a1[34];
  if ( v8 )
  {
    v9 = sub_1400634EC(v8, a2, a3, a4);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  v10 = a1[3];
  if ( v10 )
  {
    v9 = sub_1400634EC(v10, v6, v5, v4);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  v9 = 0;
  try
  {
    v18 = (_QWORD *)a1[9];
  }
  catch ( ATL::CAtlException *v21 )
  {
    v15 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      o__resetstkoflw();
    v23 = *(_DWORD *)v15;
    v9 = *(_DWORD *)v15;
    if ( v23 >= 0 )
    {
      v4 = a4;
      v5 = a3;
      v6 = a2;
      goto LABEL_8;
    }
    return (unsigned int)v9;
  }
LABEL_8:
  while ( v18 )
  {
    v19 = 0LL;
    v11 = sub_1400265D8(v10, &v18);
    v12 = *v11;
    v20 = v12;
    v17 = v12;
    if ( v12 )
      sub_1400B6010(v12);
    try
    {
      v9 = 0;
      v13 = sub_1400B6010(v12);
      v19 = v13;
    }
    catch ( ATL::CAtlException *v22 )
    {
      v16 = v22;
      if ( *(_DWORD *)v22 == -1073741571 )
        o__resetstkoflw();
      v24 = *(_DWORD *)v16;
      v9 = *(_DWORD *)v16;
      if ( v24 < 0 )
      {
LABEL_12:
        sub_140003238(&v17);
        return (unsigned int)v9;
      }
      v4 = a4;
      v5 = a3;
      v6 = a2;
      v13 = v19;
    }
    if ( v13 )
    {
      v9 = sub_1400634EC(v13, v6, v5, v4);
      if ( v9 < 0 )
        goto LABEL_12;
    }
    sub_140003238(&v17);
  }
  return (unsigned int)v9;
}
