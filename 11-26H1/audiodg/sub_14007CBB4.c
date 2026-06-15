/*
 * XREFs of sub_14007CBB4 @ 0x14007CBB4
 * Callers:
 *     sub_140079F14 @ 0x140079F14 (sub_140079F14.c)
 *     sub_14007C98C @ 0x14007C98C (sub_14007C98C.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_140077CBC @ 0x140077CBC (sub_140077CBC.c)
 *     sub_1400781C0 @ 0x1400781C0 (sub_1400781C0.c)
 *     sub_14007C880 @ 0x14007C880 (sub_14007C880.c)
 *     sub_14007DCA0 @ 0x14007DCA0 (sub_14007DCA0.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall sub_14007CBB4(PSRWLOCK SRWLock)
{
  _QWORD v3[25]; // [rsp+20h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v4; // [rsp+F0h] [rbp+8h] BYREF

  sub_140077CBC((__int64)v3);
  AcquireSRWLockExclusive(SRWLock);
  v4 = SRWLock;
  sub_14007DCA0(SRWLock, v3);
  sub_14003A998(&v4);
  sub_14007C880(v3);
  return sub_1400781C0(v3);
}
