/*
 * XREFs of ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1402EC118
 * Callers:
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402EBDA8 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EC044 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z @ 0x140266BC4 (-Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1402EBE70 (--_EInkDevice@@UEAAPEAXI@Z.c)
 */

void __fastcall InkProcessor::UnlinkAndReleaseInkDevice(InkProcessor *this, struct _LIST_ENTRY *a2)
{
  ListEntry::Unlink((ListEntry ***)&a2->Flink[5].Blink, a2);
  if ( a2->Flink )
    InkDevice::`vector deleting destructor'((InkDevice *)a2->Flink, 1);
  a2->Flink = 0LL;
}
