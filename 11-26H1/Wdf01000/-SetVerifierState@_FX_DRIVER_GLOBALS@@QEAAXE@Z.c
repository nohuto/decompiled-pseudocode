/*
 * XREFs of ?SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z @ 0x14006D5E0
 * Callers:
 *     FxRegistrySettingsInitialize @ 0x14006C5C8 (FxRegistrySettingsInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall _FX_DRIVER_GLOBALS::SetVerifierState(_FX_DRIVER_GLOBALS *this, unsigned __int8 State)
{
  this->FxVerifierOn = State;
  this->FxVerifierHandle = State;
  this->FxVerifierIO = State;
  this->FxVerifierLock = State;
  this->FxPoolTrackingOn = State;
  this->FxVerifyOn = State;
  this->FxVerifierDbgBreakOnError = State;
  this->FxVerifierDbgBreakOnDeviceStateError = 0;
  if ( State )
    this->Public.DriverFlags |= 0xCu;
}
