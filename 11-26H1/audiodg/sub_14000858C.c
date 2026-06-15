/*
 * XREFs of sub_14000858C @ 0x14000858C
 * Callers:
 *     sub_140008528 @ 0x140008528 (sub_140008528.c)
 *     sub_140009018 @ 0x140009018 (sub_140009018.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000858C(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  char v3; // r8

  result = 0LL;
  if ( *(_QWORD *)(a1 + 8) == -1LL || (v3 = 0, *(_QWORD *)(a1 + 8) == -2LL) )
    v3 = 1;
  if ( !v3 && a2 <= 0xFFFFFFFFFFFFFFFDuLL )
    return 2147942406LL;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
