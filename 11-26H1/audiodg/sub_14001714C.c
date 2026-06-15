/*
 * XREFs of sub_14001714C @ 0x14001714C
 * Callers:
 *     sub_1400170EC @ 0x1400170EC (sub_1400170EC.c)
 * Callees:
 *     sub_140016BCC @ 0x140016BCC (sub_140016BCC.c)
 *     sub_140017560 @ 0x140017560 (sub_140017560.c)
 *     sub_14001840C @ 0x14001840C (sub_14001840C.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_14001714C(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edi

  *a1 = 0LL;
  v8 = sub_140049338(32LL, &unk_1400C75FC);
  if ( v8 )
  {
    v9 = sub_14001840C(v8);
    v10 = sub_140016BCC(v9, *a2, *a3, *a4);
    if ( v10 < 0 )
    {
      if ( v9 )
        sub_140017560(v9);
    }
    else
    {
      *a1 = v9;
      sub_1400B6010(v9);
      if ( v9 )
        sub_140017560(v9);
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
