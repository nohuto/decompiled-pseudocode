/*
 * XREFs of _PnpOpenObjectRegKey @ 0x14095EB70
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x1407AC820 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AD478 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceClass @ 0x1407AEE54 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407AF9D4 (PpDevCfgProcessDeviceReset.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14089DB98 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     PiDqIrpPropertySet @ 0x14094E168 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1409522D0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqOpenObjectRegKey @ 0x140952ACC (PiDqOpenObjectRegKey.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14095C6C0 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     _PnpGetObjectPropertyWorker @ 0x14095CB50 (_PnpGetObjectPropertyWorker.c)
 *     PiDqPnPGetObjectProperty @ 0x14095D7B0 (PiDqPnPGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PiSwPropertySet @ 0x140A17FD4 (PiSwPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x140A193D0 (_PnpSetObjectPropertyWorker.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140A46258 (PiDevCfgCopyObjectProperties.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x140AB4D44 (_PnpGetObjectPropertyLocalesWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140AB56C8 (_PnpGetObjectPropertyKeysWorker.c)
 *     PiDevCfgGetDriverPackageId @ 0x140AE9CA0 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B34F1C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgQueryDriverNode @ 0x140B72708 (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PnpOpenObjectRegKey(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v10; // rdi
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v16; // eax
  unsigned int v17[4]; // [rsp+40h] [rbp-69h] BYREF
  int v18; // [rsp+50h] [rbp-59h]
  char v19; // [rsp+54h] [rbp-55h]
  __int64 v20; // [rsp+58h] [rbp-51h]
  int v21; // [rsp+60h] [rbp-49h]
  int v22; // [rsp+64h] [rbp-45h]
  int v23; // [rsp+90h] [rbp-19h] BYREF
  char v24; // [rsp+94h] [rbp-15h]
  __int64 v25; // [rsp+98h] [rbp-11h]
  int v26; // [rsp+A0h] [rbp-9h]
  int v27; // [rsp+A4h] [rbp-5h]

  v6 = a3;
  memset_0(v17, 0, 0x50uLL);
  v10 = *(_QWORD *)(a1 + 488);
  v18 = a4;
  v11 = 0;
  v19 = a5;
  v20 = a6;
  v22 = 0;
  if ( !v10 )
  {
LABEL_5:
    memset_0(&v23, 0, 0x40uLL);
    if ( (_WORD)v11 || (unsigned int)(v6 - 1) > 0xA )
    {
      v13 = -1073741811;
    }
    else if ( *(_QWORD *)(a1 + 8 * v6 + 296) )
    {
      v23 = v18;
      v24 = v19;
      v25 = v20;
      v27 = v11;
      v13 = guard_dispatch_icall_no_overrides(a1, a2);
      v14 = v21;
      if ( (v13 & 0x80000000) == 0 )
        v14 = v26;
      v21 = v14;
    }
    else
    {
      v13 = -1073741822;
    }
    if ( !v10 )
      return v13;
    v17[0] = v13;
    v16 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v16 == -1073741822 )
      return v13;
    if ( v16 != -1073741536 )
    {
      if ( !v16 )
        return v13;
      return 3221225701LL;
    }
    return v17[0];
  }
  v12 = guard_dispatch_icall_no_overrides(a1, a2);
  switch ( v12 )
  {
    case -1073741822:
      v10 = 0LL;
LABEL_4:
      v11 = v22;
      goto LABEL_5;
    case -1073741536:
      return v17[0];
    case 0:
      goto LABEL_4;
  }
  return 3221225701LL;
}
