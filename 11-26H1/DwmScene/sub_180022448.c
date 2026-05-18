/*
 * XREFs of sub_180022448 @ 0x180022448
 * Callers:
 *     sub_180022534 @ 0x180022534 (sub_180022534.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 */

CHAR *__fastcall sub_180022448(GUID *rguid)
{
  unsigned int v2; // edx
  CHAR *result; // rax
  GUID *i; // rbx
  CHAR v5; // cl
  CHAR MultiByteStr[16]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v7; // [rsp+50h] [rbp-88h]
  __int64 v8; // [rsp+60h] [rbp-78h]
  OLECHAR sz[40]; // [rsp+70h] [rbp-68h] BYREF

  memset(sz, 0, sizeof(sz));
  v8 = 0LL;
  *(_OWORD *)MultiByteStr = 0LL;
  v7 = 0LL;
  StringFromGUID2(rguid, sz, 40);
  WideCharToMultiByte(0, 0, sz, -1, MultiByteStr, 40, 0LL, 0LL);
  v2 = 0;
  result = MultiByteStr;
  for ( i = rguid + 1; *result; ++v2 )
  {
    if ( v2 >= 0x28 )
      break;
    v5 = *result;
    if ( *result != 123 && v5 != 125 )
    {
      LOBYTE(i->Data1) = v5;
      i = (GUID *)((char *)i + 1);
    }
    ++result;
  }
  LOBYTE(i->Data1) = 0;
  return result;
}
