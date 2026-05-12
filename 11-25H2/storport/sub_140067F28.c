/*
 * XREFs of sub_140067F28 @ 0x140067F28
 * Callers:
 *     sub_140009524 @ 0x140009524 (sub_140009524.c)
 *     sub_14000EF0C @ 0x14000EF0C (sub_14000EF0C.c)
 *     sub_14001ACB8 @ 0x14001ACB8 (sub_14001ACB8.c)
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_140099180 @ 0x140099180 (sub_140099180.c)
 *     sub_1401363F0 @ 0x1401363F0 (sub_1401363F0.c)
 *     sub_140136540 @ 0x140136540 (sub_140136540.c)
 *     sub_1401366F0 @ 0x1401366F0 (sub_1401366F0.c)
 *     sub_1401375E4 @ 0x1401375E4 (sub_1401375E4.c)
 *     sub_1401377C0 @ 0x1401377C0 (sub_1401377C0.c)
 *     sub_140137980 @ 0x140137980 (sub_140137980.c)
 *     sub_140139430 @ 0x140139430 (sub_140139430.c)
 *     sub_140139B80 @ 0x140139B80 (sub_140139B80.c)
 *     sub_140139CC0 @ 0x140139CC0 (sub_140139CC0.c)
 *     sub_140139E20 @ 0x140139E20 (sub_140139E20.c)
 *     sub_14013AC30 @ 0x14013AC30 (sub_14013AC30.c)
 *     sub_14013AEC0 @ 0x14013AEC0 (sub_14013AEC0.c)
 *     sub_14013B0FC @ 0x14013B0FC (sub_14013B0FC.c)
 *     sub_14013B4D8 @ 0x14013B4D8 (sub_14013B4D8.c)
 *     sub_14013B98C @ 0x14013B98C (sub_14013B98C.c)
 *     sub_14013BE4C @ 0x14013BE4C (sub_14013BE4C.c)
 *     sub_14013BECC @ 0x14013BECC (sub_14013BECC.c)
 *     sub_14013BF9C @ 0x14013BF9C (sub_14013BF9C.c)
 *     sub_14013C1C8 @ 0x14013C1C8 (sub_14013C1C8.c)
 *     sub_14013C26C @ 0x14013C26C (sub_14013C26C.c)
 *     sub_14013C334 @ 0x14013C334 (sub_14013C334.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140067F28(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))qword_1401685A0)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
