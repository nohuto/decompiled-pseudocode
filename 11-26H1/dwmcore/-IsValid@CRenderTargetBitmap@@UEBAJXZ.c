/*
 * XREFs of ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18018AC40
 * Callers:
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AC16C (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::IsValid(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  else
    return 2291674884LL;
}
