/*
 * XREFs of PiCslInitialize @ 0x140CC75C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404F0710 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 */

__int64 PiCslInitialize()
{
  NTSTATUS v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  PipCslConsoleLockState = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 80LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\IoExternalDmaUnblock");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ExCreateCallback((PCALLBACK_OBJECT *)&PipCslCallbackObject, &ObjectAttributes, 1u, 1u);
  if ( v0 >= 0 )
  {
    ExRegisterCallback((PCALLBACK_OBJECT)PipCslCallbackObject, (PCALLBACK_FUNCTION)PipCslStateChangeCallback, 0LL);
    PipCslInitialized = 1;
  }
  return (unsigned int)v0;
}
