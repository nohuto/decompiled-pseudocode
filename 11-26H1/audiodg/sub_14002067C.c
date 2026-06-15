/*
 * XREFs of sub_14002067C @ 0x14002067C
 * Callers:
 *     sub_140021024 @ 0x140021024 (sub_140021024.c)
 * Callees:
 *     sub_1400205E0 @ 0x1400205E0 (sub_1400205E0.c)
 *     sub_140020770 @ 0x140020770 (sub_140020770.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14002067C(__int64 *a1, __int64 *a2, __int128 *a3, __int64 *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ebp
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0;
  *a1 = 0LL;
  v9 = sub_140049338(192LL, &unk_1400C75FC);
  if ( !v9 )
    return (unsigned int)-2147024882;
  v10 = sub_140020770(v9);
  v14 = 0LL;
  v13 = *a3;
  v11 = sub_1400205E0(v10, *a2, &v13, *a4);
  if ( v11 >= 0 )
  {
    if ( v10 )
      sub_1400B6010(v10);
    *a1 = v10;
    if ( v10 )
      sub_1400B6010(v10);
    return v8;
  }
  if ( v10 )
    sub_1400B6010(v10);
  sub_1400454AC(&v14);
  return (unsigned int)v11;
}
