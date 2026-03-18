/*
 * XREFs of _PnpDispatchDevice @ 0x1408CB4B0
 * Callers:
 *     PnpGetObjectProperty @ 0x1408CA860 (PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CAF60 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x14044DBD8 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmDeleteDevice @ 0x140808398 (_CmDeleteDevice.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     _CmCreateDevice @ 0x14094E818 (_CmCreateDevice.c)
 *     _CmSetDeviceMappedProperty @ 0x14094EA4C (_CmSetDeviceMappedProperty.c)
 *     _CmValidateDeviceName @ 0x14095AE80 (_CmValidateDeviceName.c)
 *     _CmGetMatchingDeviceList @ 0x1409A0048 (_CmGetMatchingDeviceList.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1409A8830 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409A913C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409AA514 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409AAA04 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceMappedPropertyLocales @ 0x140A4B314 (_CmGetDeviceMappedPropertyLocales.c)
 */

__int64 __fastcall PnpDispatchDevice(__int64 a1, const WCHAR *a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rbx
  __int128 *v8; // r8
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  unsigned int DeviceMappedPropertyFromRegProp; // edx
  __int64 v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // r10
  __int64 v21; // r11
  _DWORD *v22; // r15
  int v23; // r12d
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // r9
  unsigned int Device; // eax
  __int64 v29; // rcx
  unsigned int i; // r8d
  __int64 v31; // r9
  unsigned int j; // r8d
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // [rsp+50h] [rbp-48h]
  __int64 v37; // [rsp+58h] [rbp-40h]
  __int128 v38; // [rsp+60h] [rbp-38h] BYREF

  LODWORD(v5) = 0;
  LODWORD(v8) = 0;
  v38 = 0LL;
  v9 = a4 - 1;
  if ( !v9 )
  {
    Device = CmValidateDeviceName(a1, a2);
    goto LABEL_14;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    Device = CmOpenDeviceRegKey(a1, a2, 16, 0, *a5, *((_BYTE *)a5 + 4), *((_QWORD *)a5 + 1), a5 + 4);
LABEL_14:
    DeviceMappedPropertyFromRegProp = Device;
    return PnpMapCmStatusToDispatchStatus(DeviceMappedPropertyFromRegProp);
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    Device = CmCreateDevice(a1, (_DWORD)a2, *a5, (int)a5 + 8, (__int64)(a5 + 4), a5[5] & 0xFFFF0000);
    goto LABEL_14;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    Device = CmDeleteDevice(a1, (__int64)a2, *a5 & 0xFFFF0000);
    goto LABEL_14;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( *(_QWORD *)a5 )
    {
      *(_QWORD *)&v38 = *(_QWORD *)a5;
      v5 = PnpCmMatchCallbackRoutine;
      v8 = &v38;
      *((_QWORD *)&v38 + 1) = *((_QWORD *)a5 + 1);
    }
    Device = CmGetMatchingDeviceList(
               a1,
               (_DWORD)v5,
               (_DWORD)v8,
               *((_QWORD *)a5 + 2),
               a5[6],
               *((_QWORD *)a5 + 4),
               a5[10] & 0xFFFF0000);
    goto LABEL_14;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    Device = CmGetDeviceMappedPropertyKeys(
               a1,
               (_DWORD)a2,
               *(_QWORD *)a5,
               0,
               *((_QWORD *)a5 + 3),
               a5[8],
               *((_QWORD *)a5 + 5));
    goto LABEL_14;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    Device = CmGetDeviceMappedPropertyLocales(
               a1,
               (_DWORD)a2,
               0,
               *((_QWORD *)a5 + 1),
               *((_QWORD *)a5 + 2),
               a5[6],
               *((_QWORD *)a5 + 4));
    goto LABEL_14;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      DeviceMappedPropertyFromRegProp = -1073741811;
      return PnpMapCmStatusToDispatchStatus(DeviceMappedPropertyFromRegProp);
    }
    Device = CmSetDeviceMappedProperty(a1, (_DWORD)a2, *((_QWORD *)a5 + 2), a5[6], *((PLARGE_INTEGER *)a5 + 4), a5[10]);
    goto LABEL_14;
  }
  DeviceMappedPropertyFromRegProp = -1073741802;
  v18 = *((_QWORD *)a5 + 1);
  v19 = a5[14] & 0xFFFF0000;
  v20 = *((_QWORD *)a5 + 3);
  v21 = *(_QWORD *)a5;
  v22 = (_DWORD *)*((_QWORD *)a5 + 6);
  v23 = a5[10];
  v24 = *((_QWORD *)a5 + 4);
  v25 = *((_QWORD *)a5 + 2);
  *v22 = 0;
  v36 = v20;
  v37 = v21;
  if ( !v18 )
  {
    while ( (unsigned int)v8 < 0x21 )
    {
      v26 = (__int64)*(&CmDeviceRegPropMap + 3 * (unsigned int)v8);
      if ( *(_DWORD *)(v25 + 16) == *(_DWORD *)(v26 + 16) )
      {
        v29 = *(_QWORD *)v25 - *(_QWORD *)v26;
        if ( *(_QWORD *)v25 == *(_QWORD *)v26 )
          v29 = *(_QWORD *)(v25 + 8) - *(_QWORD *)(v26 + 8);
        if ( !v29 )
        {
          DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                              a1,
                                              (_DWORD)a2,
                                              v21,
                                              v25,
                                              v20,
                                              v24,
                                              v23,
                                              (__int64)v22,
                                              v19);
          if ( DeviceMappedPropertyFromRegProp != -1073741802 )
            return PnpMapCmStatusToDispatchStatus(DeviceMappedPropertyFromRegProp);
          v20 = v36;
          LODWORD(v21) = v37;
          break;
        }
      }
      LODWORD(v8) = (_DWORD)v8 + 1;
    }
    for ( i = 0; i < 2; ++i )
    {
      v31 = (__int64)*(&off_140B2C660 + 4 * i);
      if ( *(_DWORD *)(v25 + 16) == *(_DWORD *)(v31 + 16) )
      {
        v35 = *(_QWORD *)v25 - *(_QWORD *)v31;
        if ( *(_QWORD *)v25 == *(_QWORD *)v31 )
          v35 = *(_QWORD *)(v25 + 8) - *(_QWORD *)(v31 + 8);
        if ( !v35 )
        {
          DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(
                                              a1,
                                              (_DWORD)a2,
                                              v21,
                                              v25,
                                              v20,
                                              v24,
                                              v23,
                                              (__int64)v22);
          if ( DeviceMappedPropertyFromRegProp != -1073741802 )
            return PnpMapCmStatusToDispatchStatus(DeviceMappedPropertyFromRegProp);
          break;
        }
      }
    }
    for ( j = 0; j < 0x1C; ++j )
    {
      v33 = (__int64)*(&off_140B2EAA0 + 2 * j);
      if ( *(_DWORD *)(v25 + 16) == *(_DWORD *)(v33 + 16) )
      {
        v34 = *(_QWORD *)v25 - *(_QWORD *)v33;
        if ( *(_QWORD *)v25 == *(_QWORD *)v33 )
          v34 = *(_QWORD *)(v25 + 8) - *(_QWORD *)(v33 + 8);
        if ( !v34 )
        {
          Device = CmGetDeviceMappedPropertyFromComposite(a1, a2, v37, v25, v36, v24, v23, v22, v19);
          goto LABEL_14;
        }
      }
    }
  }
  return PnpMapCmStatusToDispatchStatus(DeviceMappedPropertyFromRegProp);
}
