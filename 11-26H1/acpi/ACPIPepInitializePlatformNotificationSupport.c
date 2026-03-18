/*
 * XREFs of ACPIPepInitializePlatformNotificationSupport @ 0x1400B4674
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1400AE0C0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline @ 0x140065BD0 (Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 */

char __fastcall ACPIPepInitializePlatformNotificationSupport(char *Context)
{
  __int64 v2; // rcx
  PVOID v3; // rdi
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  int v6; // r10d
  int v7; // esi
  char i; // r11
  unsigned int v9; // eax
  int v10; // eax
  int v11; // r10d
  NTSTATUS v12; // eax
  char v13; // dl
  int v14; // eax
  POWER_SETTING_CALLBACK *v15; // rdi
  _BYTE OutputBuffer[4]; // [rsp+38h] [rbp-29h] BYREF
  signed __int32 v18; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v19; // [rsp+40h] [rbp-21h] BYREF
  PVOID P; // [rsp+48h] [rbp-19h] BYREF
  PPOWER_SETTING_CALLBACK Callback; // [rsp+50h] [rbp-11h] BYREF
  __int128 v22; // [rsp+58h] [rbp-9h] BYREF
  _OWORD v23[3]; // [rsp+68h] [rbp+7h] BYREF

  *((_QWORD *)Context + 24) = 0LL;
  *((_DWORD *)Context + 50) = 0;
  Callback = 0LL;
  v19 = 0LL;
  *(_QWORD *)(Context + 284) = 1LL;
  *((_DWORD *)Context + 46) = 1;
  DWORD1(v23[0]) = 0;
  OutputBuffer[0] = 0;
  KeInitializeEvent((PRKEVENT)(Context + 208), SynchronizationEvent, 0);
  v2 = *((_QWORD *)Context + 95);
  memset(v23, 0, sizeof(v23));
  v18 = 0;
  P = 0LL;
  v22 = PEP_NOTIFICATIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v2, (unsigned int)&v22, 0, 0, (__int64)v23, (__int64)&P) >= 0 )
  {
    v3 = P;
    if ( *((_WORD *)P + 1) == 3 )
    {
      v4 = *((_DWORD *)P + 6);
      if ( v4 )
      {
        v5 = 0;
        v6 = 0;
        v7 = 0;
        for ( i = 0; ; i += 8 )
        {
          v9 = 4;
          if ( v4 < 4 )
            v9 = v4;
          if ( v5 >= v9 )
            break;
          v10 = v6;
          v11 = *(unsigned __int8 *)(v5 + *((_QWORD *)P + 4)) << i;
          if ( v4 >= 4 )
            v10 = v7;
          ++v5;
          v6 = v10 | v11;
          v18 = v6;
          v7 = v6;
        }
      }
    }
    AMLIFreeDataBuffs((__int64)P);
    ExFreePoolWithTag(v3, 0x52706341u);
  }
  v12 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, OutputBuffer, 1u);
  v13 = 0;
  if ( v12 >= 0 )
    v13 = OutputBuffer[0];
  if ( _bittest(&v18, 3u) && _bittest(&v18, 4u) )
    *((_DWORD *)Context + 61) |= 2u;
  if ( _bittest(&v18, 5u) && _bittest(&v18, 6u) )
    *((_DWORD *)Context + 61) |= 1u;
  if ( _bittest(&v18, 7u) && _bittest(&v18, 8u) )
    *((_DWORD *)Context + 61) |= 4u;
  v14 = *((_DWORD *)Context + 61);
  if ( _bittest(&v18, 9u) )
  {
    v14 |= 8u;
    *((_DWORD *)Context + 61) = v14;
  }
  if ( !v13 )
  {
    v14 &= 0xFFFFFFFA;
    *((_DWORD *)Context + 61) = v14;
  }
  if ( v14 )
  {
    LOBYTE(v14) = ACPIInitReferenceDeviceExtension((__int64)Context);
    if ( (_BYTE)v14 )
    {
      Context[240] = 1;
      if ( (unsigned int)Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline() )
      {
        AcpiGetDriverProxyWrappedEndpoint(&v19, (__int64)ACPIPepWnfCallback);
        ExSubscribeWnfStateChange(Context + 336, &WNF_PO_MODERN_STANDBY_STATE_NOTIFICATION, 1LL, 0LL, v19, Context);
      }
      else
      {
        AcpiGetDriverProxyWrappedEndpoint(&Callback, (__int64)ACPIPepPowerSettingChangeCallback);
        v15 = Callback;
        if ( (*((_DWORD *)Context + 61) & 1) != 0 )
          PoRegisterPowerSettingCallback(
            0LL,
            &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
            Callback,
            Context,
            (PVOID *)Context + 37);
        if ( (*((_DWORD *)Context + 61) & 2) != 0 )
        {
          PoRegisterPowerSettingCallback(0LL, &GUID_CONSOLE_DISPLAY_STATE, v15, Context, (PVOID *)Context + 38);
          PoRegisterPowerSettingCallback(0LL, &GUID_GLOBAL_USER_PRESENCE, v15, Context, (PVOID *)Context + 39);
        }
        if ( (*((_DWORD *)Context + 61) & 4) != 0 )
          PoRegisterPowerSettingCallback(0LL, &GUID_LOW_POWER_EPOCH, v15, Context, (PVOID *)Context + 40);
      }
      v14 = *((_DWORD *)Context + 61);
      if ( (v14 & 8) != 0 )
      {
        AcpiGetDriverProxyWrappedEndpoint(&v19, (__int64)ACPIPepWnfCallback);
        LOBYTE(v14) = ExSubscribeWnfStateChange(
                        Context + 328,
                        &WNF_PO_MODERN_STANDBY_EXIT_INITIATED,
                        1LL,
                        0LL,
                        v19,
                        Context);
      }
    }
  }
  return v14;
}
