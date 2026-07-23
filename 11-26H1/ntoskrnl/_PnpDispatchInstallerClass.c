/*
 * XREFs of _PnpDispatchInstallerClass @ 0x140972DA0
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x140474270 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmCreateInstallerClass @ 0x14089C6DC (_CmCreateInstallerClass.c)
 *     _CmDeleteInstallerClass @ 0x14089D0DC (_CmDeleteInstallerClass.c)
 *     _CmGetMatchingCommonClassList @ 0x14089F440 (_CmGetMatchingCommonClassList.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1408A1ED4 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedPropertyLocales @ 0x1408A2220 (_CmGetInstallerClassMappedPropertyLocales.c)
 *     _CmOpenInstallerClassRegKey @ 0x14095ED14 (_CmOpenInstallerClassRegKey.c)
 *     _CmGetInstallerClassMappedProperty @ 0x140972FBC (_CmGetInstallerClassMappedProperty.c)
 *     _CmValidateInstallerClassName @ 0x140AC4F40 (_CmValidateInstallerClassName.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140B40214 (_CmSetInstallerClassMappedProperty.c)
 */

__int64 __fastcall PnpDispatchInstallerClass(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // r8
  __int128 *v6; // r11
  int v7; // r9d
  __int64 v8; // r9
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int InstallerClassMappedProperty; // eax
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    InstallerClassMappedProperty = CmSetInstallerClassMappedProperty(
                                                     a1,
                                                     a2,
                                                     *(_QWORD *)a5,
                                                     *(_QWORD *)(a5 + 8),
                                                     *(_QWORD *)(a5 + 16),
                                                     *(_DWORD *)(a5 + 24),
                                                     *(_QWORD *)(a5 + 32),
                                                     *(_DWORD *)(a5 + 40));
                  else
                    InstallerClassMappedProperty = -1073741811;
                }
                else
                {
                  InstallerClassMappedProperty = CmGetInstallerClassMappedProperty(
                                                   a1,
                                                   a2,
                                                   *(_QWORD *)a5,
                                                   *(_QWORD *)(a5 + 8),
                                                   *(_QWORD *)(a5 + 16),
                                                   *(_QWORD *)(a5 + 24),
                                                   *(_QWORD *)(a5 + 32),
                                                   *(_DWORD *)(a5 + 40),
                                                   *(_QWORD *)(a5 + 48));
                }
              }
              else
              {
                InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyLocales(
                                                 a1,
                                                 a2,
                                                 0LL,
                                                 *(_QWORD *)(a5 + 8),
                                                 *(_WORD **)(a5 + 16),
                                                 *(_DWORD *)(a5 + 24),
                                                 *(_DWORD **)(a5 + 32));
              }
            }
            else
            {
              InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyKeys(
                                               a1,
                                               a2,
                                               *(_QWORD *)a5,
                                               0,
                                               *(_QWORD *)(a5 + 24),
                                               *(_DWORD *)(a5 + 32),
                                               *(unsigned int **)(a5 + 40));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              *(_QWORD *)&v17 = *(_QWORD *)a5;
              v5 = PnpCmMatchCallbackRoutine;
              v6 = &v17;
              *((_QWORD *)&v17 + 1) = *(_QWORD *)(a5 + 8);
            }
            InstallerClassMappedProperty = CmGetMatchingCommonClassList(
                                             a1,
                                             2,
                                             (__int64)v5,
                                             (__int64)v6,
                                             *(_QWORD *)(a5 + 16),
                                             *(_DWORD *)(a5 + 24),
                                             *(_QWORD *)(a5 + 32),
                                             *(_DWORD *)(a5 + 40) & 0xFFFF0000);
          }
        }
        else
        {
          InstallerClassMappedProperty = CmDeleteInstallerClass(a1, a2, *(_DWORD *)a5 & 0xFFFF0000);
        }
      }
      else
      {
        InstallerClassMappedProperty = CmCreateInstallerClass(
                                         a1,
                                         a2,
                                         *(_DWORD *)a5,
                                         (HANDLE *)(a5 + 8),
                                         (_BYTE *)(a5 + 16),
                                         *(_DWORD *)(a5 + 20) & 0xFFFF0000);
      }
    }
    else
    {
      InstallerClassMappedProperty = CmOpenInstallerClassRegKey(
                                       a1,
                                       a2,
                                       0LL,
                                       v8,
                                       *(_DWORD *)a5,
                                       *(_BYTE *)(a5 + 4),
                                       *(_QWORD *)(a5 + 8),
                                       a5 + 16);
    }
  }
  else
  {
    InstallerClassMappedProperty = CmValidateInstallerClassName(a1, a2);
  }
  return PnpMapCmStatusToDispatchStatus(InstallerClassMappedProperty);
}
