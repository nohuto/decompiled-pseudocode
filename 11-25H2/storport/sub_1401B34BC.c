/*
 * XREFs of sub_1401B34BC @ 0x1401B34BC
 * Callers:
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 * Callees:
 *     sub_14003AA14 @ 0x14003AA14 (sub_14003AA14.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140043D18 @ 0x140043D18 (sub_140043D18.c)
 *     sub_1400444A0 @ 0x1400444A0 (sub_1400444A0.c)
 *     sub_140044ADC @ 0x140044ADC (sub_140044ADC.c)
 *     sub_140044B70 @ 0x140044B70 (sub_140044B70.c)
 *     sub_1400566F8 @ 0x1400566F8 (sub_1400566F8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140178008 @ 0x140178008 (sub_140178008.c)
 *     sub_140178048 @ 0x140178048 (sub_140178048.c)
 *     sub_1401AD970 @ 0x1401AD970 (sub_1401AD970.c)
 *     sub_1401AE6B8 @ 0x1401AE6B8 (sub_1401AE6B8.c)
 *     sub_1401AE748 @ 0x1401AE748 (sub_1401AE748.c)
 *     sub_1401AE7D8 @ 0x1401AE7D8 (sub_1401AE7D8.c)
 *     sub_1401B06F4 @ 0x1401B06F4 (sub_1401B06F4.c)
 *     sub_1401B2250 @ 0x1401B2250 (sub_1401B2250.c)
 *     sub_1401B236C @ 0x1401B236C (sub_1401B236C.c)
 *     sub_1401B2484 @ 0x1401B2484 (sub_1401B2484.c)
 */

