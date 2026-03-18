/*
 * XREFs of sub_140049168 @ 0x140049168
 * Callers:
 *     sub_140049078 @ 0x140049078 (sub_140049078.c)
 * Callees:
 *     sub_1400323F4 @ 0x1400323F4 (sub_1400323F4.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140047008 @ 0x140047008 (sub_140047008.c)
 */

_QWORD *sub_140049168()
{
  _QWORD *v0; // rcx
  int v1; // eax
  __int64 v2; // rdx
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v0 = &off_140041188;
  while ( 1 )
  {
    result = sub_1400323F4(v0);
    v4 = result;
    if ( !result )
      break;
    v6 = 0LL;
    v5 = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
    {
      v1 = -1073741275;
    }
    else
    {
      v1 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
             *((unsigned int *)result + 6),
             (unsigned __int8)(*((_BYTE *)result + 28) - 2) > 1u,
             &v6,
             &v7,
             v5);
      if ( v1 == -2147483614 )
      {
        v5 = 518LL;
        v2 = 518LL;
        do
        {
          *(_QWORD *)*v4 = v2;
          result = sub_1400323F4(v4 + 7);
          v4 = result;
        }
        while ( result );
        return result;
      }
    }
    sub_140047008(v1, (__int64)&v7, &v5);
    v0 = v4 + 7;
    *(_QWORD *)*v4 = v5;
  }
  return result;
}
