/*
 * XREFs of ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18020CEE8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EC50 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0InteractionSourceManager@@QEAA@PEAVCInteractionTrackerBase@@@Z @ 0x1801079D0 (--0InteractionSourceManager@@QEAA@PEAVCInteractionTrackerBase@@@Z.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x180107A68 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTrackerBase@@@Z.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18013967C (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::CInteractionTracker(
        CInteractionTracker *this,
        struct CComposition *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  int v7; // xmm0_4

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0LL;
  v3 = 2LL;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *(_QWORD *)this = &CInteractionTracker::`vftable';
  *((_DWORD *)this + 60) = 1065353216;
  *((_DWORD *)this + 61) = 1065353216;
  *((_DWORD *)this + 62) = 1065353216;
  *((_DWORD *)this + 69) = 1014350479;
  InteractionSourceManager::InteractionSourceManager((CInteractionTracker *)((char *)this + 296), this);
  *((_QWORD *)this + 52) = 0LL;
  v4 = (_QWORD *)((char *)this + 456);
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v4++);
    --v3;
  }
  while ( v3 );
  v5 = (_QWORD *)((char *)this + 472);
  v6 = 4LL;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v5++);
    --v6;
  }
  while ( v6 );
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  v7 = *((_DWORD *)this + 60);
  *((_DWORD *)this + 145) = v7;
  *((_DWORD *)this + 146) = v7;
  *((_QWORD *)this + 75) = 0LL;
  CExpressionManager::RegisterInteractionTrackerNotification(
    *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL),
    this);
  *((_DWORD *)this + 55) = 1028443341;
  *((_DWORD *)this + 56) = 1028443341;
  *((float *)this + 58) = (float)CCommonRegistryData::MousewheelAnimationDurationMs / 1000.0;
  *((float *)this + 59) = (float)CCommonRegistryData::MousewheelAnimationDurationMs / 1000.0;
  CInteractionTracker::UpdatePositionRoundingSuggestion(this);
  return this;
}
