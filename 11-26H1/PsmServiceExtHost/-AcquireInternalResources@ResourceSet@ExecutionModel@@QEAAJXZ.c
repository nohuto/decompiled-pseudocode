/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800889BC
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x180080FF0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@43344@Z @ 0x1800032C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180005744 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180007EE0 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18002AA30 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 *     ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x18002BE20 (--0-$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V-$allocator@UExte.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18002C80C (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002CD84 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18005D070 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18005D4BC (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333@Z @ 0x18005F60C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x1800888E8 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x180088CF8 (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180088D30 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(ExecutionModel::ResourceSet *this)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edi
  bool v8; // r14
  bool v9; // si
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  bool v13; // r15
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h] BYREF
  __int128 v20; // [rsp+88h] [rbp-78h] BYREF
  __int128 v21; // [rsp+98h] [rbp-68h]
  _BOOL8 v22; // [rsp+A8h] [rbp-58h]
  _QWORD v23[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v24[24]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-18h]
  _BYTE v26[176]; // [rsp+120h] [rbp+20h] BYREF
  bool v27; // [rsp+1E0h] [rbp+E0h] BYREF
  bool v28; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v29; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v30; // [rsp+1F8h] [rbp+F8h] BYREF

  v27 = 0;
  utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(v23);
  v28 = 0;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  memset_0(v24, 0, 0x50uLL);
  memset_0(v26, 0, 0x80uLL);
  v2 = *((_QWORD *)this + 165);
  v3 = *((_QWORD *)this + 8);
  RmpPolicyPrepareToCheckMetrics(
    (struct _RM_PARTITION *)(*(_QWORD *)(v2 + 48) + 312LL),
    (struct _RM_POLICY *)(*(_QWORD *)(*((_QWORD *)this + 3) + 128LL) + 512LL),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v26,
    (struct _RM_SYSTEM_MEMORY_METRICS *)v24);
  v18 = 0LL;
  if ( !RmpResourceSetIsCommitSaveEligible((ExecutionModel::ResourceSet *)((char *)this + 1336)) )
    RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v2, &v18);
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 9LL) )
  {
    v29 = *(_QWORD *)(v3 + 128);
    v30 = *((_QWORD *)this + 184);
    v17 = v25;
    v15 = *((_QWORD *)this + 181);
    v19 = *((_QWORD *)this + 215);
    v16 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v4,
      byte_1800D31B9,
      v5,
      v6,
      (__int64)&v19,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)&v17,
      (__int64)&v30,
      (__int64)&v29);
  }
  RmpPolicyInitializeRevokeContext(
    *(_QWORD *)(*((_QWORD *)this + 165) + 48LL) + 312LL,
    (__int64)v23,
    (__int64)this,
    &v20);
  v7 = ExecutionModel::ResourceSet::EvaluateResourceRequest(
         this,
         v18,
         (struct _RM_RESOURCE_USAGE_LIMITS *)v26,
         (struct _RM_SYSTEM_MEMORY_METRICS *)v24,
         (struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v20,
         &v27,
         &v28);
  v8 = v27;
  v9 = v28;
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 9LL) )
  {
    v28 = v22;
    v27 = BYTE4(v22);
    LODWORD(v15) = *(_DWORD *)(*((_QWORD *)&v21 + 1) + 40LL);
    LODWORD(v16) = *(_DWORD *)(*((_QWORD *)&v20 + 1) + 16LL);
    LOBYTE(v29) = v9;
    LOBYTE(v30) = v8;
    LODWORD(v17) = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (unsigned int)v16,
      (__int64)&unk_1800D30D0,
      v10,
      v11,
      (__int64)&v17,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v28,
      (__int64)&v27);
  }
  if ( v7 >= 0 )
  {
    v12 = 1;
    v13 = v8 || v9;
    if ( (int)ExecutionModel::BaseResourceSet::AddToListPrioritized((_QWORD *)(v3 + 40), this) >= 0 )
    {
      if ( v13 )
      {
        *((_DWORD *)this + 432) = CempQueryUnbiasedInterruptTimeMs64();
        if ( v8 || v9 )
          v12 = 0;
        ExecutionModel::ResourceSet::CheckUpdatePendStats(this, v12);
        if ( v8 || v9 )
          RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v20);
      }
      else
      {
        *((_DWORD *)this + 320) = 1;
        ExecutionModel::ResourceSet::CompleteAcquire(this, 1u);
      }
      v7 = 0;
    }
    else
    {
      v7 = -2147024882;
    }
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)v23);
  return (unsigned int)v7;
}
