/*
 * XREFs of _CmGetInterfaceClassMappedPropertyLocales @ 0x1408A2550
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x1409721D0 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v7; // r8d
  int v8; // edx
  __int64 v9; // rcx
  int i; // edx
  __int64 v11; // rcx

  v7 = -1073741802;
  v8 = 0;
  *a7 = 0;
  while ( !v8 )
  {
    if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface
      && *(_DWORD *)(a4 + 16) == DEVPKEY_DeviceInterfaceClass_DefaultInterface.pid )
    {
      v9 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
        v9 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
      if ( !v9 )
      {
LABEL_16:
        *a7 = 1;
        if ( a6 )
        {
          v7 = 0;
          *a5 = 0;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
        return v7;
      }
    }
    v8 = 1;
  }
  for ( i = 0; !i; i = 1 )
  {
    if ( *(_DWORD *)(a4 + 16) == DEVPKEY_NAME.pid )
    {
      v11 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v11 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( !v11 )
        goto LABEL_16;
    }
  }
  return v7;
}
