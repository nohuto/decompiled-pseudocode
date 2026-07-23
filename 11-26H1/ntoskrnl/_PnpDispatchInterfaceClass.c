/*
 * XREFs of _PnpDispatchInterfaceClass @ 0x1409721D0
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x140474270 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmDeleteInterfaceClass @ 0x14089D234 (_CmDeleteInterfaceClass.c)
 *     _CmGetMatchingCommonClassList @ 0x14089F440 (_CmGetMatchingCommonClassList.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x1408A2350 (_CmGetInterfaceClassMappedPropertyKeys.c)
 *     _CmGetInterfaceClassMappedPropertyLocales @ 0x1408A2550 (_CmGetInterfaceClassMappedPropertyLocales.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x1408A2814 (_CmSetInterfaceClassMappedProperty.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140972500 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140972760 (_CmOpenInterfaceClassRegKey.c)
 *     _CmValidateInstallerClassName @ 0x140AC4F40 (_CmValidateInstallerClassName.c)
 *     _CmCreateInterfaceClass @ 0x140AF51CC (_CmCreateInterfaceClass.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140B71FC0 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 */

__int64 __fastcall PnpDispatchInterfaceClass(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rbx
  int v7; // esi
  __int128 *v8; // rdx
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r10
  _DWORD *v19; // r15
  int v20; // ebp
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // r14
  int InterfaceClassMappedPropertyFromRegValue; // ecx
  int i; // r8d
  __int64 v26; // rdx
  int j; // r8d
  __int64 v29; // rdx
  int InterfaceClass; // eax
  int v31; // [rsp+40h] [rbp-48h]
  __int128 v32; // [rsp+48h] [rbp-40h] BYREF

  v5 = 0LL;
  v7 = a1;
  v8 = 0LL;
  v32 = 0LL;
  v9 = a4 - 1;
  if ( !v9 )
  {
    InterfaceClass = CmValidateInstallerClassName(a1, a2);
    goto LABEL_27;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    InterfaceClass = CmOpenInterfaceClassRegKey(
                       a1,
                       a2,
                       a3,
                       0,
                       *(_DWORD *)a5,
                       *(_BYTE *)(a5 + 4),
                       *(_QWORD *)(a5 + 8),
                       a5 + 16);
    goto LABEL_27;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    InterfaceClass = CmCreateInterfaceClass(
                       a1,
                       a2,
                       *(_DWORD *)a5,
                       (int)a5 + 8,
                       a5 + 16,
                       *(_DWORD *)(a5 + 20) & 0xFFFF0000);
    goto LABEL_27;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    InterfaceClass = CmDeleteInterfaceClass(a1, a2, *(_DWORD *)a5 & 0xFFFF0000);
    goto LABEL_27;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)&v32 = *(_QWORD *)a5;
      v5 = PnpCmMatchCallbackRoutine;
      v8 = &v32;
      *((_QWORD *)&v32 + 1) = *(_QWORD *)(a5 + 8);
    }
    InterfaceClass = CmGetMatchingCommonClassList(
                       a1,
                       4,
                       (__int64)v5,
                       (__int64)v8,
                       *(_QWORD *)(a5 + 16),
                       *(_DWORD *)(a5 + 24),
                       *(_QWORD *)(a5 + 32),
                       *(_DWORD *)(a5 + 40) & 0xFFFF0000);
    goto LABEL_27;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    InterfaceClass = CmGetInterfaceClassMappedPropertyKeys(
                       a1,
                       a2,
                       *(_QWORD *)a5,
                       0,
                       *(_QWORD *)(a5 + 24),
                       *(_DWORD *)(a5 + 32),
                       *(unsigned int **)(a5 + 40));
    goto LABEL_27;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    InterfaceClass = CmGetInterfaceClassMappedPropertyLocales(
                       a1,
                       0LL,
                       a3,
                       *(_QWORD *)(a5 + 8),
                       *(_WORD **)(a5 + 16),
                       *(_DWORD *)(a5 + 24),
                       *(_DWORD **)(a5 + 32));
LABEL_27:
    InterfaceClassMappedPropertyFromRegValue = InterfaceClass;
    return PnpMapCmStatusToDispatchStatus(InterfaceClassMappedPropertyFromRegValue);
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      InterfaceClassMappedPropertyFromRegValue = -1073741811;
      return PnpMapCmStatusToDispatchStatus(InterfaceClassMappedPropertyFromRegValue);
    }
    InterfaceClass = CmSetInterfaceClassMappedProperty(
                       a1,
                       a2,
                       *(_QWORD *)a5,
                       *(_QWORD *)(a5 + 8),
                       *(_QWORD *)(a5 + 16),
                       *(_DWORD *)(a5 + 24),
                       *(_QWORD *)(a5 + 32),
                       *(_DWORD *)(a5 + 40));
    goto LABEL_27;
  }
  v17 = *(_QWORD *)(a5 + 8);
  v18 = *(_QWORD *)a5;
  v19 = *(_DWORD **)(a5 + 48);
  v20 = *(_DWORD *)(a5 + 40);
  v21 = *(_QWORD *)(a5 + 32);
  v22 = *(_QWORD *)(a5 + 24);
  v23 = *(_QWORD *)(a5 + 16);
  InterfaceClassMappedPropertyFromRegValue = -1073741802;
  *v19 = 0;
  v31 = v18;
  if ( !v17 )
  {
    for ( i = 0; !i; i = 1 )
    {
      if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface
        && *(_DWORD *)(v23 + 16) == DEVPKEY_DeviceInterfaceClass_DefaultInterface.pid )
      {
        v26 = *(_QWORD *)v23 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
        if ( *(_QWORD *)v23 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
          v26 = *(_QWORD *)(v23 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
        if ( !v26 )
        {
          InterfaceClassMappedPropertyFromRegValue = CmGetInterfaceClassMappedPropertyFromRegValue(
                                                       v7,
                                                       a2,
                                                       v18,
                                                       v23,
                                                       v22,
                                                       v21,
                                                       v20,
                                                       (__int64)v19);
          if ( InterfaceClassMappedPropertyFromRegValue != -1073741802 )
            return PnpMapCmStatusToDispatchStatus(InterfaceClassMappedPropertyFromRegValue);
          LODWORD(v18) = v31;
          break;
        }
      }
    }
    for ( j = 0; !j; j = 1 )
    {
      if ( *(_DWORD *)(v23 + 16) == DEVPKEY_NAME.pid )
      {
        v29 = *(_QWORD *)v23 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
        if ( *(_QWORD *)v23 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
          v29 = *(_QWORD *)(v23 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
        if ( !v29 )
        {
          InterfaceClass = CmGetInterfaceClassMappedPropertyFromComposite(v7, a2, v18, v23, v22, v21, v20, (__int64)v19);
          goto LABEL_27;
        }
      }
    }
  }
  return PnpMapCmStatusToDispatchStatus(InterfaceClassMappedPropertyFromRegValue);
}
