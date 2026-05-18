/*
 * XREFs of sub_18001F61C @ 0x18001F61C
 * Callers:
 *     sub_18001E7AC @ 0x18001E7AC (sub_18001E7AC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 *     sub_18001FB68 @ 0x18001FB68 (sub_18001FB68.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F61C(__int64 a1, const WCHAR *a2, __int64 a3)
{
  int v3; // edi
  __int64 cbMultiByte; // rbp
  CHAR *lpMultiByteStr; // rax
  _BYTE v9[32]; // [rsp+50h] [rbp-48h] BYREF

  v3 = a3;
  if ( a3 )
  {
    cbMultiByte = WideCharToMultiByte(0xFDE9u, 0, a2, a3, 0LL, 0, 0LL, 0LL);
    sub_1800143C0((__int64)v9);
    if ( (int)cbMultiByte <= 0 )
      __fastfail(7u);
    sub_18001FB68(v9, cbMultiByte);
    lpMultiByteStr = (CHAR *)sub_1800148EC((__int64)v9);
    WideCharToMultiByte(0xFDE9u, 0, a2, v3, lpMultiByteStr, cbMultiByte, 0LL, 0LL);
    sub_18001D260(a1, (__int64)v9);
    sub_1800129D0((__int64)v9);
  }
  else
  {
    sub_1800143C0(a1);
  }
  return a1;
}
