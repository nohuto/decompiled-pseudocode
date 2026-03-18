/*
 * XREFs of xxxSystemParametersInfo @ 0x1401ACFA0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 * Callees:
 *     ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x140096050 (-GetWakeOnDeviceTypes@CInputGlobals@@QEBA-AW4InputType@@XZ.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400DF284 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     FastWriteProfileValue @ 0x1400E2410 (FastWriteProfileValue.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400E2B44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400F3420 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ApiSetEditionxxxSystemParametersInfoWorker @ 0x14012DA74 (ApiSetEditionxxxSystemParametersInfoWorker.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140160DC0 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SpiGetStickyKeys@@YAHKPEAX@Z @ 0x14017E490 (-SpiGetStickyKeys@@YAHKPEAX@Z.c)
 *     SendCrosshairEnabledStatusChanged @ 0x14018E950 (SendCrosshairEnabledStatusChanged.c)
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x140197880 (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1401A5F48 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1401AA660 (_GetPrecisionTouchPadConfiguration.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1401ACDDC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ReadPointerDeviceSettings @ 0x1401B41E0 (ReadPointerDeviceSettings.c)
 *     ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x1401B77D8 (-SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1401B9CA4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401BA808 (_SetPrecisionTouchPadConfiguration.c)
 *     ApiSetEditionCheckDesktopPolicy @ 0x1401C1764 (ApiSetEditionCheckDesktopPolicy.c)
 *     ApiSetEditionxxxBroadcastSPIChange @ 0x1401C1A80 (ApiSetEditionxxxBroadcastSPIChange.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1401C5BB0 (BroadcastSettingsUpdateToAllContainers.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1401C5F10 (EtwTraceSPIBlockedByFiltering.c)
 *     WritePointerDeviceSettings @ 0x1401DF9A0 (WritePointerDeviceSettings.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSystemParametersInfo(unsigned int a1, unsigned int a2, void *a3, unsigned int a4)
{
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // r15d
  unsigned __int8 v14; // r14
  int v15; // r12d
  unsigned __int8 v16; // bl
  __int64 UserSessionState; // rdx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // eax
  int PointerDeviceSettings; // eax
  _DWORD *v22; // rcx
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rax
  bool v32; // zf
  unsigned int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  _OWORD *v37; // rbx
  __int64 v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // rax
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  __int64 v45; // r12
  int v46; // r14d
  int v47; // [rsp+30h] [rbp-48h] BYREF
  void *v48; // [rsp+38h] [rbp-40h] BYREF
  int v49; // [rsp+40h] [rbp-38h]
  unsigned __int16 Data[16]; // [rsp+48h] [rbp-30h] BYREF

  v48 = a3;
  if ( (unsigned __int8)PsIsWin32KFilterEnabled() && !IsSPIActionAllowedForFilteredProcess(a1) )
  {
    EtwTraceSPIBlockedByFiltering(a1);
    if ( (unsigned int)dword_1402A9EE8 > 5 && tlgKeywordOn((__int64)&dword_1402A9EE8, 0x400000000000LL) )
    {
      v47 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_1402A9EE8,
        (__int64)&unk_140283189,
        v10,
        v11,
        (__int64)&v47);
    }
    return 0LL;
  }
  v47 = 0;
  v13 = 0;
  if ( (a4 & 1) != 0 )
  {
    v14 = 1;
    v15 = 0;
  }
  else
  {
    v14 = 0;
    v15 = 1;
  }
  v16 = v14 ^ 1;
  v49 = a4 & 2;
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  if ( a1 > 0xB2 )
  {
    if ( a1 > 0x2026 )
    {
      switch ( a1 )
      {
        case 0x2027u:
          goto LABEL_87;
        case 0x2030u:
          goto LABEL_86;
        case 0x2031u:
          goto LABEL_87;
      }
      v33 = a1 - 8242;
      v32 = a1 == 8242;
    }
    else
    {
      switch ( a1 )
      {
        case 0x2026u:
          goto LABEL_86;
        case 0xB3u:
          goto LABEL_76;
        case 0xB4u:
          v16 = 0;
          if ( !(unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
            return v16;
          v37 = v48;
          v38 = W32GetUserSessionState(v35, v34, v36);
          *(_OWORD *)v48 = *(_OWORD *)(v38 + 18568);
          v37[1] = *(_OWORD *)(v38 + 18584);
          v37[2] = *(_OWORD *)(v38 + 18600);
          *((_QWORD *)v37 + 6) = *(_QWORD *)(v38 + 18616);
          return 1;
        case 0xB5u:
LABEL_76:
          v16 = (unsigned int)WritePointerDeviceSettings(a1, v48, v14) != 0;
          v13 = v16;
          goto LABEL_95;
      }
      v33 = a1 - 8222;
      v32 = a1 == 8222;
    }
    if ( v32 )
      goto LABEL_86;
    v39 = v33 - 1;
    if ( v39 )
    {
      v40 = v39 - 1;
      if ( v40 )
      {
        if ( v40 != 1 )
          return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, (__int64)v48, a4);
        goto LABEL_87;
      }
LABEL_86:
      v23 = *(_DWORD *)(W32GetUserSessionState(v18, UserSessionState, v19) + 16LL * (((a1 - 0x2000) >> 1) + 1) + 66808);
      goto LABEL_45;
    }
LABEL_87:
    v41 = W32GetUserSessionState(v18, UserSessionState, v19);
    v45 = v41;
    if ( v14 )
    {
      v16 = (unsigned int)FastWriteProfileValue(
                            0LL,
                            *(_DWORD *)(v41 + 16LL * (((a1 - 0x2000) >> 1) + 1) + 66812),
                            *(const WCHAR **)(v41 + 16LL * (((a1 - 0x2000) >> 1) + 1) + 66816),
                            4u,
                            &v48,
                            4u) != 0;
      v13 = v16;
    }
    if ( !v16 )
      goto LABEL_95;
    v46 = (int)v48;
    *(_DWORD *)(v45 + 16LL * (((a1 - 0x2000) >> 1) + 1) + 66808) = (_DWORD)v48;
    if ( a1 == 8225 )
    {
      *(_DWORD *)(W32GetUserSessionState(v43, v42, v44) + 332) = v46;
    }
    else if ( a1 == 8245 )
    {
      SendCrosshairEnabledStatusChanged(v46 != 0);
    }
LABEL_94:
    BroadcastSettingsUpdateToAllContainers();
    goto LABEL_95;
  }
  if ( a1 == 178 )
  {
LABEL_67:
    PointerDeviceSettings = ReadPointerDeviceSettings(a1, v48);
    return PointerDeviceSettings != 0;
  }
  if ( a1 <= 0x68 )
  {
    if ( a1 != 104 )
    {
      switch ( a1 )
      {
        case '2':
          if ( a2 && a2 != 24 )
            return 0LL;
          v22 = v48;
          if ( !v48 || *(_DWORD *)v48 != 24 )
            return 0LL;
          *(_OWORD *)((char *)v48 + 4) = *(_OWORD *)(UserSessionState + 20500);
          v22[5] = *(_DWORD *)(UserSessionState + 20516);
          break;
        case '3':
          v20 = SpiSetFilterKeys(a2, (struct tagFILTERKEYS *)v48, v14, v15, &v47);
          goto LABEL_38;
        case '4':
          if ( (a2 & 0xFFFFFFF7) != 0 || !v48 || *(_DWORD *)v48 != 8 )
            return 0LL;
          *((_DWORD *)v48 + 1) = *(_DWORD *)(UserSessionState + 20948);
          break;
        case '5':
          v20 = SpiSetToggleKeys(a2, (unsigned int *)v48, v14, v15, &v47);
          goto LABEL_38;
        case ':':
          PointerDeviceSettings = SpiGetStickyKeys(a2, v48, v19);
          return PointerDeviceSettings != 0;
        case ';':
          v20 = SpiSetStickyKeys(a2, v48, v14, v15, &v47);
          goto LABEL_38;
        case '<':
          if ( a2 && a2 != 12 || !v48 || *(_DWORD *)v48 != 12 )
            return 0LL;
          *(_QWORD *)((char *)v48 + 4) = *(_QWORD *)(UserSessionState + 20924);
          return 1;
        case '=':
          v20 = SpiSetAccessTimeOut(a2, v48, v14, v15, &v47);
LABEL_38:
          v13 = v47;
          v16 = v20 != 0;
          goto LABEL_95;
        default:
          return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, (__int64)v48, a4);
      }
      return 1;
    }
    v23 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, UserSessionState, v19) + 19904) + 4988LL);
LABEL_45:
    *(_DWORD *)v48 = v23;
    return v16;
  }
  switch ( a1 )
  {
    case 0x69u:
      if ( (unsigned int)ApiSetEditionCheckDesktopPolicy(v18, UserSessionState) )
      {
        v14 = 0;
        v16 = 0;
      }
      if ( v14 )
      {
        RtlStringCchPrintfW(Data, 16LL, L"%d", a2);
        v31 = -1LL;
        do
          ++v31;
        while ( Data[v31] );
        v16 = (unsigned int)FastWriteProfileValue(0LL, 4u, (const WCHAR *)0xE, 1u, Data, 2 * (int)v31 + 2) != 0;
        v13 = v16;
      }
      if ( !v16 )
        goto LABEL_95;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v28, v30) + 19904) + 4988LL) = a2;
      goto LABEL_94;
    case 0x92u:
      goto LABEL_67;
    case 0x93u:
      goto LABEL_76;
    case 0xAEu:
      PointerDeviceSettings = GetPrecisionTouchPadConfiguration((unsigned int *)v48);
      return PointerDeviceSettings != 0;
    case 0xAFu:
      v13 = SetPrecisionTouchPadConfiguration(v48, v14);
      if ( v13 )
      {
        v16 = 1;
        PTPTelemetry::PTPConfigUpdateEx(0LL, v26, v27);
      }
      else
      {
        v16 = 0;
      }
LABEL_95:
      if ( v13 && v49 )
        ApiSetEditionxxxBroadcastSPIChange(a1);
      return v16;
    case 0xB0u:
      v25 = W32GetUserSessionState(v18, UserSessionState, v19);
      *(_DWORD *)v48 = CInputGlobals::GetWakeOnDeviceTypes(*(_QWORD *)(v25 + 3056));
      break;
    case 0xB1u:
      v24 = W32GetUserSessionState(v18, UserSessionState, v19);
      return CInputGlobals::SetWakeableInputTypesToRegistry(*(CInputGlobals **)(v24 + 3056), a2, (unsigned int)v48);
    default:
      return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, (__int64)v48, a4);
  }
  return v16;
}
