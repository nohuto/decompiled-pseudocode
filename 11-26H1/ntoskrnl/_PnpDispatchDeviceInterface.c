/*
 * XREFs of _PnpDispatchDeviceInterface @ 0x14095F340
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x140474270 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x14089F744 (_CmGetMatchingDeviceInterfaceList.c)
 *     _CmGetDeviceInterfaceMappedPropertyLocales @ 0x1408A1E08 (_CmGetDeviceInterfaceMappedPropertyLocales.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14095F698 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095F9BC (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmValidateDeviceInterfaceName @ 0x140960DB0 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x140971B14 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140971D58 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceInterface @ 0x1409B846C (_CmDeleteDeviceInterface.c)
 *     _CmCreateDeviceInterface @ 0x140AF4EDC (_CmCreateDeviceInterface.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140AF5AB0 (_CmSetDeviceInterfaceMappedProperty.c)
 */

__int64 __fastcall PnpDispatchDeviceInterface(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rbx
  int v6; // ebp
  int v7; // r15d
  __int128 *v8; // r8
  int DeviceInterfaceMappedPropertyFromRegValue; // r8d
  __int64 v10; // r10
  __int64 v11; // r11
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
  __int64 v23; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+48h] [rbp-40h]
  __int128 v25; // [rsp+50h] [rbp-38h] BYREF

  v5 = 0LL;
  v6 = a2;
  v7 = a1;
  v8 = 0LL;
  v25 = 0LL;
  if ( a4 == 8 )
  {
    DeviceInterfaceMappedPropertyFromRegValue = -1073741802;
    v10 = a5[3];
    v11 = *a5;
    v12 = *((_DWORD *)a5 + 10);
    v13 = a5[4];
    v14 = a5[2];
    v15 = a5[1];
    v16 = (_DWORD *)a5[6];
    v23 = v10;
    v24 = *a5;
    *v16 = 0;
    if ( !v15 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= 3 )
          goto LABEL_13;
        v18 = (__int64)*(&off_140BDFEB0 + 2 * i);
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
                                                    v6,
                                                    v11,
                                                    v14,
                                                    v10,
                                                    v13,
                                                    v12,
                                                    (__int64)v16);
      if ( DeviceInterfaceMappedPropertyFromRegValue == -1073741802 )
      {
        v10 = v23;
        LODWORD(v11) = v24;
LABEL_13:
        while ( (unsigned int)v5 < 4 )
        {
          v20 = (__int64)*(&off_140BE0710 + 2 * (unsigned int)v5);
          if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(v20 + 16) )
          {
            v21 = *(_QWORD *)v14 - *(_QWORD *)v20;
            if ( *(_QWORD *)v14 == *(_QWORD *)v20 )
              v21 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v20 + 8);
            if ( !v21 )
            {
              DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyFromComposite(
                                                            v7,
                                                            v6,
                                                            v11,
                                                            v14,
                                                            v10,
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
                                                  a2,
                                                  48,
                                                  2,
                                                  *(_DWORD *)a5,
                                                  *((_BYTE *)a5 + 4),
                                                  a5[1],
                                                  (__int64)(a5 + 2));
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
                                                      a2,
                                                      *(_DWORD *)a5,
                                                      (int)a5 + 8,
                                                      (__int64)(a5 + 2),
                                                      *((_DWORD *)a5 + 5) & 0xFFFF0000);
        break;
      case 4:
        DeviceInterfaceMappedPropertyFromRegValue = CmDeleteDeviceInterface(a1, a2, *(_DWORD *)a5 & 0xFFFF0000);
        break;
      case 5:
        if ( *a5 )
        {
          *(_QWORD *)&v25 = *a5;
          v5 = PnpCmMatchCallbackRoutine;
          v8 = &v25;
          *((_QWORD *)&v25 + 1) = a5[1];
        }
        DeviceInterfaceMappedPropertyFromRegValue = CmGetMatchingDeviceInterfaceList(
                                                      a1,
                                                      (__int64)v5,
                                                      (__int64)v8,
                                                      a5[2],
                                                      *((_DWORD *)a5 + 6),
                                                      a5[4],
                                                      (_DWORD)a5[5] & 0xFFFF0000);
        break;
      case 6:
        DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyKeys(
                                                      a1,
                                                      a2,
                                                      *a5,
                                                      0,
                                                      a5[3],
                                                      *((_DWORD *)a5 + 8),
                                                      a5[5]);
        break;
      case 7:
        DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyLocales(
                                                      a1,
                                                      a2,
                                                      0LL,
                                                      a5[1],
                                                      (_WORD *)a5[2],
                                                      *((_DWORD *)a5 + 6),
                                                      (_DWORD *)a5[4]);
        break;
      case 9:
        DeviceInterfaceMappedPropertyFromRegValue = CmSetDeviceInterfaceMappedProperty(
                                                      a1,
                                                      a2,
                                                      a5[2],
                                                      *((_DWORD *)a5 + 6),
                                                      a5[4],
                                                      *((_DWORD *)a5 + 10));
        break;
      default:
        DeviceInterfaceMappedPropertyFromRegValue = -1073741811;
        break;
    }
  }
  return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
}
