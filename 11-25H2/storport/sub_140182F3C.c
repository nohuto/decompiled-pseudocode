/*
 * XREFs of sub_140182F3C @ 0x140182F3C
 * Callers:
 *     sub_140182F20 @ 0x140182F20 (sub_140182F20.c)
 * Callees:
 *     sub_1400A59C4 @ 0x1400A59C4 (sub_1400A59C4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_140182C98 @ 0x140182C98 (sub_140182C98.c)
 */

volatile signed __int32 **sub_140182F3C()
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

  for ( i = &off_140166B78; ; i = v4 + 7 )
  {
    result = (volatile signed __int32 **)sub_1400A59C4(i);
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
      sub_140182C98(v2, (__int64)&v7, &v5);
      _InterlockedXor(*v4, ((unsigned __int16)v5 ^ (unsigned __int16)**v4) & 0xF80);
    }
  }
  return result;
}
