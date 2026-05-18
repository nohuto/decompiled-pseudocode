/*
 * XREFs of sub_18001D6C4 @ 0x18001D6C4
 * Callers:
 *     sub_18001D0F0 @ 0x18001D0F0 (sub_18001D0F0.c)
 *     sub_1800D8B1C @ 0x1800D8B1C (sub_1800D8B1C.c)
 * Callees:
 *     sub_18000D128 @ 0x18000D128 (sub_18000D128.c)
 */

BOOL __fastcall sub_18001D6C4(__int64 a1)
{
  BOOL result; // eax

  result = InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), 0LL);
  if ( !result )
    sub_18000D128();
  return result;
}
