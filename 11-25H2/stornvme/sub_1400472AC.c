/*
 * XREFs of sub_1400472AC @ 0x1400472AC
 * Callers:
 *     sub_140047290 @ 0x140047290 (sub_140047290.c)
 * Callees:
 *     sub_1400323F4 @ 0x1400323F4 (sub_1400323F4.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140047008 @ 0x140047008 (sub_140047008.c)
 */

volatile signed __int32 **sub_1400472AC()
{
  _QWORD *i; // rcx
  __int64 v1; // rcx
  int v2; // eax
  volatile signed __int32 **result; // rax
  volatile signed __int32 **v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  for ( i = &off_140041188; ; i = v4 + 7 )
  {
    result = (volatile signed __int32 **)sub_1400323F4(i);
    v4 = result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 29) && !*((_BYTE *)result + 30) && !*((_BYTE *)result + 28) )
    {
      v1 = *((unsigned int *)result + 6);
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0;
      v2 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
             v1,
             1LL,
             &v6,
             &v7,
             v5);
      v5 = 0LL;
      sub_140047008(v2, (__int64)&v7, &v5);
      _InterlockedXor(*v4, ((unsigned __int16)v5 ^ (unsigned __int16)**v4) & 0xF80);
    }
  }
  return result;
}