__int64 __fastcall sub_1401B34BC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PDEVICE_OBJECT DeviceObject,
        __int128 *a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rsi
  __int128 v11; // xmm0
  int v12; // eax
  int v13; // edx
  _QWORD *v14; // rax
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rcx
  struct _UNICODE_STRING *v18; // rcx
  struct _UNICODE_STRING *v19; // rcx
  __int64 v20; // rcx
  struct _UNICODE_STRING *v21; // rcx
  unsigned int v22; // ecx
  char v23; // al
  char v24; // al
  char v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  int v31; // eax
  char v32; // al
  char v33; // al
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // rdx
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rdx
  int KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 p_Uuid; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+7Ch] [rbp-84h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+84h] [rbp-7Ch] BYREF
  int v50; // [rsp+88h] [rbp-78h] BYREF
  int v51; // [rsp+8Ch] [rbp-74h] BYREF
  int v52; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+94h] [rbp-6Ch] BYREF
  int v54; // [rsp+98h] [rbp-68h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-60h] BYREF
  int Dst[4]; // [rsp+B0h] [rbp-50h] BYREF
  __m128i si128; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+DCh] [rbp-24h]
  UUID Uuid; // [rsp+200h] [rbp+100h] BYREF

  v8 = a1 + 376;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  *(_QWORD *)(a1 + 24) = a4;
  DestinationString = 0LL;
  v44 = 0;
  v55 = 0LL;
  v46 = 0;
  v11 = *a6;
  *(_DWORD *)(a1 + 5712) = -1;
  *(_DWORD *)(a1 + 1992) = a7;
  *(_OWORD *)(a1 + 40) = v11;
  *(_DWORD *)(a1 + 2076) = 1;
  *(_BYTE *)(a1 + 4893) = 1;
  *(_DWORD *)(a1 + 5364) = 0;
  *(_QWORD *)(a1 + 376) = a1;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v51 = 0;
  v52 = 0;
  v43 = 0;
  v54 = 0;
  v50 = 0;
  v42 = 0LL;
  v53 = 0;
  v12 = sub_140044B70(DeviceObject);
  v13 = 0;
  if ( v12 != -1 )
    v13 = v12;
  if ( !v13 )
    *(_BYTE *)(a1 + 104) |= 8u;
  v14 = sub_140178008(*(_QWORD *)(a1 + 16), v13);
  *(_QWORD *)(a1 + 608) = v14;
  if ( !v14 )
    return 3221225486LL;
  v16 = *((_DWORD *)v14 + 1);
  *(_BYTE *)(a1 + 109) |= 4u;
  *(_DWORD *)(a1 + 392) = v16;
  result = sub_140178048(v8);
  if ( (int)result >= 0 )
  {
    sub_1401AE748(*(_QWORD *)(a1 + 16) + 40LL, a7, (PVOID *)(a1 + 2000));
    v17 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 2072) = 30;
    sub_1400444A0(v17, a7);
    v18 = (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
    *(_DWORD *)(a1 + 4124) = 0;
    sub_1401B2250(v18, (_DWORD *)(a1 + 4124));
    v19 = (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
    *(_QWORD *)(a1 + 4904) = 0LL;
    sub_1401B2484(v19, (_DWORD *)(a1 + 4904));
    if ( *(_QWORD *)(a1 + 4904) )
      *(_QWORD *)(a1 + 4904) *= 10000LL;
    v20 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 5668) = 0;
    sub_1401AE7D8(v20, (_DWORD *)(a1 + 5668));
    v21 = (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
    *(_DWORD *)(a1 + 5672) = 0;
    sub_1401B236C(v21, (_DWORD *)(a1 + 5672));
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v42, L"TotalSenseDataBytes");
    p_Uuid = (__int64)&v44;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v22 = v44;
    }
    else
    {
      v22 = 256;
      v44 = 256;
    }
    if ( v22 > 0x12 )
    {
      v23 = v22;
      if ( v22 >= 0xFF )
        v23 = -1;
      *(_BYTE *)(a1 + 4892) = v23;
    }
    else
    {
      *(_BYTE *)(a1 + 4892) = 18;
    }
    RtlInitUnicodeString(&v42, L"EnableIdlePowerManagement");
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    p_Uuid = (__int64)&v46;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v24 = *(_BYTE *)(a1 + 104);
      if ( v46 )
        v25 = v24 | 0x20;
      else
        v25 = v24 & 0xDF;
      *(_BYTE *)(a1 + 104) = v25;
    }
    RtlInitUnicodeString(&v42, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 107) &= ~0x20u;
    p_Uuid = (__int64)&v47;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v26 = *(_BYTE *)(a1 + 107);
      if ( v47 )
        v27 = v26 | 0x20;
      else
        v27 = v26 & 0xDF;
      *(_BYTE *)(a1 + 107) = v27;
    }
    RtlInitUnicodeString(&v42, L"DisableD3Cold");
    v28 = *(_BYTE *)(a1 + 107) & 0xEF;
    KeyHandle = 4;
    *(_BYTE *)(a1 + 107) = v28 | 8;
    p_Uuid = (__int64)&v48;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v29 = *(_BYTE *)(a1 + 107);
      if ( v48 )
        v30 = v29 & 0xF7;
      else
        v30 = v29 | 8;
      *(_BYTE *)(a1 + 107) = v30;
    }
    RtlInitUnicodeString(&v42, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 4976) = 60000;
    p_Uuid = (__int64)&v49;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v31 = v49;
      *(_BYTE *)(a1 + 107) |= 0x80u;
      *(_DWORD *)(a1 + 4976) = v31;
    }
    if ( (unsigned int)sub_1400566F8() )
    {
      *(_BYTE *)(a1 + 113) &= ~1u;
      RtlInitUnicodeString(&v42, L"DlrmDisable");
      KeyHandle = 4;
      p_Uuid = (__int64)&v50;
      if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
        *(_BYTE *)(a1 + 113) = (v50 != 0) | *(_BYTE *)(a1 + 113) & 0xFE;
    }
    RtlInitUnicodeString(&v42, L"UseDMAv3");
    *(_BYTE *)(a1 + 108) &= ~4u;
    p_Uuid = (__int64)&v51;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
      *(_BYTE *)(a1 + 108) = (v51 != 0 ? 4 : 0) | *(_BYTE *)(a1 + 108) & 0xFB;
    RtlInitUnicodeString(&v42, L"PowerSrbTimeout");
    *(_DWORD *)(a1 + 5608) = *(_DWORD *)(a1 + 4124);
    KeyHandle = 4;
    p_Uuid = (__int64)&v52;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 && v52 )
      *(_DWORD *)(a1 + 5608) = v52;
    if ( *(_DWORD *)(a1 + 5608) > 0x6Eu )
      *(_DWORD *)(a1 + 5608) = 110;
    RtlInitUnicodeString(&v42, L"BusSpecificResetTimeout");
    *(_DWORD *)(a1 + 6032) = 5;
    p_Uuid = (__int64)&v43;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 && v43 )
      *(_DWORD *)(a1 + 6032) = v43;
    RtlInitUnicodeString(&v42, L"PLDRTimeout");
    *(_DWORD *)(a1 + 6036) = 10;
    p_Uuid = (__int64)&v43;
    v43 = 0;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 && v43 )
      *(_DWORD *)(a1 + 6036) = v43;
    RtlInitUnicodeString(&v42, L"DisableNVMeActiveNamespaceIDListCheck");
    *(_BYTE *)(a1 + 111) &= ~0x40u;
    p_Uuid = (__int64)&v53;
    KeyHandle = 4;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v32 = *(_BYTE *)(a1 + 111);
      if ( v53 )
        v33 = v32 | 0x40;
      else
        v33 = v32 & 0xBF;
      *(_BYTE *)(a1 + 111) = v33;
    }
    v34 = *(_BYTE *)(a1 + 108) & 0xFE;
    *(_QWORD *)(a1 + 4968) = 0LL;
    *(_BYTE *)(a1 + 108) = v34 | 0x20;
    memset_0(Dst, 0, 0x148uLL);
    v35 = *(_QWORD *)(a1 + 16) + 40LL;
    Dst[0] = 255;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1401552F0);
    v59 = 0;
    v58 = -1;
    sub_1401AE6B8(v35, a7);
    *(_QWORD *)(a1 + 4288) = si128.m128i_i64[1];
    *(_QWORD *)(a1 + 4296) = si128.m128i_i64[0];
    *(_DWORD *)(a1 + 4272) = v58;
    *(_DWORD *)(a1 + 4280) = v59;
    *(_QWORD *)(a1 + 4304) = 0LL;
    *(_QWORD *)(a1 + 4312) = 0LL;
    *(_QWORD *)(a1 + 4320) = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 4276) = 6;
    if ( a8 != 127 )
      *(_DWORD *)(a1 + 4276) = a8;
    sub_1400403EC(a3, (__int64)&v55);
    *(_QWORD *)(a1 + 4720) = *((_QWORD *)&v55 + 1);
    sub_140043D18(DeviceObject, v36, (_QWORD *)(a1 + 4728));
    v37 = dword_14016843C == 0;
    *(_DWORD *)(a1 + 4932) = dword_14016843C;
    v38 = a1 + 6272;
    *(_DWORD *)(a1 + 4928) = -1;
    if ( v37 )
      v38 = 0LL;
    *(_QWORD *)(a1 + 4936) = v38;
    if ( byte_1401688B5 )
      byte_1401688AB = 1;
    if ( sub_14003AA14(*(PDEVICE_OBJECT *)(a1 + 8), (_DWORD *)(a1 + 5712)) )
      byte_1401688AB = *(_DWORD *)(a1 + 5712) != 0;
    if ( dword_140168460 == 1 )
    {
      byte_1401688AB = 1;
    }
    else
    {
      if ( !dword_140168460 )
        byte_1401688AB = 0;
      if ( !byte_1401688AB )
        goto LABEL_70;
    }
    *(_BYTE *)(a1 + 112) |= 0x40u;
