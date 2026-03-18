/*
 * XREFs of VfReportIssueWithOptions @ 0x140645558
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140C2293C (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140C22A54 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140C22AFC (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140C22B9C (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140C22C34 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140C22CD0 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140C22D7C (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140C22E10 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140C22E9C (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C22F1C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140C23A10 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C23D40 (VfBuildScatterGatherListEx.c)
 *     VfCreateCommonBufferFromMdl @ 0x140C240E0 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140C241D0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140C24B80 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140C24F00 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140C252F0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C254B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140C25690 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x140C2618C (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140C26560 (ViCheckPadding.c)
 *     ViCheckTag @ 0x140C26718 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140C269A0 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x140C26AD4 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140C26F80 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140C270C4 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaAdapter @ 0x140C271E4 (ViGetRealDmaAdapter.c)
 *     ViMapDoubleBuffer @ 0x140C27768 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140C27B3C (ViReleaseDmaAdapter.c)
 *     ViDeadlockAddResource @ 0x140C36AF0 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140C36E58 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140C37FF8 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140C38198 (ViDeadlockRemoveThread.c)
 *     VfDeadlockReleaseResource @ 0x140C4493C (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140C47314 (VfDeadlockAcquireResource.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
 *     DbgPrompt @ 0x140618030 (DbgPrompt.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 *     VfErrorReleaseTriageInformation @ 0x140C3195C (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x140C31A8C (VfErrorStoreTriageInformation.c)
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
