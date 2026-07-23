/*
 * XREFs of _CmSetInstallerClassMappedProperty @ 0x140B40214
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x140781680 (_CmDeleteInstallerClassWorker.c)
 *     _PnpDispatchInstallerClass @ 0x140972DA0 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1408A1878 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1408A18DC (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1408A261C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegProp @ 0x1408A26A0 (_CmSetInstallerClassMappedPropertyFromRegProp.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1409AF740 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140B47184 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmSetInstallerClassMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _BYTE *a7,
        int a8)
{
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int i; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  unsigned int j; // edx
  __int64 v22; // r8
  __int64 v23; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    v12 = 0x140000000uLL;
    while ( 1 )
    {
      if ( (unsigned int)a4 >= 9 )
        goto LABEL_12;
      v13 = (__int64)*(&CmClassRegPropMap + 3 * a4);
      if ( v13 && *(_DWORD *)(a5 + 16) == *(_DWORD *)(v13 + 16) )
      {
        v14 = *(_QWORD *)a5 - *(_QWORD *)v13;
        if ( *(_QWORD *)a5 == *(_QWORD *)v13 )
          v14 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v13 + 8);
        if ( !v14 )
          break;
      }
      a4 = (unsigned int)(a4 + 1);
    }
    v11 = CmSetInstallerClassMappedPropertyFromRegProp(a1, a2, (__int64)a3, a5, a6, a7, a8);
    if ( v11 == -1073741802 )
    {
      v12 = 0x140000000uLL;
LABEL_12:
      for ( i = 0; ; ++i )
      {
        if ( i >= 0xD )
          goto LABEL_24;
        v16 = (__int64)*(&off_140BE1FD0 + 4 * i);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v16 + 16) )
        {
          v17 = *(_QWORD *)a5 - *(_QWORD *)v16;
          if ( *(_QWORD *)a5 == *(_QWORD *)v16 )
            v17 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v16 + 8);
          if ( !v17 )
            break;
        }
        v12 = 0x140000000uLL;
      }
      if ( a6 < 2 )
        v18 = CmDeleteInstallerClassMappedPropertyFromRegValue(a1, a2, a3, a5);
      else
        v18 = CmSetInstallerClassMappedPropertyFromRegValue(a1, a2, (_DWORD)a3, a5, a6, (__int64)a7, a8);
      v11 = v18;
      if ( v18 >= 0 )
      {
LABEL_32:
        PnpObjectRaisePropertyChangeEvent(a1, a2, 2, (__int64)a3, 0LL, a5);
        return v11;
      }
      if ( v18 != -1073741802 )
        return v11;
LABEL_24:
      if ( *(_DWORD *)(a5 + 16) != 2 )
        goto LABEL_34;
      v19 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
        v19 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
      if ( v19 )
        goto LABEL_34;
      if ( a6 < 2 )
        v20 = CmDeleteInstallerClassMappedPropertyFromCoInstallers(a1, a2);
      else
        v20 = CmSetInstallerClassMappedPropertyFromCoInstallers(a1, a2, v12, a6, (__int64)a7, a8);
      v11 = v20;
      if ( v20 >= 0 )
        goto LABEL_32;
      if ( v20 == -1073741802 )
      {
LABEL_34:
        for ( j = 0; j < 4; ++j )
        {
          v22 = (__int64)*(&off_140BE06D0 + 2 * j);
          if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v22 + 16) )
          {
            v23 = *(_QWORD *)a5 - *(_QWORD *)v22;
            if ( *(_QWORD *)a5 == *(_QWORD *)v22 )
              v23 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v22 + 8);
            if ( !v23 )
              return (unsigned int)-1073741790;
          }
        }
      }
    }
  }
  return v11;
}
