/*
 * XREFs of ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180090508
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x180090378 (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180008980 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x1800089B0 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18000A888 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18000E2D8 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800B5998 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _lambda_27cd9712d7984e7fa7dba7b637d2d0ce_::operator() @ 0x180135BEC (_lambda_27cd9712d7984e7fa7dba7b637d2d0ce_--operator().c)
 *     ?IsVssApoAvailable@EffectPack@@SA_NXZ @ 0x18013B0E0 (-IsVssApoAvailable@EffectPack@@SA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectPack::AddProcessingModeSupport_for_VSS(EffectPack *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r9d
  int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  int OverridingChain; // ebx
  __int64 v11; // rdx
  int v13; // r9d
  GUID v14; // [rsp+40h] [rbp+7h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+50h] [rbp+17h] BYREF
  EffectPack *v16; // [rsp+58h] [rbp+1Fh]
  __int64 (__fastcall ***v17)(); // [rsp+88h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]
  EffectPack *v19; // [rsp+A0h] [rbp+67h] BYREF

  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 198) + 56LL))(*((_QWORD *)this + 198))
    && (!(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v3, v2, v4, v5)
     || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform())
    && EffectPack::IsVssApoAvailable() )
  {
    if ( *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)this + 202, 0LL) )
    {
      v19 = this;
      v15 = off_1801734A0;
      v16 = this;
      v17 = &v15;
      OverridingChain = lambda_27cd9712d7984e7fa7dba7b637d2d0ce_::operator()(
                          (unsigned int)&v19,
                          0,
                          (unsigned int)&v15,
                          v6,
                          3);
      if ( OverridingChain < 0 )
      {
        v11 = 3014LL;
        goto LABEL_8;
      }
      if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(*((CEndpointCharacteristics **)this + 198)) )
      {
        v16 = this;
        v15 = off_180178AB8;
        v17 = &v15;
        OverridingChain = lambda_27cd9712d7984e7fa7dba7b637d2d0ce_::operator()(
                            (unsigned int)&v19,
                            1,
                            (unsigned int)&v15,
                            v13,
                            4);
        if ( OverridingChain < 0 )
        {
          v11 = 3023LL;
          goto LABEL_8;
        }
      }
    }
    else
    {
      v7 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 180, 0LL);
      v16 = this;
      v15 = off_1801734A0;
      v17 = &v15;
      v8 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 214, 0LL);
      v14 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
             v8,
             &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                          v7,
                          (__int64)&v14,
                          1,
                          (int)&unk_18018A628,
                          1,
                          v9 != -1,
                          (__int64)&v15);
      if ( OverridingChain < 0 )
      {
        v11 = 2944LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain);
        return (unsigned int)OverridingChain;
      }
    }
  }
  return 0LL;
}
