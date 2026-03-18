/*
 * XREFs of ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022AECC
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14018E828 (-SetSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z.c)
 *     ?SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x140190588 (-SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@.c)
 *     ?SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14019BC94 (-SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 *     ?SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14019FEB4 (-SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX.c)
 * Callees:
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400B53B0 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXUDCOMPOSITION_PROPERTY_ID@@PEAPEAVCAnimationBinding@2@11@Z @ 0x14018C8D0 (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXUDCOMPOSITION_PROPERTY_ID@@PEA.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1401C4660 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::UnbindAnimation(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 a2,
        int a3)
{
  char v4; // bl
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  Buffer = 0LL;
  v8 = 0LL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(a2, a3, &Buffer, &v8, &v9);
  if ( Buffer )
  {
    DirectComposition::CApplicationChannel::NewRemovingBinding(a1, (struct _LIST_ENTRY *)Buffer, v5, v6);
    return 1;
  }
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::DeleteAddingBinding(
      (DirectComposition::CApplicationChannel *)a1,
      (struct DirectComposition::CAnimationBinding **)v8);
    return 1;
  }
  return v4;
}
