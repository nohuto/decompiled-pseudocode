/*
 * XREFs of XilCommand_Create @ 0x14003F72C
 * Callers:
 *     Command_Create @ 0x140073580 (Command_Create.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     XilCommand_CreateSecureObject @ 0x14003F790 (XilCommand_CreateSecureObject.c)
 */

__int64 __fastcall XilCommand_Create(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // dl
  int SecureObject; // ebx

  v2 = a1 + 136;
  *(_QWORD *)(v2 + 8) = a1;
  v3 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1001LL);
  *(_BYTE *)v2 = v3;
  if ( v3 )
  {
    SecureObject = XilCommand_CreateSecureObject();
    if ( SecureObject < 0 )
      Debug_FreAssertMsg(
        (__int64)"XilCommand_CreateSecureObject failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        137);
  }
  else
  {
    *(_QWORD *)(v2 + 32) = a1;
    return 0;
  }
  return (unsigned int)SecureObject;
}
