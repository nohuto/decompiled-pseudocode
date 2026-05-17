/*
 * XREFs of RtlQueryTokenHostIdAsUlong64 @ 0x180100770
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySecurityAttributesToken @ 0x180161C30 (ZwQuerySecurityAttributesToken.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryTokenHostIdAsUlong64(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-348h] BYREF
  _BYTE v6[4]; // [rsp+38h] [rbp-340h] BYREF
  int v7; // [rsp+3Ch] [rbp-33Ch]
  __int64 v8; // [rsp+40h] [rbp-338h]

  memset_thunk_772440563353939046(v6, 0, 0x330uLL);
  v5 = 0;
  result = ZwQuerySecurityAttributesToken(a1, &unk_1801721D8, 1LL, v6, 816, &v5);
  if ( (int)result >= 0 )
  {
    if ( v7 )
    {
      *a2 = **(_QWORD **)(v8 + 32);
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
