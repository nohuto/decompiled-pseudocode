/*
 * XREFs of sub_1400892B4 @ 0x1400892B4
 * Callers:
 *     sub_140089A7C @ 0x140089A7C (sub_140089A7C.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_1400896EC @ 0x1400896EC (sub_1400896EC.c)
 *     sub_140089A10 @ 0x140089A10 (sub_140089A10.c)
 *     sub_140089DA0 @ 0x140089DA0 (sub_140089DA0.c)
 *     sub_140089E50 @ 0x140089E50 (sub_140089E50.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1400892B4(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rbx
  _DWORD *v15; // rcx
  __int64 v16; // r9
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = sub_140049338(112LL, (__int64)&unk_1400C75FC);
  v18 = v12;
  if ( v12 )
  {
    v14 = sub_1400896EC(v12);
    v18 = 0LL;
    v13 = sub_140089E50(v14, *a2, *a3, *a4, *a5, *a6, *a7, *a8);
    if ( v13 >= 0 )
    {
      *a1 = 0LL;
      if ( sub_140088ED0(&xmmword_1400C94C0, &stru_1400C6598) || sub_140088ED0(v15, &dword_1400C6698) )
      {
        *a1 = v14;
        sub_1400B6010(v14);
        v13 = 0;
      }
      else
      {
        v13 = sub_140089A10(v14 + 8, v16, a1);
        if ( v13 >= 0 )
          sub_1400B6010(*a1);
      }
    }
    if ( v14 )
      sub_140089DA0(v14);
  }
  else
  {
    v13 = -2147024882;
  }
  sub_1400454AC(&v18);
  return (unsigned int)v13;
}
