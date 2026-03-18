/*
 * XREFs of ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180123760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x18012388C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180123968 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x180123D34 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x18021F71C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::CheckOcclusionState(CCaptureRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  char v4; // bp
  struct CD3DDevice *D3DDeviceNoRef; // r14
  __int64 v6; // rcx
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v2 = 142213121;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45522024>::GetImpl'::`2'::impl)
    || (v3 = *((_QWORD *)this + 289)) == 0
    || *(_QWORD *)(v3 + 136) == *(_QWORD *)(v3 + 144) )
  {
    if ( !*((_BYTE *)this + 2728) || (v4 = 1, *((_DWORD *)g_pComposition + 1613)) )
      v4 = 0;
    D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)((char *)this - 96));
    if ( !v4 )
    {
      v6 = *((_QWORD *)this + 324);
      if ( v6 )
      {
        if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 24LL))(v6, &v8) >= 0
          && v8
          && D3DDeviceNoRef
          && *((_QWORD *)this + 2)
          && *((_QWORD *)this + 331) != *((_QWORD *)this + 330)
          && *((_QWORD *)this + 324)
          && *((_BYTE *)this + 2493)
          && (int)CCaptureRenderTarget::EnsureResources((CCaptureRenderTarget *)((char *)this - 96), D3DDeviceNoRef) >= 0
          && (int)CCaptureRenderTarget::GetNextBufferIndexAvailable((CCaptureRenderTarget *)((char *)this - 96)) >= 0 )
        {
          return 0;
        }
      }
    }
  }
  return v2;
}
