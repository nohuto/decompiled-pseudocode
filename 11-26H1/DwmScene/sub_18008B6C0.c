/*
 * XREFs of sub_18008B6C0 @ 0x18008B6C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

__int64 __fastcall sub_18008B6C0(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 1784);
  if ( *v2 )
  {
    *(_BYTE *)(*v2 + 168LL) = 1;
    *(_OWORD *)v4 = 0LL;
    result = (__int64)sub_180011F5C(v2, v4);
    if ( v4[1] )
      result = sub_180010EC8(v4[1]);
  }
  *(_BYTE *)(a1 + 1898) = 0;
  return result;
}
