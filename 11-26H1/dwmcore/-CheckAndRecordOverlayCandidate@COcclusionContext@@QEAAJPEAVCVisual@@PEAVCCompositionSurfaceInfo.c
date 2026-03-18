/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FBE18
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800DF2D0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180189280 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180282ED0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x180180860 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FD204 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v9; // ebp
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // r14
  int v14; // eax
  __int64 v16[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 48LL))(a3);
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    v16,
    v10);
  if ( v16[0] )
  {
    v17 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v16[0])(
           v16[0],
           &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
           &v17) >= 0
      && (!*(_DWORD *)(a1 + 1276) && !CLightStack::HasLighting((CLightStack *)(a1 + 192))
       || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 152LL))(v17)) )
    {
      v11 = *(_QWORD **)(a1 + 1360);
      v12 = *(_QWORD **)(a1 + 1368);
      v13 = a5;
      while ( v11 != v12 )
      {
        v14 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, *v11, a2, a3, v17, a4, v13);
        v9 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x569u, 0LL);
          break;
        }
        ++v11;
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v16);
  return v9;
}
