/*
 * XREFs of ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1801585AC
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18004AB78 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18020D8C8 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1801586C8 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct IBitmapRealization **a3)
{
  char *v6; // rax
  CColorKeyBitmapRealization *v7; // rbx
  int v8; // edi
  unsigned int v9; // eax

  *a3 = 0LL;
  v6 = (char *)operator new(0x68uLL);
  v7 = (CColorKeyBitmapRealization *)v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 1) = 0LL;
    *(_DWORD *)(v6 + 73) = 0;
    *(_WORD *)(v6 + 77) = 0;
    v6[79] = 0;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    v6[72] = 0;
    *(_QWORD *)v6 = &CColorKeyBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    *((_QWORD *)v6 + 2) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
    *((_QWORD *)v6 + 10) = &CColorKeyBitmapRealization::`vftable'{for `IGDIBitmapRealization'};
    *((_QWORD *)v6 + 11) = &CColorKeyBitmapRealization::`vftable'{for `IPixelColor'};
    *((_QWORD *)v6 + 12) = 0LL;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 8));
    v8 = CColorKeyBitmapRealization::Initialize(v7, a1, a2);
    if ( v8 >= 0 )
    {
      *a3 = (struct IBitmapRealization *)(((unsigned __int64)v7 + 80) & -(__int64)(v7 != 0LL));
      return (unsigned int)v8;
    }
    v9 = 25;
  }
  else
  {
    v7 = 0LL;
    v8 = -2147024882;
    v9 = 23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v9, 0LL);
  if ( v7 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v7);
  return (unsigned int)v8;
}
