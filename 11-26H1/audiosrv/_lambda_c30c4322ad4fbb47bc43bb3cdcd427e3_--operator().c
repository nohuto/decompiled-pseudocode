/*
 * XREFs of _lambda_c30c4322ad4fbb47bc43bb3cdcd427e3_::operator() @ 0x180136F24
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x18013EE60 (std--_Func_impl_no_alloc__lambda_c30c4322ad4fbb47bc43bb3cdcd427e3__long_SystemEffec_ea_18013EE60.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009970 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18000AE0C (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18004CEDC (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator() @ 0x18005E7EC (_lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_--operator().c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180081298 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800AF6AC (-LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MI.c)
 *     _lambda_828de6d9baa511e7d1fe4862c107884c_::operator() @ 0x180136500 (_lambda_828de6d9baa511e7d1fe4862c107884c_--operator().c)
 *     ?IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ @ 0x18013ADB4 (-IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_c30c4322ad4fbb47bc43bb3cdcd427e3_::operator()(
        struct _GUID *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *a2,
        void **a3)
{
  __int64 v3; // rax
  int DelayedAECInsertionPolicy; // edi
  struct _AEC_POLICY_RESULTS *v8; // r12
  struct EffectPack *v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  struct _GUID *v12; // r14
  GUID *v13; // rax
  unsigned __int64 Data1; // rdx
  unsigned __int64 *v15; // rcx
  __int64 v16; // rax
  struct _GUID *v17; // r15
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v18; // rdi
  int v19; // esi
  int v20; // esi
  __int64 v21; // rax
  int v22; // eax
  int updated; // esi
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // r8
  const struct _tlgProvider_t *v34; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v35; // [rsp+20h] [rbp-40h]
  struct _GUID v36; // [rsp+30h] [rbp-30h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  struct _AEC_POLICY_RESULTS *v38; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v40; // [rsp+A0h] [rbp+40h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v41; // [rsp+A8h] [rbp+48h]
  void **v42; // [rsp+B0h] [rbp+50h]

  v42 = a3;
  v41 = a2;
  v40 = 0;
  v38 = 0LL;
  v3 = *(_QWORD *)&a1->Data1;
  *(_OWORD *)pvar = 0LL;
  DelayedAECInsertionPolicy = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)(v3 + 1584) + 72LL)
                                                                                                  + 40LL))(
                                *(_QWORD *)(*(_QWORD *)(v3 + 1584) + 72LL),
                                a1->Data4,
                                pvar);
  if ( DelayedAECInsertionPolicy < 0 )
    goto LABEL_2;
  v8 = v38;
  if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) != 68 || *(_DWORD *)v38 != 5 )
    goto LABEL_37;
  v9 = *(struct EffectPack **)&a1->Data1;
  v10 = *(_QWORD *)(*(_QWORD *)&a1->Data1 + 1584LL);
  v36 = a1[6];
  DelayedAECInsertionPolicy = EffectPolicy::GetDelayedAECInsertionPolicy(
                                v9,
                                *(struct IPropertyStore **)(v10 + 72),
                                a2,
                                &v36,
                                (enum INBOX_AEC_INSERTION_POLICY *)&v40,
                                v38);
  if ( DelayedAECInsertionPolicy < 0 )
  {
    PropVariantClear(pvar);
LABEL_2:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1B,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DelayedAECInsertionPolicy);
    return (unsigned int)DelayedAECInsertionPolicy;
  }
  v11 = v40;
  v12 = a1 + 7;
  if ( v40 == 2 )
  {
    if ( v12->Data1 != 3
      || (unsigned int)CEndpointCharacteristics::IsInterleavedLoopbackSupported(*(CEndpointCharacteristics **)(*(_QWORD *)&a1->Data1 + 1584LL)) )
    {
      v13 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    }
    else
    {
      v13 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
    }
  }
  else
  {
    v13 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
  }
  Data1 = (int)v12->Data1;
  v15 = (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1712LL);
  v36 = *v13;
  v16 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v15, Data1);
  v17 = a1 + 6;
  v18 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)&a1[7];
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       v16,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
  {
    if ( !v11 )
      goto LABEL_35;
    DelayedAECInsertionPolicy = lambda_828de6d9baa511e7d1fe4862c107884c_::operator()((int *)a1[7].Data4);
    if ( DelayedAECInsertionPolicy < 0 )
      goto LABEL_2;
    v18 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)&a1[7];
  }
  if ( v11 )
  {
    v19 = v11 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          v21 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1712LL),
                  (int)v12->Data1);
          v22 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v21, &a1[6].Data1);
          updated = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                      (__int64)v41,
                      v42,
                      1u,
                      (__int64)&v36,
                      1,
                      v22 != -1);
          if ( updated >= 0 )
          {
            v24 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                    (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1984LL),
                    (int)v12->Data1);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v24, v17) != -1 )
            {
              v25 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                      (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1712LL),
                      *(int *)v18);
              if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v25, v17) )
              {
LABEL_25:
                v26 = -2147024882;
                goto LABEL_38;
              }
              v27 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                      (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1984LL),
                      *(int *)v18);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v27, &a1[6].Data1);
              v18 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)&a1[7];
            }
            goto LABEL_35;
          }
LABEL_28:
          PropVariantClear(pvar);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD1B,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)updated);
          return (unsigned int)updated;
        }
LABEL_37:
        PropVariantClear(pvar);
        v26 = -2147418113;
        goto LABEL_38;
      }
    }
    v28 = (__int64)v41;
    updated = SystemEffectDescriptor::UpdateEffectsInOverridingChain((__int64)v41, v42, 1u, (__int64)&v36, 2, 0);
    if ( updated < 0 )
      goto LABEL_28;
    v29 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
            (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1712LL),
            *(int *)(v28 + 48));
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v29, v17) != -1 )
    {
      v30 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1984LL),
              *(int *)v18);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v30, v17) )
        goto LABEL_25;
      v31 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1712LL),
              *(int *)(v28 + 48));
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v31, &a1[6].Data1);
      v18 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)&a1[7];
    }
    if ( *((_DWORD *)v8 + 16) == 8 )
    {
      v32 = *(_DWORD *)(*(_QWORD *)&a1->Data1 + 2112LL);
      if ( v32 )
      {
        *(_DWORD *)(*(_QWORD *)&a1->Data1 + 2112LL) = v32 - 1;
        *((_DWORD *)v42 + 4) = 1;
      }
    }
  }
LABEL_35:
  *(struct _GUID *)((char *)v8 + 44) = *lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator()((__int64)a1[9].Data4, &v36);
  v35 = a1[7].Data1;
  v33 = *(_QWORD *)(*(_QWORD *)&a1->Data1 + 1584LL);
  v34 = *(const struct _tlgProvider_t **)(*(_QWORD *)&a1->Data1 + 2120LL);
  v36 = a1[6];
  LogAecEffectPolicyInsertion(v34, v8, *(const unsigned __int16 **)(v33 + 48), &v36, v35);
  v26 = CEndpointCharacteristics::PersistAECPolicy(
          *(CEndpointCharacteristics **)(*(_QWORD *)&a1->Data1 + 1584LL),
          *v18,
          (const struct _tagpropertykey *)a1->Data4,
          v8);
  PropVariantClear(pvar);
  if ( v26 >= 0 )
    return 0LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1B,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v26);
  return (unsigned int)v26;
}
