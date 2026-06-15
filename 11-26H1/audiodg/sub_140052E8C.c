/*
 * XREFs of sub_140052E8C @ 0x140052E8C
 * Callers:
 *     sub_140046A6C @ 0x140046A6C (sub_140046A6C.c)
 * Callees:
 *     sub_140048868 @ 0x140048868 (sub_140048868.c)
 */

BOOL __fastcall sub_140052E8C(__int64 a1)
{
  BOOL result; // eax

  result = InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), 0LL);
  if ( !result )
    sub_140048868();
  return result;
}
