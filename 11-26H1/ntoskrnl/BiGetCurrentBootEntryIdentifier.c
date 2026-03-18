/*
 * XREFs of BiGetCurrentBootEntryIdentifier @ 0x140891180
 * Callers:
 *     BiResolveLocate @ 0x140892F3C (BiResolveLocate.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall BiGetCurrentBootEntryIdentifier(_OWORD *a1)
{
  __int64 result; // rax
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  result = ZwQuerySystemInformation(90LL, (__int64)v3);
  if ( (int)result >= 0 )
    *a1 = v3[0];
  return result;
}
