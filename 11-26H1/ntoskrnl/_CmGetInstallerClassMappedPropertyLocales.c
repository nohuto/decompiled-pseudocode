/*
 * XREFs of _CmGetInstallerClassMappedPropertyLocales @ 0x1408A2220
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x140972DA0 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v7; // r10d
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int i; // edx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int j; // edx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax

  v7 = -1073741802;
  v8 = 0;
  *a7 = 0;
  while ( v8 < 9 )
  {
    v9 = (__int64)*(&CmClassRegPropMap + 3 * v8);
    if ( v9 && *(_DWORD *)(a4 + 16) == *(_DWORD *)(v9 + 16) )
    {
      v10 = *(_QWORD *)a4 - *(_QWORD *)v9;
      if ( *(_QWORD *)a4 == *(_QWORD *)v9 )
        v10 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v9 + 8);
      if ( !v10 )
        goto LABEL_28;
    }
    ++v8;
  }
  for ( i = 0; i < 0xD; ++i )
  {
    v12 = (__int64)*(&off_140BE1FD0 + 4 * i);
    if ( v12 && *(_DWORD *)(a4 + 16) == *(_DWORD *)(v12 + 16) )
    {
      v13 = *(_QWORD *)a4 - *(_QWORD *)v12;
      if ( *(_QWORD *)a4 == *(_QWORD *)v12 )
        v13 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v12 + 8);
      if ( !v13 )
        goto LABEL_28;
    }
  }
  for ( j = 0; j < 4; ++j )
  {
    v15 = (__int64)*(&off_140BE06D0 + 2 * j);
    if ( *(_DWORD *)(a4 + 16) == *(_DWORD *)(v15 + 16) )
    {
      v16 = *(_QWORD *)a4 - *(_QWORD *)v15;
      if ( *(_QWORD *)a4 == *(_QWORD *)v15 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)(v15 + 8);
      if ( !v16 )
        goto LABEL_28;
    }
  }
  if ( *(_DWORD *)(a4 + 16) == 2 )
  {
    v17 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
      v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
    if ( !v17 )
    {
LABEL_28:
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
    }
  }
  return v7;
}
