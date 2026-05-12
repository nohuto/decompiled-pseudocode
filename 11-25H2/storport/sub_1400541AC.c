/*
 * XREFs of sub_1400541AC @ 0x1400541AC
 * Callers:
 *     sub_14001FE70 @ 0x14001FE70 (sub_14001FE70.c)
 *     sub_1400267A0 @ 0x1400267A0 (sub_1400267A0.c)
 *     sub_140039CF8 @ 0x140039CF8 (sub_140039CF8.c)
 *     sub_140039F08 @ 0x140039F08 (sub_140039F08.c)
 *     sub_14003AF90 @ 0x14003AF90 (sub_14003AF90.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     StorPortPause @ 0x1400745D0 (StorPortPause.c)
 *     sub_140079B80 @ 0x140079B80 (sub_140079B80.c)
 *     sub_140079C30 @ 0x140079C30 (sub_140079C30.c)
 *     sub_140079F70 @ 0x140079F70 (sub_140079F70.c)
 *     sub_14007A040 @ 0x14007A040 (sub_14007A040.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS sub_1400541AC(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  return sub_1400031E4(a1, a2, 0LL, 4u, &v4);
}
