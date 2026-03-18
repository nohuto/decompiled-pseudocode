/*
 * XREFs of VfReportIssueWithOptions @ 0x140606474
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140B74A38 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B74B44 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140B74BE0 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B74C74 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140B74D08 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140B74DA0 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B74E40 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B74ED4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140B74F60 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B74FE0 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140B75AD0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B75DD0 (VfBuildScatterGatherListEx.c)
 *     VfCreateCommonBufferFromMdl @ 0x140B76160 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140B76250 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140B76C00 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B76F50 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140B77330 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B774E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B776B0 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x140B780D8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140B78494 (ViCheckPadding.c)
 *     ViCheckTag @ 0x140B78644 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140B788D0 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x140B78A00 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140B78FF8 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 *     ViMapDoubleBuffer @ 0x140B79670 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140B79A3C (ViReleaseDmaAdapter.c)
 *     ViDeadlockAddResource @ 0x140B888A0 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140B88C04 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140B89E1C (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140B89FBC (ViDeadlockRemoveThread.c)
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140B983E4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     DbgPrompt @ 0x1405DB5C0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 *     VfErrorReleaseTriageInformation @ 0x140B834D0 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x140B83600 (VfErrorStoreTriageInformation.c)
 */

void __fastcall VfReportIssueWithOptions(
        ULONG a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        _DWORD *Response)
{
  _DWORD *v6; // rbx
  int v7; // esi
  int v8; // ebp
  int v10; // r14d
  int v11; // r10d
  int v12; // eax

  v6 = Response;
  v7 = a4;
  v8 = a3;
  v10 = a2;
  v11 = *Response;
  if ( *Response && (v11 & 2) == 0 )
  {
    if ( (((v11 & 8) == 0) & !_bittest(&VfOptionFlags, 9u)) != 0 && (_BYTE)KdDebuggerEnabled )
    {
      if ( (v11 & 4) != 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            VfUtilDbgPrint("\n*** Verifier assertion failed ***\n");
            DbgPrompt("(B)reak, (I)gnore, (W)arn only, (R)emove assert? ", (PCH)&Response, 2u);
            if ( (_BYTE)Response != 66 )
            {
              switch ( (_BYTE)Response )
              {
                case 'I':
                  return;
                case 'R':
                  goto LABEL_17;
                case 'W':
                  goto LABEL_14;
              }
              if ( (_BYTE)Response != 98 )
                break;
            }
            v12 = VfErrorStoreTriageInformation(a1, v10, v8, v7, a5);
            __debugbreak();
            if ( v12 )
              VfErrorReleaseTriageInformation();
          }
          if ( (_BYTE)Response == 105 )
            return;
          if ( (_BYTE)Response == 114 )
            break;
          if ( (_BYTE)Response == 119 )
          {
LABEL_14:
            *v6 = 2;
            return;
          }
        }
LABEL_17:
        *v6 = 0;
      }
    }
    else
    {
      CarReportRuleViolationFromNt(a1, a2, a3, a4, a5, 5, 0LL);
    }
  }
}
