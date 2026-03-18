/*
 * XREFs of ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180269EC0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801D0720 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1802078A8 (-find@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ?ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ @ 0x18021F064 (-ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ.c)
 *     ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z @ 0x18022E7D0 (-TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z.c)
 *     ??$_Erase@PEAUIUnknown@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@AEAA_KAEBQEAUIUnknown@@@Z @ 0x180269C28 (--$_Erase@PEAUIUnknown@@@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown@@U.c)
 */

__int64 __fastcall CAnimationTrigger::OnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = a3;
  if ( CAnimationTrigger::ShouldSendAnimationNotification((CAnimationTrigger *)a1)
    && (v7 = (_QWORD *)(v5 + 136), *(_QWORD *)(v5 + 152)) )
  {
    if ( (unsigned int)(v4 - 8) <= 1 && v6 )
    {
      if ( *std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find(
              (_QWORD *)(v5 + 136),
              &v15,
              (const unsigned __int8 *)&v14) != *(__int64 **)(a1 + 144) )
        std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Erase<IUnknown *>(
          v7,
          (unsigned __int8 *)&v14);
      if ( !*(_QWORD *)(a1 + 152) )
      {
        if ( (unsigned int)dword_1803DC880 > 5 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
        {
          v15 = (__int64 *)a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            v8,
            byte_1803B3B69,
            v9,
            v10,
            (__int64)&v15);
        }
        DataProviderManager::TryNotify(
          *(DataProviderManager **)(*(_QWORD *)(a1 + 24) + 6392LL),
          (struct CResource *)a1,
          *(_QWORD *)(a1 + 80),
          *(_QWORD *)(a1 + 88),
          1u);
      }
    }
  }
  else if ( (unsigned int)dword_1803DC880 > 5 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
  {
    v15 = (__int64 *)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)&v15,
      byte_1803B3AB6,
      v11,
      v12,
      (__int64)&v15);
  }
  return 1LL;
}
