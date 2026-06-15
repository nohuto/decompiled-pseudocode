/*
 * XREFs of sub_14004ED80 @ 0x14004ED80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

int *__fastcall sub_14004ED80(int *a1, _WORD *a2, __int64 a3, _BYTE *a4)
{
  int v6; // eax
  int *result; // rax
  int v8; // eax
  __int64 v9; // rdx
  const wil::ResultException *v10; // rbx
  __int64 *v11; // rbp
  int v12; // eax
  const wil::ResultException *v13; // rbx
  __int64 *v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-88h] BYREF
  const wil::ResultException *v16; // [rsp+20h] [rbp-68h] BYREF
  const std::bad_alloc *v17; // [rsp+28h] [rbp-60h] BYREF
  const wil::ResultException *v18; // [rsp+30h] [rbp-58h] BYREF
  const std::bad_alloc *v19; // [rsp+38h] [rbp-50h] BYREF
  std::exception *v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+50h] [rbp-38h]
  int *v23; // [rsp+90h] [rbp+8h]
  _DWORD *v24; // [rsp+90h] [rbp+8h]
  _WORD *v25; // [rsp+98h] [rbp+10h]
  _WORD *v26; // [rsp+98h] [rbp+10h]
  _WORD *v27; // [rsp+98h] [rbp+10h]
  _WORD *v28; // [rsp+98h] [rbp+10h]
  _WORD *v29; // [rsp+98h] [rbp+10h]
  __int64 v30; // [rsp+A0h] [rbp+18h]
  __int64 v31; // [rsp+A0h] [rbp+18h]
  __int64 v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A0h] [rbp+18h]
  _BYTE *v35; // [rsp+A8h] [rbp+20h]
  _BYTE *v36; // [rsp+A8h] [rbp+20h]

  if ( a2 )
    *a2 = 0;
  *a4 = 0;
  if ( qword_1400E8378 )
  {
    v6 = sub_1400B6010(a2);
    if ( v6 < 0 )
      goto LABEL_5;
  }
  if ( qword_1400E83C8 )
  {
    v6 = sub_1400B6010(a2);
LABEL_5:
    *a1 = v6;
    a1[1] = sub_14001DFBC(v6);
    a1[2] = 0;
    return a1;
  }
  if ( qword_1400E8348 )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v16 )
    {
      *v35 = 1;
      v10 = v16;
      sub_14004E454((__int64)v16, v25, v30);
      v21 = *((_QWORD *)v10 + 4);
      v22 = (unsigned __int8)(*((_BYTE *)v10 + 28) & 8) >> 3;
      result = v23;
      *(_QWORD *)v23 = v21;
      v23[2] = v22;
      return result;
    }
    catch ( const std::bad_alloc *v17 )
    {
      sub_14004E480((__int64)v17, v26, v31);
      LODWORD(v21) = -2147024882;
      HIDWORD(v21) = sub_14001DFBC(-2147024882);
      v22 = 0;
      result = v23;
      *(_QWORD *)v23 = v21;
      v23[2] = v22;
      return result;
    }
    catch ( ... )
    {
      v14 = &v15;
      v11 = v14;
      v12 = sub_14004E950(v14[19]);
      if ( v12 < 0 )
      {
        *((_DWORD *)v11 + 18) = v12;
        *((_DWORD *)v11 + 19) = sub_14001DFBC(v12);
        *((_DWORD *)v11 + 20) = 0;
        result = v23;
        *(_QWORD *)v23 = v21;
        v23[2] = v22;
        return result;
      }
      goto LABEL_10;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v18 )
  {
    *v36 = 1;
    v13 = v18;
    sub_14004E454((__int64)v18, v27, v32);
    v21 = *((_QWORD *)v13 + 4);
    v22 = (unsigned __int8)(*((_BYTE *)v13 + 28) & 8) >> 3;
    result = v23;
    *(_QWORD *)v23 = v21;
    v23[2] = v22;
    return result;
  }
  catch ( const std::bad_alloc *v19 )
  {
    sub_14004E480((__int64)v19, v28, v33);
    LODWORD(v21) = -2147024882;
    HIDWORD(v21) = sub_14001DFBC(-2147024882);
    v22 = 0;
    result = v23;
    *(_QWORD *)v23 = v21;
    v23[2] = v22;
    return result;
  }
  catch ( std::exception *v20 )
  {
    sub_14004E480((__int64)v20, v29, v34);
    LODWORD(v21) = -2147024322;
    HIDWORD(v21) = sub_14001DFBC(-2147024322);
    v22 = 0;
    result = v23;
    *(_QWORD *)v23 = v21;
    v23[2] = v22;
    return result;
  }
  catch ( ... )
  {
LABEL_10:
    *v24 = 0;
    v8 = sub_14001DFBC(0);
    *(_DWORD *)(v9 + 4) = v8;
    *(_DWORD *)(v9 + 8) = 0;
    return (int *)v9;
  }
  return result;
}
