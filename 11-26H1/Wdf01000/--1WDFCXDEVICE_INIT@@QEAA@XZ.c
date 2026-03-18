/*
 * XREFs of ??1WDFCXDEVICE_INIT@@QEAA@XZ @ 0x140095A0C
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14003A720 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x140075B00 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall WDFCXDEVICE_INIT::~WDFCXDEVICE_INIT(WDFCXDEVICE_INIT *this)
{
  FxIrpPreprocessInfo *PreprocessInfo; // rcx

  PreprocessInfo = this->PreprocessInfo;
  if ( PreprocessInfo )
    FxIrpPreprocessInfo::`scalar deleting destructor'(PreprocessInfo);
}
