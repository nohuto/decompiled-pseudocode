/*
 * XREFs of ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x14004C3E4
 * Callers:
 *     imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x14004C160 (imp_WdfDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x140076E00 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14004C424 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

void __fastcall FxIrpPreprocessInfo::FxIrpPreprocessInfo(FxIrpPreprocessInfo *this)
{
  `vector constructor iterator'(
    this->Dispatch,
    0x18uLL,
    0x1CuLL,
    (void *(__fastcall *)(void *))FxIrpPreprocessInfo::Info::Info);
  this->ClassExtension = 0;
  this->ListEntry.Blink = (_LIST_ENTRY *)this;
  this->ListEntry.Flink = (_LIST_ENTRY *)this;
}
