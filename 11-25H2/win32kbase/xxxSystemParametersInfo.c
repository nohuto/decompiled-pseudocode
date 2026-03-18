/*
 * XREFs of xxxSystemParametersInfo @ 0x1400A70D0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     NtUserSystemParametersInfo @ 0x140175320 (NtUserSystemParametersInfo.c)
 * Callees:
 *     ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x140099290 (-GetWakeOnDeviceTypes@CInputGlobals@@QEBA-AW4InputType@@XZ.c)
 *     SendCrosshairEnabledStatusChanged @ 0x1400A6F40 (SendCrosshairEnabledStatusChanged.c)
 *     ApiSetEditionxxxSystemParametersInfoWorker @ 0x1400A7768 (ApiSetEditionxxxSystemParametersInfoWorker.c)
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1400A77EC (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1400A7AF0 (_GetPrecisionTouchPadConfiguration.c)
 *     ReadPointerDeviceSettings @ 0x1400A7F80 (ReadPointerDeviceSettings.c)
 *     ?SpiGetStickyKeys@@YAHKPEAX@Z @ 0x1400A8194 (-SpiGetStickyKeys@@YAHKPEAX@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A822C (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1400A8400 (BroadcastSettingsUpdateToAllContainers.c)
 *     ApiSetEditionCheckDesktopPolicy @ 0x1400A8438 (ApiSetEditionCheckDesktopPolicy.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A849C (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A8618 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ApiSetEditionxxxBroadcastSPIChange @ 0x1400A87B0 (ApiSetEditionxxxBroadcastSPIChange.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A87F8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     FastWriteProfileValue @ 0x1400A8870 (FastWriteProfileValue.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1400A89E4 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x14019C148 (-SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x14019D2A0 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     WritePointerDeviceSettings @ 0x14019DB40 (WritePointerDeviceSettings.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1401A2090 (EtwTraceSPIBlockedByFiltering.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B4FC0 (_SetPrecisionTouchPadConfiguration.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall xxxSystemParametersInfo(unsigned int a1, unsigned int a2, void *a3, unsigned int a4)
{
  char v4; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r13d
  int v10; // r12d
  unsigned __int8 v11; // r15
  unsigned __int8 v12; // di
  __int64 UserSessionState; // rdx
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rbx
  int v19; // eax
  int v20; // ebx
  char *v21; // rcx
  unsigned int v22; // eax
  const void *v23; // rdx
  int v24; // eax
  int StickyKeys; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+30h] [rbp-49h] BYREF
  void *Data; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-39h] BYREF
  int v34; // [rsp+44h] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-31h] BYREF
  void *v36; // [rsp+58h] [rbp-21h]
  int v37; // [rsp+60h] [rbp-19h]
  int v38; // [rsp+64h] [rbp-15h]
  unsigned int *v39; // [rsp+68h] [rbp-11h]
  __int64 v40; // [rsp+70h] [rbp-9h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-1h] BYREF

  v4 = a4;
  v33 = a4;
  Data = a3;
  v9 = 0;
  if ( (unsigned __int8)PsIsWin32KFilterEnabled() && !(unsigned int)IsSPIActionAllowedForFilteredProcess(a1) )
  {
    EtwTraceSPIBlockedByFiltering(a1);
    if ( (unsigned int)dword_14029EEC8 > 5
      && (qword_14029EED8 & 0x400000000000LL) != 0
      && (qword_14029EEE0 & 0x400000000000LL) == qword_14029EEE0 )
    {
      EventDescriptor.Keyword = 0x400000000000LL;
      v39 = &v33;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_14029EED0;
      v33 = a1;
      v40 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_14029EED0;
      v36 = &unk_140278EDA;
      UserData.Reserved = 2;
      v37 = 43;
      v38 = 1;
      v31 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_14029EEE8, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
    }
    return 0LL;
  }
  v31 = 0;
  v10 = 0;
  if ( (v4 & 1) != 0 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    v9 = 1;
  }
  v12 = v11 ^ 1;
  v34 = v33 & 2;
  UserSessionState = W32GetUserSessionState(v8, v7);
  if ( a1 > 0xB1 )
  {
    if ( a1 <= 0x2027 )
    {
      if ( a1 != 8231 )
      {
        switch ( a1 )
        {
          case 0xB2u:
            goto LABEL_59;
          case 0xB3u:
            goto LABEL_85;
          case 0x201Eu:
            goto LABEL_56;
        }
        if ( a1 != 8223 )
        {
          if ( a1 == 8224 )
            goto LABEL_56;
          if ( a1 != 8225 )
          {
            if ( a1 != 8230 )
              return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, Data, v33);
            goto LABEL_56;
          }
        }
      }
    }
    else
    {
      if ( a1 == 8240 )
        goto LABEL_56;
      if ( a1 != 8241 )
      {
        if ( a1 == 8242 )
          goto LABEL_56;
        if ( a1 != 8243 )
        {
          if ( a1 != 8244 )
          {
            if ( a1 != 8245 )
              return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, Data, v33);
            goto LABEL_23;
          }
LABEL_56:
          *(_DWORD *)Data = *(_DWORD *)(W32GetUserSessionState(v14, UserSessionState)
                                      + 16 * (((a1 - 0x2000) >> 1) + 1 + 4176LL));
          goto LABEL_49;
        }
      }
    }
LABEL_23:
    v18 = (_DWORD *)(W32GetUserSessionState(v14, UserSessionState) + 16 * (((a1 - 0x2000) >> 1) + 1 + 4176LL));
    if ( v11 )
    {
      v12 = (unsigned int)FastWriteProfileValue(0LL, &Data, 4u) != 0;
      v10 = v12;
    }
    if ( !v12 )
      goto LABEL_49;
    v19 = (int)Data;
    *v18 = (_DWORD)Data;
    if ( a1 == 8225 )
    {
      v20 = (int)Data;
      *(_DWORD *)(W32GetUserSessionState(v17, v16) + 332) = v20;
    }
    else if ( a1 == 8245 )
    {
      LOBYTE(v17) = v19 != 0;
      SendCrosshairEnabledStatusChanged(v17, v16);
    }
LABEL_70:
    BroadcastSettingsUpdateToAllContainers();
    goto LABEL_49;
  }
  if ( a1 == 177 )
  {
    v30 = W32GetUserSessionState(v14, UserSessionState);
    return CInputGlobals::SetWakeableInputTypesToRegistry(*(CInputGlobals **)(v30 + 3056), a2, (unsigned int)Data);
  }
  if ( a1 <= 0x3D )
  {
    switch ( a1 )
    {
      case '=':
        v24 = SpiSetAccessTimeOut(a2, Data, v11, v9, &v31);
        goto LABEL_48;
      case '2':
        if ( a2 && a2 != 24 )
          return 0LL;
        v21 = (char *)Data;
        if ( !Data || *(_DWORD *)Data != 24 )
          return 0LL;
        v22 = 20;
        v23 = (const void *)(UserSessionState + 20468);
        break;
      case '3':
        v24 = SpiSetFilterKeys(a2, Data, v11, v9, &v31);
        goto LABEL_48;
      case '4':
        if ( (a2 & 0xFFFFFFF7) != 0 )
          return 0LL;
        v21 = (char *)Data;
        if ( !Data || *(_DWORD *)Data != 8 )
          return 0LL;
        v22 = 4;
        v23 = (const void *)(UserSessionState + 20916);
        break;
      case '5':
        v24 = SpiSetToggleKeys(a2, Data, v11, v9, &v31);
LABEL_48:
        v10 = v31;
        v12 = v24 != 0;
        goto LABEL_49;
      case ':':
        StickyKeys = SpiGetStickyKeys(a2, Data);
        return StickyKeys != 0;
      case ';':
        v24 = SpiSetStickyKeys(a2, Data, v11, v9, &v31);
        goto LABEL_48;
      case '<':
        if ( a2 && a2 != 12 )
          return 0LL;
        v21 = (char *)Data;
        if ( !Data || *(_DWORD *)Data != 12 )
          return 0LL;
        v22 = 8;
        v23 = (const void *)(UserSessionState + 20892);
        break;
      default:
        return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, Data, v33);
    }
    memmove(v21 + 4, v23, v22);
    return 1;
  }
  switch ( a1 )
  {
    case 0x68u:
      *(_DWORD *)Data = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, UserSessionState) + 19872) + 4988LL);
      return v12;
    case 0x69u:
      if ( (unsigned int)ApiSetEditionCheckDesktopPolicy(v14, UserSessionState) )
      {
        v11 = 0;
        v12 = 0;
      }
      if ( v11 )
      {
        RtlStringCchPrintfW(&EventDescriptor.Id, 0x10uLL, L"%d", a2);
        v28 = -1LL;
        do
          ++v28;
        while ( *(&EventDescriptor.Id + v28) );
        v12 = (unsigned int)FastWriteProfileValue(0LL, &EventDescriptor, 2 * (int)v28 + 2) != 0;
        v10 = v12;
      }
      if ( !v12 )
        goto LABEL_49;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v27, v26) + 19872) + 4988LL) = a2;
      goto LABEL_70;
    case 0x92u:
LABEL_59:
      StickyKeys = ReadPointerDeviceSettings(a1, Data);
      return StickyKeys != 0;
    case 0x93u:
LABEL_85:
      v12 = (unsigned int)WritePointerDeviceSettings(a1, Data, v11) != 0;
      v10 = v12;
      goto LABEL_49;
    case 0xAEu:
      StickyKeys = GetPrecisionTouchPadConfiguration(Data, UserSessionState);
      return StickyKeys != 0;
    case 0xAFu:
      v10 = SetPrecisionTouchPadConfiguration(Data, v11);
      if ( v10 )
      {
        v12 = 1;
        PTPTelemetry::PTPConfigUpdateEx(0LL);
      }
      else
      {
        v12 = 0;
      }
LABEL_49:
      if ( v10 && v34 )
        ApiSetEditionxxxBroadcastSPIChange(a1);
      return v12;
  }
  if ( a1 != 176 )
    return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, Data, v33);
  v29 = W32GetUserSessionState(v14, UserSessionState);
  *(_DWORD *)Data = CInputGlobals::GetWakeOnDeviceTypes(*(_QWORD *)(v29 + 3056));
  return v12;
}
