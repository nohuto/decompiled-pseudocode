/*
 * XREFs of _PnpDispatchDeviceInterface @ 0x14099E8E0
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x14047A900 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x140899344 (_CmGetMatchingDeviceInterfaceList.c)
 *     _CmGetDeviceInterfaceMappedPropertyLocales @ 0x14089BA08 (_CmGetDeviceInterfaceMappedPropertyLocales.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1409170A8 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1409172EC (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14099EC38 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14099EF5C (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmValidateDeviceInterfaceName @ 0x1409A0350 (_CmValidateDeviceInterfaceName.c)
 *     _CmDeleteDeviceInterface @ 0x140A8B64C (_CmDeleteDeviceInterface.c)
 *     _CmCreateDeviceInterface @ 0x140AF26F0 (_CmCreateDeviceInterface.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140AF32C0 (_CmSetDeviceInterfaceMappedProperty.c)
 */

__int64 __fastcall PnpDispatchDeviceInterface(__int64 a1, const WCHAR *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rbx
  int v7; // r15d
  __int128 *v8; // r8
  int DeviceInterfaceMappedPropertyFromRegValue; // r8d
  _DWORD *v10; // r10
  void *v11; // r11
  int v12; // r12d
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // r14
  unsigned int i; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v23; // [rsp+40h] [rbp-48h]
  void *v24; // [rsp+48h] [rbp-40h]
  __int128 v25; // [rsp+50h] [rbp-38h] BYREF

  v5 = 0LL;
  v7 = a1;
  v8 = 0LL;
  v25 = 0LL;
  if ( a4 == 8 )
  {
    DeviceInterfaceMappedPropertyFromRegValue = -1073741802;
    v10 = *(_DWORD **)(a5 + 24);
    v11 = *(void **)a5;
    v12 = *(_DWORD *)(a5 + 40);
    v13 = *(_QWORD *)(a5 + 32);
    v14 = *(_QWORD *)(a5 + 16);
    v15 = *(_QWORD *)(a5 + 8);
    v16 = *(_DWORD **)(a5 + 48);
    v23 = v10;
    v24 = *(void **)a5;
    *v16 = 0;
    if ( !v15 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= 3 )
          goto LABEL_13;
        v18 = (__int64)*(&off_140BD9020 + 2 * i);
        if ( v18 && *(_DWORD *)(v14 + 16) == *(_DWORD *)(v18 + 16) )
        {
          v19 = *(_QWORD *)v14 - *(_QWORD *)v18;
          if ( *(_QWORD *)v14 == *(_QWORD *)v18 )
            v19 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v18 + 8);
          if ( !v19 )
            break;
        }
      }
      DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyFromRegValue(
                                                    a1,
                                                    a2,
                                                    v11,
                                                    v14,
                                                    v10,
                                                    v13,
                                                    v12,
                                                    v16);
      if ( DeviceInterfaceMappedPropertyFromRegValue == -1073741802 )
      {
        v10 = v23;
        LODWORD(v11) = (_DWORD)v24;
LABEL_13:
        while ( (unsigned int)v5 < 4 )
        {
          v20 = (__int64)*(&off_140BD9860 + 2 * (unsigned int)v5);
          if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(v20 + 16) )
          {
            v21 = *(_QWORD *)v14 - *(_QWORD *)v20;
            if ( *(_QWORD *)v14 == *(_QWORD *)v20 )
              v21 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v20 + 8);
            if ( !v21 )
            {
              DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyFromComposite(
                                                            v7,
                                                            (_DWORD)a2,
                                                            (_DWORD)v11,
                                                            v14,
                                                            (__int64)v10,
                                                            v13,
                                                            v12,
                                                            (__int64)v16);
              return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
            }
          }
          LODWORD(v5) = (_DWORD)v5 + 1;
        }
      }
    }
  }
  else if ( a4 == 2 )
  {
    DeviceInterfaceMappedPropertyFromRegValue = CmOpenDeviceInterfaceRegKey(
                                                  a1,
                                                  (_DWORD)a2,
                                                  48,
                                                  2,
                                                  *(_DWORD *)a5,
                                                  *(_BYTE *)(a5 + 4),
                                                  *(_QWORD *)(a5 + 8),
                                                  a5 + 16);
  }
  else
  {
    switch ( a4 )
    {
      case 1:
        DeviceInterfaceMappedPropertyFromRegValue = CmValidateDeviceInterfaceName(a1, a2);
        break;
      case 3:
        DeviceInterfaceMappedPropertyFromRegValue = CmCreateDeviceInterface(
                                                      a1,
                                                      (_DWORD)a2,
                                                      *(_DWORD *)a5,
                                                      (int)a5 + 8,
                                                      a5 + 16,
                                                      *(_DWORD *)(a5 + 20) & 0xFFFF0000);
        break;
      case 4:
        DeviceInterfaceMappedPropertyFromRegValue = CmDeleteDeviceInterface(a1, a2, *(_DWORD *)a5 & 0xFFFF0000);
        break;
      case 5:
        if ( *(_QWORD *)a5 )
        {
          *(_QWORD *)&v25 = *(_QWORD *)a5;
          v5 = PnpCmMatchCallbackRoutine;
          v8 = &v25;
          *((_QWORD *)&v25 + 1) = *(_QWORD *)(a5 + 8);
        }
        DeviceInterfaceMappedPropertyFromRegValue = CmGetMatchingDeviceInterfaceList(
                                                      a1,
                                                      (__int64)v5,
                                                      (__int64)v8,
                                                      *(_QWORD *)(a5 + 16),
                                                      *(_DWORD *)(a5 + 24),
                                                      *(_QWORD *)(a5 + 32),
                                                      *(_DWORD *)(a5 + 40) & 0xFFFF0000);
        break;
      case 6:
        DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyKeys(
                                                      a1,
                                                      (int)a2,
                                                      *(_QWORD *)a5,
                                                      0,
                                                      *(_QWORD *)(a5 + 24),
                                                      *(_DWORD *)(a5 + 32),
                                                      *(unsigned int **)(a5 + 40));
        break;
      case 7:
        DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyLocales(
                                                      a1,
                                                      (__int64)a2,
                                                      0LL,
                                                      *(_QWORD *)(a5 + 8),
                                                      *(_WORD **)(a5 + 16),
                                                      *(_DWORD *)(a5 + 24),
                                                      *(_DWORD **)(a5 + 32));
        break;
      case 9:
        DeviceInterfaceMappedPropertyFromRegValue = CmSetDeviceInterfaceMappedProperty(
                                                      a1,
                                                      (_DWORD)a2,
                                                      *(_QWORD *)(a5 + 16),
                                                      *(_DWORD *)(a5 + 24),
                                                      *(_QWORD *)(a5 + 32),
                                                      *(_DWORD *)(a5 + 40));
        break;
      default:
        DeviceInterfaceMappedPropertyFromRegValue = -1073741811;
        break;
    }
  }
  return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
}
