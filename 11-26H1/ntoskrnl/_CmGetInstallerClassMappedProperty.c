/*
 * XREFs of _CmGetInstallerClassMappedProperty @ 0x140972FBC
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x140972DA0 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1409731E4 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14097368C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140973EE8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140B43A1C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 */

__int64 __fastcall CmGetInstallerClassMappedProperty(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int InstallerClassMappedPropertyFromRegProp; // r10d
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int i; // edx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int j; // edx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v23; // rax

  InstallerClassMappedPropertyFromRegProp = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v13 = 0x140000000uLL;
    while ( (unsigned int)a4 < 9 )
    {
      v14 = (__int64)*(&CmClassRegPropMap + 3 * a4);
      if ( v14 && *(_DWORD *)(a5 + 16) == *(_DWORD *)(v14 + 16) )
      {
        v15 = *(_QWORD *)a5 - *(_QWORD *)v14;
        if ( *(_QWORD *)a5 == *(_QWORD *)v14 )
          v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v14 + 8);
        if ( !v15 )
        {
          InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                      a1,
                                                      a2,
                                                      a3,
                                                      a5,
                                                      a6,
                                                      a7,
                                                      a8,
                                                      (__int64)a9);
          if ( InstallerClassMappedPropertyFromRegProp != -1073741802 )
            return InstallerClassMappedPropertyFromRegProp;
          v13 = 0x140000000uLL;
          break;
        }
      }
      a4 = (unsigned int)(a4 + 1);
    }
    for ( i = 0; i < 0xD; ++i )
    {
      v17 = (__int64)*(&off_140BE1FD0 + 4 * i);
      if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v17 + 16) )
      {
        v18 = *(_QWORD *)a5 - *(_QWORD *)v17;
        if ( *(_QWORD *)a5 == *(_QWORD *)v17 )
          v18 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v17 + 8);
        if ( !v18 )
        {
          InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegValue(
                                                      a1,
                                                      a2,
                                                      a3,
                                                      a5,
                                                      a6,
                                                      a7,
                                                      a8,
                                                      (__int64)a9);
          if ( InstallerClassMappedPropertyFromRegProp != -1073741802 )
            return InstallerClassMappedPropertyFromRegProp;
          break;
        }
      }
      v13 = 0x140000000uLL;
    }
    if ( *(_DWORD *)(a5 + 16) != 2 )
      goto LABEL_21;
    v23 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
      v23 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
    if ( v23
      || (InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromCoInstallers(
                                                      a1,
                                                      a2,
                                                      v13,
                                                      a6,
                                                      a7,
                                                      a8,
                                                      (__int64)a9),
          InstallerClassMappedPropertyFromRegProp == -1073741802) )
    {
LABEL_21:
      for ( j = 0; j < 4; ++j )
      {
        v20 = (__int64)*(&off_140BE06D0 + 2 * j);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v20 + 16) )
        {
          v21 = *(_QWORD *)a5 - *(_QWORD *)v20;
          if ( *(_QWORD *)a5 == *(_QWORD *)v20 )
            v21 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v20 + 8);
          if ( !v21 )
            return (unsigned int)CmGetInstallerClassMappedPropertyFromComposite(a1, a2, a3, a5, a6, a7, a8, (__int64)a9);
        }
      }
    }
  }
  return InstallerClassMappedPropertyFromRegProp;
}