LABEL_70:
    if ( byte_140168466 && (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x20000) != 0 )
      IoRegisterPlugPlayNotification(
        EventCategoryDeviceInterfaceChange,
        1u,
        &qword_14014A410,
        *(PDRIVER_OBJECT *)(a3 + 8),
        (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)sub_14017ADA0,
        0LL,
        (PVOID *)(a1 + 6200));
    Uuid = 0LL;
    RtlInitUnicodeString(&v42, L"AdapterGuid");
    p_Uuid = (__int64)&Uuid;
    KeyHandle = 16;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 3u, &p_Uuid, &KeyHandle) < 0
      && ExUuidCreate(&Uuid) >= 0 )
    {
      sub_1401B06F4(DeviceObject, (__int64)&DestinationString, (__int64)&v42, 3u, p_Uuid, 16);
    }
    *(UUID *)(a1 + 5064) = Uuid;
    sub_140044ADC(a1, v39);
    *(_DWORD *)(a1 + 6176) = dword_140168444;
    RtlInitUnicodeString(&v42, L"FwActivateTimeoutForController");
    KeyHandle = 4;
    p_Uuid = (__int64)&v54;
    if ( (int)sub_1401AD970(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
      *(_DWORD *)(a1 + 6176) = v54;
    KeInitializeDpc((PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL), (PKDEFERRED_ROUTINE)sub_14002C400, *(PVOID *)(a1 + 8));
    KeInitializeEvent((PRKEVENT)(a1 + 6104), SynchronizationEvent, 0);
    *(_DWORD *)(a1 + 128) &= ~2u;
    result = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
