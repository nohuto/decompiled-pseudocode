/*
 * XREFs of ?GetBiosNumLockStatus@@YAXXZ @ 0x14026E024
 * Callers:
 *     InitKeyboard @ 0x14025E904 (InitKeyboard.c)
 * Callees:
 *     <none>
 */

void GetBiosNumLockStatus(void)
{
  enum _INTERFACE_TYPE v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  int Context; // [rsp+50h] [rbp+8h] BYREF
  enum _CONFIGURATION_TYPE PeripheralType; // [rsp+58h] [rbp+10h] BYREF
  enum _CONFIGURATION_TYPE ControllerType; // [rsp+60h] [rbp+18h] BYREF
  enum _INTERFACE_TYPE BusType; // [rsp+68h] [rbp+20h] BYREF

  Context = 0;
  v0 = Internal;
  ControllerType = KeyboardController;
  PeripheralType = KeyboardPeripheral;
  while ( (unsigned int)v0 < (MaximumInterfaceType|Eisa) )
  {
    BusType = v0;
    IoQueryDeviceDescription(
      &BusType,
      0LL,
      &ControllerType,
      0LL,
      &PeripheralType,
      0LL,
      (PIO_QUERY_DEVICE_ROUTINE)KeyboardDeviceSpecificCallout,
      &Context);
    if ( BYTE2(Context) )
    {
      UserSessionState = W32GetUserSessionState(v2, v1);
      *(_WORD *)(UserSessionState + 12858) = Context;
      return;
    }
    ++v0;
  }
}
