/*
 * XREFs of ?QueryInterface@CColorKeyBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018F110
 * Callers:
 *     ?QueryInterface@CColorKeyBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B1210 (-QueryInterface@CColorKeyBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CColorKeyBitmap::QueryInterface(CColorKeyBitmap *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<ID2DBitmapCacheSource,ID2DBitmapCacheSource,CMilObjectDeleter>::InternalQueryInterface(
           this,
           a2,
           a3);
}
