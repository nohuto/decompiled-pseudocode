/*
 * XREFs of ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000A1F8
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800AEE64 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180008980 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18000924C (-AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ.c)
 *     ?GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4ApoType@@_NAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18000A7B0 (-GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x18000AA6C (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000B1A8 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18000B9E4 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x18014FDF0 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EffectPack::FixupProcessingModeSupport(EffectPack *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rsi
  unsigned int v7; // r15d
  int v9; // edx
  SystemEffectDescriptor *v10; // rax
  __int64 v11; // r8
  int v12; // ebx
  __int64 v13; // rdx
  SystemEffectDescriptor *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rax
  int FilteredProcessingModesForStreaming; // eax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r15d
  __int64 v28; // r12
  unsigned int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // r15d
  int v37; // eax
  __int64 v38; // rdx
  unsigned __int64 v39; // r9
  SystemEffectDescriptor *v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  SystemEffectDescriptor *v43; // rax
  unsigned int i; // ebx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // rdx
  int v49; // eax
  int OverridingChain; // eax
  int v51; // [rsp+28h] [rbp-69h]
  int v52; // [rsp+28h] [rbp-69h]
  int v53; // [rsp+28h] [rbp-69h]
  int v54[2]; // [rsp+28h] [rbp-69h]
  void *v55[2]; // [rsp+48h] [rbp-49h] BYREF
  void *v56; // [rsp+58h] [rbp-39h] BYREF
  __int64 v57; // [rsp+60h] [rbp-31h]
  void *Block[2]; // [rsp+68h] [rbp-29h] BYREF
  struct _GUID v59; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v60[56]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v61; // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v4 = a2;
  v6 = (int)a2;
  if ( (unsigned __int64)(int)a2 >= *((_QWORD *)this + 202) )
    goto LABEL_68;
  v7 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 203) + 4LL * (int)a2) )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 || (_DWORD)a2 == 2 )
      return 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v16 = 96LL * (int)a2;
    v17 = *((_QWORD *)this + 196);
    v18 = *(_DWORD *)(v17 + v16 + 1328);
    v19 = *(_QWORD *)(v17 + v16 + 1336);
    v20 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v21 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    while ( v7 < v18 )
    {
      v22 = (_QWORD *)(v19 + 16LL * v7);
      v23 = *v22 - v21;
      if ( *v22 == v21 )
        v23 = v22[1] - v20;
      if ( v23 )
      {
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v56, v22) )
        {
          v12 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4DA,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x8007000ELL,
            v51);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD93,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x8007000ELL,
            v52);
          goto LABEL_65;
        }
        v20 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        v21 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      }
      ++v7;
    }
    v55[0] = 0LL;
    v55[1] = 0LL;
    LOBYTE(a4) = *((_BYTE *)this + 1592);
    FilteredProcessingModesForStreaming = EffectPack::GetFilteredProcessingModesForStreaming(this, v4, 1LL, a4);
    v12 = FilteredProcessingModesForStreaming;
    if ( FilteredProcessingModesForStreaming < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD97,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)FilteredProcessingModesForStreaming,
        (int)v55);
      goto LABEL_64;
    }
    Block[0] = 0LL;
    Block[1] = 0LL;
    v26 = *((_QWORD *)this + 196);
    v27 = *(_DWORD *)(v16 + v26 + 1392);
    v28 = *(_QWORD *)(v16 + v26 + 1400);
    v29 = 0;
    v30 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v31 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    while ( v29 < v27 )
    {
      v25 = (_QWORD *)(v28 + 16LL * v29);
      v32 = *v25 - v31;
      if ( *v25 == v31 )
        v32 = v25[1] - v30;
      if ( v32 )
      {
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(Block, v25) )
        {
          v12 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4DA,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x8007000ELL,
            (int)v55);
          v33 = 3483LL;
          goto LABEL_35;
        }
        v30 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        v31 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      }
      ++v29;
    }
    if ( v6 < *((_QWORD *)this + 180) )
    {
      v34 = *((_QWORD *)this + 196);
      v35 = *(unsigned int *)(v16 + v34 + 1312);
      v36 = v57;
      if ( (int)v57 <= 0 )
      {
        *(_QWORD *)v54 = *(_QWORD *)(v16 + v34 + 1320);
        v12 = SystemEffectChainDescriptor::CreateEffectChain(&v56, 0LL, 0LL, (unsigned int)v35);
        v39 = (unsigned int)v12;
        if ( v12 < 0 )
        {
          v38 = 166LL;
LABEL_47:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v38,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v39,
            v54[0]);
          v33 = 3488LL;
LABEL_35:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v33,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v12,
            v53);
          if ( Block[0] )
            free(Block[0]);
          if ( v55[0] )
            free(v55[0]);
          if ( v56 )
            free(v56);
          return (unsigned int)v12;
        }
      }
      else
      {
        v54[0] = 0;
        v37 = SystemEffectChainDescriptor::CreateEffectChain(&v56, v35, *(_QWORD *)(v16 + v34 + 1320), 0LL);
        v12 = v37;
        if ( v37 < 0 )
        {
          v38 = 161LL;
          v39 = (unsigned int)v37;
          goto LABEL_47;
        }
      }
      v40 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                        (unsigned __int64 *)this + 182,
                                        v6);
      v41 = SystemEffectDescriptor::SetDefaultEffectChain(
              v40,
              (struct CAudioSignalProcessingModeArray *)v55,
              *(_DWORD *)(96 * (v6 + 14) + *((_QWORD *)this + 196)),
              *(const struct _GUID **)(v16 + *((_QWORD *)this + 196) + 1352));
      v12 = v41;
      if ( v41 >= 0 )
      {
        v43 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                          (unsigned __int64 *)this + 184,
                                          v6);
        v41 = SystemEffectDescriptor::SetDefaultEffectChain(
                v43,
                (struct CAudioSignalProcessingModeArray *)Block,
                *(_DWORD *)(v16 + *((_QWORD *)this + 196) + 1376),
                *(const struct _GUID **)(v16 + *((_QWORD *)this + 196) + 1384));
        v12 = v41;
        if ( v41 >= 0 )
        {
          *(_QWORD *)&v59.Data1 = 0LL;
          *(_QWORD *)v59.Data4 = 0LL;
          for ( i = 0; (int)i < v36; ++i )
          {
            v45 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v56, i);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v55, v45) == -1 )
            {
              v46 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v56, i);
              if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v59, v46) )
              {
                v12 = -2147024882;
                v47 = 2147942414LL;
                v48 = 3513LL;
LABEL_62:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v48,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)v47,
                  v54[0]);
                ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v59);
                goto LABEL_63;
              }
            }
          }
          if ( *(int *)v59.Data4 > 0 )
          {
            v49 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 182, v6);
            v61 = 0LL;
            OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                                v49,
                                (unsigned int)&v59,
                                0,
                                0,
                                2,
                                1,
                                (__int64)v60);
            v12 = OverridingChain;
            if ( OverridingChain < 0 )
            {
              v47 = (unsigned int)OverridingChain;
              v48 = 3520LL;
              goto LABEL_62;
            }
          }
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v59);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v55);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v56);
          return 0LL;
        }
        v42 = 3496LL;
      }
      else
      {
        v42 = 3492LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v42,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v41,
        v54[0]);
LABEL_63:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
LABEL_64:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v55);
LABEL_65:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v56);
      return (unsigned int)v12;
    }
    _o_terminate(v30, v25, v31);
LABEL_68:
    _o_terminate(this, a2, a3);
    __debugbreak();
    JUMPOUT(0x18000A7A8LL);
  }
  if ( (_DWORD)a2 == 3
    || !EffectPackConfiguration::AposRegisteredAsLfxGfx(*((EffectPackConfiguration **)this + 196))
    || v9 )
  {
    return 0LL;
  }
  v10 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 180, v6);
  v11 = *((_QWORD *)this + 196);
  v59 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  v12 = SystemEffectDescriptor::SetDefaultEffectChain(
          v10,
          &v59,
          *(_DWORD *)(v11 + 1792),
          *(const struct _GUID **)(v11 + 1800));
  if ( v12 >= 0 )
  {
    v14 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 182, v6);
    v15 = *((_QWORD *)this + 196);
    v59 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v12 = SystemEffectDescriptor::SetDefaultEffectChain(
            v14,
            &v59,
            *(_DWORD *)(v15 + 1808),
            *(const struct _GUID **)(v15 + 1816));
    if ( v12 < 0 )
    {
      v13 = 3464LL;
      goto LABEL_9;
    }
    return 0LL;
  }
  v13 = 3463LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v12,
    v51);
  return (unsigned int)v12;
}
