/*
 * XREFs of sub_180014760 @ 0x180014760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180014288 @ 0x180014288 (sub_180014288.c)
 *     sub_180043704 @ 0x180043704 (sub_180043704.c)
 *     sub_180043898 @ 0x180043898 (sub_180043898.c)
 *     sub_18007EAEC @ 0x18007EAEC (sub_18007EAEC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180014760(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r9
  __int128 *v9; // rax
  char v10; // bl
  __int64 v11; // r9
  __int128 *v12; // rax
  char v13; // bl
  __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // r8
  __int64 result; // rax
  __int128 v18; // [rsp+28h] [rbp-70h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v19 = a2;
  v8 = *(_QWORD *)(a1 + 16);
  if ( a3 )
  {
    v9 = (__int128 *)sub_180012C40(&v20, (_QWORD *)(a3 + 16));
    v10 = 1;
  }
  else
  {
    v18 = 0LL;
    v9 = &v18;
    v10 = 2;
  }
  try
  {
    sub_180043704(v8, a2, v9);
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      if ( *((_QWORD *)&v18 + 1) )
        sub_180010EC8(*((__int64 *)&v18 + 1));
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      if ( v21 )
        sub_180010EC8(v21);
    }
    v11 = *(_QWORD *)(a1 + 16);
    if ( a4 )
    {
      v12 = (__int128 *)sub_180012C40(&v20, (_QWORD *)(a4 + 16));
      v13 = v10 | 4;
    }
    else
    {
      v18 = 0LL;
      v12 = &v18;
      v13 = v10 | 8;
    }
    sub_180043898(v11, a2, v12);
    if ( (v13 & 8) != 0 )
    {
      v13 &= ~8u;
      if ( *((_QWORD *)&v18 + 1) )
        sub_180010EC8(*((__int64 *)&v18 + 1));
    }
    if ( (v13 & 4) != 0 && v21 )
      sub_180010EC8(v21);
    v14 = *(_QWORD *)(a1 + 16);
    v15 = sub_180014288(&v20, a2, (__int64)&unk_1801CBD78);
    LOBYTE(v16) = a3 != 0;
    sub_18007EAEC(*(_QWORD *)(v14 + 120), v15, v16);
    sub_1800129D0((__int64)&v20);
    sub_1800129D0(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_1800102C4(
      retaddr,
      249LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    sub_1800129D0(v19);
    return 2147500037LL;
  }
  return result;
}
