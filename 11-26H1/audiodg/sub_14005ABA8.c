/*
 * XREFs of sub_14005ABA8 @ 0x14005ABA8
 * Callers:
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 *     sub_14005A55C @ 0x14005A55C (sub_14005A55C.c)
 * Callees:
 *     sub_14001E3D8 @ 0x14001E3D8 (sub_14001E3D8.c)
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 *     sub_14005B080 @ 0x14005B080 (sub_14005B080.c)
 *     sub_14005B170 @ 0x14005B170 (sub_14005B170.c)
 */

_BYTE *__fastcall sub_14005ABA8(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        int a4,
        LPCWSTR *a5,
        _QWORD *a6,
        __int64 a7,
        _BYTE *a8,
        __int64 a9)
{
  _BYTE *result; // rax
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  if ( *(_QWORD *)a3 || (result = (_BYTE *)*((_QWORD *)a3 + 1)) != 0LL )
  {
    sub_14005AC94(a1, (_DWORD)a3, a4, a9, (__int64)a5, a7);
    if ( *a5 )
      sub_14001E3D8(*a5, a6);
    if ( *a5 && *a6 && (unsigned __int8)sub_14005B170() )
    {
      v13 = *a3;
      return (_BYTE *)sub_14005B080(a1, a2, &v13, a8);
    }
    else
    {
      result = a8;
      *a8 = 0;
    }
  }
  return result;
}
