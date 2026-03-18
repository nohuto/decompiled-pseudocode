/*
 * XREFs of sub_14002BA4C @ 0x14002BA4C
 * Callers:
 *     sub_14002C5F0 @ 0x14002C5F0 (sub_14002C5F0.c)
 * Callees:
 *     sub_14002510C @ 0x14002510C (sub_14002510C.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002BA4C(__int64 a1)
{
  __int64 result; // rax
  bool v3; // zf

  result = StorPortExtendedFunction(0LL, a1, 6144LL, 1701672526LL);
  v3 = (*(_BYTE *)(a1 + 21) & 2) == 0;
  ++*(_DWORD *)(a1 + 4204);
  if ( !v3 )
    result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
  return result;
}
