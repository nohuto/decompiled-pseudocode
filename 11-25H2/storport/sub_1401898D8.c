/*
 * XREFs of sub_1401898D8 @ 0x1401898D8
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

__int64 sub_1401898D8()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  __int64 v4; // [rsp+70h] [rbp+10h] BYREF

  v4 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  result = KsrGetFirmwareInformation(&v4);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( v1 >= 0 )
    {
      CallbackRegistration = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)CallbackFunction, 0LL);
      if ( !CallbackRegistration )
      {
        ObfDereferenceObject(CallbackObject);
        return (unsigned int)-1073741670;
      }
    }
    return (unsigned int)v1;
  }
  return result;
}
