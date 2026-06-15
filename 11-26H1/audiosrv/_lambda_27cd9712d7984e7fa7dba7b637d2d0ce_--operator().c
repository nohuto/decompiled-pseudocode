/*
 * XREFs of _lambda_27cd9712d7984e7fa7dba7b637d2d0ce_::operator() @ 0x180135BEC
 * Callers:
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180090508 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180008980 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800095A0 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18000A0C0 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000A888 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_27cd9712d7984e7fa7dba7b637d2d0ce_::operator()(
        LPCRITICAL_SECTION *a1,
        int a2,
        __int64 a3,
        SystemEffectDescriptor *a4,
        int a5)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v8; // r15
  SystemEffectDescriptor *v9; // rbx
  int v10; // r14d
  __int64 SupportedConnectorModesInternal; // rsi
  int DefaultEffectChainClsids; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rbx
  GUID v18; // xmm6
  int v19; // r15d
  __int64 v20; // rax
  int OverridingChain; // esi
  int v22; // eax
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rax
  BOOL v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // [rsp+48h] [rbp-71h]
  GUID v34; // [rsp+58h] [rbp-61h] BYREF
  void *v35[2]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v36[56]; // [rsp+78h] [rbp-41h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+57h]
  __int64 v39; // [rsp+118h] [rbp+5Fh]
  unsigned int v40; // [rsp+120h] [rbp+67h] BYREF
  __int64 v41; // [rsp+128h] [rbp+6Fh]
  SystemEffectDescriptor *v42; // [rsp+130h] [rbp+77h]

  v42 = a4;
  v41 = a3;
  v6 = a2;
  v8 = a2;
  v9 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)&(*a1)[36], a2);
  v42 = v9;
  v10 = 0;
  v35[0] = 0LL;
  v35[1] = 0LL;
  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(
                                      *a1,
                                      (struct _RTL_CRITICAL_SECTION *)(unsigned int)v6,
                                      1LL,
                                      0);
  v39 = SupportedConnectorModesInternal;
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               v9,
                               (struct CAudioSignalProcessingModeArray *)v35,
                               &v40,
                               0LL);
  if ( DefaultEffectChainClsids < 0 )
  {
    v13 = 2969LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultEffectChainClsids);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
    v15 = *(_QWORD *)(a3 + 56);
    if ( v15 )
    {
      LOBYTE(v14) = v15 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v14);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return (unsigned int)DefaultEffectChainClsids;
  }
  if ( a5 <= 0 )
  {
LABEL_17:
    if ( (_DWORD)v6 != 1
      && !v10
      && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
    {
      v24 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              v23,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v25 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v36, a3);
      v26 = v24 != -1;
      v34 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                   (int)v42,
                                   (__int64)&v34,
                                   1,
                                   (int)&unk_18018A628,
                                   1,
                                   v26,
                                   v25);
      if ( DefaultEffectChainClsids < 0 )
      {
        v13 = 3000LL;
        goto LABEL_3;
      }
      v34 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( !(unsigned int)EffectPack::IsAPOModeSupported(*a1, 1uLL, (__m128i *)&v34, v6) )
      {
        v30 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)&(*a1)[36].OwningThread, v8);
        *(_QWORD *)&v37 = 0LL;
        v34 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                     v30,
                                     (__int64)&v34,
                                     0,
                                     0,
                                     2,
                                     v26,
                                     (__int64)v36);
        if ( DefaultEffectChainClsids < 0 )
        {
          v13 = 3006LL;
          goto LABEL_3;
        }
      }
    }
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
    v32 = *(_QWORD *)(a3 + 56);
    if ( v32 )
    {
      LOBYTE(v31) = v32 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 32LL))(v32, v31);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 0LL;
  }
  v33 = a5;
  v17 = 0LL;
  while ( 1 )
  {
    v18 = *off_1801D3320[v17];
    v34 = v18;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &v34) == -1 )
    {
      v19 = 0;
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64)v35, &v34) == -1 )
        goto LABEL_15;
    }
    else
    {
      v19 = 1;
    }
    v20 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v36, a3);
    v34 = v18;
    OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                        (int)v42,
                        (__int64)&v34,
                        1,
                        (int)&unk_18018A628,
                        1,
                        v19,
                        v20);
    if ( OverridingChain < 0 )
      break;
    v34 = v18;
    if ( !(unsigned int)EffectPack::IsAPOModeSupported(*a1, 1uLL, (__m128i *)&v34, v6) )
    {
      v22 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)&(*a1)[36].OwningThread, v6);
      *(_QWORD *)&v37 = 0LL;
      v34 = v18;
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(v22, (__int64)&v34, 0, 0, 2, v19, (__int64)v36);
      if ( OverridingChain < 0 )
      {
        v27 = 2986LL;
        goto LABEL_24;
      }
    }
    ++v10;
    SupportedConnectorModesInternal = v39;
LABEL_15:
    if ( ++v17 >= v33 )
    {
      v8 = v6;
      goto LABEL_17;
    }
  }
  v27 = 2980LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
  v29 = *(_QWORD *)(a3 + 56);
  if ( v29 )
  {
    LOBYTE(v28) = v29 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v28);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return (unsigned int)OverridingChain;
}
