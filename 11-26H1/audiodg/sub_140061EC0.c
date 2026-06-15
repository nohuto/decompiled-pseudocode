/*
 * XREFs of sub_140061EC0 @ 0x140061EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140011C10 @ 0x140011C10 (sub_140011C10.c)
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14003AFC4 @ 0x14003AFC4 (sub_14003AFC4.c)
 *     sub_14006139C @ 0x14006139C (sub_14006139C.c)
 *     sub_1400627BC @ 0x1400627BC (sub_1400627BC.c)
 *     sub_1400628DC @ 0x1400628DC (sub_1400628DC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140061EC0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  ATL::CAtlException *v13; // rbx
  int v14; // [rsp+30h] [rbp-88h] BYREF
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h] BYREF
  __int64 v17; // [rsp+48h] [rbp-70h] BYREF
  __int64 v18; // [rsp+50h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+58h] [rbp-60h] BYREF
  __int128 v20; // [rsp+60h] [rbp-58h] BYREF
  ATL::CAtlException *v21; // [rsp+70h] [rbp-48h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a3;
  v5 = a1;
  v15 = 0LL;
  v16 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v19 = v6;
  v7 = sub_1400B6010(v5);
  if ( v7 < 0 )
    goto LABEL_12;
  v8 = sub_140011C10(a2);
  sub_14003AFC4(&v16, v8);
  v18 = v5 + 200;
  v9 = v16;
  v17 = v16;
  v14 = 0;
  LODWORD(v24) = 0;
  v10 = sub_14006139C(v5 + 200, (unsigned int *)&v17, &v14, (unsigned int *)&v24, &v20);
  v11 = v10;
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    goto LABEL_11;
  }
  v20 = 0LL;
  LODWORD(v20) = 1;
  try
  {
    v24 = v9;
    v11 = sub_1400628DC(v5 + 200, &v24, &v20);
    v15 = v11;
  }
  catch ( ATL::CAtlException *v21 )
  {
    v13 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      o__resetstkoflw();
    LODWORD(v24) = *(_DWORD *)v13;
    v7 = v24;
    v5 = a1;
    v11 = v15;
    if ( (int)v24 < 0 )
      goto LABEL_7;
    v3 = a3;
  }
  v7 = sub_1400B6010(v5);
  if ( v7 >= 0 )
  {
LABEL_11:
    *v3 = v11;
    v7 = 0;
    goto LABEL_12;
  }
LABEL_7:
  if ( v11 )
    sub_1400627BC(v18, v11);
  sub_1400B6010(v5);
LABEL_12:
  sub_140018FF0(&v19);
  sub_1400125D4(&v16);
  return (unsigned int)v7;
}
