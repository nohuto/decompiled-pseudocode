/*
 * XREFs of ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY05_N@Z @ 0x1800AD8F0
 * Callers:
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z @ 0x18006A77C (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1801297BC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?RemoveRuleAndBuildRefreshList@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z @ 0x18012B620 (-RemoveRuleAndBuildRefreshList@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x18012BA78 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800547CC (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180063FF0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?AddHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIPolicyRule@@@Z @ 0x180129728 (-AddHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__PO.c)
 *     ?RemoveHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAUIPolicyRule@@XZ @ 0x18012B1F0 (-RemoveHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAUI.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY05_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18012BF24 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
        DynamicAudioEndpointManager *this,
        bool (*const a2)[6])
{
  char v2; // di
  int v3; // r12d
  __int64 v4; // r14
  __int64 i; // rsi
  __int64 v6; // r15
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int128 v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-10h]
  DynamicAudioEndpointManager *v15; // [rsp+B0h] [rbp+48h]
  _QWORD *v17; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+60h] BYREF

  v15 = this;
  v11 = 0LL;
  v2 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 10;
  v3 = 0;
  v4 = 0LL;
  while ( v3 < 2 )
  {
    for ( i = 0LL; i < 6; ++i )
    {
      v17 = (_QWORD *)*((_QWORD *)this + 6 * v4 + 6 * i + 3);
      while ( v17 )
      {
        v6 = *ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)this, &v17);
        v18 = v6;
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6) - 2 <= 1 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
          ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::AddHead(&v11, &v18);
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6);
          if ( !(unsigned __int8)DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
                                   (_DWORD)v15,
                                   v7,
                                   v3,
                                   v8,
                                   (__int64)a2,
                                   (__int64)&v11) )
            goto LABEL_15;
          ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveHead(&v11);
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6);
          if ( v9 > 5 )
            goto LABEL_15;
          if ( (*a2)[v4 + (int)v9] )
            (*a2)[v4 + i] = 1;
        }
      }
      this = v15;
    }
    ++v3;
    v4 += 6LL;
  }
  v2 = 1;
LABEL_15:
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64)&v11);
  return v2;
}
