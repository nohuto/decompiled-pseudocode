/*
 * XREFs of PopGenerateDeviceFriendlyName @ 0x140B25330
 * Callers:
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x1407E7188 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140B25110 (PopIdleWakeGenerateInterruptDescriptionString.c)
 *     PopFxRegisterDevice @ 0x140B52230 (PopFxRegisterDevice.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403E78F0 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1404278C8 (RtlUnicodeStringCatString.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGenerateDeviceFriendlyName(__int64 a1, char a2, UNICODE_STRING *a3)
{
  int v4; // r12d
  int v5; // ebp
  ULONG v6; // edx
  struct _DEVICE_OBJECT *v9; // r13
  char v10; // si
  const UNICODE_STRING *v11; // r14
  unsigned int Length; // ebx
  signed int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edx
  NTSTATUS v16; // ebx
  wchar_t *Pool2; // rbp
  ULONG v19; // ecx
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  int v22; // eax
  NTSTATUS DeviceProperty; // eax
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  ULONG BufferLength; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2 & 2;
  v5 = -1;
  v6 = 0;
  BufferLength = 0;
  *a3 = 0LL;
  v9 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v10 = a2 & 1;
  if ( v10 )
  {
    DeviceProperty = IoGetDeviceProperty(v9, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    v16 = DeviceProperty;
    if ( DeviceProperty != -1073741789 )
    {
      if ( DeviceProperty != -1073741772 )
      {
LABEL_13:
        if ( v16 >= 0 )
          return (unsigned int)v16;
        goto LABEL_8;
      }
      v10 = 0;
      v11 = (const UNICODE_STRING *)(a1 + 128);
      goto LABEL_3;
    }
    v6 = BufferLength;
  }
  v11 = (const UNICODE_STRING *)(a1 + 128);
  if ( !v10 )
  {
LABEL_3:
    Length = v11->Length;
    v13 = 0;
    goto LABEL_4;
  }
  Length = -1;
  v19 = v6 + v11->Length;
  if ( v19 >= v6 )
    Length = v6 + v11->Length;
  v13 = v19 < v6 ? 0xC0000095 : 0;
  v20 = Length;
  if ( v19 >= v6 )
  {
    v21 = Length + 8;
    v22 = -1;
    if ( Length + 8 >= Length )
      v22 = Length + 8;
    Length = v22;
    v13 = v21 < v20 ? 0xC0000095 : 0;
  }
LABEL_4:
  v14 = Length;
  if ( v4 )
  {
    if ( v13 >= 0 )
    {
      v24 = Length + 8;
      v25 = -1;
      if ( Length + 8 >= Length )
        v25 = Length + 8;
      Length = v25;
      v13 = v24 < v14 ? 0xC0000095 : 0;
    }
    v15 = Length;
    if ( v13 < 0 )
      goto LABEL_7;
    v26 = Length + *(unsigned __int16 *)(a1 + 56);
    if ( v26 >= Length )
      v5 = Length + *(unsigned __int16 *)(a1 + 56);
    Length = v5;
    v13 = v26 < v15 ? 0xC0000095 : 0;
  }
  if ( v13 >= 0 && Length < 0xFFFF )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v16 = -1073741670;
      goto LABEL_8;
    }
    a3->Buffer = Pool2;
    a3->Length = 0;
    a3->MaximumLength = Length;
    if ( v10
      && ((v16 = IoGetDeviceProperty(v9, DevicePropertyDeviceDescription, BufferLength, Pool2, &BufferLength), v16 < 0)
       || (a3->Length = BufferLength - 2, v16 = RtlUnicodeStringCatString(a3, L" ("), v16 < 0))
      || (v16 = RtlUnicodeStringCat(a3, v11), v10) )
    {
      if ( v16 >= 0 )
        v16 = RtlUnicodeStringCatString(a3, L")");
    }
    if ( v4 )
    {
      if ( v16 < 0
        || (v16 = RtlUnicodeStringCatString(a3, L" ["), v16 < 0)
        || (v16 = RtlUnicodeStringCat(a3, (PCUNICODE_STRING)(a1 + 56)), v16 < 0) )
      {
LABEL_12:
        ExFreePoolWithTag(Pool2, 0x4D584650u);
        goto LABEL_13;
      }
      v16 = RtlUnicodeStringCatString(a3, L"]");
    }
    if ( v16 >= 0 )
      return 0;
    goto LABEL_12;
  }
LABEL_7:
  v16 = -1073741675;
LABEL_8:
  *a3 = 0LL;
  return (unsigned int)v16;
}
