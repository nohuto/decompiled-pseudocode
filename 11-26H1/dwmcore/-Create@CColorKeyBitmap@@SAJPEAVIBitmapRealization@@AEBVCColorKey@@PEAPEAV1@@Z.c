/*
 * XREFs of ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x180158768
 * Callers:
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1801586C8 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x180158D4C (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmap::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct CColorKeyBitmap **a3)
{
  CColorKeyBitmap *v6; // rax
  __int64 v7; // rdx
  CColorKeyBitmap *v8; // rbx
  unsigned int v9; // edi
  __int64 result; // rax
  int v11; // eax

  v6 = (CColorKeyBitmap *)operator new(0x90uLL);
  v8 = v6;
  if ( v6 )
  {
    CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
      (__int64)v6,
      v7);
    *((_QWORD *)v8 + 2) = &CColorKeyBitmap::`vftable'{for `IPixelColor'};
    *(_QWORD *)v8 = &CColorKeyBitmap::`vftable'{for `CMILCOMBaseT<ID2DBitmapCacheSource,ID2DBitmapCacheSource,CMilObjectDeleter>'};
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    *(_OWORD *)((char *)v8 + 40) = *(_OWORD *)a2;
    *(_OWORD *)((char *)v8 + 56) = *((_OWORD *)a2 + 1);
    *((_DWORD *)v8 + 18) = *((_DWORD *)a2 + 8);
    *(_QWORD *)((char *)v8 + 84) = 0LL;
    *(_QWORD *)((char *)v8 + 116) = 0LL;
    (*(void (__fastcall **)(CColorKeyBitmap *))(*(_QWORD *)v8 + 8LL))(v8);
    v11 = CColorKeyBitmap::Initialize(v8, a1);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x18u, 0LL);
  }
  else
  {
    v9 = -2147024882;
    v8 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x16u, 0LL);
  }
  result = v9;
  *a3 = v8;
  return result;
}
