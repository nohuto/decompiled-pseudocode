/*
 * XREFs of SshpGenerateDeviceFriendlyName @ 0x140A8FD7C
 * Callers:
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x1407E9F30 (SleepstudyHelperCreateBlockerFromComponent.c)
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x140A8FC10 (SleepstudyHelper_GetPdoFriendlyName.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A8FC90 (SleepstudyHelperCreateBlockerFromDevice.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403E78F0 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1404278C8 (RtlUnicodeStringCatString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SshpGenerateDeviceFriendlyName(
        PDEVICE_OBJECT DeviceObject,
        unsigned int *a2,
        ULONG a3,
        UNICODE_STRING *a4)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  ULONG v5; // esi
  const UNICODE_STRING *DeviceNode; // r15
  _WORD *Pool2; // r14
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v12; // ebx
  ULONG v13; // esi
  unsigned int v14; // esi
  __int64 v15; // r8
  _WORD *v16; // rax
  __int64 v17; // rax
  _WORD *v18; // rdx
  __int64 v20; // r8
  ULONG v21; // [rsp+30h] [rbp-59h]
  ULONG BufferLength; // [rsp+34h] [rbp-55h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-51h] BYREF
  char v24; // [rsp+50h] [rbp-39h] BYREF

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v5 = 0;
  BufferLength = 0;
  v21 = a3;
  DeviceNode = (const UNICODE_STRING *)DeviceObjectExtension->DeviceNode;
  Pool2 = 0LL;
  SourceString = 0LL;
  if ( DeviceNode )
  {
    DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    v12 = DeviceProperty;
    if ( DeviceProperty == -1073741789 )
    {
      if ( BufferLength > 0xFFFF )
      {
        v12 = -2147483643;
        goto LABEL_25;
      }
      v5 = BufferLength + 4;
    }
    else if ( DeviceProperty != -1073741772 )
    {
      if ( DeviceProperty >= 0 )
        return (unsigned int)v12;
      goto LABEL_25;
    }
    v13 = DeviceNode[8].Length + v5;
    if ( a2 )
    {
      v20 = *a2;
      SourceString.Buffer = (wchar_t *)&v24;
      *(_DWORD *)&SourceString.Length = 0x400000;
      v12 = RtlUnicodeStringPrintf(&SourceString, L" (%d)", v20);
      if ( v12 < 0 )
        goto LABEL_25;
      v13 += SourceString.Length;
    }
    if ( !v13 )
    {
      v12 = -1073741811;
      goto LABEL_25;
    }
    a3 = v21;
    v14 = v13 + 2;
    if ( v14 < 0xFFFF )
    {
      Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        v12 = -1073741670;
        goto LABEL_25;
      }
      if ( !BufferLength )
      {
        *a4 = 0LL;
        v17 = 0x7FFFLL;
        v18 = Pool2;
        while ( *v18 )
        {
          ++v18;
          if ( !--v17 )
            goto LABEL_33;
        }
        if ( a4 )
        {
          a4->Buffer = Pool2;
          a4->Length = 2 * (0x7FFF - v17);
        }
LABEL_33:
        a4->MaximumLength = v14;
LABEL_19:
        v12 = RtlUnicodeStringCat(a4, DeviceNode + 8);
        if ( v12 >= 0 )
        {
          if ( !BufferLength || (v12 = RtlUnicodeStringCatString(a4, L")"), v12 >= 0) )
          {
            if ( !a2 )
              return 0;
            v12 = RtlUnicodeStringCat(a4, &SourceString);
            if ( v12 >= 0 )
              return 0;
          }
        }
        goto LABEL_25;
      }
      v12 = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, BufferLength, Pool2, &BufferLength);
      if ( v12 < 0 )
      {
LABEL_25:
        a3 = v21;
        goto LABEL_26;
      }
      *a4 = 0LL;
      v15 = 0x7FFFLL;
      v16 = Pool2;
      do
      {
        if ( !*v16 )
          break;
        ++v16;
        --v15;
      }
      while ( v15 );
      v12 = -1073741811;
      if ( v15 )
      {
        if ( !a4 )
        {
LABEL_17:
          a4->MaximumLength = v14;
          if ( v12 >= 0 )
          {
            v12 = RtlUnicodeStringCatString(a4, L" (");
            if ( v12 >= 0 )
              goto LABEL_19;
          }
          goto LABEL_25;
        }
        a4->Buffer = Pool2;
        a4->Length = 2 * (0x7FFF - v15);
      }
      v12 = v15 == 0 ? 0xC000000D : 0;
      goto LABEL_17;
    }
    v12 = -2147483643;
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_26:
  *a4 = 0LL;
  if ( Pool2 )
    CmpFreeTransientPoolWithTag(Pool2, a3);
  return (unsigned int)v12;
}
