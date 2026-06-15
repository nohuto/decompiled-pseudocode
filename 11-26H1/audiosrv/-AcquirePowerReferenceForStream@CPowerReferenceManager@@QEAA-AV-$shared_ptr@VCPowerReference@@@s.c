/*
 * XREFs of ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774
 * Callers:
 *     ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x18005A6BC (-AcquirePowerReference@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180011240 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VCPowerReference@@$$V@std@@YA?AV?$shared_ptr@VCPowerReference@@@0@XZ @ 0x180011E44 (--$make_shared@VCPowerReference@@$$V@std@@YA-AV-$shared_ptr@VCPowerReference@@@0@XZ.c)
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180011EE8 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x18001251C (-CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV-$sha.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180013110 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001BB70 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18005DD0C (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x180076BC4 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 *     ??$make_shared@V?$com_ptr_t@UICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@$$V@std@@YA?AV?$shared_ptr@V?$com_ptr_t@UICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@XZ @ 0x18007DD40 (--$make_shared@V-$com_ptr_t@UICapabilityUsageSession@Management@CapabilityAccess@Internal@Window.c)
 *     ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180084124 (--4-$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_c90e8a76b02d1fc01a85dd002f968322_::__lambda_c90e8a76b02d1fc01a85dd002f968322_ @ 0x1800C4214 (_lambda_c90e8a76b02d1fc01a85dd002f968322_--__lambda_c90e8a76b02d1fc01a85dd002f968322_.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x180103018 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@-$vector@V-$shared_pt.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_c90e8a76b02d1fc01a85dd002f968322__0_ @ 0x18010E894 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_c90e8a76b02d1fc01a85dd00.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_CXvmPowerReferenceManager_________lambda_99dc9de587906d6f38e02b4d1e0ae12d___ @ 0x18010EAB0 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_CXvmPower.c)
 *     ??$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA?AV?$shared_ptr@VCXvmPowerReferenceManager@@@0@$$QEBU_GUID@@0@Z @ 0x18010EB30 (--$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA-AV-$shared_ptr@VCXvmPower.c)
 *     _lambda_c90e8a76b02d1fc01a85dd002f968322_::_lambda_c90e8a76b02d1fc01a85dd002f968322_ @ 0x18010EBD8 (_lambda_c90e8a76b02d1fc01a85dd002f968322_--_lambda_c90e8a76b02d1fc01a85dd002f968322_.c)
 *     ?AcquirePowerReference@CXvmPowerReferenceManager@@QEAA?AV?$shared_ptr@VCXvmPowerReference@@@std@@XZ @ 0x18010F2D4 (-AcquirePowerReference@CXvmPowerReferenceManager@@QEAA-AV-$shared_ptr@VCXvmPowerReference@@@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CPowerReferenceManager::AcquirePowerReferenceForStream(
        struct CPdcActivationClient *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v3; // rsi
  struct CPdcActivationClient *v4; // r15
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  volatile signed __int32 *v8; // r14
  volatile signed __int32 *v9; // r14
  __int64 *v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // r14
  volatile signed __int32 *v15; // r14
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 *v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  volatile signed __int32 *v22; // r14
  volatile signed __int32 *v23; // r14
  __int64 v24; // rbx
  int PowerReferenceSubBlocker; // eax
  const char *v26; // r9
  __int64 *v28; // rax
  _QWORD *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  std::_Ref_count_base *v32; // rcx
  __int64 *v33; // rax
  _QWORD *v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  std::_Ref_count_base *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rax
  _QWORD *v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rdx
  std::_Ref_count_base *v44; // rcx
  int v45; // eax
  struct _Mtx_internal_imp_t *v46; // rbx
  char *v47; // r14
  __int64 v48; // rax
  __int64 v49; // r8
  const char *v50; // r9
  CXvmPowerReferenceManager *v51; // r13
  std::_Ref_count_base *v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rax
  std::_Ref_count_base *v55; // rcx
  __int64 v56; // rax
  int v57; // [rsp+20h] [rbp-1F8h]
  __int64 v58; // [rsp+30h] [rbp-1E8h] BYREF
  __int128 Buf1; // [rsp+38h] [rbp-1E0h] BYREF
  __int128 v60; // [rsp+48h] [rbp-1D0h] BYREF
  int v61; // [rsp+58h] [rbp-1C0h]
  _QWORD *v62; // [rsp+60h] [rbp-1B8h]
  struct _Mtx_internal_imp_t *v63; // [rsp+68h] [rbp-1B0h]
  struct CPdcActivationClient *v64; // [rsp+70h] [rbp-1A8h]
  _BYTE v65[8]; // [rsp+78h] [rbp-1A0h] BYREF
  std::_Ref_count_base *v66; // [rsp+80h] [rbp-198h]
  __int128 v67; // [rsp+98h] [rbp-180h]
  __int128 v68; // [rsp+B0h] [rbp-168h]
  __int128 v69; // [rsp+C0h] [rbp-158h]
  __int128 v70; // [rsp+D0h] [rbp-148h]
  __int128 v71; // [rsp+E0h] [rbp-138h]
  __int128 v72; // [rsp+F0h] [rbp-128h]
  __int128 v73; // [rsp+100h] [rbp-118h]
  __int128 v74; // [rsp+110h] [rbp-108h]
  __int128 v75; // [rsp+120h] [rbp-F8h]
  __int128 v76; // [rsp+130h] [rbp-E8h]
  __int128 v77; // [rsp+140h] [rbp-D8h]
  __int128 v78; // [rsp+150h] [rbp-C8h]
  __int64 v79; // [rsp+160h] [rbp-B8h]
  _BYTE v80[64]; // [rsp+170h] [rbp-A8h] BYREF
  __int128 v81; // [rsp+1B0h] [rbp-68h] BYREF
  __int128 v82; // [rsp+1C0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]

  v3 = a2;
  v4 = a1;
  v64 = a1;
  v62 = a2;
  v58 = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v61 = 1;
  v5 = (__int64 *)std::make_shared<CPowerReference,>(&Buf1);
  v6 = *v5;
  v7 = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  *v3 = v6;
  v8 = (volatile signed __int32 *)v3[1];
  v3[1] = v7;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)&Buf1 + 1);
  if ( *((_QWORD *)&Buf1 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&Buf1 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  try
  {
    v67 = 0LL;
    if ( !g_ADGProcess || LODWORD(g_ADGProcess[2].OwningThread) != *(_DWORD *)(v58 + 40) )
    {
      if ( *(_DWORD *)(v58 + 240) || (v45 = 1, (*(_BYTE *)(v58 + 244) & 1) == 0) )
        v45 = 0;
      if ( !v45 || *(_DWORD *)(v58 + 252) )
      {
        v40 = (__int64 *)CPdcActivationClient::AcquirePdcTimerActivation(v4);
        v41 = (_QWORD *)*v3;
        v42 = *v40;
        v43 = v40[1];
        *v40 = 0LL;
        v40[1] = 0LL;
        *v41 = v42;
        v44 = (std::_Ref_count_base *)v41[1];
        v41[1] = v43;
        if ( v44 )
          std::_Ref_count_base::_Decref(v44);
        if ( *((_QWORD *)&Buf1 + 1) )
          std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&Buf1 + 1));
      }
    }
    v10 = (__int64 *)CSebNotifier::AcquireSebReference((struct CPdcActivationClient *)((char *)v4 + 112));
    v11 = (_QWORD *)*v3;
    v12 = *v10;
    v13 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    v11[2] = v12;
    v14 = (volatile signed __int32 *)v11[3];
    v11[3] = v13;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    v15 = (volatile signed __int32 *)*((_QWORD *)&Buf1 + 1);
    if ( *((_QWORD *)&Buf1 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&Buf1 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v16 = v58;
    v17 = *(_QWORD *)(v58 + 176);
    if ( v17 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v17 + 8) + 64LL))(v17 + 8) )
      {
        v24 = v58;
        if ( !*(_BYTE *)(v58 + 248) )
        {
LABEL_31:
          Buf1 = *(_OWORD *)(v24 + 272);
          if ( !memcmp_0(&Buf1, &GUID_00000000_0000_0000_0000_000000000000, 0x10uLL) )
            goto LABEL_32;
          v46 = (struct CPdcActivationClient *)((char *)v4 + 672);
          v63 = (struct CPdcActivationClient *)((char *)v4 + 672);
          std::_Mutex_base::lock((struct CPdcActivationClient *)((char *)v4 + 672));
          v47 = (char *)v4 + 752;
          *(_QWORD *)&Buf1 = (char *)v4 + 752;
          std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_CXvmPowerReferenceManager_________lambda_99dc9de587906d6f38e02b4d1e0ae12d___(
            &v60,
            *((_QWORD *)v4 + 94),
            *((_QWORD *)v4 + 95),
            &v58);
          if ( (_QWORD)v60 == *((_QWORD *)v4 + 95) )
          {
            try
            {
              v60 = 0LL;
              v81 = *(_OWORD *)(v58 + 288);
              v82 = *(_OWORD *)(v58 + 272);
              v48 = std::make_shared<CXvmPowerReferenceManager,_GUID const,_GUID const>(v65, &v82, &v81);
              v51 = *(CXvmPowerReferenceManager **)v48;
              v52 = *(std::_Ref_count_base **)(v48 + 8);
              *(_QWORD *)v48 = 0LL;
              *(_QWORD *)(v48 + 8) = 0LL;
              *(_QWORD *)&v60 = v51;
              *((_QWORD *)&v60 + 1) = v52;
              if ( v66 )
                std::_Ref_count_base::_Decref(v66);
            }
            catch ( ... )
            {
              wil::details::in1diag3::Log_CaughtException(
                retaddr,
                (void *)0x84,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                v50);
              v46 = v63;
              v52 = (std::_Ref_count_base *)*((_QWORD *)&v60 + 1);
              v51 = (CXvmPowerReferenceManager *)v60;
              v47 = (char *)Buf1;
              v4 = v64;
              v3 = v62;
            }
            if ( v51 )
            {
              v53 = *((_QWORD *)v47 + 1);
              if ( v53 == *((_QWORD *)v47 + 2) )
              {
                std::vector<std::shared_ptr<CXvmPowerReferenceManager>>::_Emplace_reallocate<std::shared_ptr<CXvmPowerReferenceManager> const &>(
                  v47,
                  *((_QWORD *)v47 + 1),
                  &v60);
                v52 = (std::_Ref_count_base *)*((_QWORD *)&v60 + 1);
                v51 = (CXvmPowerReferenceManager *)v60;
              }
              else
              {
                std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v53, &v60, v49);
                *((_QWORD *)v47 + 1) += 16LL;
              }
              v54 = CXvmPowerReferenceManager::AcquirePowerReference(v51);
              std::shared_ptr<CXvmPowerReference>::operator=(*v3 + 80LL, v54);
              if ( v66 )
                std::_Ref_count_base::_Decref(v66);
            }
            if ( !v52 )
              goto LABEL_70;
            v55 = v52;
          }
          else
          {
            v56 = CXvmPowerReferenceManager::AcquirePowerReference(*(CXvmPowerReferenceManager **)v60);
            std::shared_ptr<CXvmPowerReference>::operator=(*v3 + 80LL, v56);
            v55 = v66;
            if ( !v66 )
            {
LABEL_70:
              _Mtx_unlock(v46);
              v24 = v58;
LABEL_32:
              PowerReferenceSubBlocker = CSleepStudyPowerReferenceManager::CreatePowerReferenceSubBlocker(
                                           (char *)v4 + 416,
                                           v24,
                                           *v3 + 96LL);
              if ( PowerReferenceSubBlocker < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x93,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                  (const char *)(unsigned int)PowerReferenceSubBlocker,
                  v57);
              return v3;
            }
          }
          std::_Ref_count_base::_Decref(v55);
          goto LABEL_70;
        }
        v68 = *(_OWORD *)(v58 + 256);
        v69 = *(_OWORD *)(v58 + 272);
        v70 = *(_OWORD *)(v58 + 288);
        v71 = *(_OWORD *)(v58 + 304);
        v72 = *(_OWORD *)(v58 + 320);
        v73 = *(_OWORD *)(v58 + 336);
        v74 = *(_OWORD *)(v58 + 352);
        v75 = *(_OWORD *)(v58 + 368);
        v76 = *(_OWORD *)(v58 + 384);
        v77 = *(_OWORD *)(v58 + 400);
        v78 = *(_OWORD *)(v58 + 416);
        v79 = *(_QWORD *)(v58 + 432);
        v28 = (__int64 *)CCaptureNotifier::AcquireReference(
                           (struct CPdcActivationClient *)((char *)v4 + 320),
                           *((_QWORD *)&v77 + 1) > 0LL);
        v29 = (_QWORD *)*v3;
        v30 = *v28;
        v31 = v28[1];
        *v28 = 0LL;
        v28[1] = 0LL;
        v29[6] = v30;
        v32 = (std::_Ref_count_base *)v29[7];
        v29[7] = v31;
        if ( v32 )
          std::_Ref_count_base::_Decref(v32);
        if ( *((_QWORD *)&Buf1 + 1) )
          std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&Buf1 + 1));
        v33 = (__int64 *)std::make_shared<wil::com_ptr_t<Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession,wil::err_returncode_policy>,>(&Buf1);
        v34 = (_QWORD *)*v3;
        v35 = *v33;
        v36 = v33[1];
        *v33 = 0LL;
        v33[1] = 0LL;
        v34[8] = v35;
        v37 = (std::_Ref_count_base *)v34[9];
        v34[9] = v36;
        if ( v37 )
          std::_Ref_count_base::_Decref(v37);
        if ( *((_QWORD *)&Buf1 + 1) )
          std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&Buf1 + 1));
        v38 = lambda_c90e8a76b02d1fc01a85dd002f968322_::_lambda_c90e8a76b02d1fc01a85dd002f968322_(
                v65,
                *(unsigned int *)(v58 + 40),
                *v3 + 64LL,
                v4);
        v39 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_c90e8a76b02d1fc01a85dd002f968322__0_(
                v80,
                v38);
        CSerialWorkQueue::QueueWorkItem((char *)v4 + 448, v39);
        lambda_c90e8a76b02d1fc01a85dd002f968322_::__lambda_c90e8a76b02d1fc01a85dd002f968322_(v65);
LABEL_30:
        v24 = v58;
        goto LABEL_31;
      }
      v16 = v58;
    }
    v18 = CPlaybackNotifier::AcquireReference(
            (struct CPdcActivationClient *)((char *)v4 + 224),
            &Buf1,
            *(_QWORD *)(v16 + 192));
    v19 = (_QWORD *)*v3;
    v20 = *v18;
    v21 = v18[1];
    *v18 = 0LL;
    v18[1] = 0LL;
    v19[4] = v20;
    v22 = (volatile signed __int32 *)v19[5];
    v19[5] = v21;
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    v23 = (volatile signed __int32 *)*((_QWORD *)&Buf1 + 1);
    if ( *((_QWORD *)&Buf1 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&Buf1 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      }
    }
    goto LABEL_30;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x96,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v26);
    return v62;
  }
  return v3;
}
