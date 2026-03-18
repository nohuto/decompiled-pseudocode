/*
 * XREFs of _PnpDispatchDeviceInterface @ 0x1408CA500
 * Callers:
 *     PnpGetObjectProperty @ 0x1408CA860 (PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CAF60 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x14044DBD8 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x14080BBFC (_CmGetMatchingDeviceInterfaceList.c)
 *     _CmGetDeviceInterfaceMappedPropertyLocales @ 0x14080E840 (_CmGetDeviceInterfaceMappedPropertyLocales.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x140955BD4 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1409565C8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140956A68 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmValidateDeviceInterfaceName @ 0x140958C90 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095A430 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140A58D74 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmCreateDeviceInterface @ 0x140A71334 (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x140AB7998 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PnpDispatchDeviceInterface(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rbx
  int v6; // edi
  int v7; // esi
  __int128 *v8; // r8
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
  unsigned int DeviceInterfaceMappedPropertyFromRegValue; // ecx
  __int64 v25; // r9
  unsigned int DeviceInterface; // eax
  unsigned int i; // r8d
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // [rsp+40h] [rbp-48h]
  __int128 v33; // [rsp+48h] [rbp-40h] BYREF

  v5 = 0LL;
  v6 = a2;
  v7 = a1;
  v8 = 0LL;
  v33 = 0LL;
  v9 = a4 - 1;
  if ( !v9 )
  {
    DeviceInterface = CmValidateDeviceInterfaceName(a1, a2);
    goto LABEL_15;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    DeviceInterface = CmOpenDeviceInterfaceRegKey(
                        a1,
                        a2,
                        48,
                        0,
                        *(_DWORD *)a5,
                        *((_BYTE *)a5 + 4),
                        a5[1],
                        (__int64)(a5 + 2));
LABEL_15:
    DeviceInterfaceMappedPropertyFromRegValue = DeviceInterface;
    return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    DeviceInterface = CmCreateDeviceInterface(
                        a1,
                        a2,
                        *(_DWORD *)a5,
                        (int)a5 + 8,
                        (__int64)(a5 + 2),
                        *((_DWORD *)a5 + 5) & 0xFFFF0000);
    goto LABEL_15;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    DeviceInterface = CmDeleteDeviceInterface(a1, a2, *(_DWORD *)a5 & 0xFFFF0000);
    goto LABEL_15;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( *a5 )
    {
      *(_QWORD *)&v33 = *a5;
      v5 = PnpCmMatchCallbackRoutine;
      v8 = &v33;
      *((_QWORD *)&v33 + 1) = a5[1];
    }
    DeviceInterface = CmGetMatchingDeviceInterfaceList(
                        a1,
                        (__int64)v5,
                        (__int64)v8,
                        a5[2],
                        *((_DWORD *)a5 + 6),
                        a5[4],
                        (_DWORD)a5[5] & 0xFFFF0000);
    goto LABEL_15;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    DeviceInterface = CmGetDeviceInterfaceMappedPropertyKeys(a1, a2, *a5, 0, a5[3], *((_DWORD *)a5 + 8), a5[5]);
    goto LABEL_15;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    DeviceInterface = CmGetDeviceInterfaceMappedPropertyLocales(
                        a1,
                        a2,
                        0LL,
                        a5[1],
                        (_WORD *)a5[2],
                        *((_DWORD *)a5 + 6),
                        (_DWORD *)a5[4]);
    goto LABEL_15;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      DeviceInterfaceMappedPropertyFromRegValue = -1073741811;
      return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
    }
    DeviceInterface = CmSetDeviceInterfaceMappedProperty(
                        a1,
                        a2,
                        a5[2],
                        *((_DWORD *)a5 + 6),
                        a5[4],
                        *((_DWORD *)a5 + 10));
    goto LABEL_15;
  }
  v17 = a5[1];
  v18 = *a5;
  v19 = (_DWORD *)a5[6];
  v20 = *((_DWORD *)a5 + 10);
  v21 = a5[4];
  v22 = a5[3];
  v23 = a5[2];
  DeviceInterfaceMappedPropertyFromRegValue = -1073741802;
  *v19 = 0;
  v32 = v18;
  if ( !v17 )
  {
    while ( (unsigned int)v8 < 3 )
    {
      v25 = (__int64)*(&off_140B2C130 + 2 * (unsigned int)v8);
      if ( v25 && *(_DWORD *)(v23 + 16) == *(_DWORD *)(v25 + 16) )
      {
        v31 = *(_QWORD *)v23 - *(_QWORD *)v25;
        if ( *(_QWORD *)v23 == *(_QWORD *)v25 )
          v31 = *(_QWORD *)(v23 + 8) - *(_QWORD *)(v25 + 8);
        if ( !v31 )
        {
          DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyFromRegValue(
                                                        v7,
                                                        v6,
                                                        v18,
                                                        v23,
                                                        v22,
                                                        v21,
                                                        v20,
                                                        (__int64)v19);
          if ( DeviceInterfaceMappedPropertyFromRegValue != -1073741802 )
            return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
          LODWORD(v18) = v32;
          break;
        }
      }
      LODWORD(v8) = (_DWORD)v8 + 1;
    }
    for ( i = 0; i < 4; ++i )
    {
      v29 = (__int64)*(&off_140B2C960 + 2 * i);
      if ( *(_DWORD *)(v23 + 16) == *(_DWORD *)(v29 + 16) )
      {
        v30 = *(_QWORD *)v23 - *(_QWORD *)v29;
        if ( *(_QWORD *)v23 == *(_QWORD *)v29 )
          v30 = *(_QWORD *)(v23 + 8) - *(_QWORD *)(v29 + 8);
        if ( !v30 )
        {
          DeviceInterface = CmGetDeviceInterfaceMappedPropertyFromComposite(
                              v7,
                              v6,
                              v18,
                              v23,
                              v22,
                              v21,
                              v20,
                              (__int64)v19);
          goto LABEL_15;
        }
      }
    }
  }
  return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedPropertyFromRegValue);
}
