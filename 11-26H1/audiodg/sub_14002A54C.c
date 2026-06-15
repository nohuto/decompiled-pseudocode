/*
 * XREFs of sub_14002A54C @ 0x14002A54C
 * Callers:
 *     sub_14002A37C @ 0x14002A37C (sub_14002A37C.c)
 *     sub_14005400C @ 0x14005400C (sub_14005400C.c)
 *     sub_14005DCD0 @ 0x14005DCD0 (sub_14005DCD0.c)
 *     sub_14005EE7C @ 0x14005EE7C (sub_14005EE7C.c)
 *     sub_140093530 @ 0x140093530 (sub_140093530.c)
 *     sub_140093ADC @ 0x140093ADC (sub_140093ADC.c)
 * Callees:
 *     sub_14002A5F8 @ 0x14002A5F8 (sub_14002A5F8.c)
 *     sub_14002A8F8 @ 0x14002A8F8 (sub_14002A8F8.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14002A54C(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( (__int64)(a1[1] - *a1) >> 3 >= a2 )
    return sub_14002A5F8(*a1, a1[1], &v10);
  v6 = sub_14002A8F8(a2);
  v7 = (_QWORD *)sub_140044584(v6);
  v8 = (__int64)(a1[2] - *a1) >> 3;
  if ( v8 )
    sub_1400453E4(*a1, 8 * v8);
  result = (__int64)&v7[a2];
  *a1 = v7;
  a1[1] = result;
  a1[2] = result;
  while ( v7 != (_QWORD *)result )
    *v7++ = a3;
  return result;
}
