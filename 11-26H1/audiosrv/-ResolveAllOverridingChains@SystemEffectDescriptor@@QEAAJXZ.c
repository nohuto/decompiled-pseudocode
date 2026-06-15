/*
 * XREFs of ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010920
 * Callers:
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18000CB9C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F634 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000F84C (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F8E8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x18000FCE4 (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000FE80 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180011074 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAXXZ @ 0x180010CC0 (-RemoveAll@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqual.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemEffectDescriptor::ResolveAllOverridingChains(SystemEffectDescriptor *this)
{
  __int64 v1; // r13
  struct _RTL_CRITICAL_SECTION *v3; // r12
  unsigned int v4; // edx
  volatile signed __int32 **v5; // rbp
  int v6; // ebx
  __int64 v7; // r14
  int v8; // edi
  __int64 i; // r15
  __int64 v10; // rax
  volatile signed __int32 **v11; // rcx
  __int64 v12; // rax
  volatile signed __int32 **v13; // rdi
  __int64 v14; // rsi
  volatile signed __int32 *v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  std::_Ref_count_base *v22; // rax
  int v23; // [rsp+20h] [rbp-78h]
  __int64 v24; // [rsp+28h] [rbp-70h] BYREF
  __int64 v25; // [rsp+30h] [rbp-68h]
  __int64 v26; // [rsp+38h] [rbp-60h]
  std::_Ref_count_base *v27; // [rsp+40h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char *v29; // [rsp+A0h] [rbp+8h] BYREF
  std::_Ref_count_base *v30; // [rsp+A8h] [rbp+10h]
  std::_Ref_count_base *v31; // [rsp+B0h] [rbp+18h]
  SystemEffectDescriptor *v32; // [rsp+B8h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 52) )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v5 = 0LL;
    v24 = 0LL;
    v6 = 0;
    v25 = 0LL;
    v7 = 0LL;
    v8 = 0;
    for ( i = 0LL; ; i += 16LL )
    {
      if ( v8 >= *((_DWORD *)this + 10) )
      {
        v8 = 0;
        v7 = 0LL;
        i = (__int64)v5;
        goto LABEL_17;
      }
      if ( i < 0 )
        break;
      v1 = *((_QWORD *)this + 4);
      if ( v6 == (_DWORD)v7 )
      {
        if ( (_DWORD)v7 )
        {
          v7 = (unsigned int)(2 * v6);
          if ( (v6 & 0x40000000) != 0 )
            goto LABEL_34;
        }
        else
        {
          v7 = 1LL;
        }
        if ( (unsigned int)v7 > 0x7FFFFFFuLL
          || (v10 = _o__recalloc(v5, (unsigned int)v7, 16LL), (v5 = (volatile signed __int32 **)v10) == 0LL) )
        {
LABEL_34:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F4,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            (int)v3);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v24);
          if ( v3 )
            LeaveCriticalSection(v3);
          return 2147942414LL;
        }
        HIDWORD(v25) = v7;
        v24 = v10;
      }
      v11 = &v5[2 * v6];
      if ( v11 )
      {
        *v11 = 0LL;
        v11[1] = 0LL;
        v12 = *(_QWORD *)(v1 + i + 8);
        if ( v12 )
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        *v11 = *(volatile signed __int32 **)(v1 + i);
        v11[1] = *(volatile signed __int32 **)(v1 + i + 8);
      }
      LODWORD(v25) = ++v6;
      ++v8;
    }
    ATL::_AtlRaiseException(0xC000008C, v4);
LABEL_55:
    *(_BYTE *)(v1 + 20) = 1;
LABEL_51:
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    while ( 1 )
    {
      ++v8;
      ++v7;
      i += 16LL;
LABEL_17:
      if ( v8 >= v6 )
        break;
      if ( v7 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, v4);
        __debugbreak();
      }
      v1 = *(_QWORD *)i;
      if ( *(_BYTE *)(*(_QWORD *)i + 20LL) )
      {
        v17 = *(_QWORD *)(v1 + 32);
        if ( v17 )
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v26 = *(_QWORD *)(v1 + 24);
        v18 = v26;
        v31 = *(std::_Ref_count_base **)(v1 + 32);
        v30 = v31;
        v27 = v31;
        *(_DWORD *)(v1 + 16) = 0;
        *(_BYTE *)(v1 + 20) = 0;
        v29 = (char *)v1;
        v32 = this;
        v19 = *(_QWORD *)(v18 + 56);
        if ( !v19 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          JUMPOUT(0x180010CABLL);
        }
        v20 = (*(__int64 (__fastcall **)(__int64, SystemEffectDescriptor **, char **))(*(_QWORD *)v19 + 16LL))(
                v19,
                &v32,
                &v29);
        LODWORD(v29) = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x63,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v20,
            (int)v3);
          if ( v31 )
            std::_Ref_count_base::_Decref(v30);
          v21 = (unsigned int)v29;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FA,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v29,
            v23);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v24);
          if ( v3 )
            LeaveCriticalSection(v3);
          return v21;
        }
        if ( *(_DWORD *)(v1 + 16) )
        {
LABEL_49:
          v22 = v30;
        }
        else
        {
          v26 = 0LL;
          v22 = 0LL;
          v30 = 0LL;
          if ( v31 )
          {
            std::_Ref_count_base::_Decref(v31);
            goto LABEL_49;
          }
        }
        if ( (*(_BYTE *)(v1 + 16) & 1) != 0 )
          goto LABEL_55;
        goto LABEL_51;
      }
    }
    if ( v5 )
    {
      if ( v6 > 0 )
      {
        v13 = v5 + 1;
        v14 = (unsigned int)v6;
        do
        {
          v15 = *v13;
          if ( *v13 )
          {
            if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
              if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
            }
          }
          v13 += 2;
          --v14;
        }
        while ( v14 );
      }
      free(v5);
    }
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  return 0LL;
}
