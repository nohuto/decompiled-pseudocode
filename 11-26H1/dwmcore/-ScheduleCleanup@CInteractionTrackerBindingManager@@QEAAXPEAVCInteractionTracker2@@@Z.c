/*
 * XREFs of ?ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z @ 0x180278B68
 * Callers:
 *     ?DetachFromChannel@CInteractionTracker2@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802730B0 (-DetachFromChannel@CInteractionTracker2@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?OnUpdatesCompletedForResource@CInteractionTracker2@@UEAAJI@Z @ 0x180274770 (-OnUpdatesCompletedForResource@CInteractionTracker2@@UEAAJI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x180003C70 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 *     ?IsCleanReady@CInteractionTracker2@@AEAA_NI@Z @ 0x180274020 (-IsCleanReady@CInteractionTracker2@@AEAA_NI@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180277CB0 (--$_Emplace_reallocate@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCIn.c)
 *     ??0?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1802782E0 (--0-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ @ 0x180279094 (-TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerBindingManager::ScheduleCleanup(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker2 *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  struct CInteractionTracker2 *v6; // [rsp+90h] [rbp+20h] BYREF
  int v7; // [rsp+A0h] [rbp+30h]
  int v8; // [rsp+A8h] [rbp+38h]

  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    LODWORD(v6) = (__int64)(*((_QWORD *)this + 29) - *((_QWORD *)this + 28)) >> 3;
    v7 = -1431655765 * ((__int64)(*((_QWORD *)this + 20) - *((_QWORD *)this + 19)) >> 3);
    v8 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      0xAAAAAAAAAAAAAAABuLL,
      (__int64)&unk_1803B4966);
  }
  if ( *((_BYTE *)this + 248) )
  {
    v6 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct CInteractionTracker2 *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = (_QWORD *)*((_QWORD *)this + 29);
    if ( v4 == *((_QWORD **)this + 30) )
    {
      std::vector<Microsoft::WRL::ComPtr<CInteractionTracker2>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CInteractionTracker2>>(
        (__int64 *)this + 28,
        *((_QWORD *)this + 29),
        (__int64)&v6);
    }
    else
    {
      Microsoft::WRL::ComPtr<CInteractionTracker2>::ComPtr<CInteractionTracker2>(v4, &v6);
      *((_QWORD *)this + 29) += 8LL;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct CInteractionTracker2 *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( *((_QWORD *)this + 26) == *((_QWORD *)this + 25) )
      CInteractionTrackerBindingManager::TryCleanTrackers(this);
  }
  else if ( *((_QWORD *)this + 26) == *((_QWORD *)this + 25)
         && CInteractionTracker2::IsCleanReady(a2, *((_DWORD *)this + 36)) )
  {
    CInteractionTracker2::CleanDirties(a2);
  }
  else
  {
    v6 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct CInteractionTracker2 *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = (_QWORD *)*((_QWORD *)this + 26);
    if ( v5 == *((_QWORD **)this + 27) )
    {
      std::vector<Microsoft::WRL::ComPtr<CInteractionTracker2>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CInteractionTracker2>>(
        (__int64 *)this + 25,
        *((_QWORD *)this + 26),
        (__int64)&v6);
    }
    else
    {
      Microsoft::WRL::ComPtr<CInteractionTracker2>::ComPtr<CInteractionTracker2>(v5, &v6);
      *((_QWORD *)this + 26) += 8LL;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct CInteractionTracker2 *))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
