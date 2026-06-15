/*
 * XREFs of sub_140017258 @ 0x140017258
 * Callers:
 *     sub_140040EE0 @ 0x140040EE0 (sub_140040EE0.c)
 *     sub_140078220 @ 0x140078220 (sub_140078220.c)
 *     sub_140078260 @ 0x140078260 (sub_140078260.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 */

__int64 __fastcall sub_140017258(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *a1;
  if ( v3 )
    return sub_140017CB0(v3 + 12, a2, a3);
  return result;
}
