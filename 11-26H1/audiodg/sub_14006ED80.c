/*
 * XREFs of sub_14006ED80 @ 0x14006ED80
 * Callers:
 *     sub_140027AE0 @ 0x140027AE0 (sub_140027AE0.c)
 * Callees:
 *     sub_14006EE30 @ 0x14006EE30 (sub_14006EE30.c)
 *     sub_14006EF60 @ 0x14006EF60 (sub_14006EF60.c)
 *     sub_140075568 @ 0x140075568 (sub_140075568.c)
 */

HMODULE __fastcall sub_14006ED80(__int64 a1, unsigned int a2)
{
  HMODULE result; // rax
  unsigned int i; // edi
  HMODULE v6; // rbx
  HRSRC Resource; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx

  result = (HMODULE)sub_140075568(a1, 0LL);
  for ( i = 1; ; ++i )
  {
    v6 = result;
    if ( !result )
      break;
    Resource = FindResourceExW(result, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a2 >> 4) + 1), 0);
    if ( Resource && sub_14006EF60(v6, Resource) )
      return (HMODULE)sub_14006EE30(a1, v6, a2);
    v9 = i;
    result = (HMODULE)sub_140075568(v8, v9);
  }
  return result;
}
