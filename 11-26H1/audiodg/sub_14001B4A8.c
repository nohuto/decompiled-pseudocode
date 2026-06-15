/*
 * XREFs of sub_14001B4A8 @ 0x14001B4A8
 * Callers:
 *     sub_14001B288 @ 0x14001B288 (sub_14001B288.c)
 * Callees:
 *     sub_14001B514 @ 0x14001B514 (sub_14001B514.c)
 */

RTL_SRWLOCK *__fastcall sub_14001B4A8(RTL_SRWLOCK *a1)
{
  sub_14001B514();
  a1->Ptr = &off_1400B8AE8;
  a1[1].Ptr = off_1400B8B88;
  a1[2].Ptr = off_1400B8B40;
  a1[8].Ptr = 0LL;
  a1[9].Ptr = 0LL;
  a1[10].Ptr = 0LL;
  InitializeSRWLock(a1 + 11);
  InitializeSRWLock(a1 + 12);
  return a1;
}
