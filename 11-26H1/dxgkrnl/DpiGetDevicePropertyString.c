/*
 * XREFs of DpiGetDevicePropertyString @ 0x14041357C
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x140087EC0 (DpiMiracastInterfaceChange.c)
 *     DpiSetDriverVersion @ 0x14023A8E8 (DpiSetDriverVersion.c)
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1403F928C (DpiFdoInitializeAdapterUniqueString.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  _DWORD *v9; // rsi
  NTSTATUS v10; // ebx
  void *v11; // rdi
  int v12; // eax
  void *Pool2; // rax
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  if ( DeviceObject )
  {
    if ( a4 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, (PULONG)&Size);
        if ( v10 == -1073741789 )
        {
          LODWORD(Size) = Size + 2;
          Pool2 = (void *)ExAllocatePool2(a3, (unsigned int)Size, 1953656900LL);
          v11 = Pool2;
          if ( !Pool2 )
          {
            v10 = -1073741670;
            WdLogSingleEntry1(6LL);
            WdLogGlobalForLineNumber = 1289;
            return (unsigned int)v10;
          }
          memset(Pool2, 0, (unsigned int)Size);
          v10 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v11, (PULONG)&Size);
          if ( v10 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1310;
            ExFreePoolWithTag(v11, 0);
            return (unsigned int)v10;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1262;
          v11 = 0LL;
          if ( v10 < 0 )
            return (unsigned int)v10;
        }
        v12 = Size;
        *a4 = v11;
        *v9 = v12;
        return (unsigned int)v10;
      }
    }
  }
  return 3221225485LL;
}
