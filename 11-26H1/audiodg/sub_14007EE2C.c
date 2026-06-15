/*
 * XREFs of sub_14007EE2C @ 0x14007EE2C
 * Callers:
 *     sub_14007E7A0 @ 0x14007E7A0 (sub_14007E7A0.c)
 * Callees:
 *     sub_14001BA74 @ 0x14001BA74 (sub_14001BA74.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_14007EE2C()
{
  __int64 result; // rax
  __int128 v1; // [rsp+40h] [rbp-48h] BYREF
  HSTRING_HEADER v2; // [rsp+50h] [rbp-38h] BYREF

  result = qword_1400E8978;
  if ( qword_1400E8978 )
  {
    *(_QWORD *)&v1 = L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Devices.ModuleCommandResult>";
    sub_14001BA74(&v2, (const WCHAR **)&v1);
    v1 = xmmword_1400C98C8;
    return sub_1400B6010(qword_1400E8978);
  }
  return result;
}
