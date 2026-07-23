/*
 * XREFs of SshpGenerateDeviceVerboseDescription @ 0x140A90B54
 * Callers:
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x1407E9F30 (SleepstudyHelperCreateBlockerFromComponent.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A8FC90 (SleepstudyHelperCreateBlockerFromDevice.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SshpGenerateDeviceVerboseDescription(PDEVICE_OBJECT DeviceObject, ULONG a2, unsigned int **a3)
{
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  ULONG v11; // edx
  ULONG v12; // r8d
  unsigned int v13; // r9d
  ULONG *Pool2; // rax
  unsigned int *v15; // rdi
  char *v16; // rsi
  int v17; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-10h] BYREF
  ULONG v19[3]; // [rsp+34h] [rbp-Ch] BYREF
  ULONG BufferLength; // [rsp+88h] [rbp+48h] BYREF

  BufferLength = 0;
  ResultLength = 0;
  v19[0] = 0;
  DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyClassName, 0, 0LL, &ResultLength);
  v7 = DeviceProperty;
  if ( DeviceProperty == -1073741772 )
  {
    ResultLength = 0;
  }
  else if ( DeviceProperty != -1073741789 )
  {
    return (unsigned int)v7;
  }
  v8 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassGuid, 0, 0LL, &BufferLength);
  v7 = v8;
  if ( v8 == -1073741772 )
  {
    BufferLength = 0;
  }
  else if ( v8 != -1073741789 )
  {
    return (unsigned int)v7;
  }
  v9 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, v19);
  v7 = v9;
  if ( v9 == -1073741772 )
  {
    v11 = 0;
    v19[0] = 0;
  }
  else
  {
    if ( v9 != -1073741789 )
      return (unsigned int)v7;
    v11 = v19[0];
  }
  v12 = BufferLength + 12;
  if ( BufferLength >= 0xFFFFFFF4 )
    return (unsigned int)-1073741675;
  v13 = -1;
  if ( v12 + ResultLength >= v12 )
    v13 = v12 + ResultLength;
  v7 = v12 + ResultLength < v12 ? 0xC0000095 : 0;
  if ( v12 + ResultLength >= v12 )
  {
    v7 = v13 + v11 < v13 ? 0xC0000095 : 0;
    if ( v13 + v11 >= v13 )
    {
      Pool2 = (ULONG *)ExAllocatePool2(0x100uLL);
      v15 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v16 = (char *)(Pool2 + 3);
      *Pool2 = BufferLength >> 1;
      Pool2[1] = ResultLength >> 1;
      Pool2[2] = v19[0] >> 1;
      if ( BufferLength )
      {
        v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassGuid, BufferLength, Pool2 + 3, &BufferLength);
        if ( v7 < 0 )
          goto LABEL_34;
        v16 += 2 * *v15;
      }
      if ( ResultLength )
      {
        v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyClassName, ResultLength, v16, &ResultLength);
        if ( v7 < 0 )
          goto LABEL_34;
        v16 += 2 * v15[1];
      }
      if ( !v19[0] )
      {
LABEL_22:
        *a3 = v15;
        return 0;
      }
      v7 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v19[0], v16, v19);
      if ( v7 >= 0 )
      {
        v17 = 0;
        if ( v15[2] > 2 )
        {
          do
          {
            if ( !*(_WORD *)&v16[2 * v17] )
              *(_WORD *)&v16[2 * v17] = 44;
            ++v17;
          }
          while ( v17 + 2 < v15[2] );
        }
        goto LABEL_22;
      }
LABEL_34:
      CmpFreeTransientPoolWithTag(v15, a2);
    }
  }
  return (unsigned int)v7;
}
