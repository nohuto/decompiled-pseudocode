/*
 * XREFs of ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400B53B0
 * Callers:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400B4F08 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEBUD2D_RECT_F@@PEA_N@Z @ 0x1400B4FBC (-SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PE.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x1401A3234 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITIO.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022AECC (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@UDCOMPOSI.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B5300 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::NewRemovingBinding(
        struct _RTL_GENERIC_TABLE *this,
        struct _LIST_ENTRY *Buffer,
        __int64 a3,
        __int64 a4)
{
  struct _LIST_ENTRY *Blink; // rcx
  struct DirectComposition::CResourceMarshaler *v7; // rax

  if ( SLODWORD(this->OrderedPointer) > 2 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(Buffer, this, a3, a4);
  }
  else
  {
    Blink = Buffer[1].Blink;
    LODWORD(Buffer->Blink) = (__int64)Buffer->Blink & 0xFFFFFFFA | 4;
    v7 = (struct DirectComposition::CResourceMarshaler *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))Blink->Flink->Flink)(Blink);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v7);
    Buffer->Flink = (struct _LIST_ENTRY *)this[7].TableRoot;
    this[7].TableRoot = (PRTL_SPLAY_LINKS)Buffer;
  }
}
