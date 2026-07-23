/*
 * XREFs of VfReportIssueWithOptions @ 0x140649138
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140C2894C (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140C28A64 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140C28B0C (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140C28BAC (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140C28C44 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140C28CE0 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140C28D8C (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140C28E20 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140C28EAC (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140C28F2C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C29D50 (VfBuildScatterGatherListEx.c)
 *     VfCreateCommonBufferFromMdl @ 0x140C2A0F0 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140C2A1E0 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140C2AF10 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140C2B300 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C2B4C0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140C2B6A0 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x140C2C19C (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140C2C570 (ViCheckPadding.c)
 *     ViCheckTag @ 0x140C2C728 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140C2C9B0 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x140C2CAE4 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140C2D0D4 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 *     ViMapDoubleBuffer @ 0x140C2D778 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140C2DB4C (ViReleaseDmaAdapter.c)
 *     ViDeadlockAddResource @ 0x140C3CB00 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140C3CE68 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140C3E008 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140C3E1A8 (ViDeadlockRemoveThread.c)
 *     VfDeadlockReleaseResource @ 0x140C4A94C (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     DbgPrompt @ 0x14061B080 (DbgPrompt.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     VfErrorReleaseTriageInformation @ 0x140C3796C (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x140C37A9C (VfErrorStoreTriageInformation.c)
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
