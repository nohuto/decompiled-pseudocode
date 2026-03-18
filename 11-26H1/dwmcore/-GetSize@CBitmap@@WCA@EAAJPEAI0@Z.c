/*
 * XREFs of ?GetSize@CBitmap@@WCA@EAAJPEAI0@Z @ 0x180224CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetSize(__int64 a1, LONG *a2, LONG *a3)
{
  return CBitmap::GetSize((struct _RTL_CRITICAL_SECTION *)(a1 - 32), a2, a3);
}
