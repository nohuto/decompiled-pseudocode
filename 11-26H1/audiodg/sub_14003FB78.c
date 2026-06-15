/*
 * XREFs of sub_14003FB78 @ 0x14003FB78
 * Callers:
 *     sub_140033BE0 @ 0x140033BE0 (sub_140033BE0.c)
 * Callees:
 *     sub_1400250E0 @ 0x1400250E0 (sub_1400250E0.c)
 *     sub_14005DCD0 @ 0x14005DCD0 (sub_14005DCD0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
RTL_SRWLOCK *__fastcall sub_14003FB78(RTL_SRWLOCK *a1)
{
  sub_1400250E0((__int64)a1);
  a1->Ptr = &off_1400BAF60;
  a1[1].Ptr = off_1400BAF40;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  a1->Ptr = &off_1400BAF18;
  a1[1].Ptr = off_1400BAEF8;
  sub_14005DCD0(&a1[3]);
  InitializeSRWLock(a1 + 11);
  a1[12].Ptr = 0LL;
  return a1;
}
