/*
 * XREFs of ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x140042310 (NtDCompositionConfirmFrame.c)
 *     EngAllocMem @ 0x140044130 (EngAllocMem.c)
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x140059530 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4Compositi.c)
 *     ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@Cxx@@QEAA_NI@Z @ 0x1400A5538 (-Initialize@EntryDataLookupTable@GdiHandleEntryTable@Cxx@@QEAA_NI@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1400A603C (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     EtwTraceDWMGetDirtyRegion @ 0x1400A6100 (EtwTraceDWMGetDirtyRegion.c)
 *     GreCreateSemaphoreInternal @ 0x1400A69FC (GreCreateSemaphoreInternal.c)
 *     Win32AllocPoolNonPaged @ 0x1400A6AA0 (Win32AllocPoolNonPaged.c)
 *     ?AcquireEntryIndex@GdiHandleManager@Cxx@@UEAA_NPEAI@Z @ 0x1400A6AC0 (-AcquireEntryIndex@GdiHandleManager@Cxx@@UEAA_NPEAI@Z.c)
 *     DirectComposition::Memory::Allocate @ 0x1400A7A70 (DirectComposition--Memory--Allocate.c)
 *     EtwTraceLifetimeAccum @ 0x1400A7AA0 (EtwTraceLifetimeAccum.c)
 *     ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1400A7BD8 (-Grow@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1400A7C7C (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?AllocateTableEntry@?$CGenericTable@_KVCSyncData@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1400A7D20 (-AllocateTableEntry@-$CGenericTable@_KVCSyncData@DirectComposition@@$0GFHDEDEE@$0A@@DirectCompos.c)
 *     NtDCompositionGetStatistics @ 0x1400A8750 (NtDCompositionGetStatistics.c)
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1400A9FE8 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400ABFFC (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400B15CC (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1400B19E0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     GreMultiUserInitSession @ 0x1400FC220 (GreMultiUserInitSession.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1400FE344 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     HmgCreate @ 0x14010E70C (HmgCreate.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x14010F148 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x14010F1DC (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?AllocateAndInitializeCriticalSection@DirectComposition@@YAJPEAPEAVCCriticalSection@1@@Z @ 0x14011058C (-AllocateAndInitializeCriticalSection@DirectComposition@@YAJPEAPEAVCCriticalSection@1@@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x140110614 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ @ 0x140110964 (-Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140122390 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x14015664C (-bInit@W32PIDLOCK@@QEAA_NXZ.c)
 *     ?Grow@?$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@IEAAJI@Z @ 0x140165CA4 (-Grow@-$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x14017E280 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?_Create@GdiHandleEntryTable@Cxx@@CAPEAV12@I_N@Z @ 0x140189584 (-_Create@GdiHandleEntryTable@Cxx@@CAPEAV12@I_N@Z.c)
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x14018CF20 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?Create@GdiHandleManager@Cxx@@SAPEAV12@IPEAU_ENTRY@@IE@Z @ 0x140191628 (-Create@GdiHandleManager@Cxx@@SAPEAV12@IPEAU_ENTRY@@IE@Z.c)
 *     ?AllocateCapabilityTableEntry@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x140196730 (-AllocateCapabilityTableEntry@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x14019B7B4 (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?Create@GdiHandleEntryDirectory@Cxx@@SAPEAV12@PEAU_ENTRY@@I@Z @ 0x1401BC7D0 (-Create@GdiHandleEntryDirectory@Cxx@@SAPEAV12@PEAU_ENTRY@@I@Z.c)
 *     ?GrepQueueApc@@YA_NP6AXPEAX00@Z00@Z @ 0x1401F3490 (-GrepQueueApc@@YA_NP6AXPEAX00@Z00@Z.c)
 *     GreCreateFastMutex @ 0x1401F3B70 (GreCreateFastMutex.c)
 *     DrvCollectDriverFailureData @ 0x1401F67E8 (DrvCollectDriverFailureData.c)
 *     EtwTraceMoveRegion @ 0x1401F9EE0 (EtwTraceMoveRegion.c)
 *     ?AllocateTableEntry@?$CGenericTable@IURemoteTexture@CConnection@DirectComposition@@$0DBHCEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x140229CF0 (-AllocateTableEntry@-$CGenericTable@IURemoteTexture@CConnection@DirectComposition@@$0DBHCEDEE@$0.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x140241FD0 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall Win32AllocPoolImpl(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v10; // rax
  _DWORD *v11; // rax
  unsigned __int64 i; // r14
  char v13; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = W32GetUserSessionState(a1, a2, a3) + 72016;
  v7 = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(a1 | 2, v4, (unsigned int)v3);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
    return Pool2;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      if ( ((unsigned int)v3 & *(_DWORD *)(v6 + 80)) != (_DWORD)v3 )
        goto LABEL_2;
      v11 = (_DWORD *)(v6 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v6 + 84) )
          goto LABEL_2;
        if ( *v11 == (_DWORD)v3 )
          break;
        ++v11;
      }
      v13 = 0;
      if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
      {
        v13 = 1;
        v4 += 16LL;
      }
      Pool2 = ExAllocatePool2(a1 | 2, v4, (unsigned int)v3);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v13 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v6,
                                  Pool2,
                                  i,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v6,
          v3)
    || v4 + 16 < v4 )
  {
    return 0LL;
  }
  v10 = (unsigned __int64 *)ExAllocatePool2(a1 | 2, v4 + 16, (unsigned int)v3);
  Pool2 = (__int64)v10;
  if ( !v10
    || (_InterlockedIncrement64((volatile signed __int64 *)(v6 + 112)),
        *v10 = v3,
        Pool2 = (__int64)(v10 + 2),
        v10 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v6 + 8),
      (const void *)v3);
  }
  return Pool2;
}
