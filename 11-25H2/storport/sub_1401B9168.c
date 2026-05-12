/*
 * XREFs of sub_1401B9168 @ 0x1401B9168
 * Callers:
 *     sub_1401B9078 @ 0x1401B9078 (sub_1401B9078.c)
 * Callees:
 *     sub_1400A59C4 @ 0x1400A59C4 (sub_1400A59C4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_140182C98 @ 0x140182C98 (sub_140182C98.c)
 */

_QWORD *sub_1401B9168()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax
  _QWORD *v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v0 = &off_140166B78;
  while ( 1 )
  {
    result = sub_1400A59C4(v0);
    v2 = result;
    if ( !result )
      break;
    v6 = 0LL;
    v5 = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
    {
      v3 = -1073741275;
    }
    else
    {
      v3 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
             *((unsigned int *)result + 6),
             (unsigned __int8)(*((_BYTE *)result + 28) - 2) > 1u,
             &v6,
             &v7,
             v5);
      if ( v3 == -2147483614 )
      {
        v5 = 518LL;
        v4 = 518LL;
        do
        {
          *(_QWORD *)*v2 = v4;
          result = sub_1400A59C4(v2 + 7);
          v2 = result;
        }
        while ( result );
        return result;
      }
    }
    sub_140182C98(v3, (__int64)&v7, &v5);
    v0 = v2 + 7;
    *(_QWORD *)*v2 = v5;
  }
  return result;
}
