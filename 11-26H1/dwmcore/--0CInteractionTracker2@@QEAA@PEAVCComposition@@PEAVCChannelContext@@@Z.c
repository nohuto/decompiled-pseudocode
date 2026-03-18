/*
 * XREFs of ??0CInteractionTracker2@@QEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18010823C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EC50 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??0InteractionSourceManager@@QEAA@PEAVCInteractionTrackerBase@@@Z @ 0x1801079D0 (--0InteractionSourceManager@@QEAA@PEAVCInteractionTrackerBase@@@Z.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTrackerBase@@@Z @ 0x180107A68 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTrackerBase@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801D0720 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@IEAA@PEAVCComposition@@@Z @ 0x1802100FC (--0-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@IEAA@PEAV.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ @ 0x18021B0C0 (-UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ.c)
 */

CInteractionTracker2 *__fastcall CInteractionTracker2::CInteractionTracker2(
        CInteractionTracker2 *this,
        struct CComposition *a2,
        struct CChannelContext *a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  int v8; // xmm0_4
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  struct CChannelContext *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>(
    this,
    a2);
  *((_DWORD *)this + 129) = 1014350479;
  *((_DWORD *)this + 120) = 1065353216;
  *(_QWORD *)this = &CInteractionTracker2::`vftable';
  *((_DWORD *)this + 121) = 1065353216;
  *((_DWORD *)this + 122) = 1065353216;
  InteractionSourceManager::InteractionSourceManager((CInteractionTracker2 *)((char *)this + 528), this);
  v4 = (_QWORD *)((char *)this + 688);
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  v5 = 2LL;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v4++);
    --v5;
  }
  while ( v5 );
  v6 = (_QWORD *)((char *)this + 704);
  v7 = 4LL;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v6++);
    --v7;
  }
  while ( v7 );
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  v8 = *((_DWORD *)this + 120);
  *((_DWORD *)this + 203) = v8;
  *((_DWORD *)this + 204) = v8;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    v13 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v9,
      (unsigned int)&unk_1803B4916,
      v10,
      v11,
      (__int64)&v13);
  }
  CExpressionManager::RegisterInteractionTrackerNotification(
    *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL),
    this);
  *((_DWORD *)this + 115) = 1028443341;
  *((_DWORD *)this + 116) = 1028443341;
  *((float *)this + 118) = (float)CCommonRegistryData::MousewheelAnimationDurationMs / 1000.0;
  *((float *)this + 119) = (float)CCommonRegistryData::MousewheelAnimationDurationMs / 1000.0;
  CInteractionTracker2::UpdatePositionRoundingSuggestion(this);
  *((_BYTE *)this + 828) |= 1u;
  return this;
}
