/*
 * XREFs of sub_14002A6F8 @ 0x14002A6F8
 * Callers:
 *     sub_14002A670 @ 0x14002A670 (sub_14002A670.c)
 *     sub_1400444FC @ 0x1400444FC (sub_1400444FC.c)
 *     sub_1400541D0 @ 0x1400541D0 (sub_1400541D0.c)
 * Callees:
 *     sub_14002A5F8 @ 0x14002A5F8 (sub_14002A5F8.c)
 *     sub_14002A8F8 @ 0x14002A8F8 (sub_14002A8F8.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

unsigned __int64 __fastcall sub_14002A6F8(unsigned __int64 **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( a1[1] - *a1 >= a2 )
    return sub_14002A5F8(*a1, a1[1], &v10);
  v6 = sub_14002A8F8(a2);
  v7 = (unsigned __int64 *)sub_140044584(v6);
  v8 = a1[2] - *a1;
  if ( v8 )
    sub_1400453E4(*a1, 8 * v8);
  result = (unsigned __int64)&v7[a2];
  *a1 = v7;
  a1[1] = (unsigned __int64 *)result;
  a1[2] = (unsigned __int64 *)result;
  while ( v7 != (unsigned __int64 *)result )
    *v7++ = a3;
  return result;
}
