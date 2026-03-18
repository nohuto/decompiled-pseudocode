/*
 * XREFs of IoRegisterBootDriverCallback @ 0x1407A1BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404F0710 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 */

PVOID __fastcall IoRegisterBootDriverCallback(PCALLBACK_FUNCTION CallbackFunction, PVOID CallbackContext)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( PnpBootDriverCallbackRegistrationClosed )
    return 0LL;
  if ( !PnpBootDriverCallbackObject
    && (RtlInitUnicodeString(&DestinationString, L"\\Callback\\BootDriver"),
        ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = &DestinationString,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ExCreateCallback(&PnpBootDriverCallbackObject, &ObjectAttributes, 1u, 1u) < 0) )
  {
    return 0LL;
  }
  else
  {
    return ExRegisterCallback(PnpBootDriverCallbackObject, CallbackFunction, CallbackContext);
  }
}
