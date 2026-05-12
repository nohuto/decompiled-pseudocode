/*
 * XREFs of sub_140067F78 @ 0x140067F78
 * Callers:
 *     sub_14000B2CC @ 0x14000B2CC (sub_14000B2CC.c)
 *     sub_14000BF6C @ 0x14000BF6C (sub_14000BF6C.c)
 *     StorPortPauseDevice @ 0x14000F1B0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x14000F620 (StorPortResumeDevice.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_14001B35C @ 0x14001B35C (sub_14001B35C.c)
 *     sub_140031178 @ 0x140031178 (sub_140031178.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_140059D04 @ 0x140059D04 (sub_140059D04.c)
 *     sub_140059DF8 @ 0x140059DF8 (sub_140059DF8.c)
 *     StorPortCompleteRequest @ 0x1400739A0 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x140073B60 (StorPortDeviceReady.c)
 *     sub_1401366F0 @ 0x1401366F0 (sub_1401366F0.c)
 *     sub_140137980 @ 0x140137980 (sub_140137980.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140067F78(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1401685A0)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
