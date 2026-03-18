/*
 * XREFs of ?Create@CSpectreCallbackRenderer@@SAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCLight@@$0?0@gsl@@PEAPEAV1@@Z @ 0x18025A774
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x18009E490 (-Alloc@CObjectCache@@QEAAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCSpectreCallbackRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802347B8 (--1-$com_ptr_t@VCSpectreCallbackRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCLight@@$0?0@gsl@@@Z @ 0x18025A5D0 (--0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MM.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z @ 0x18028C4A0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpectreCallbackRenderer@@@Z.c)
 */

__int64 __fastcall CSpectreCallbackRenderer::Create(
        struct CSpectreCallbackRenderer *a1,
        _OWORD *a2,
        __int64 a3,
        float a4,
        int a5,
        __int128 *a6,
        __int64 *a7)
{
  unsigned int v10; // ebx
  CObjectCache *ObjectCache; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF

  v10 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v12 = CObjectCache::Alloc(ObjectCache, 0x90uLL);
  if ( !v12 )
  {
    *(_QWORD *)&v16 = 0LL;
    goto LABEL_5;
  }
  v16 = *a6;
  v13 = CSpectreCallbackRenderer::CSpectreCallbackRenderer(
          (__int64)v12,
          (__int64)a1,
          a2,
          a3,
          SLODWORD(a4),
          a5,
          (__int64 *)&v16);
  *(_QWORD *)&v16 = v13;
  v14 = v13;
  if ( !v13 )
  {
LABEL_5:
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x21u, 0LL);
    goto LABEL_6;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 16));
  *(_QWORD *)&v16 = 0LL;
  *a7 = v14;
LABEL_6:
  wil::com_ptr_t<CSpectreCallbackRenderer,wil::err_returncode_policy>::~com_ptr_t<CSpectreCallbackRenderer,wil::err_returncode_policy>((__int64 *)&v16);
  return v10;
}
