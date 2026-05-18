/*
 * XREFs of sub_1800114C0 @ 0x1800114C0
 * Callers:
 *     sub_18000E16C @ 0x18000E16C (sub_18000E16C.c)
 *     sub_18000E1E4 @ 0x18000E1E4 (sub_18000E1E4.c)
 *     sub_18000F428 @ 0x18000F428 (sub_18000F428.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_180081B78 @ 0x180081B78 (sub_180081B78.c)
 *     sub_180082258 @ 0x180082258 (sub_180082258.c)
 *     sub_1800C68A0 @ 0x1800C68A0 (sub_1800C68A0.c)
 *     sub_1800C8130 @ 0x1800C8130 (sub_1800C8130.c)
 *     sub_1800C8650 @ 0x1800C8650 (sub_1800C8650.c)
 *     sub_1800C8CD8 @ 0x1800C8CD8 (sub_1800C8CD8.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18000CDBA (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     memset @ 0x18000CEDC (memset.c)
 */

__int64 __fastcall sub_1800114C0(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = (unsigned int *)o__errno();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    o__invalid_parameter_noinfo();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = (unsigned int *)o__errno();
    v9 = 34;
    goto LABEL_5;
  }
  return 22LL;
}
