/*
 * XREFs of ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x140075B00
 * Callers:
 *     ??1FxDevice@@UEAA@XZ @ 0x140039D90 (--1FxDevice@@UEAA@XZ.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14003A720 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1WDFCXDEVICE_INIT@@QEAA@XZ @ 0x140095A0C (--1WDFCXDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140075B3C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

FxIrpPreprocessInfo *__fastcall FxIrpPreprocessInfo::`scalar deleting destructor'(FxIrpPreprocessInfo *this)
{
  `vector destructor iterator'(
    this->Dispatch,
    0x18uLL,
    0x1CuLL,
    (void (__fastcall *)(void *))FxIrpPreprocessInfo::Info::~Info);
  FxStump::operator delete(this);
  return this;
}
