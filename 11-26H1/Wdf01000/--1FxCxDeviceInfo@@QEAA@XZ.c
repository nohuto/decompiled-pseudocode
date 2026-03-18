/*
 * XREFs of ??1FxCxDeviceInfo@@QEAA@XZ @ 0x1400958F0
 * Callers:
 *     ??1FxDevice@@UEAA@XZ @ 0x140039D90 (--1FxDevice@@UEAA@XZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 */

void __fastcall FxCxDeviceInfo::~FxCxDeviceInfo(FxCxDeviceInfo *this)
{
  FxCxPnpPowerCallbackContext **CxPnpPowerCallbackContexts; // rbx
  __int64 v2; // rdi

  CxPnpPowerCallbackContexts = this->CxPnpPowerCallbackContexts;
  v2 = 21LL;
  do
  {
    if ( *CxPnpPowerCallbackContexts )
      FxStump::operator delete(*CxPnpPowerCallbackContexts);
    ++CxPnpPowerCallbackContexts;
    --v2;
  }
  while ( v2 );
}
