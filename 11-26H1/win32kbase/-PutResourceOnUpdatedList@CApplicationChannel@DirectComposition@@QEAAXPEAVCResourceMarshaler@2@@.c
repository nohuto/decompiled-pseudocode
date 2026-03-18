/*
 * XREFs of ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x140054BF8 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140055954 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_ID@@PEAX@Z @ 0x1400A9E08 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_I.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@0@Z @ 0x1400AA434 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_K@Z @ 0x1400ABF14 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1400B44EC (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x140145750 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x14017E000 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x140197C50 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_N1PEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x140197D28 (-EnsureWriteableInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_.c)
 *     ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1401A5D48 (-CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHa.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_ID@@PEB_K_K@Z @ 0x1401B8BF8 (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPE.c)
 *     ?ActivateResourceTrigger@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1401BF314 (-ActivateResourceTrigger@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  int v2; // eax
  unsigned int v4; // ecx
  __int64 i; // rax
  __int64 v6; // rcx

  v2 = *((_DWORD *)a2 + 4);
  if ( (v2 & 2) == 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      v4 = *((_DWORD *)a2 + 9);
      for ( i = v4; (unsigned int)i < 0xA6; LODWORD(i) = dword_14027CC90[i] )
      {
        if ( (_DWORD)i == 133 )
        {
          v6 = 456LL;
          goto LABEL_11;
        }
      }
      while ( 1 )
      {
        if ( v4 >= 0xA6 )
        {
          v6 = 440LL;
          goto LABEL_11;
        }
        if ( v4 == 23 )
          break;
        v4 = dword_14027CC90[v4];
      }
      v6 = 472LL;
LABEL_11:
      *((_QWORD *)a2 + 1) = *(_QWORD *)((char *)this + v6);
      *(_QWORD *)((char *)this + v6) = a2;
    }
    *((_DWORD *)a2 + 4) |= 2u;
    *((_BYTE *)this + 264) |= 1u;
  }
}
