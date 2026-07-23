/*
 * XREFs of PnpActivatePdcForDeviceEvent @ 0x140A19D10
 * Callers:
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PnpConcatPWSTR @ 0x140953094 (PnpConcatPWSTR.c)
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x1409B134C (_PnpStringFromGuid.c)
 *     PiPdcActivate @ 0x140A1987C (PiPdcActivate.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpActivatePdcForDeviceEvent(__int64 a1)
{
  __int64 v1; // rax
  PVOID v3; // r15
  void *v4; // r14
  int v5; // ecx
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  const wchar_t *v14; // rbx
  int v15; // eax
  wchar_t *v16; // rdx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // [rsp+68h] [rbp-49h] BYREF
  __int64 v25; // [rsp+70h] [rbp-41h] BYREF
  PVOID P; // [rsp+78h] [rbp-39h] BYREF
  wchar_t v27[40]; // [rsp+88h] [rbp-29h] BYREF

  v1 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVICE_NOOP.Data1;
  v3 = 0LL;
  P = 0LL;
  v4 = 0LL;
  v25 = 0LL;
  v27[0] = 0;
  v24 = 0LL;
  if ( !v1 )
    v1 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVICE_NOOP.Data4;
  if ( v1 && PnpStringFromGuid((int *)(a1 + 120), v27) >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 136);
    v6 = 0LL;
    if ( v5 == 7 )
      goto LABEL_11;
    if ( v5 > 7 )
    {
      v22 = v5 - 8;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          if ( (unsigned int)(v23 - 1) > 1 )
            goto LABEL_11;
        }
      }
    }
    else
    {
      v7 = v5 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          v6 = a1 + 184;
          goto LABEL_11;
        }
        v9 = v8 - 1;
        if ( !v9 )
        {
          v6 = a1 + 176;
          goto LABEL_11;
        }
        v21 = v9 - 1;
        if ( v21 )
        {
          if ( v21 == 2 )
            v6 = a1 + 172;
LABEL_11:
          v10 = *(_DWORD *)(a1 + 136);
          if ( v10 > 6 )
          {
            v17 = v10 - 7;
            if ( !v17 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_BlockedDriverEvent";
              goto LABEL_18;
            }
            v18 = v17 - 1;
            if ( !v18 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_InvalidIDEvent";
              goto LABEL_18;
            }
            v19 = v18 - 1;
            if ( !v19 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_DevicePropertyChangeEvent";
              goto LABEL_18;
            }
            v20 = v19 - 1;
            if ( !v20 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_DeviceInstanceRemovalEvent";
              goto LABEL_18;
            }
            if ( v20 == 1 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_DeviceInstanceStartedEvent";
              goto LABEL_18;
            }
          }
          else
          {
            if ( v10 == 6 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_VetoEvent";
              goto LABEL_18;
            }
            if ( !v10 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_HardwareProfileChangeEvent";
              goto LABEL_18;
            }
            v11 = v10 - 1;
            if ( !v11 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_TargetDeviceChangeEvent";
              goto LABEL_18;
            }
            v12 = v11 - 1;
            if ( !v12 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_DeviceClassChangeEvent";
              if ( (int)PnpGetObjectProperty(
                          0x4B706E50u,
                          0xC8u,
                          a1 + 184,
                          3,
                          0LL,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstanceId,
                          &v24,
                          (PVOID *)&v25,
                          (unsigned int *)&v24 + 1,
                          0) >= 0
                && (_DWORD)v24 == 18
                && HIDWORD(v24) > 2 )
              {
                v4 = (void *)v25;
                v6 = v25;
              }
              else
              {
                v4 = (void *)v25;
              }
              goto LABEL_18;
            }
            v13 = v12 - 1;
            if ( !v13 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_CustomDeviceEvent";
LABEL_18:
              if ( v6 )
              {
                v15 = PnpConcatPWSTR(0xF2uLL, 0x4B706E50u, &P, 3LL, v27, L"::", v6);
                v3 = P;
                v16 = v27;
                if ( v15 >= 0 )
                  v16 = (wchar_t *)P;
              }
              else
              {
                v16 = v27;
              }
              *(_QWORD *)(a1 + 112) = PiPdcActivate((__int64)v14, (__int64)v16);
              if ( v4 )
                ExFreePoolWithTag(v4, 0x4B706E50u);
              if ( v3 )
                ExFreePoolWithTag(v3, 0x4B706E50u);
              return;
            }
            if ( v13 == 1 )
            {
              v14 = L"PLUGPLAY_EVENT_CATEGORY_DeviceInstallEvent";
              goto LABEL_18;
            }
          }
          v14 = L"PLUGPLAY_EVENT_CATEGORY_UnknownDeviceEvent";
          goto LABEL_18;
        }
      }
    }
    v6 = a1 + 168;
    goto LABEL_11;
  }
}
