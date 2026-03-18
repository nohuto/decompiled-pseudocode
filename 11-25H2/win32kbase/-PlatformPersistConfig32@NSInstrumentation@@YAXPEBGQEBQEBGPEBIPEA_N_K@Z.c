/*
 * XREFs of ?PlatformPersistConfig32@NSInstrumentation@@YAXPEBGQEBQEBGPEBIPEA_N_K@Z @ 0x1401419E8
 * Callers:
 *     ?PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ @ 0x1401418D0 (-PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::PlatformPersistConfig32(
        NSInstrumentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 **a3,
        const unsigned int *a4)
{
  unsigned __int64 v7; // rbx
  NTSTATUS v8; // eax
  unsigned int i; // ecx
  __int64 v10; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  KeyHandle = this;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION\\WINDOWS");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  v7 = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes) < 0 )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      v10 = i;
      *((_BYTE *)a4 + v10) = 0;
    }
  }
  else
  {
    do
    {
      RtlInitUnicodeString(&DestinationString, *(PCWSTR *)&a2[4 * v7]);
      v8 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a3, 4u);
      a3 = (const unsigned __int16 **)((char *)a3 + 4);
      *((_BYTE *)a4 + v7++) = v8 >= 0;
    }
    while ( v7 < 0xA );
    ZwFlushKey(KeyHandle);
    ZwClose(KeyHandle);
  }
}
