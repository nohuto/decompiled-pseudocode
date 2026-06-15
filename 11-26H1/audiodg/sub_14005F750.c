/*
 * XREFs of sub_14005F750 @ 0x14005F750
 * Callers:
 *     sub_140067768 @ 0x140067768 (sub_140067768.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14005FC84 @ 0x14005FC84 (sub_14005FC84.c)
 *     sub_140060370 @ 0x140060370 (sub_140060370.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14005F750(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _DWORD *a5, __int64 a6)
{
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rbx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = sub_140049338(168LL, (__int64)&unk_1400C75FC);
  v13 = v9;
  if ( v9 )
  {
    v11 = sub_14005FC84(v9);
    a6 = v11;
    v13 = 0LL;
    v10 = sub_140060370(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
    {
      v10 = sub_1400B6010(v11);
      sub_1400B6010(v11);
    }
    else if ( v11 )
    {
      sub_1400B6010(v11);
    }
  }
  else
  {
    v10 = -2147024882;
  }
  sub_1400454AC(&v13);
  return (unsigned int)v10;
}
