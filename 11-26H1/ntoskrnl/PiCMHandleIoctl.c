/*
 * XREFs of PiCMHandleIoctl @ 0x140958980
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x140958910 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140776764 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x14077686C (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x140776A24 (PiCMDeleteDevice.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14091B4B8 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14091C550 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14091C7BC (PiCMOpenObjectKey.c)
 *     PiCMGetDeviceDepth @ 0x14094D0A0 (PiCMGetDeviceDepth.c)
 *     PiCMRegisterDeviceInterface @ 0x14094D1B4 (PiCMRegisterDeviceInterface.c)
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiCMSetRegistryProperty @ 0x14094DCB8 (PiCMSetRegistryProperty.c)
 *     PiCMSetObjectProperty @ 0x14094E4C8 (PiCMSetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140958558 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409596C0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMReturnBufferResultData @ 0x140959E10 (PiCMReturnBufferResultData.c)
 *     PiCMCapturePropertyInputData @ 0x14095A1C0 (PiCMCapturePropertyInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x14095A610 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x14095A808 (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x14095AA88 (PiCMValidateDeviceInstance.c)
 *     _PnpGetObjectPropertyWorker @ 0x14095CB50 (_PnpGetObjectPropertyWorker.c)
 *     PiCMOpenClassKey @ 0x140971868 (PiCMOpenClassKey.c)
 *     _CmGetInstallerClassRegProp @ 0x1409738BC (_CmGetInstallerClassRegProp.c)
 *     PiCMEnumerateSubKeys @ 0x140974874 (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140A17B4C (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceStatus @ 0x140A9FA54 (PiCMGetDeviceStatus.c)
 *     PiCMGetDeviceIdList @ 0x140AA1B80 (PiCMGetDeviceIdList.c)
 *     PiCMGetObjectPropertyKeys @ 0x140AB5148 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 *     PiCMDeleteDeviceKey @ 0x140B69C68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140B6D64C (PiCMDeleteObject.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6E20C (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140B6E3E4 (PiCMDeleteClassKey.c)
 *     PiCMSetDeviceProblem @ 0x140B6FE50 (PiCMSetDeviceProblem.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMHandleIoctl(void *a1, __int64 a2, void *a3, unsigned int a4, _DWORD *a5, int a6, int a7)
{
  int v10; // ebx
  void *Pool2; // r12
  int v12; // r13d
  void *v13; // r12
  PVOID v14; // rdx
  int v15; // r8d
  int v16; // r15d
  unsigned int v17; // r15d
  void *v19; // rax
  __int64 v20; // r15
  int v21; // eax
  int ObjectPropertyWorker; // ebx
  int v23; // eax
  int v24; // eax
  char PreviousMode; // di
  PVOID v26; // rcx
  int DeviceRegProp; // eax
  unsigned int v28; // ebx
  int v29; // eax
  char v30; // di
  int v31; // [rsp+20h] [rbp-E0h]
  unsigned int v32; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v33; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h]
  PVOID v35; // [rsp+70h] [rbp-90h]
  PVOID v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  unsigned int *v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  unsigned int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  unsigned int *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  __int128 v47; // [rsp+D0h] [rbp-30h] BYREF
  PVOID v48[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp+0h]
  PVOID P; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+114h] [rbp+14h]

  *a5 = 0;
  if ( a6 == 4655123 )
  {
    memset_0(&v47, 0, 0x48uLL);
    v33 = 0;
    v32 = 0;
    Pool2 = 0LL;
    v10 = PiCMCapturePropertyInputData(a1);
    if ( v10 < 0 )
      goto LABEL_57;
    v36 = v48[0];
    if ( !v48[0] || (_DWORD)v50 || v52 || DWORD1(v47) || P || !a3 || a4 < 0x14 )
      goto LABEL_78;
    if ( DWORD2(v47) == 1 )
    {
      v12 = 1;
      goto LABEL_42;
    }
    if ( DWORD2(v47) == 65538 )
    {
      v12 = 8;
    }
    else
    {
      if ( SDWORD2(v47) <= 6 )
      {
        switch ( DWORD2(v47) )
        {
          case 6:
            v12 = 6;
            goto LABEL_42;
          case 2:
            v12 = 2;
            goto LABEL_42;
          case 3:
            v12 = 4;
            goto LABEL_42;
          case 4:
            v12 = 3;
LABEL_42:
            if ( a4 != 20 )
            {
              Pool2 = (void *)ExAllocatePool2(0x100uLL);
              if ( !Pool2 )
              {
                ObjectPropertyWorker = -1073741670;
                goto LABEL_54;
              }
            }
            v40 = (__int64)&v48[1] + 4;
            v34 = *(_QWORD *)&PiPnpRtlCtx;
            v41 = &v33;
            v19 = *(void **)(*(_QWORD *)&PiPnpRtlCtx + 488LL);
            v45 = &v32;
            v37 = 0LL;
            v38 = 0LL;
            v44 = 0;
            v46 = 0LL;
            v35 = v19;
            v39 = 0LL;
            v42 = (__int64)Pool2;
            v43 = a4 - 20;
            if ( v19 )
            {
              v20 = (__int64)v36;
              v21 = guard_dispatch_icall_no_overrides(v34, (__int64)v36);
              if ( v21 == -1073741822 )
              {
                v35 = 0LL;
              }
              else
              {
                if ( v21 == -1073741536 )
                {
LABEL_47:
                  ObjectPropertyWorker = v37;
                  goto LABEL_53;
                }
                if ( v21 )
                {
LABEL_98:
                  ObjectPropertyWorker = -1073741595;
                  goto LABEL_54;
                }
              }
            }
            else
            {
              v20 = (__int64)v36;
            }
            ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                                     v34,
                                     v20,
                                     v12,
                                     v39,
                                     *((__int64 *)&v39 + 1),
                                     v40,
                                     (__int64)v41,
                                     v42,
                                     v43,
                                     (__int64)v45,
                                     v46);
            if ( !v35 )
              goto LABEL_53;
            LODWORD(v37) = ObjectPropertyWorker;
            v23 = guard_dispatch_icall_no_overrides(v34, v20);
            switch ( v23 )
            {
              case -1073741822:
                goto LABEL_53;
              case -1073741536:
                goto LABEL_47;
              case 0:
LABEL_53:
                if ( ObjectPropertyWorker >= 0 )
                {
                  v24 = PiCMReturnBufferResultData(
                          (unsigned int)ObjectPropertyWorker,
                          v32,
                          v33,
                          Pool2,
                          v32,
                          v53,
                          a3,
                          a4,
                          a5);
LABEL_55:
                  v10 = v24;
                  if ( Pool2 )
                    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_57:
                  PreviousMode = KeGetCurrentThread()->PreviousMode;
                  if ( v48[0] && PreviousMode )
                    ExFreePoolWithTag(v48[0], 0);
                  v26 = P;
                  if ( P && PreviousMode )
                    goto LABEL_39;
                  return (unsigned int)v10;
                }
LABEL_54:
                v24 = PiCMReturnBufferResultData((unsigned int)ObjectPropertyWorker, v32, v33, 0LL, 0, v53, a3, a4, a5);
                goto LABEL_55;
            }
            goto LABEL_98;
          case 5:
            v12 = 5;
            goto LABEL_42;
        }
LABEL_78:
        ObjectPropertyWorker = -1073741811;
        goto LABEL_54;
      }
      switch ( DWORD2(v47) )
      {
        case 0x10001:
          v12 = 7;
          break;
        case 0x10003:
          v12 = 9;
          break;
        case 0x10004:
          v12 = 10;
          break;
        case 0x10005:
          v12 = 11;
          break;
        default:
          goto LABEL_78;
      }
    }
    if ( PiDrvDbCtx )
      goto LABEL_42;
    goto LABEL_78;
  }
  if ( a6 != 4655131 )
  {
    if ( a6 == 4655139 )
    {
      return (unsigned int)PiCMGetRelatedDeviceInstance((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
    }
    else
    {
      switch ( a6 )
      {
        case 4655107:
          v10 = PiCMGetDeviceIdList((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655111:
          v10 = PiCMGetDeviceInterfaceList((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655115:
          v10 = PiCMEnumerateSubKeys((_DWORD)a1, a2, (_DWORD)a3, a4);
          break;
        case 4655119:
          v10 = PiCMGetObjectPropertyKeys((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655127:
          v10 = PiCMSetObjectProperty(a1, a2, (__int64)a3, a4, a7, a5);
          break;
        case 4655135:
          v10 = PiCMSetRegistryProperty(a1, a2, (__int64)a3, a4, a7, a5);
          break;
        case 4655143:
          v10 = PiCMGetDeviceStatus(a1);
          break;
        case 4655147:
          v10 = PiCMGetDeviceDepth(a1, a2, a3, a4, a7, a5);
          break;
        case 4655151:
          v10 = PiCMSetDeviceProblem(a1, v31, (__int64)a5);
          break;
        case 4655155:
          v10 = PiCMQueryRemove((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655159:
          v10 = PiCMRegisterDeviceInterface(a1, a2, (__int64)a3, a4, a7, a5);
          break;
        case 4655163:
          v10 = PiCMUnregisterDeviceInterface((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655167:
          v10 = PiCMGetDeviceInterfaceAlias((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655171:
          v10 = PiCMValidateDeviceInstance((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655175:
          v10 = PiCMCreateDevice((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655179:
          v10 = PiCMDeleteDevice(a1, a2, (__int64)a3, a4, a7, a5);
          break;
        case 4655183:
          v10 = PiCMDeviceAction(a1, a2, (__int64)a3, a4, a7, a5);
          break;
        case 4655187:
          v10 = PiCMOpenDeviceInterfaceKey(a1, a2, (__int64)a3, a4, a7, a5);
          break;
        case 4655191:
          v10 = PiCMDeleteDeviceInterfaceKey(a1, a2, (__int64)a3, a4, a7, a5);
          break;
        case 4655195:
          v10 = PiCMOpenDeviceKey(a1, a2, (__int64)a3, a4, a7, a5);
          break;
        case 4655199:
          v10 = PiCMDeleteDeviceKey((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655203:
          v10 = PiCMOpenClassKey((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655207:
          v10 = PiCMDeleteClassKey((int)a1, a2, (int)a3, a4, a7, a5);
          break;
        case 4655211:
          v10 = PiCMOpenObjectKey(a1, a2, (__int64)a3, a4, a7, a5);
          break;
        case 4655215:
          v10 = PiCMCreateObject(a1, a2, (__int64)a3, a4, a7, a5);
          break;
        case 4655219:
          v10 = PiCMDeleteObject((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        case 4655223:
          v10 = PiCMGetObjectList((_DWORD)a1, a2, (_DWORD)a3, a4, a7, (__int64)a5);
          break;
        default:
          v10 = -1073741637;
          break;
      }
    }
    return (unsigned int)v10;
  }
  v33 = 0;
  v32 = 0;
  v47 = 0LL;
  v50 = 0LL;
  v13 = 0LL;
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  v10 = PiCMCaptureRegistryPropertyInputData(a1, a2, a7, (__int64)&v47);
  if ( v10 >= 0 )
  {
    v14 = v48[0];
    v15 = DWORD2(v47);
    v16 = HIDWORD(v48[1]);
    LODWORD(v34) = DWORD2(v47);
    v35 = v48[0];
    if ( v48[0] && !(_DWORD)v50 && !(_DWORD)v49 && !DWORD1(v47) && !*((_QWORD *)&v49 + 1) && a3 && a4 >= 0x14 )
    {
      if ( a4 != 20 )
      {
        v13 = (void *)ExAllocatePool2(0x100uLL);
        if ( !v13 )
        {
          v28 = -1073741670;
          goto LABEL_67;
        }
        v14 = v35;
        v15 = v34;
      }
      switch ( v16 )
      {
        case 9:
          v17 = 9;
          break;
        case 2:
          v17 = 2;
          break;
        case 10:
          v17 = 10;
          break;
        default:
          switch ( v16 )
          {
            case 1:
              v17 = 1;
              goto LABEL_64;
            case 3:
              v17 = 3;
              goto LABEL_64;
            case 4:
              v17 = 4;
              goto LABEL_64;
            case 5:
              v17 = 5;
              goto LABEL_64;
            case 6:
              v17 = 6;
              goto LABEL_64;
            case 7:
              v17 = 7;
              goto LABEL_64;
            case 8:
              v17 = 8;
              goto LABEL_64;
            case 11:
              v17 = 11;
              goto LABEL_64;
            case 12:
              v17 = 12;
              goto LABEL_64;
            case 13:
              v17 = 13;
              goto LABEL_64;
            case 14:
              v17 = 14;
              goto LABEL_64;
            case 15:
              v17 = 15;
              goto LABEL_64;
            case 16:
              v17 = 16;
              goto LABEL_64;
            case 17:
              v17 = 17;
              goto LABEL_64;
            case 18:
              v17 = 18;
              goto LABEL_64;
            case 19:
              v17 = 19;
              goto LABEL_64;
            case 20:
              v17 = 20;
              goto LABEL_64;
            case 21:
              v17 = 21;
              goto LABEL_64;
            case 22:
              v17 = 22;
              goto LABEL_64;
            case 23:
              v17 = 23;
              goto LABEL_64;
            case 24:
              v17 = 24;
              goto LABEL_64;
            case 25:
              v17 = 25;
              goto LABEL_64;
            case 26:
              v17 = 26;
              goto LABEL_64;
            case 27:
              v17 = 27;
              goto LABEL_64;
            case 28:
              v17 = 28;
              goto LABEL_64;
            case 29:
              v17 = 29;
              goto LABEL_64;
            case 30:
              v17 = 30;
              goto LABEL_64;
            case 31:
              v17 = 31;
              goto LABEL_64;
            case 32:
              v17 = 32;
              goto LABEL_64;
            case 33:
              v17 = 33;
              goto LABEL_64;
            case 34:
              v17 = 34;
              goto LABEL_64;
            case 35:
              v17 = 35;
              goto LABEL_64;
            case 36:
              v17 = 36;
              goto LABEL_64;
            case 37:
              v17 = 37;
              goto LABEL_64;
            default:
              goto LABEL_96;
          }
      }
LABEL_64:
      v32 = a4 - 20;
      if ( v15 == 1 )
      {
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)v14,
                          0LL,
                          v17,
                          (__int64)&v33,
                          (__int64)v13,
                          (__int64)&v32,
                          0);
        goto LABEL_66;
      }
      if ( v15 == 2 )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          PiPnpRtlCtx,
                          (_DWORD)v14,
                          0,
                          v17,
                          (__int64)&v33,
                          (__int64)v13,
                          (__int64)&v32);
LABEL_66:
        v28 = DeviceRegProp;
        if ( DeviceRegProp >= 0 )
        {
          v29 = PiCMReturnBufferResultData((unsigned int)DeviceRegProp, v32, v33, v13, v32, HIDWORD(v50), a3, a4, a5);
LABEL_68:
          v10 = v29;
          if ( v13 )
            ExFreePoolWithTag(v13, 0x34706E50u);
          goto LABEL_70;
        }
LABEL_67:
        v29 = PiCMReturnBufferResultData(v28, v32, v33, 0LL, 0, HIDWORD(v50), a3, a4, a5);
        goto LABEL_68;
      }
    }
LABEL_96:
    v28 = -1073741811;
    goto LABEL_67;
  }
LABEL_70:
  v30 = KeGetCurrentThread()->PreviousMode;
  if ( v48[0] && v30 )
    ExFreePoolWithTag(v48[0], 0);
  v26 = (PVOID)*((_QWORD *)&v49 + 1);
  if ( *((_QWORD *)&v49 + 1) && v30 )
LABEL_39:
    ExFreePoolWithTag(v26, 0);
  return (unsigned int)v10;
}
