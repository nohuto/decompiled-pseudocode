/*
 * XREFs of ?GetResolution@CBitmap@@WCA@EAAJPEAN0@Z @ 0x180224A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetResolution(__int64 a1, double *a2, double *a3)
{
  return CBitmap::GetResolution((struct _RTL_CRITICAL_SECTION *)(a1 - 32), a2, a3);
}
