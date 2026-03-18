/*
 * XREFs of _PnpCtxGetCachedNodeBaseKey @ 0x140997720
 * Callers:
 *     _PnpCtxOpenContextNodeBaseKey @ 0x140895E88 (_PnpCtxOpenContextNodeBaseKey.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140909B98 (_CmGetDeviceContainerIdFromBase.c)
 *     PiCMEnumerateSubKeys @ 0x140919E14 (PiCMEnumerateSubKeys.c)
 *     PiDevCfgInitMigrationContext @ 0x14098B654 (PiDevCfgInitMigrationContext.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140996AB8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140996CF0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14099FC70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1409A0580 (_CmOpenCommonClassRegKeyWorker.c)
 *     PipOpenServiceEnumKeys @ 0x140A12308 (PipOpenServiceEnumKeys.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140B1D980 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x140B41B2C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 * Callees:
 *     _PnpGetEnumSecurityDescriptor @ 0x14089CF18 (_PnpGetEnumSecurityDescriptor.c)
 *     _SysCtxRegCreateTree @ 0x14091E188 (_SysCtxRegCreateTree.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x140AB0D34 (_SysCtxGetCachedContextBaseKey.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxGetCachedNodeBaseKey(__int64 a1, __int64 *a2, int a3, _QWORD *a4)
{
  int v4; // edi
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  __int64 result; // rax
  void *EnumSecurityDescriptor; // r15
  unsigned int v11; // r14d
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  const wchar_t *v15; // r12
  int CachedContextBaseKey; // r14d
  HANDLE v17; // rax
  __int64 v18; // [rsp+30h] [rbp-30h]
  HANDLE v19; // [rsp+50h] [rbp-10h] BYREF
  void *v20; // [rsp+58h] [rbp-8h] BYREF

  v4 = a3 - 1;
  v19 = 0LL;
  v20 = 0LL;
  v7 = 0x140000000uLL;
  v8 = a1;
  result = 0LL;
  EnumSecurityDescriptor = 0LL;
  v11 = 1;
  if ( a3 != 5 )
  {
    switch ( a3 )
    {
      case 1:
        v14 = 1LL;
        goto LABEL_25;
      case 2:
        v14 = 2LL;
        goto LABEL_25;
      case 3:
        v14 = 3LL;
LABEL_25:
        result = SysCtxGetCachedContextBaseKey(a2[7], v14, &v19, 0x140000000uLL);
        v7 = 0x140000000uLL;
        goto LABEL_12;
      case 4:
        v13 = a2[7];
        if ( *(_QWORD *)(v13 + 48) )
          v19 = *(HANDLE *)(v13 + 48);
        else
          result = 3221225524LL;
LABEL_12:
        if ( (int)result < 0 )
          return result;
        goto LABEL_6;
      case 6:
        v12 = (void *)a2[9];
        goto LABEL_5;
      case 7:
        v12 = (void *)a2[10];
        goto LABEL_5;
      case 8:
        v12 = (void *)a2[11];
        goto LABEL_5;
      case 9:
        v12 = (void *)a2[12];
        goto LABEL_5;
      case 10:
        v12 = (void *)a2[13];
        goto LABEL_5;
      case 11:
        v12 = (void *)a2[14];
        goto LABEL_5;
      case 12:
        v12 = (void *)a2[15];
        goto LABEL_5;
      case 13:
        v12 = (void *)a2[16];
        goto LABEL_5;
      case 14:
        v12 = (void *)a2[17];
        goto LABEL_5;
      case 15:
        v12 = (void *)a2[18];
        goto LABEL_5;
      default:
        return 3221225485LL;
    }
  }
  v12 = (void *)a2[8];
LABEL_5:
  v19 = v12;
LABEL_6:
  if ( v19 )
  {
    *a4 = v19;
  }
  else
  {
    switch ( v4 )
    {
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
        switch ( v4 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
            return 3221225485LL;
          case 4:
            v11 = 4;
            v15 = L"Enum";
            EnumSecurityDescriptor = PnpGetEnumSecurityDescriptor();
            if ( EnumSecurityDescriptor )
              goto LABEL_43;
            result = 3221225701LL;
            break;
          case 5:
            v11 = 4;
            v15 = L"Services";
            goto LABEL_43;
          case 6:
            v11 = 4;
            v15 = L"Control\\Class";
            goto LABEL_43;
          case 7:
            v11 = 4;
            v15 = L"Control\\DeviceClasses";
            goto LABEL_43;
          case 8:
            v15 = L"Control\\DeviceInterfaces";
            v11 = 4;
            if ( !*(_BYTE *)(v8 + 4) )
              v15 = L"Control\\DeviceClasses";
            goto LABEL_43;
          case 9:
            v11 = 4;
            v15 = L"Control\\DeviceContainers";
            goto LABEL_43;
          case 10:
            v11 = 4;
            v15 = L"Control\\DevicePanels";
            goto LABEL_43;
          case 11:
            v11 = 4;
            v15 = L"Control\\CriticalDeviceDatabase";
            goto LABEL_43;
          case 12:
            v11 = 4;
            v15 = L"Control\\CoDeviceInstallers";
            goto LABEL_43;
          case 13:
            v11 = 4;
            v15 = L"Hardware Profiles";
            goto LABEL_43;
          case 14:
            v15 = L"HardwareConfig";
LABEL_43:
            CachedContextBaseKey = SysCtxGetCachedContextBaseKey(a2[7], v11, &v20, v7);
            if ( CachedContextBaseKey >= 0 )
            {
              CachedContextBaseKey = SysCtxRegCreateTree(a2[7], v20, v15, 0, 0x2000000u, 0LL, v18, &v19, 0LL);
              if ( CachedContextBaseKey >= 0 )
              {
                switch ( v4 )
                {
                  case 0:
                  case 1:
                  case 2:
                  case 3:
                    CachedContextBaseKey = -1073741811;
                    goto LABEL_59;
                  case 4:
                    v17 = v19;
                    a2[8] = (__int64)v19;
                    break;
                  case 5:
                    v17 = v19;
                    a2[9] = (__int64)v19;
                    break;
                  case 6:
                    v17 = v19;
                    a2[10] = (__int64)v19;
                    break;
                  case 7:
                    v17 = v19;
                    a2[11] = (__int64)v19;
                    break;
                  case 8:
                    v17 = v19;
                    a2[12] = (__int64)v19;
                    break;
                  case 9:
                    v17 = v19;
                    a2[13] = (__int64)v19;
                    break;
                  case 10:
                    v17 = v19;
                    a2[14] = (__int64)v19;
                    break;
                  case 11:
                    v17 = v19;
                    a2[15] = (__int64)v19;
                    break;
                  case 12:
                    v17 = v19;
                    a2[16] = (__int64)v19;
                    break;
                  case 13:
                    v17 = v19;
                    a2[17] = (__int64)v19;
                    break;
                  case 14:
                    v17 = v19;
                    a2[18] = (__int64)v19;
                    break;
                  default:
                    return 3221225485LL;
                }
                *a4 = v17;
              }
            }
LABEL_59:
            if ( EnumSecurityDescriptor )
              ExFreePoolWithTag(EnumSecurityDescriptor, 0);
            result = (unsigned int)CachedContextBaseKey;
            break;
          default:
            return 3221225485LL;
        }
        break;
      default:
        return 3221225485LL;
    }
  }
  return result;
}
