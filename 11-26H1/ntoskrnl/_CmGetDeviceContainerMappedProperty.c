/*
 * XREFs of _CmGetDeviceContainerMappedProperty @ 0x140A3C0C8
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140A3BF10 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     _CmGetContainerBooleanProperty @ 0x14089DE00 (_CmGetContainerBooleanProperty.c)
 *     _CmIsLocalMachineContainer @ 0x140A3D768 (_CmIsLocalMachineContainer.c)
 */

__int64 __fastcall CmGetDeviceContainerMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        int a8,
        _DWORD *a9)
{
  unsigned int v10; // r10d
  int v12; // r9d
  __int64 v13; // rcx
  const DEVPROPKEY *v14; // r9
  __int64 v15; // rcx
  bool v16; // cf
  __int64 v17; // rcx
  __int64 v18; // rcx

  v10 = -1073741802;
  *a9 = 0;
  if ( a4 )
    return v10;
  v12 = *(_DWORD *)(a5 + 16);
  switch ( v12 )
  {
    case 'F':
      v15 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data1 )
        v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data4;
      if ( !v15 )
      {
        *a6 = 17;
        *a9 = 1;
        if ( a8 )
        {
          v16 = (unsigned __int8)CmIsLocalMachineContainer(a1, a2) != 0;
          v10 = 0;
          *a7 = -v16;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
      }
      break;
    case 'S':
      v17 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_HasProblem.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_HasProblem.fmtid.Data1 )
        v17 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_HasProblem.fmtid.Data4;
      if ( !v17 )
      {
        v14 = &DEVPKEY_Device_HasProblem;
        return (unsigned int)CmGetContainerBooleanProperty(a1, a2, a3, (__int64)v14, a6, a7, a8, a9);
      }
      break;
    case '7':
      v18 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1 )
        v18 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsConnected.fmtid.Data4;
      if ( !v18 )
      {
        v14 = (const DEVPROPKEY *)DEVPKEY_Device_IsConnected;
        return (unsigned int)CmGetContainerBooleanProperty(a1, a2, a3, (__int64)v14, a6, a7, a8, a9);
      }
      break;
    case 'l':
      v13 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data1 )
        v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data4;
      if ( !v13 )
      {
        v14 = &DEVPKEY_Device_IsRebootRequired;
        return (unsigned int)CmGetContainerBooleanProperty(a1, a2, a3, (__int64)v14, a6, a7, a8, a9);
      }
      break;
  }
  return v10;
}
