/*
 * XREFs of ?Create@CSecondarySysmemBitmap@@SAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180158868
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18012EFC8 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F5710 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x1801277DC (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ??0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x18015891C (--0CSecondarySysmemBitmap@@IEAA@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Create(
        const struct D2D_SIZE_U *a1,
        const struct PixelFormatInfo *a2,
        struct CSecondarySysmemBitmap **a3)
{
  CSecondarySysmemBitmap *v6; // rax
  CSecondarySysmemBitmap *v7; // rax
  CSecondarySysmemBitmap *v8; // rbx
  int v9; // edi
  unsigned int v10; // eax

  *a3 = 0LL;
  v6 = (CSecondarySysmemBitmap *)MIDL_user_allocate(0x98uLL);
  if ( !v6 )
  {
    v8 = 0LL;
    goto LABEL_9;
  }
  v7 = CSecondarySysmemBitmap::CSecondarySysmemBitmap(v6, a1, a2);
  v8 = v7;
  if ( !v7 )
  {
LABEL_9:
    v9 = -2147024882;
    v10 = 24;
    goto LABEL_5;
  }
  CMILRefCountImpl::AddReference((CSecondarySysmemBitmap *)((char *)v7 + 8));
  v9 = CSecondarySysmemBitmap::Initialize(v8);
  if ( v9 >= 0 )
  {
    *a3 = v8;
    return (unsigned int)v9;
  }
  v10 = 26;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v10, 0LL);
  if ( v8 )
    CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v8);
  return (unsigned int)v9;
}
