/*
 * XREFs of sub_180075CF8 @ 0x180075CF8
 * Callers:
 *     sub_18009CECC @ 0x18009CECC (sub_18009CECC.c)
 *     sub_18009EC54 @ 0x18009EC54 (sub_18009EC54.c)
 *     sub_18009F158 @ 0x18009F158 (sub_18009F158.c)
 *     sub_1800A6608 @ 0x1800A6608 (sub_1800A6608.c)
 *     sub_1800A687C @ 0x1800A687C (sub_1800A687C.c)
 *     sub_1800A6B44 @ 0x1800A6B44 (sub_1800A6B44.c)
 *     sub_1800A8AAC @ 0x1800A8AAC (sub_1800A8AAC.c)
 * Callees:
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004C840 @ 0x18004C840 (sub_18004C840.c)
 *     sub_18004CED4 @ 0x18004CED4 (sub_18004CED4.c)
 *     sub_18004EE08 @ 0x18004EE08 (sub_18004EE08.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180075CF8(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // ebx
  void *v10[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  sub_18004CED4((__int64 *)v10);
  if ( a4 > 0 )
  {
    do
    {
      if ( _bittest64(&a2, (unsigned int)v8) )
        sub_18004C840((__int64 *)v10, (__int64)v11, a3);
      ++v8;
      a3 += 32LL;
    }
    while ( v8 < a4 );
  }
  sub_18004EE08(a1, (__int64 **)v10);
  sub_18004C0E0(v10, (__int64)v10);
  return a1;
}
