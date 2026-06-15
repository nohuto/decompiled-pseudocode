/*
 * XREFs of sub_14003E360 @ 0x14003E360
 * Callers:
 *     sub_140040EE0 @ 0x140040EE0 (sub_140040EE0.c)
 * Callees:
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 */

__int64 __fastcall sub_14003E360(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = sub_140017850(v4);
  *a1 = a2;
  return result;
}
