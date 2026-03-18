/*
 * XREFs of ?QueryInterface@CGdiSpriteBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180265BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::QueryInterface(__int64 a1, _QWORD *a2, volatile signed __int32 **a3)
{
  return CVisualGroup::QueryInterface((volatile signed __int32 *)(a1 - 104), a2, a3);
}
