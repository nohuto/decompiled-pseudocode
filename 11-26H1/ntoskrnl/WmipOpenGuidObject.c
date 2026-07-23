/*
 * XREFs of WmipOpenGuidObject @ 0x140A0D764
 * Callers:
 *     WmipOpenBlock @ 0x140A0D540 (WmipOpenBlock.c)
 * Callees:
 *     WmipUuidFromString @ 0x140A0ED88 (WmipUuidFromString.c)
 *     WmipCreateGuidObject @ 0x140A0F220 (WmipCreateGuidObject.c)
 */

__int64 __fastcall WmipOpenGuidObject(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v12[3]; // [rsp+28h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  v8 = *(_QWORD **)(v4 + 8);
  v12[0] = 0LL;
  v9 = *v8 - 0x69006D0057005CLL;
  if ( *v8 == 0x69006D0057005CLL )
    v9 = v8[1] - 0x64006900750047LL;
  if ( v9 )
    return 3221225485LL;
  result = WmipUuidFromString((char *)v8 + 18, v12);
  if ( (int)result >= 0 )
  {
    result = WmipCreateGuidObject(a1, a3, v12, &v11);
    if ( (int)result >= 0 )
    {
      *a4 = v11;
      return 0LL;
    }
  }
  return result;
}
