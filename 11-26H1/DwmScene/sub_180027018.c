/*
 * XREFs of sub_180027018 @ 0x180027018
 * Callers:
 *     sub_180025C5C @ 0x180025C5C (sub_180025C5C.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 * Callees:
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180027018(_BYTE *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_180029C50(a1 + 24, v3);
  if ( !a1[3977] )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 248LL))(a1);
    a1[3977] = 1;
  }
  return sub_180011E54((__int64)v3);
}
