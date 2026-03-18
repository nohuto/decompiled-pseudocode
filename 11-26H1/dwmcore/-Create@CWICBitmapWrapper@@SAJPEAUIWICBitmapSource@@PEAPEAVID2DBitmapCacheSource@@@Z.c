/*
 * XREFs of ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1800E1C7C
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800E1130 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800E1314 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1800E14C4 (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1800E1D48 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2E44 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CWICBitmapWrapper::Create(struct IWICBitmapSource *a1, struct ID2DBitmapCacheSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  CWICBitmapWrapper *v5; // rbx
  CWICBitmapWrapper *v6; // rax
  CWICBitmapWrapper *v7; // rbx
  int v8; // edi
  unsigned int v9; // eax

  *a2 = 0LL;
  v4 = (CWICBitmapWrapper *)operator new(0x90uLL);
  v5 = v4;
  if ( !v4 )
  {
    v7 = 0LL;
    goto LABEL_9;
  }
  memset_0(v4, 0, 0x90uLL);
  v6 = CWICBitmapWrapper::CWICBitmapWrapper(v5);
  v7 = v6;
  if ( !v6 )
  {
LABEL_9:
    v8 = -2147024882;
    v9 = 25;
    goto LABEL_5;
  }
  CMILRefCountImpl::AddReference((CWICBitmapWrapper *)((char *)v6 + 8));
  v8 = CWICBitmapWrapper::HrInit(v7, a1);
  if ( v8 >= 0 )
  {
    *a2 = (struct ID2DBitmapCacheSource *)(((unsigned __int64)v7 + 120) & -(__int64)(v7 != 0LL));
    return (unsigned int)v8;
  }
  v9 = 27;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v9, 0LL);
  if ( v7 )
    CMILRefCountBaseT<IBitmapLock,CMilObjectDeleter>::InternalRelease(v7);
  return (unsigned int)v8;
}
