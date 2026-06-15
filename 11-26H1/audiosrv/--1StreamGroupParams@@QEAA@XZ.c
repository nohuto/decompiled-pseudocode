/*
 * XREFs of ??1StreamGroupParams@@QEAA@XZ @ 0x18002B66C
 * Callers:
 *     ??R?$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z @ 0x18002B60C (--R-$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x18002B63C (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1CProcessingModeParameters@@QEAA@XZ @ 0x18002B6BC (--1CProcessingModeParameters@@QEAA@XZ.c)
 */

void __fastcall StreamGroupParams::~StreamGroupParams(LPVOID *this)
{
  CProcessingModeParameters::~CProcessingModeParameters((CProcessingModeParameters *)(this + 7));
  CoTaskMemFree(this[2]);
  this[2] = 0LL;
  CoTaskMemFree(*this);
  *this = 0LL;
}
