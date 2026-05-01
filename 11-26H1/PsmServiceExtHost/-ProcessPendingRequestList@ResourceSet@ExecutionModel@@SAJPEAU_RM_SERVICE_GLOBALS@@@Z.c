/*
 * XREFs of ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006CE8C
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18002C54C (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180005744 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180007EE0 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18002AA30 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 *     ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x18002BE20 (--0-$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V-$allocator@UExte.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18002C80C (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002CD84 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18005D4BC (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333@Z @ 0x18005F60C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x1800888E8 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x180088CF8 (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180088D30 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ProcessPendingRequestList(struct _RM_SERVICE_GLOBALS *a1)
{
  _QWORD *v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r15
  __int64 v5; // rbx
  struct _RM_ACTIVITY_HOST *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // di
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v20[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h]
  _QWORD v22[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v23[24]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-28h]
  _BYTE v25[176]; // [rsp+110h] [rbp+10h] BYREF
  bool v26; // [rsp+1D0h] [rbp+D0h] BYREF
  bool v27; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int64 v28; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v29; // [rsp+1E8h] [rbp+E8h] BYREF

  memset_0(v23, 0, 0x50uLL);
  memset_0(v25, 0, 0x80uLL);
  v28 = 0LL;
  v26 = 0;
  utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(v22);
  v27 = 0;
  v21 = 0LL;
  v2 = (_QWORD *)((char *)a1 + 488);
  memset(v20, 0, sizeof(v20));
  if ( (_QWORD *)*v2 != v2 )
  {
    if ( (unsigned int)dword_1800E1278 > 5 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v3,
        byte_1800D33E1);
    RmpPolicyPrepareToCheckMetrics(
      (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
      (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 512),
      (struct _RM_RESOURCE_USAGE_LIMITS *)v25,
      (struct _RM_SYSTEM_MEMORY_METRICS *)v23);
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 443) + 32LL);
    while ( (_QWORD *)*v2 != v2 )
    {
      v5 = *(_QWORD *)(*v2 - 8LL);
      v28 = 0LL;
      if ( !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v5 + 1336)) )
        RmpActivityHostQueryCommitDebt(v6, &v28);
      if ( (unsigned int)dword_1800E1278 > 5 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
      {
        v29 = *(_QWORD *)(v5 + 1720);
        v15 = *(_QWORD *)(v4 + 128);
        v16 = *(_QWORD *)(v5 + 128);
        v17 = v24;
        v19 = *(_QWORD *)(v5 + 104);
        v18 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v7,
          byte_1800D323B,
          v8,
          v9,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v29);
      }
      RmpPolicyInitializeRevokeContext(*(_QWORD *)(*(_QWORD *)(v5 + 1320) + 48LL) + 312LL, (__int64)v22, v5, v20);
      if ( (int)ExecutionModel::ResourceSet::EvaluateResourceRequest(
                  (ExecutionModel::ResourceSet *)v5,
                  v28,
                  (struct _RM_RESOURCE_USAGE_LIMITS *)v25,
                  (struct _RM_SYSTEM_MEMORY_METRICS *)v23,
                  (struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v20,
                  &v26,
                  &v27) < 0 )
        break;
      v10 = v27;
      v11 = !v26 && !v27;
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v5, v11);
      if ( v26 || v10 )
      {
        RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)v20);
        break;
      }
      v12 = *(_DWORD *)(v5 + 1332);
      if ( (v12 & 4) == 0 )
        *(_DWORD *)(v5 + 1332) = v12 | 4;
      ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)v5, 1u);
    }
  }
  if ( (unsigned int)dword_1800E1278 > 5 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v13,
      byte_1800D33BF);
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((__int64)v22);
  return 0LL;
}
