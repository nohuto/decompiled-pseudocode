/*
 * XREFs of ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x1800900A4
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x180090378 (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180008980 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x1800089B0 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000A888 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x18000AA2C (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18005EAB4 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180081298 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x18013763C (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectPack::AddInternalVoiceProcessingMode(__int64 a1, __int64 a2, struct _GUID *a3, int a4)
{
  _DWORD *v7; // rax
  unsigned __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // r12d
  __int64 v11; // rax
  int v12; // r15d
  void **v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int OverridingChain; // ebx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 *v27; // rdi
  int v28; // eax
  struct _GUID v29; // xmm0
  SystemEffectDescriptor *v30; // rax
  GUID v31; // [rsp+40h] [rbp-88h] BYREF
  struct _GUID v32; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v33[56]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v34; // [rsp+98h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1584) + 56LL))(*(_QWORD *)(a1 + 1584)) == 1 )
  {
    v7 = (_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(a1 + 1616), 0LL);
    v8 = (unsigned __int64 *)(a1 + 1712);
    if ( *v7 )
    {
      v21 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, 0LL);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v21,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
      {
        v22 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 1712), 0LL);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                              v22,
                              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
        {
          OverridingChain = -2147418113;
          v15 = 3075LL;
          goto LABEL_6;
        }
        v23 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 1712), 0LL);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                              v23,
                              &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
        {
          v15 = 3076LL;
          goto LABEL_5;
        }
        v25 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((unsigned __int64 *)(a1 + 1888), 0LL, v24);
        if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                              v25,
                              v26,
                              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
        {
          v15 = 3078LL;
          goto LABEL_5;
        }
      }
    }
    else
    {
      v9 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, 0LL);
      v10 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              v9,
              &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf);
      v11 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 1712), 0LL);
      v12 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              v11,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(a1 + 1616), 0LL) = 1;
      v13 = (void **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 1712), 0LL);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v13);
      v14 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 1712), 0LL);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            v14,
                            &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
      {
        v15 = 3051LL;
LABEL_5:
        OverridingChain = -2147024882;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain);
        return (unsigned int)OverridingChain;
      }
      *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(a1 + 1752), 0LL) = 1;
      if ( v10 == -1 )
      {
        v20 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((unsigned __int64 *)(a1 + 1888), 0LL, v18);
        if ( v12 == -1 )
        {
          if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                                v20,
                                v19,
                                &GUID_00000000_0000_0000_0000_000000000000) )
          {
            v15 = 3066LL;
            goto LABEL_5;
          }
        }
        else if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                                   v20,
                                   v19,
                                   &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
        {
          v15 = 3062LL;
          goto LABEL_5;
        }
      }
    }
    v27 = (unsigned __int64 *)(a1 + 1456);
    v31 = GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    v28 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)(a1 + 1456), 0LL);
    v29 = *a3;
    v34 = 0LL;
    v32 = v29;
    OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                        v28,
                        (__int64)&v32,
                        1,
                        (int)&v31,
                        2,
                        0,
                        (__int64)v33);
    if ( OverridingChain < 0 )
    {
      v15 = 3084LL;
      goto LABEL_6;
    }
    if ( !a4 )
    {
      v30 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](v27, 0LL);
      v32 = *a3;
      OverridingChain = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v30, &v32);
      if ( OverridingChain < 0 )
      {
        v15 = 3089LL;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
