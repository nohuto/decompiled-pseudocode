/*
 * XREFs of sub_14002A84C @ 0x14002A84C
 * Callers:
 *     sub_14002A7A4 @ 0x14002A7A4 (sub_14002A7A4.c)
 *     sub_140046750 @ 0x140046750 (sub_140046750.c)
 * Callees:
 *     sub_14002A5F8 @ 0x14002A5F8 (sub_14002A5F8.c)
 *     sub_14002A8F8 @ 0x14002A8F8 (sub_14002A8F8.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

unsigned __int64 __fastcall sub_14002A84C(unsigned __int64 **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // rax
  unsigned __int64 *v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( a1[1] - *a1 >= a2 )
    return sub_14002A5F8(*a1, a1[1], &v10);
  v7 = sub_14002A8F8(a2);
  v8 = (unsigned __int64 *)sub_140044584(v7);
  v9 = a1[2] - *a1;
  if ( v9 )
    sub_1400453E4(*a1, 8 * v9);
  result = (unsigned __int64)&v8[a2];
  *a1 = v8;
  a1[1] = (unsigned __int64 *)result;
  a1[2] = (unsigned __int64 *)result;
  while ( v8 != (unsigned __int64 *)result )
    *v8++ = a3;
  return result;
}
