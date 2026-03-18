/*
 * XREFs of NtGdiGetCharSet @ 0x140195330
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x140195348 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
