/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x140411AC4
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x140087EC0 (DpiMiracastInterfaceChange.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x140220B64 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyDataString(
        PDEVICE_OBJECT Pdo,
        DEVPROPKEY *PropertyKey,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6)
{
  _QWORD *v9; // rsi
  _DWORD *v10; // r14
  unsigned int DevicePropertyData; // ebx
  void *Data; // rdi
  int v13; // eax
  void *Pool2; // rax
  ULONG Size; // ebx
  ULONG Type; // [rsp+70h] [rbp+8h] BYREF
  size_t RequiredSize; // [rsp+80h] [rbp+18h] BYREF

  Type = 0;
  LODWORD(RequiredSize) = 0;
  if ( Pdo )
  {
    if ( PropertyKey )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = a6;
        if ( a6 )
        {
          DevicePropertyData = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, 0, 0LL, (PULONG)&RequiredSize, &Type);
          if ( DevicePropertyData == -1073741789 )
          {
            if ( Type != 18 )
            {
              DevicePropertyData = -1073741811;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1110;
              return DevicePropertyData;
            }
            LODWORD(RequiredSize) = RequiredSize + 2;
            Pool2 = (void *)ExAllocatePool2(a4, (unsigned int)RequiredSize, 1953656900LL);
            Data = Pool2;
            if ( !Pool2 )
            {
              DevicePropertyData = -1073741670;
              WdLogSingleEntry1(6LL);
              WdLogGlobalForLineNumber = 1137;
              return DevicePropertyData;
            }
            Size = RequiredSize;
            memset(Pool2, 0, (unsigned int)RequiredSize);
            DevicePropertyData = IoGetDevicePropertyData(
                                   Pdo,
                                   PropertyKey,
                                   0,
                                   0,
                                   Size,
                                   Data,
                                   (PULONG)&RequiredSize,
                                   &Type);
            if ( (DevicePropertyData & 0x80000000) != 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1161;
              ExFreePoolWithTag(Data, 0);
              return DevicePropertyData;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1100;
            Data = 0LL;
            if ( (DevicePropertyData & 0x80000000) != 0 )
              return DevicePropertyData;
          }
          v13 = RequiredSize;
          *v9 = Data;
          *v10 = v13;
          return DevicePropertyData;
        }
      }
    }
  }
  return -1073741811LL;
}
