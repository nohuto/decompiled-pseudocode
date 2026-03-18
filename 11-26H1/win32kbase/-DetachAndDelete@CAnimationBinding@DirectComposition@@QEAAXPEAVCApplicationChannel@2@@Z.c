/*
 * XREFs of ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B5300
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400B4790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400B4F08 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEBUD2D_RECT_F@@PEA_N@Z @ 0x1400B4FBC (-SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PE.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400B53B0 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1401293C0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1401C4660 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CAnimationBinding::DetachAndDelete(
        struct _LIST_ENTRY *Buffer,
        struct _RTL_GENERIC_TABLE *this,
        __int64 a3,
        __int64 a4)
{
  struct _LIST_ENTRY **i; // rcx
  struct _LIST_ENTRY **j; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // rax

  if ( !LODWORD(Buffer->Blink) )
    goto LABEL_9;
  for ( i = &Buffer[1].Flink[2].Blink; *i != Buffer; i = &(*i)[2].Flink )
    ;
  *i = Buffer[2].Flink;
  for ( j = &Buffer[1].Blink->Blink; *j != Buffer; j = &(*j)[2].Blink )
    ;
  *j = Buffer[2].Blink;
  if ( ((__int64)Buffer->Blink & 3) != 0 )
  {
    v8 = (struct DirectComposition::CResourceMarshaler *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))Buffer[1].Blink->Flink->Flink)(Buffer[1].Blink);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v8);
  }
  if ( !this[5].InsertOrderList.Blink )
  {
    this[5].InsertOrderList.Blink = Buffer;
    *Buffer = 0LL;
    Buffer[1] = 0LL;
    Buffer[2] = 0LL;
  }
  else
  {
LABEL_9:
    GreDeleteFastMutex((char *)Buffer, (__int64)this, a3, a4);
  }
}
