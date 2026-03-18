/*
 * XREFs of ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954
 * Callers:
 *     EngAllocMem @ 0x14001BE30 (EngAllocMem.c)
 *     EtwTraceLifetimeAccum @ 0x140026660 (EtwTraceLifetimeAccum.c)
 *     ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1400267C8 (-Grow@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x14002686C (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     DirectComposition::Memory::Allocate @ 0x14002690C (DirectComposition--Memory--Allocate.c)
 *     ?AllocateTableEntry@?$CGenericTable@_KVCSyncData@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x140026930 (-AllocateTableEntry@-$CGenericTable@_KVCSyncData@DirectComposition@@$0GFHDEDEE@$0A@@DirectCompos.c)
 *     Win32AllocPoolNonPaged @ 0x140027760 (Win32AllocPoolNonPaged.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x140027780 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     GreCreateSemaphoreInternal @ 0x140027848 (GreCreateSemaphoreInternal.c)
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x140027AD8 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     EtwTraceDWMGetDirtyRegion @ 0x140028540 (EtwTraceDWMGetDirtyRegion.c)
 *     ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z @ 0x1400286C0 (-Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z.c)
 *     HmgCreate @ 0x140028D7C (HmgCreate.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x140029A54 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x140029BAC (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1400503C8 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140050C4C (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x140050D6C (-CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400511B4 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051528 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x140054434 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1400558D0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x140055D14 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x140056378 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x140068848 (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x14009C04C (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4Compositi.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x14009E3B0 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtDCompositionConfirmFrame @ 0x1400B6700 (NtDCompositionConfirmFrame.c)
 *     GreMultiUserInitSession @ 0x1400BB200 (GreMultiUserInitSession.c)
 *     ?AllocateAndInitializeCriticalSection@DirectComposition@@YAJPEAPEAVCCriticalSection@1@@Z @ 0x1400CC25C (-AllocateAndInitializeCriticalSection@DirectComposition@@YAJPEAPEAVCCriticalSection@1@@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1400CC2E0 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1400CC470 (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     ?Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ @ 0x1400CC6E8 (-Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ.c)
 *     NtDCompositionGetStatistics @ 0x1400D0800 (NtDCompositionGetStatistics.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1400E89EC (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1400E8A78 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x14012625C (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x14014CD10 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?InitNonPagedGlobals@Base@Gre@@YA_NXZ @ 0x140157598 (-InitNonPagedGlobals@Base@Gre@@YA_NXZ.c)
 *     ?AllocateCapabilityTableEntry@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x140158320 (-AllocateCapabilityTableEntry@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?GreCreateKMutex@@YA_KXZ @ 0x1401A0434 (-GreCreateKMutex@@YA_KXZ.c)
 *     ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x1401C607C (-bInit@W32PIDLOCK@@QEAA_NXZ.c)
 *     ?GrepQueueApc@@YA_NP6AXPEAX00@Z00@Z @ 0x1401C75F0 (-GrepQueueApc@@YA_NP6AXPEAX00@Z00@Z.c)
 *     GreCreateFastMutex @ 0x1401C7DD0 (GreCreateFastMutex.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     EtwTraceMoveRegion @ 0x1401D0D20 (EtwTraceMoveRegion.c)
 *     ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x140241E00 (-Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1400BF974 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1401567DC (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall Win32AllocPoolImpl(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 UserSessionState; // rax
  __int64 v7; // rdi
  int v8; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v11; // rax
  char v12; // r15
  _QWORD v13[2]; // [rsp+20h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v15; // [rsp+110h] [rbp+67h] BYREF
  __int64 v16; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int v17; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v18; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = a3;
  UserSessionState = W32GetUserSessionState();
  v17 = v3;
  v16 = a1;
  v18 = a2;
  v7 = UserSessionState + 72032;
  v8 = *(_DWORD *)(UserSessionState + 72032);
  if ( !v8 )
  {
    Pool2 = ExAllocatePool2(a1 | 2, a2, (unsigned int)v3);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 112));
    return Pool2;
  }
  if ( v8 != 1 )
  {
    if ( v8 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              (NSInstrumentation::CLeakTrackingAllocator *)v7,
              v3,
              &v15) )
      {
        v13[0] = &v16;
        v13[1] = &v17;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                 v7,
                 v13,
                 &v18);
      }
      v12 = 0;
      if ( a2 < 0x1000 || (a2 & 0xFFF) != 0 )
      {
        a2 += 16LL;
        v12 = 1;
        v18 = a2;
      }
      Pool2 = ExAllocatePool2(a1 | 2, a2, (unsigned int)v3);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v7 + 128));
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v12 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v7,
                                  Pool2,
                                  v15,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v7,
                                     Pool2,
                                     v15,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v7 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v7,
          v3)
    || a2 + 16 < a2 )
  {
    return 0LL;
  }
  v11 = (unsigned __int64 *)ExAllocatePool2(v16 | 2, a2 + 16, v17);
  Pool2 = (__int64)v11;
  if ( !v11
    || (_InterlockedIncrement64((volatile signed __int64 *)(v7 + 112)),
        *v11 = v3,
        Pool2 = (__int64)(v11 + 2),
        v11 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v7 + 8),
      v3);
  }
  return Pool2;
}
