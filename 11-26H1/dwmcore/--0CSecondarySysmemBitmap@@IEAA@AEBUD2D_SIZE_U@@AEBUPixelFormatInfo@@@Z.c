/*
 * XREFs of ??0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x18015891C
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180158868 (-Create@CSecondarySysmemBitmap@@SAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CSecondarySysmemBitmap *__fastcall CSecondarySysmemBitmap::CSecondarySysmemBitmap(
        CSecondarySysmemBitmap *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3)
{
  _DWORD *v3; // rdx
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // r8
  CSecondarySysmemBitmap *result; // rax

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
    (__int64)this,
    (__int64)a2);
  v4 = v3[1];
  *(_DWORD *)(v5 + 32) = *v3;
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_DWORD *)(v5 + 36) = v4;
  *(_QWORD *)(v5 + 40) = v5 + 48;
  *(_DWORD *)(v5 + 48) = 0;
  *(_QWORD *)v5 = &CSecondarySysmemBitmap::`vftable'{for `CMILCOMBaseT<ID2DBitmapCacheSource,ID2DBitmapCacheSource,CMilObjectDeleter>'};
  *(_QWORD *)(v5 + 16) = &CSecondarySysmemBitmap::`vftable'{for `IBitmapUnlock'};
  *(_QWORD *)(v5 + 112) = *(_QWORD *)v3;
  *(_DWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 124) = *(_QWORD *)v6;
  *(_DWORD *)(v5 + 132) = *(_DWORD *)(v6 + 8);
  result = (CSecondarySysmemBitmap *)v5;
  *(_QWORD *)(v5 + 136) = 0LL;
  *(_DWORD *)(v5 + 144) = 0;
  return result;
}
