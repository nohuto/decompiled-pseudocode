/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18005DD0C
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x180022F88 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800584C0 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x180109894 (--$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(
        struct CPdcActivationClient *a1,
        _QWORD *a2,
        CAudioStream **a3)
{
  CAudioStream **v3; // rsi
  _QWORD *v4; // rdi
  struct _Mtx_internal_imp_t *v7; // rbx
  std::_Mutex_base *v8; // rcx
  CAudioStream ***v9; // rdx
  char *v10; // rax
  std::_Ref_count_base *v11; // rbx
  int v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CAudioStream **v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v3 = a3;
  v4 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v7 = (struct CPdcActivationClient *)((char *)a1 + 32);
    v8 = (struct CPdcActivationClient *)((char *)a1 + 32);
    try
    {
      std::_Mutex_base::lock(v8);
      v9 = (CAudioStream ***)*((_QWORD *)a1 + 2);
      if ( v9 == *((CAudioStream ****)a1 + 3) )
      {
        std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Emplace_reallocate<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
          (char *)a1 + 8,
          v9,
          &v17);
        v3 = v17;
      }
      else
      {
        *v9 = v3;
        *((_QWORD *)a1 + 2) += 8LL;
      }
      _Mtx_unlock(v7);
      v10 = (char *)operator new(0x28uLL);
      v11 = (std::_Ref_count_base *)v10;
      if ( v10 )
      {
        *(_OWORD *)v10 = 0LL;
        *((_DWORD *)v10 + 2) = 1;
        *((_DWORD *)v10 + 3) = 1;
        *(_QWORD *)v10 = &std::_Ref_count_obj2<CPdcTimerActivation>::`vftable';
        CPdcTimerActivation::CPdcTimerActivation((CPdcTimerActivation *)(v10 + 16), a1, v3);
      }
      else
      {
        v11 = 0LL;
      }
      v13 = (__int64)v11 + 16;
      v14 = v11;
      std::shared_ptr<std::function<void (void)>>::operator=(v4, &v13);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x38,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\pdcactivationclient.cpp",
        (const char *)0x8007000ELL,
        v12);
      return a2;
    }
  }
  return v4;
}
