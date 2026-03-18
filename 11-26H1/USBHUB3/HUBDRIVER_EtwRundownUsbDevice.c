/*
 * XREFs of HUBDRIVER_EtwRundownUsbDevice @ 0x140079930
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x140079008 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x140001B44 (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x140030520 (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 */

void __fastcall HUBDRIVER_EtwRundownUsbDevice(const GUID *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  GUID *v5; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v7; // rsi
  wchar_t *v8; // r14
  wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  unsigned __int16 *v13; // rdx
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r12d
  int v22; // eax
  __int64 v23; // rax
  char v24; // r15
  int v25; // [rsp+40h] [rbp-160h]
  char v26; // [rsp+120h] [rbp-80h]
  __int16 v27; // [rsp+124h] [rbp-7Ch]
  char v28; // [rsp+128h] [rbp-78h]
  int v29; // [rsp+12Ch] [rbp-74h]
  int v30; // [rsp+130h] [rbp-70h]
  int v31; // [rsp+134h] [rbp-6Ch]
  int v32; // [rsp+138h] [rbp-68h]
  unsigned __int16 v33; // [rsp+13Ch] [rbp-64h]
  __int64 v34; // [rsp+140h] [rbp-60h] BYREF
  __int64 v35; // [rsp+148h] [rbp-58h] BYREF
  __int64 v36; // [rsp+150h] [rbp-50h] BYREF
  const char *v37; // [rsp+158h] [rbp-48h]
  const char *v38; // [rsp+160h] [rbp-40h]
  const char *v39; // [rsp+168h] [rbp-38h]
  const wchar_t *v40; // [rsp+170h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+178h] [rbp-28h] BYREF
  __int128 v42; // [rsp+188h] [rbp-18h] BYREF
  __int64 v43; // [rsp+198h] [rbp-8h]
  __int64 v44; // [rsp+1A0h] [rbp+0h]
  __int128 v45; // [rsp+1A8h] [rbp+8h]
  __int64 v46; // [rsp+1B8h] [rbp+18h]
  void *Src[2]; // [rsp+1C0h] [rbp+20h] BYREF
  __int64 v48; // [rsp+1D0h] [rbp+30h]
  __int64 v49; // [rsp+1D8h] [rbp+38h]
  const GUID *v50; // [rsp+1E0h] [rbp+40h]
  int v51; // [rsp+1E8h] [rbp+48h] BYREF
  char v52; // [rsp+1ECh] [rbp+4Ch] BYREF

  DWORD1(v42) = 0;
  v50 = a1;
  v35 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_14006D1D0);
  v36 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v44 = 0x100000001LL;
  v42 = 0LL;
  LODWORD(v42) = 56;
  v45 = (unsigned __int64)a2;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015
                                                                                                  + 656))(
         WdfDriverGlobals,
         a2,
         0LL,
         (unsigned int)ExDefaultNonPagedPoolType,
         &v42,
         &v36) < 0 )
    v40 = 0LL;
  else
    v40 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v36,
                             0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = &GUID_DEVINTERFACE_USB_HUB;
  if ( (*(_DWORD *)(v4 + 1640) & 2) == 0 )
    v5 = &GUID_DEVINTERFACE_USB_DEVICE;
  if ( (int)HUBMISC_GetDeviceInterfacePath((__int64)v5, a2, &v35, 0LL, *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL)) < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v35,
      &DestinationString);
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
    v7 = Pool2;
    if ( Pool2 )
      memmove(Pool2, DestinationString.Buffer, DestinationString.Length);
  }
  v34 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v44 = 0x100000001LL;
  v42 = 0LL;
  LODWORD(v42) = 56;
  v8 = 0LL;
  v45 = (unsigned __int64)a2;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         &v42,
         &v34) >= 0
    && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
         WdfDriverGlobals,
         a2,
         v34) >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v34,
      Src);
    v9 = (wchar_t *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
    v8 = v9;
    if ( v9 )
      memmove(v9, Src[1], LOWORD(Src[0]));
  }
  v10 = *(_QWORD *)(v3 + 16);
  v11 = 5LL;
  v12 = *(unsigned __int16 *)(v10 + 328);
  v13 = (unsigned __int16 *)(v10 + 330);
  v51 = v12;
  v14 = &v52;
  do
  {
    v15 = *v13++;
    *(_DWORD *)v14 = v15;
    v14 += 4;
    --v11;
  }
  while ( v11 );
  v16 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 240LL);
  if ( (unsigned __int8)v16 < 6u )
    *(&v51 + v16) = *(unsigned __int16 *)(v3 + 48);
  v17 = *(_QWORD *)(v3 + 16);
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
  {
    v18 = *(_QWORD *)(v3 + 24);
    v19 = *(_QWORD *)(v18 + 8);
    v48 = v19;
    v20 = *(_DWORD *)(v19 + 204) & 2;
    if ( v20 )
      v26 = *(_BYTE *)(v19 + 1341);
    else
      v26 = 0;
    v21 = *(_DWORD *)(v17 + 168);
    if ( v21 == 2 )
    {
      v37 = (const char *)(v17 + 186);
      v38 = (const char *)(v17 + 181);
      v39 = (const char *)(v17 + 176);
    }
    else
    {
      v37 = 0LL;
      v38 = 0LL;
      v39 = 0LL;
      if ( v21 == 1 )
      {
        v22 = *(_DWORD *)(v17 + 180);
        v27 = *(_WORD *)(v17 + 184);
        v29 = *(_DWORD *)(v17 + 176);
        v30 = *(_DWORD *)(v17 + 196);
        v31 = *(_DWORD *)(v17 + 192);
        v32 = *(_DWORD *)(v17 + 188);
        goto LABEL_25;
      }
    }
    LOBYTE(v22) = -1;
    LOBYTE(v27) = 0;
    LOBYTE(v29) = -1;
    LOBYTE(v30) = 0;
    LOBYTE(v31) = 0;
    LOBYTE(v32) = 0;
LABEL_25:
    v28 = v22;
    v23 = *(_QWORD *)(v18 + 2024);
    v24 = (*(_DWORD *)(v3 + 32) & 1) == 0;
    v49 = v23;
    if ( v23 )
      v33 = *(_WORD *)(v23 + 2);
    else
      v33 = 0;
    McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
      *(unsigned __int8 *)(v18 + 2721),
      &USBHUB3_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V2,
      v50,
      *(_QWORD *)(v17 + 248),
      *(_QWORD *)(v18 + 24),
      *(_WORD *)(v3 + 48),
      v40,
      v7,
      v25,
      v18 + 1996,
      v33,
      v49,
      v8,
      v24,
      *(_BYTE *)(v17 + 240) + 1,
      (__int64)&v51,
      v32,
      v31,
      v30,
      v29,
      v28,
      v27,
      *(_DWORD *)(v3 + 384),
      *(_DWORD *)(v18 + 2232),
      v21,
      v39,
      v38,
      v37,
      v20 != 0,
      v26,
      *(_QWORD *)(v48 + 1416),
      *(_BYTE *)(v18 + 2720),
      *(_BYTE *)(v18 + 2721),
      *(_DWORD *)(v18 + 2724),
      *(_DWORD *)(v18 + 2728));
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  if ( v35 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      v35,
      v11,
      v17);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  if ( v34 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      v34,
      v11,
      v17);
  if ( v36 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      v36,
      v11,
      v17);
}
