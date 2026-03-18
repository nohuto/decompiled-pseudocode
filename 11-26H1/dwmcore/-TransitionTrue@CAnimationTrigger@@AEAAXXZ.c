/*
 * XREFs of ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x1801D5634
 * Callers:
 *     ?SetProperty@CAnimationTrigger@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180269FF0 (-SetProperty@CAnimationTrigger@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x1800015C8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18010BE20 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801D0720 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@1@AEBV?$allocator@PEAUIUnknown@@@1@@Z @ 0x1801DD0BC (--0-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown@@U-$hash@PEAUIUnknown@@@.c)
 *     ??1?$_Hash@V?$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@V?$allocator@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801DFB44 (--1-$_Hash@V-$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V-$_Uhash_compare@UDCOMPOSITION_PROPERT.c)
 *     ?ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ @ 0x18021F064 (-ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ.c)
 *     ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z @ 0x18022E7D0 (-TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z.c)
 *     ??$emplace@AEBQEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@@std@@_N@1@AEBQEAVCBaseExpression@@@Z @ 0x180269CD0 (--$emplace@AEBQEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAU.c)
 *     ?swap@?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@QEAAXAEAV12@@Z @ 0x18026A080 (-swap@-$_Uhash_compare@PEAUIUnknown@@U-$hash@PEAUIUnknown@@@std@@U-$equal_to@PEAUIUnknown@@@3@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationTrigger::TransitionTrue(CAnimationTrigger *this)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  __int64 v4; // rcx
  unsigned int ChannelCallbackId; // eax
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rsi
  _QWORD *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  CAnimationTrigger **v20; // [rsp+20h] [rbp-39h]
  CComposition **p_CurrentFrameId; // [rsp+28h] [rbp-31h]
  __int64 *v22; // [rsp+30h] [rbp-29h]
  CAnimationTrigger **v23; // [rsp+38h] [rbp-21h]
  _QWORD v24[2]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v25[8]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v26; // [rsp+58h] [rbp-1h]
  __int64 v27; // [rsp+60h] [rbp+7h]
  __int64 v28; // [rsp+68h] [rbp+Fh]
  __int64 v29; // [rsp+70h] [rbp+17h]
  __int64 v30; // [rsp+78h] [rbp+1Fh]
  __int64 v31; // [rsp+80h] [rbp+27h]
  __int64 v32; // [rsp+88h] [rbp+2Fh]
  CAnimationTrigger *v33; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+6Fh] BYREF
  CComposition *CurrentFrameId; // [rsp+D0h] [rbp+77h] BYREF
  CAnimationTrigger *v36; // [rsp+D8h] [rbp+7Fh] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 14);
  for ( i = (_QWORD *)*((_QWORD *)this + 13); i != v1; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 216LL))(*i);
  if ( CNotificationResource::ShouldNotify(this) )
  {
    if ( (unsigned int)dword_1803DC880 > 5 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
    {
      v33 = (CAnimationTrigger *)*((_QWORD *)this + 11);
      v34 = *((_QWORD *)this + 10);
      CurrentFrameId = GetCurrentFrameId();
      v36 = this;
      v23 = &v33;
      v22 = &v34;
      p_CurrentFrameId = &CurrentFrameId;
      v20 = &v36;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v4,
        (__int64)&unk_1803B3BC8);
    }
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
           2LL) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
      v24[0] = ChannelCallbackId;
      v24[1] = *((unsigned int *)this + 18);
      CoreUICallSend(v6, v24, 2LL, 2LL, 0, &unk_1802F5AD3, (_DWORD)v22, v23, ChannelCallbackId);
    }
    if ( CAnimationTrigger::ShouldSendAnimationNotification(this) )
    {
      v7 = *((_QWORD *)this + 14);
      v8 = *((_QWORD *)this + 13);
      LODWORD(v33) = 0;
      std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>(
        v25,
        &v33);
      while ( v8 != v7 )
      {
        std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::emplace<CBaseExpression * const &>(
          v25,
          v24,
          v8);
        v8 += 8LL;
      }
      if ( (char *)this + 136 != v25 )
      {
        std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>::swap((char *)this + 136, v25);
        v10 = v9[1];
        v9[1] = v26;
        v26 = v10;
        v11 = v9[2];
        v9[2] = v27;
        v27 = v11;
        v12 = v9[3];
        v9[3] = v28;
        v28 = v12;
        v13 = v9[4];
        v9[4] = v29;
        v29 = v13;
        v14 = v9[5];
        v9[5] = v30;
        v30 = v14;
        v15 = v9[6];
        v9[6] = v31;
        v16 = v9[7];
        v9[7] = v32;
        v32 = v16;
        v31 = v15;
      }
      if ( *((_QWORD *)this + 19) )
      {
        if ( (unsigned int)dword_1803DC880 > 5 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
        {
          v33 = this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            v17,
            byte_1803B3B03,
            v18,
            v19,
            (__int64)&v33);
        }
        LODWORD(v20) = 0;
        DataProviderManager::TryNotify(
          *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
          this,
          *((_QWORD *)this + 10),
          *((_QWORD *)this + 11),
          v20,
          p_CurrentFrameId);
      }
      std::_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>::~_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>(v25);
    }
  }
}
