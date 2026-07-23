/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromComposite @ 0x1409731E4
 * Callers:
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1408A1ED4 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedProperty @ 0x140972FBC (_CmGetInstallerClassMappedProperty.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1409734D8 (_CmGetInstallerClassCompoundFilters.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromComposite(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        ULONG a7,
        ULONG *a8)
{
  _DWORD *v8; // r15
  ULONG *v9; // rsi
  __int64 v11; // r14
  int v13; // r11d
  unsigned int v14; // r10d
  ULONG v15; // ebp
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int ObjectProperty; // eax
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  ULONG v26; // [rsp+B8h] [rbp+20h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v26 = 0;
  v13 = a1;
  *a5 = 0;
  v14 = 0;
  *v9 = 0;
  if ( v11 )
  {
    v15 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  if ( v16 == 10 )
  {
    v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
      v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
    if ( !v20 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         a2,
                         2,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_DeviceClass_Name,
                         v8,
                         v11,
                         v15,
                         (__int64)&v26,
                         0);
      v14 = ObjectProperty;
      switch ( ObjectProperty )
      {
        case 0u:
          goto LABEL_23;
        case 0xC0000023:
          goto LABEL_23;
        case 0xC0000225:
          v24 = PnpGetObjectProperty(
                  a1,
                  a2,
                  2,
                  a3,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ClassName,
                  v8,
                  v11,
                  v15,
                  (__int64)&v26,
                  0);
          v14 = v24;
          if ( !v24 || v24 == -1073741789 )
            goto LABEL_23;
          break;
      }
    }
  }
  else
  {
    if ( v16 != 4 )
    {
      if ( v16 == 20 )
      {
        v17 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_CompoundUpperFilters;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_CompoundUpperFilters )
          v17 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
        if ( !v17 )
          return (unsigned int)CmGetInstallerClassCompoundFilters(
                                 v13,
                                 a2,
                                 (_DWORD)a3,
                                 a4,
                                 (__int64)v8,
                                 v11,
                                 v15,
                                 (__int64)v9);
      }
      if ( v16 == 21 )
      {
        v19 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_CompoundLowerFilters;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_CompoundLowerFilters )
          v19 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
        if ( !v19 )
          return (unsigned int)CmGetInstallerClassCompoundFilters(
                                 v13,
                                 a2,
                                 (_DWORD)a3,
                                 a4,
                                 (__int64)v8,
                                 v11,
                                 v15,
                                 (__int64)v9);
      }
      return v14;
    }
    v22 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_Configurable )
      v22 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
    if ( !v22 )
    {
      v23 = PnpGetObjectProperty(
              a1,
              a2,
              2,
              a3,
              0LL,
              (__int64)DEVPKEY_DeviceClass_ConfigurableOverride,
              v8,
              v11,
              v15,
              (__int64)&v26,
              0);
      v14 = v23;
      if ( v23 && v23 != -1073741789 )
      {
        if ( v23 == -1073741275 )
        {
          v14 = PnpGetObjectProperty(
                  a1,
                  a2,
                  2,
                  a3,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ClassInstaller,
                  v8,
                  0LL,
                  0,
                  (__int64)&v26,
                  0);
          if ( v14 == -1073741275 )
            v14 = PnpGetObjectProperty(
                    a1,
                    a2,
                    2,
                    a3,
                    0LL,
                    (__int64)&DEVPKEY_DeviceClass_ClassCoInstallers,
                    v8,
                    0LL,
                    0,
                    (__int64)&v26,
                    0);
          if ( (v14 & 0x80000000) == 0 || v14 == -1073741789 || v14 == -1073741275 )
          {
            *v9 = 1;
            *v8 = 17;
            if ( v15 >= *v9 )
            {
              *(_BYTE *)v11 = (v14 != -1073741275) - 1;
              return 0;
            }
            else
            {
              return (unsigned int)-1073741789;
            }
          }
        }
        return v14;
      }
LABEL_23:
      *v9 = v26;
    }
  }
  return v14;
}
