/*
 * XREFs of sub_180048E50 @ 0x180048E50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18002901C @ 0x18002901C (sub_18002901C.c)
 *     sub_180034428 @ 0x180034428 (sub_180034428.c)
 *     sub_180048CF4 @ 0x180048CF4 (sub_180048CF4.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 */

__int64 __fastcall sub_180048E50(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  _BYTE v7[96]; // [rsp+20h] [rbp-78h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x400000) != 0 )
  {
    sub_18002901C((__int64)v7, 12LL, 8LL, sub_18000E480);
    sub_180048CF4((unsigned __int64 *)(a1 + 88), (__int64)v7);
    sub_18007AB60(a1);
    sub_180034428();
  }
  return result;
}
