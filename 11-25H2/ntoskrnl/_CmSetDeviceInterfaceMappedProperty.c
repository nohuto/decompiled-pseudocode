/*
 * XREFs of _CmSetDeviceInterfaceMappedProperty @ 0x140A58D74
 * Callers:
 *     _CmDeleteDeviceInterfaceWorker @ 0x140808898 (_CmDeleteDeviceInterfaceWorker.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA500 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x14096AF58 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140A58EDC (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140A592A0 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmSetDeviceInterfaceMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        ULONG a8)
{
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int i; // edx
  __int64 v17; // r8
  __int64 v18; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    while ( (unsigned int)a4 < 3 )
    {
      v12 = (__int64)*(&off_140B2C130 + 2 * (unsigned int)a4);
      if ( v12 && *(_DWORD *)(a5 + 16) == *(_DWORD *)(v12 + 16) )
      {
        v13 = *(_QWORD *)a5 - *(_QWORD *)v12;
        if ( *(_QWORD *)a5 == *(_QWORD *)v12 )
          v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v12 + 8);
        if ( !v13 )
        {
          if ( a6 < 2 )
            v14 = CmDeleteDeviceInterfaceMappedPropertyFromRegValue(a1, a2, a3, a5);
          else
            v14 = CmSetDeviceInterfaceMappedPropertyFromRegValue(a1, a2, a3, a5, a6, a7, a8);
          v11 = v14;
          if ( v14 >= 0 )
          {
            if ( *(_QWORD *)(a1 + 496) )
              PnpInterfaceRaisePropertyChangeEventWorker(a1, a2, a3, 0LL, a5);
            return v11;
          }
          if ( v14 != -1073741802 )
            return v11;
          break;
        }
      }
      LODWORD(a4) = a4 + 1;
    }
    for ( i = 0; i < 4; ++i )
    {
      v17 = (__int64)*(&off_140B2C960 + 2 * i);
      if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v17 + 16) )
      {
        v18 = *(_QWORD *)a5 - *(_QWORD *)v17;
        if ( *(_QWORD *)a5 == *(_QWORD *)v17 )
          v18 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v17 + 8);
        if ( !v18 )
          return (unsigned int)-1073741790;
      }
    }
  }
  return v11;
}
