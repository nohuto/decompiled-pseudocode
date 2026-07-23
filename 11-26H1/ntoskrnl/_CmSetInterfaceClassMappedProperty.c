/*
 * XREFs of _CmSetInterfaceClassMappedProperty @ 0x1408A2814
 * Callers:
 *     _CmDeleteInterfaceClassWorker @ 0x14089D38C (_CmDeleteInterfaceClassWorker.c)
 *     _PnpDispatchInterfaceClass @ 0x1409721D0 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1408A1A88 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1408A2960 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1409AF740 (_PnpObjectRaisePropertyChangeEvent.c)
 */

__int64 __fastcall CmSetInterfaceClassMappedProperty(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8)
{
  int v8; // esi
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // eax
  int i; // edx
  __int64 v15; // rcx

  v8 = a3;
  v11 = -1073741802;
  if ( !a4 )
  {
    while ( 1 )
    {
      if ( (_DWORD)a4 )
        goto LABEL_15;
      if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface
        && *(_DWORD *)(a5 + 16) == DEVPKEY_DeviceInterfaceClass_DefaultInterface.pid )
      {
        v12 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
          v12 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
        if ( !v12 )
          break;
      }
      LODWORD(a4) = 1;
    }
    if ( a6 < 2 )
      v13 = CmDeleteInterfaceClassMappedPropertyFromRegValue(a1, a2, a3, a5);
    else
      v13 = CmSetInterfaceClassMappedPropertyFromRegValue(a1, a2, a3, a5, a6, a7, a8);
    v11 = v13;
    if ( v13 >= 0 )
    {
      PnpObjectRaisePropertyChangeEvent(a1, a2, 4, v8, 0LL, a5);
      return v11;
    }
    if ( v13 == -1073741802 )
    {
LABEL_15:
      for ( i = 0; !i; i = 1 )
      {
        if ( *(_DWORD *)(a5 + 16) == DEVPKEY_NAME.pid )
        {
          v15 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
            v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
          if ( !v15 )
            return (unsigned int)-1073741790;
        }
      }
    }
  }
  return v11;
}
