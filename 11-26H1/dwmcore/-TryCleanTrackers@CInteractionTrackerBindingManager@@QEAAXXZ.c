/*
 * XREFs of ?TryCleanTrackers@CInteractionTrackerBindingManager@@QEAAXXZ @ 0x180279094
 * Callers:
 *     ?AnimationUpdated@CInteractionTracker2@@UEAAXXZ @ 0x180271B80 (-AnimationUpdated@CInteractionTracker2@@UEAAXXZ.c)
 *     ?OnUpdatesCompletedForResource@CInteractionTrackerBindingManager@@UEAAJI@Z @ 0x180278760 (-OnUpdatesCompletedForResource@CInteractionTrackerBindingManager@@UEAAJI@Z.c)
 *     ?ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z @ 0x180278B68 (-ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18011652C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 *     ?IsCleanReady@CInteractionTracker2@@AEAA_NI@Z @ 0x180274020 (-IsCleanReady@CInteractionTracker2@@AEAA_NI@Z.c)
 *     ?ReadyToUpdateBindings@CInteractionTrackerBindingManager@@AEBA_NXZ @ 0x18027889C (-ReadyToUpdateBindings@CInteractionTrackerBindingManager@@AEBA_NXZ.c)
 *     ?UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ @ 0x1802792AC (-UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ.c)
 *     ?erase@?$vector@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180279840 (-erase@-$vector@V-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCIntera.c)
 */

void __fastcall CInteractionTrackerBindingManager::TryCleanTrackers(CInteractionTrackerBindingManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  CInteractionTracker2 **v6; // rbx
  CInteractionTracker2 **v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // [rsp+80h] [rbp+38h] BYREF
  int v13; // [rsp+88h] [rbp+40h] BYREF
  int v14; // [rsp+90h] [rbp+48h] BYREF
  CInteractionTrackerBindingManager *v15; // [rsp+98h] [rbp+50h] BYREF

  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    v12 = (__int64)(*((_QWORD *)this + 29) - *((_QWORD *)this + 28)) >> 3;
    v5 = -1431655765 * ((__int64)(*((_QWORD *)this + 20) - *((_QWORD *)this + 19)) >> 3);
    v15 = this;
    v13 = v5;
    v14 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      byte_1803B4BAF,
      v3,
      v4,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
  v6 = (CInteractionTracker2 **)*((_QWORD *)this + 25);
  if ( (__int64)(*((_QWORD *)this + 26) - (_QWORD)v6) >> 3 )
  {
    while ( v6 != *((CInteractionTracker2 ***)this + 26) )
    {
      if ( !CInteractionTracker2::IsCleanReady(*v6, *((_DWORD *)this + 36)) )
        goto LABEL_13;
      CInteractionTracker2::CleanDirties(*v6);
      v6 = *(CInteractionTracker2 ***)std::vector<Microsoft::WRL::ComPtr<CInteractionTracker2>>::erase(
                                        (char *)this + 200,
                                        &v12,
                                        v6);
    }
  }
  if ( CInteractionTrackerBindingManager::ReadyToUpdateBindings(this) )
  {
    CInteractionTrackerBindingManager::UpdateBindings(this);
    v7 = (CInteractionTracker2 **)*((_QWORD *)this + 28);
    if ( (__int64)(*((_QWORD *)this + 29) - (_QWORD)v7) >> 3 )
    {
      while ( v7 != *((CInteractionTracker2 ***)this + 29)
           && CInteractionTracker2::IsCleanReady(*v7, *((_DWORD *)this + 36)) )
      {
        CInteractionTracker2::CleanDirties(*v7);
        v7 = *(CInteractionTracker2 ***)std::vector<Microsoft::WRL::ComPtr<CInteractionTracker2>>::erase(
                                          (char *)this + 224,
                                          &v12,
                                          v7);
      }
    }
  }
LABEL_13:
  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    v12 = (__int64)(*((_QWORD *)this + 29) - *((_QWORD *)this + 28)) >> 3;
    v11 = -1431655765 * ((__int64)(*((_QWORD *)this + 20) - *((_QWORD *)this + 19)) >> 3);
    v15 = this;
    v13 = v11;
    v14 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_1803B4A65,
      v9,
      v10,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
}
