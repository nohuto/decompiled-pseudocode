/*
 * XREFs of sub_14002D758 @ 0x14002D758
 * Callers:
 *     sub_14002C780 @ 0x14002C780 (sub_14002C780.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_140011180 @ 0x140011180 (sub_140011180.c)
 *     sub_140011A18 @ 0x140011A18 (sub_140011A18.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_14002D758(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  int v3; // edi
  _DWORD *v4; // r15
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r12
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // rbx
  __int64 v15; // [rsp+40h] [rbp-78h] BYREF
  __int64 v16; // [rsp+48h] [rbp-70h]
  _DWORD *v17; // [rsp+50h] [rbp-68h]
  ATL::CAtlException *v18; // [rsp+58h] [rbp-60h] BYREF
  ATL::CAtlException *v19; // [rsp+60h] [rbp-58h] BYREF
  _OWORD v20[4]; // [rsp+70h] [rbp-48h] BYREF
  __int64 *v21; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+20h] BYREF

  v21 = (__int64 *)a1;
  v2 = (__int64 *)a1;
  v3 = 0;
  v4 = (_DWORD *)(a1 + 112);
  v17 = (_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 112) == 2 && *(_QWORD *)(a1 + 32) > 1uLL )
  {
    v5 = *(__int64 **)(a1 + 16);
    if ( !v5 )
      sub_14004639C(2147500037LL, a2);
    v6 = *v5;
    v16 = v6;
    v7 = v5[2];
    if ( !v6 )
      sub_14004639C(2147500037LL, a2);
    v8 = *(_QWORD *)(v6 + 16);
    if ( *(_DWORD *)(v7 + 40) == 3
      && *(_DWORD *)(v8 + 40) == 2
      && *(_DWORD *)(*(_QWORD *)(v8 + 32) + 4LL)
      && (*(_BYTE *)(v8 + 48) & 1) != 0 )
    {
      v24 = 0LL;
      v23 = 0LL;
      v20[0] = xmmword_1400C6878;
      v3 = sub_14006A97C((unsigned int)&qword_1400C9700, 0, 0, *(_DWORD *)(v7 + 24), 1, 0, (__int64)v20, (__int64)&v24);
      if ( v3 < 0 )
      {
        sub_140003238(&v23);
        v10 = v24;
        if ( v24 )
          goto LABEL_19;
LABEL_20:
        sub_14005A470("CPipeInstance::FixupStreamPipe", 2523LL, (unsigned int)v3);
        return (unsigned int)v3;
      }
      v11 = v24;
      v3 = sub_1400B6010(v2[30]);
      if ( v3 < 0 || (v3 = sub_1400B6010(v7), v3 < 0) )
      {
        sub_140003238(&v23);
LABEL_18:
        v10 = v11;
LABEL_19:
        sub_1400B6010(v10);
        goto LABEL_20;
      }
      v15 = 0LL;
      if ( (unsigned int)sub_1400B6010(v11) )
      {
        v3 = -2005139404;
      }
      else
      {
        sub_1400B6010(v11);
        sub_1400B6010(v11);
        v3 = 0;
        try
        {
          v22 = v11;
          sub_140011A18(v2 + 2, v16, &v22);
        }
        catch ( ATL::CAtlException *v18 )
        {
          v13 = v18;
          if ( *(_DWORD *)v18 == -1073741571 )
            o__resetstkoflw();
          LODWORD(v22) = *(_DWORD *)v13;
          v3 = v22;
          if ( (int)v22 < 0 )
          {
            sub_140003238(&v15);
            sub_140003238(&v23);
            v10 = v24;
            goto LABEL_19;
          }
          v2 = v21;
          v4 = v17;
        }
        v11 = 0LL;
      }
      sub_140003238(&v15);
      sub_140003238(&v23);
      if ( v11 )
        sub_1400B6010(v11);
    }
  }
  if ( *v4 != 5 || v2[4] != 1 )
    goto LABEL_10;
  v23 = 0LL;
  v21 = 0LL;
  v12 = *(_QWORD *)sub_140009AA8(v2 + 2, a2);
  v20[0] = xmmword_1400C6878;
  v3 = sub_14006A97C((unsigned int)&qword_1400C9700, 0, 0, *(_DWORD *)(v12 + 24), 1, 0, (__int64)v20, (__int64)&v23);
  if ( v3 < 0 )
  {
    sub_140003238((__int64 *)&v21);
    v10 = v23;
    if ( !v23 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v11 = v23;
  v3 = sub_1400B6010(v2[30]);
  if ( v3 < 0 || (v3 = sub_1400B6010(v12), v3 < 0) )
  {
    sub_140003238((__int64 *)&v21);
    goto LABEL_18;
  }
  v24 = 0LL;
  if ( (unsigned int)sub_1400B6010(v11) )
  {
    v3 = -2005139404;
  }
  else
  {
    sub_1400B6010(v11);
    sub_1400B6010(v11);
    v3 = 0;
    try
    {
      v22 = v11;
      sub_140011180((__int64)(v2 + 2), &v22);
    }
    catch ( ATL::CAtlException *v19 )
    {
      v14 = v19;
      if ( *(_DWORD *)v19 == -1073741571 )
        o__resetstkoflw();
      LODWORD(v22) = *(_DWORD *)v14;
      v3 = v22;
      if ( (int)v22 < 0 )
      {
        sub_140003238(&v24);
        sub_140003238((__int64 *)&v21);
        v10 = v23;
        goto LABEL_19;
      }
    }
    v11 = 0LL;
  }
  sub_140003238(&v24);
  sub_140003238((__int64 *)&v21);
  if ( v11 )
    sub_1400B6010(v11);
LABEL_10:
  if ( v3 < 0 )
    goto LABEL_20;
  return (unsigned int)v3;
}
