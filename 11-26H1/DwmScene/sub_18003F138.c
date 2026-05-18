/*
 * XREFs of sub_18003F138 @ 0x18003F138
 * Callers:
 *     sub_18003E584 @ 0x18003E584 (sub_18003E584.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_180030794 @ 0x180030794 (sub_180030794.c)
 *     sub_180031258 @ 0x180031258 (sub_180031258.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003F138(__int64 a1, __int64 a2, _QWORD *a3)
{
  sub_180013440((_QWORD *)a1, a2);
  sub_180012C40((_QWORD *)(a1 + 32), a3);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_DWORD *)(a1 + 68) = 0;
  sub_180030794((_BYTE *)(a1 + 72), 1);
  sub_180031258();
  *(_BYTE *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  sub_180014244(a2);
  return a1;
}
