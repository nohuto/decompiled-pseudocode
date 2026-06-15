/*
 * XREFs of sub_14006F158 @ 0x14006F158
 * Callers:
 *     sub_14006F0B0 @ 0x14006F0B0 (sub_14006F0B0.c)
 *     sub_14006F0F4 @ 0x14006F0F4 (sub_14006F0F4.c)
 *     sub_14006F290 @ 0x14006F290 (sub_14006F290.c)
 * Callees:
 *     sub_140006B48 @ 0x140006B48 (sub_140006B48.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140027F4C @ 0x140027F4C (sub_140027F4C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14006F430 @ 0x14006F430 (sub_14006F430.c)
 */

void __fastcall sub_14006F158(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+28h] [rbp-30h]
  __int128 v4; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)a1 = off_1400BCB88;
  *(_QWORD *)(a1 + 8) = off_1400BC950;
  *(_QWORD *)(a1 + 16) = off_1400BCC68;
  *(_QWORD *)(a1 + 24) = off_1400BCB68;
  v3 = *(_OWORD *)(a1 + 104);
  v4 = v3;
  EtwEventActivityIdControl(4LL, &v4);
  if ( !*(_DWORD *)(a1 + 240) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
    v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
    sub_14006F430(a1);
    sub_140018FF0(&v2);
  }
  EtwEventActivityIdControl(4LL, &v4);
  sub_140027F4C(a1);
  sub_140006B48(a1 + 160);
}
