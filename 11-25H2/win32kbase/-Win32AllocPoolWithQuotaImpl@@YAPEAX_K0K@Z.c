/*
 * XREFs of ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4
 * Callers:
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1400219B8 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1400503C8 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140050C4C (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x140050D6C (-CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400511B4 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051528 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x140054434 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x140055D14 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400597D0 (-SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     NtDCompositionCommitChannel @ 0x1400AF3A0 (NtDCompositionCommitChannel.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400EBF50 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x14010635C (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 *     ?AllocateTableEntry@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x140108680 (-AllocateTableEntry@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBas.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14010B8D0 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140128600 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?AllocateTableEntry@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x140134B70 (-AllocateTableEntry@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectCompositi.c)
 *     ?SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14015F560 (-SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1401989E0 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x14019CBA0 (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 *     ?Initialize@CBufferCollectionResource@DirectComposition@@IEAAJPEAPEAX_KU_LUID@@@Z @ 0x140228FDC (-Initialize@CBufferCollectionResource@DirectComposition@@IEAAJPEAPEAX_KU_LUID@@@Z.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140233240 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14023CC30 (-SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplication.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64_&_ @ 0x140069630 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall Win32AllocPoolWithQuotaImpl(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 UserSessionState; // rax
  __int64 v6; // rdi
  int v7; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v10; // rax
  char v11; // r15
  _DWORD *v12; // rax
  unsigned __int64 i; // r14
  _QWORD v14[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v16; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v17; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v18; // [rsp+110h] [rbp+77h] BYREF

  v16 = a1;
  v3 = a3;
  UserSessionState = W32GetUserSessionState();
  v18 = v3;
  v16 = 256LL;
  v17 = a2;
  v6 = UserSessionState + 72032;
  v14[0] = &v16;
  v14[1] = &v18;
  v7 = *(_DWORD *)(UserSessionState + 72032);
  if ( !v7 )
  {
    Pool2 = ExAllocatePool2(259LL, a2, (unsigned int)v3);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
    return Pool2;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      if ( ((unsigned int)v3 & *(_DWORD *)(v6 + 80)) != (_DWORD)v3 )
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64___(
                 v6,
                 v14,
                 &v17);
      v12 = (_DWORD *)(v6 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v6 + 84) )
          return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64___(
                   v6,
                   v14,
                   &v17);
        if ( *v12 == (_DWORD)v3 )
          break;
        ++v12;
      }
      v11 = 0;
      if ( a2 < 0x1000 || (a2 & 0xFFF) != 0 )
      {
        a2 += 16LL;
        v11 = 1;
        v17 = a2;
      }
      Pool2 = ExAllocatePool2(259LL, a2, (unsigned int)v3);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 128));
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
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
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v6,
          v3)
    || a2 + 16 < a2 )
  {
    return 0LL;
  }
  v10 = (unsigned __int64 *)ExAllocatePool2(v16 | 3, a2 + 16, v18);
  Pool2 = (__int64)v10;
  if ( !v10
    || (_InterlockedIncrement64((volatile signed __int64 *)(v6 + 112)),
        *v10 = v3,
        Pool2 = (__int64)(v10 + 2),
        v10 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v6 + 8),
      v3);
  }
  return Pool2;
}
