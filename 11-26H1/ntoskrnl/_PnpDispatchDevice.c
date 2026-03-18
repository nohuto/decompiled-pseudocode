/*
 * XREFs of _PnpDispatchDevice @ 0x1409956A0
 * Callers:
 *     <none>
 * Callees:
 *     _CmDeleteDevice @ 0x14089690C (_CmDeleteDevice.c)
 *     _CmValidateDeviceName @ 0x14098CC00 (_CmValidateDeviceName.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140992C9C (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140992EEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140994750 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140996B50 (_CmOpenDeviceRegKey.c)
 *     _CmGetMatchingDeviceList @ 0x140A8A7DC (_CmGetMatchingDeviceList.c)
 *     _CmSetDeviceMappedProperty @ 0x140AAFB8C (_CmSetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyLocales @ 0x140ADD7A4 (_CmGetDeviceMappedPropertyLocales.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140AE2F14 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmCreateDevice @ 0x140AF2C20 (_CmCreateDevice.c)
 */

__int64 __fastcall PnpDispatchDevice(_QWORD *a1, wchar_t *a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rbx
  __int128 *v8; // r8
  int DeviceMappedPropertyFromRegProp; // r10d
  wchar_t *v10; // r9
  unsigned int v11; // ebp
  wchar_t *v12; // r11
  unsigned int v13; // r13d
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int *v16; // r14
  __int64 v17; // rcx
  bool v18; // zf
  unsigned int i; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned int j; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  void *v28; // [rsp+50h] [rbp-58h]
  wchar_t *v29; // [rsp+58h] [rbp-50h]
  wchar_t *v30; // [rsp+60h] [rbp-48h]
  __int128 v31; // [rsp+68h] [rbp-40h] BYREF

  LODWORD(v5) = 0;
  LODWORD(v8) = 0;
  v31 = 0LL;
  if ( a4 == 8 )
  {
    DeviceMappedPropertyFromRegProp = -1073741802;
    v10 = (wchar_t *)*((_QWORD *)a5 + 4);
    v11 = a5[14] & 0xFFFF0000;
    v12 = (wchar_t *)*((_QWORD *)a5 + 3);
    v13 = a5[10];
    v14 = *((_QWORD *)a5 + 2);
    v15 = *((_QWORD *)a5 + 1);
    v16 = (unsigned int *)*((_QWORD *)a5 + 6);
    v17 = *(_QWORD *)a5;
    v29 = v10;
    v30 = v12;
    *v16 = 0;
    v28 = (void *)v17;
    if ( !v15 )
    {
      for ( i = 0; i < 0x21; ++i )
      {
        v21 = (__int64)*(&CmDeviceRegPropMap + 3 * i);
        if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(v21 + 16) )
        {
          v22 = *(_QWORD *)v14 - *(_QWORD *)v21;
          if ( *(_QWORD *)v14 == *(_QWORD *)v21 )
            v22 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v21 + 8);
          if ( !v22 )
          {
            DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                                (__int64)a1,
                                                (__int64)a2,
                                                v17,
                                                v14,
                                                v12,
                                                v10,
                                                v13,
                                                v16,
                                                v11);
            if ( DeviceMappedPropertyFromRegProp != -1073741802 )
              goto LABEL_3;
            v10 = v29;
            v12 = v30;
            break;
          }
        }
      }
      for ( j = 0; ; ++j )
      {
        if ( j >= 2 )
          goto LABEL_27;
        v24 = (__int64)*(&off_140BD9560 + 4 * j);
        if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(v24 + 16) )
        {
          v27 = *(_QWORD *)v14 - *(_QWORD *)v24;
          if ( *(_QWORD *)v14 == *(_QWORD *)v24 )
            v27 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v24 + 8);
          if ( !v27 )
            break;
        }
      }
      DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(
                                          (__int64)a1,
                                          (int)a2,
                                          v28,
                                          v14,
                                          v12,
                                          (__int64)v10,
                                          v13,
                                          v16);
      if ( DeviceMappedPropertyFromRegProp == -1073741802 )
      {
LABEL_27:
        while ( (unsigned int)v5 < 0x1C )
        {
          v25 = (__int64)*(&off_140BDB9A0 + 2 * (unsigned int)v5);
          if ( *(_DWORD *)(v14 + 16) == *(_DWORD *)(v25 + 16) )
          {
            v26 = *(_QWORD *)v14 - *(_QWORD *)v25;
            if ( *(_QWORD *)v14 == *(_QWORD *)v25 )
              v26 = *(_QWORD *)(v14 + 8) - *(_QWORD *)(v25 + 8);
            if ( !v26 )
            {
              DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromComposite(
                                                  a1,
                                                  a2,
                                                  v28,
                                                  (const wchar_t *)v14,
                                                  v30,
                                                  v29,
                                                  v13,
                                                  (int *)v16,
                                                  v11);
              break;
            }
          }
          LODWORD(v5) = (_DWORD)v5 + 1;
        }
      }
    }
  }
  else
  {
    if ( a4 != 2 )
    {
      switch ( a4 )
      {
        case 1:
          DeviceMappedPropertyFromRegProp = CmValidateDeviceName((__int64)a1, a2);
          goto LABEL_3;
        case 3:
          DeviceMappedPropertyFromRegProp = CmCreateDevice(
                                              (_DWORD)a1,
                                              (_DWORD)a2,
                                              *a5,
                                              (int)a5 + 8,
                                              (__int64)(a5 + 4),
                                              a5[5] & 0xFFFF0000);
          goto LABEL_3;
        case 4:
          DeviceMappedPropertyFromRegProp = CmDeleteDevice((__int64)a1, (__int64)a2, *a5 & 0xFFFF0000);
          goto LABEL_3;
        case 5:
          if ( *(_QWORD *)a5 )
          {
            *(_QWORD *)&v31 = *(_QWORD *)a5;
            v5 = PnpCmMatchCallbackRoutine;
            v8 = &v31;
            *((_QWORD *)&v31 + 1) = *((_QWORD *)a5 + 1);
          }
          DeviceMappedPropertyFromRegProp = CmGetMatchingDeviceList(
                                              (_DWORD)a1,
                                              (_DWORD)v5,
                                              (_DWORD)v8,
                                              *((_QWORD *)a5 + 2),
                                              a5[6],
                                              *((_QWORD *)a5 + 4),
                                              a5[10] & 0xFFFF0000);
          goto LABEL_3;
        case 6:
          DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyKeys(
                                              (_DWORD)a1,
                                              (_DWORD)a2,
                                              *(_QWORD *)a5,
                                              0,
                                              *((_QWORD *)a5 + 3),
                                              a5[8],
                                              *((_QWORD *)a5 + 5));
          goto LABEL_3;
        case 7:
          DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyLocales(
                                              (_DWORD)a1,
                                              (_DWORD)a2,
                                              0,
                                              *((_QWORD *)a5 + 1),
                                              *((_QWORD *)a5 + 2),
                                              a5[6],
                                              *((_QWORD *)a5 + 4));
          goto LABEL_3;
        case 9:
          DeviceMappedPropertyFromRegProp = CmSetDeviceMappedProperty(
                                              (_DWORD)a1,
                                              (_DWORD)a2,
                                              *((_QWORD *)a5 + 2),
                                              a5[6],
                                              *((PLARGE_INTEGER *)a5 + 4),
                                              a5[10]);
          goto LABEL_3;
        default:
          return (unsigned int)-1073741811;
      }
    }
    DeviceMappedPropertyFromRegProp = CmOpenDeviceRegKey(
                                        (_DWORD)a1,
                                        (_DWORD)a2,
                                        16,
                                        0,
                                        *a5,
                                        *((_BYTE *)a5 + 4),
                                        *((_QWORD *)a5 + 1),
                                        (__int64)(a5 + 4));
  }
LABEL_3:
  if ( DeviceMappedPropertyFromRegProp > -1073741637 )
  {
    if ( DeviceMappedPropertyFromRegProp != -1073741632 )
    {
      v18 = DeviceMappedPropertyFromRegProp == -1073741127;
      goto LABEL_6;
    }
    return 3221225524LL;
  }
  if ( DeviceMappedPropertyFromRegProp == -1073741637 )
    return 3221226021LL;
  if ( DeviceMappedPropertyFromRegProp == -1073741810 )
    return 3221225524LL;
  if ( DeviceMappedPropertyFromRegProp != -1073741767 )
  {
    v18 = DeviceMappedPropertyFromRegProp == -1073741766;
LABEL_6:
    if ( !v18 )
      return (unsigned int)DeviceMappedPropertyFromRegProp;
    return 3221225524LL;
  }
  return 3221225523LL;
}
