/*
 * XREFs of ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140043A00 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     DirectComposition::Memory::AllocateAndClear @ 0x140045C9C (DirectComposition--Memory--AllocateAndClear.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x140056790 (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x14007D67C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     ?CreateRegionInfo@DeadzoneJumping@CCursorClip@@AEAAPEAURegionInfo@12@PEBUCInputSpaceRegion@@@Z @ 0x14008F770 (-CreateRegionInfo@DeadzoneJumping@CCursorClip@@AEAAPEAURegionInfo@12@PEBUCInputSpaceRegion@@@Z.c)
 *     ?CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z @ 0x14008F7C0 (-CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1400AE3A8 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1400DD8E0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400DFA30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@@Z @ 0x1400E11C0 (-CreateProfileUserName@@YAPEAU_UNICODE_STRING@@PEAU-$Win32RawOptionalLockedItemAlways@UtagPROFIL.c)
 *     FastGetProfileValue @ 0x1400E13A0 (FastGetProfileValue.c)
 *     FastGetProfileStringW @ 0x1400E1B40 (FastGetProfileStringW.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400E2678 (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 *     AllocateW32ThreadImpl @ 0x140102ED0 (AllocateW32ThreadImpl.c)
 *     HMInitializeSecurityDescriptor @ 0x140107F60 (HMInitializeSecurityDescriptor.c)
 *     AllocAce @ 0x140108680 (AllocAce.c)
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x14010F0C0 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x14010F1DC (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x14010F4E8 (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 *     SetHandleFlag @ 0x14012A7E0 (SetHandleFlag.c)
 *     CreateSecurityDescriptor @ 0x14012DC70 (CreateSecurityDescriptor.c)
 *     xxxUserChangeDisplaySettings @ 0x140138F20 (xxxUserChangeDisplaySettings.c)
 *     ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1401578FC (-EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ.c)
 *     UserReAllocPoolWithQuota @ 0x140166FE0 (UserReAllocPoolWithQuota.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x140184C20 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x140184D98 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ??$DuplicateUnicodeStringFromUser@$0A@@@YAJV?$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_UNICODE_STRING@@@Z @ 0x1401874D4 (--$DuplicateUnicodeStringFromUser@$0A@@@YAJV-$UserModePointer@UUSERMODE_UNICODE_STRING@@@@KPEAU_.c)
 *     AllocateW32ProcessImpl @ 0x14018A480 (AllocateW32ProcessImpl.c)
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x14018B1F4 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     NtUserToUnicodeEx @ 0x140193C60 (NtUserToUnicodeEx.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140194670 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     NtUserSetManipulationInputTarget @ 0x140195D40 (NtUserSetManipulationInputTarget.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401A4A00 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     InitSystemThread @ 0x1401B5410 (InitSystemThread.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1401BA394 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     FastGetProfileKeysW @ 0x1401CE190 (FastGetProfileKeysW.c)
 *     NtConfigureInputSpace @ 0x1401E04B0 (NtConfigureInputSpace.c)
 *     NtSetShellCursorState @ 0x1401E1D00 (NtSetShellCursorState.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1401E3DB0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetKeyEventInfo @ 0x1401E45E0 (NtUserGetKeyEventInfo.c)
 *     NtUserGetRawPointerDeviceData @ 0x1401E4D40 (NtUserGetRawPointerDeviceData.c)
 *     NtUserInitializeGenericHidInjection @ 0x1401E4FC0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401E5550 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1401E5960 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectPointerInput @ 0x1401E6D30 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401E7BB0 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1401E89E0 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 *     SynthesizeMitTouchInput @ 0x140220114 (SynthesizeMitTouchInput.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x14022B3D4 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_.c)
 *     ?SetBufferProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140246F70 (-SetBufferProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     InitCreateUserSubsystem @ 0x1402F3C80 (InitCreateUserSubsystem.c)
 *     InitSecurity @ 0x1402F408C (InitSecurity.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall Win32AllocPoolWithQuotaZInitImpl(int a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdi
  unsigned __int64 *Pool2; // rax
  _DWORD *v10; // rax
  unsigned __int64 i; // r14
  char v12; // r15
  __int64 v13; // rsi
  PVOID BackTrace[23]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = W32GetUserSessionState(a1, a2, a3) + 72016;
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 )
  {
    if ( v6 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v5,
             v3)
        && v4 + 16 >= v4 )
      {
        Pool2 = (unsigned __int64 *)ExAllocatePool2(257LL, v4 + 16, (unsigned int)v3);
        v7 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)(v5 + 112)),
              *Pool2 = v3,
              v7 = (__int64)(Pool2 + 2),
              Pool2 == (unsigned __int64 *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v5 + 8),
            (const void *)v3);
        }
      }
      else
      {
        return 0LL;
      }
    }
    else if ( v6 == 2 )
    {
      if ( ((unsigned int)v3 & *(_DWORD *)(v5 + 80)) == (_DWORD)v3 )
      {
        v10 = (_DWORD *)(v5 + 48);
        v7 = 0LL;
        for ( i = 0LL; ; ++i )
        {
          if ( i >= *(unsigned int *)(v5 + 84) )
            goto LABEL_14;
          if ( *v10 == (_DWORD)v3 )
            break;
          ++v10;
        }
        v12 = 0;
        if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
        {
          v12 = 1;
          v4 += 16LL;
        }
        v13 = ExAllocatePool2(257LL, v4, (unsigned int)v3);
        if ( v13 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 128));
          memset(BackTrace, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v12 && (unsigned __int64)(v13 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v5,
                                    v13,
                                    i,
                                    BackTrace) )
              return v13 + 16;
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v5,
                                       v13,
                                       i,
                                       BackTrace) )
          {
            return v13;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 136));
          _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v13);
        }
      }
      else
      {
LABEL_14:
        v7 = ExAllocatePool2(257LL, v4, (unsigned int)v3);
        if ( v7 )
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
      }
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v7 = ExAllocatePool2(257LL, v4, (unsigned int)v3);
    if ( v7 )
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
  }
  return v7;
}
