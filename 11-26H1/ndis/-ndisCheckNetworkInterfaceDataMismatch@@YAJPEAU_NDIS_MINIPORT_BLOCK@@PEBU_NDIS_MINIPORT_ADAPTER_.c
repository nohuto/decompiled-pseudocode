/*
 * XREFs of ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14016D6E0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14009F1AC (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x140138260 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015F120 (ndisIfOpenInterfaceRegistryKey.c)
 */

NTSTATUS __fastcall ndisCheckNetworkInterfaceDataMismatch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  wchar_t *v3; // r12
  int v4; // ebx
  NTSTATUS result; // eax
  HANDLE v6; // rbx
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  wchar_t *v10; // rax
  int v11; // r14d
  NTSTATUS v12; // edi
  __int16 v13; // cx
  __int16 v14; // ax
  unsigned __int16 IfType; // di
  wchar_t *v16; // r12
  wchar_t *v17; // rax
  __int64 v18; // rcx
  __int16 v19; // cx
  int v20; // edx
  unsigned int MediaType; // eax
  wchar_t *v22; // r12
  wchar_t *v23; // rax
  __int64 v24; // rcx
  __int16 v25; // cx
  unsigned __int16 v26; // r9
  const wchar_t *v27; // rax
  __int16 v28; // si
  __int64 v29; // [rsp+38h] [rbp-C8h]
  char v30; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v31; // [rsp+42h] [rbp-BEh]
  ULONG Data; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  char v34[4]; // [rsp+60h] [rbp-A0h]
  int v35; // [rsp+64h] [rbp-9Ch]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *v37; // [rsp+70h] [rbp-90h]
  HANDLE DeviceRegKey; // [rsp+78h] [rbp-88h] BYREF
  wchar_t *v39; // [rsp+80h] [rbp-80h]
  wchar_t *v40; // [rsp+88h] [rbp-78h]
  __int128 KeyValueInformation; // [rsp+90h] [rbp-70h] BYREF
  int v42; // [rsp+A0h] [rbp-60h]
  __int128 v43; // [rsp+A8h] [rbp-58h] BYREF
  int v44; // [rsp+B8h] [rbp-48h]
  wchar_t v45; // [rsp+BCh] [rbp-44h]
  wchar_t v46[8]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v47[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v48; // [rsp+F0h] [rbp-10h]
  wchar_t v49; // [rsp+F4h] [rbp-Ch]

  v44 = *(_DWORD *)L"pe";
  v45 = aMediatype_0[10];
  wcscpy(v46, L"*IfType");
  v48 = *(_DWORD *)L"pe";
  v43 = *(_OWORD *)L"*MediaType";
  v49 = aPhysicalmediat_0[18];
  v37 = a2;
  v47[0] = *(_OWORD *)L"*PhysicalMediaType";
  v31 = 0;
  v47[1] = *(_OWORD *)L"lMediaType";
  *(_DWORD *)v34 = 0;
  v35 = 0;
  v30 = 0;
  DeviceRegKey = 0LL;
  Handle = 0LL;
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x100) != 0 )
  {
    v39 = (wchar_t *)&v43 + 1;
    v40 = (wchar_t *)v47 + 1;
    v3 = &v46[1];
    v4 = ndisIfOpenInterfaceRegistryKey((__int64)&a1->InterfaceGuid, (KRegKey *)&Handle, 1u, 1);
    if ( v4 < 0 )
    {
      if ( Handle )
        ZwClose(Handle);
      return v4;
    }
    v6 = Handle;
  }
  else
  {
    v40 = (wchar_t *)v47;
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    v39 = (wchar_t *)&v43;
    v3 = v46;
    result = IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey);
    if ( result < 0 )
      return result;
    v6 = DeviceRegKey;
    Handle = DeviceRegKey;
  }
  v8 = 0x7FFFLL;
  v9 = 0x7FFFLL;
  v10 = v3;
  ValueName = 0LL;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = -1073741811;
  v12 = -1073741811;
  if ( v9 )
  {
    v12 = 0;
    v13 = 2 * v9;
    ValueName.Buffer = v3;
    ValueName.Length = -2 - v13;
    ValueName.MaximumLength = -v13;
  }
  if ( v12 < 0 )
    goto LABEL_95;
  v42 = 0;
  Data = 0;
  KeyValueInformation = 0LL;
  v12 = ZwQueryValueKey(v6, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &Data);
  if ( v12 < 0 )
    goto LABEL_20;
  if ( DWORD1(KeyValueInformation) != 4 )
  {
    v14 = 0;
    v12 = -1073741788;
    goto LABEL_24;
  }
  if ( DWORD2(KeyValueInformation) != 4 )
  {
    v12 = -1073741789;
LABEL_20:
    v14 = 0;
    goto LABEL_24;
  }
  if ( HIDWORD(KeyValueInformation) <= 0xFFFF )
  {
    v14 = WORD6(KeyValueInformation);
    v12 = 0;
    v31 = WORD6(KeyValueInformation);
  }
  else
  {
    v14 = 0;
    v12 = -1073741675;
  }
LABEL_24:
  if ( v12 < 0 )
    goto LABEL_95;
  IfType = v37->IfType;
  if ( v14 != IfType )
  {
    if ( a1->MajorNdisVersion >= 6u )
    {
      if ( ndisCheckDeviceNeedReinstallWithNewIfType(a1, v37) != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0xD1u,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
            (char)a1,
            IfType,
            v31);
        goto LABEL_80;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0xD0u,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a1,
          IfType,
          v31);
        IfType = v37->IfType;
      }
    }
    v12 = KRegKey::SetValueUlong((KRegKey *)&Handle, v3, IfType);
    if ( v12 < 0 )
      goto LABEL_95;
    v30 = 1;
  }
  v16 = v39;
  ValueName = 0LL;
  v17 = v39;
  v18 = 0x7FFFLL;
  do
  {
    if ( !*v17 )
      break;
    ++v17;
    --v18;
  }
  while ( v18 );
  v12 = -1073741811;
  if ( v18 )
  {
    v12 = 0;
    v19 = 2 * v18;
    ValueName.Buffer = v39;
    ValueName.Length = -2 - v19;
    ValueName.MaximumLength = -v19;
  }
  if ( v12 < 0 )
    goto LABEL_95;
  Data = 0;
  v42 = 0;
  KeyValueInformation = 0LL;
  v12 = ZwQueryValueKey(v6, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &Data);
  if ( v12 >= 0 )
  {
    if ( DWORD1(KeyValueInformation) == 4 )
    {
      if ( DWORD2(KeyValueInformation) == 4 )
      {
        v20 = HIDWORD(KeyValueInformation);
        v12 = 0;
      }
      else
      {
        v20 = *(_DWORD *)v34;
        v12 = -1073741789;
      }
    }
    else
    {
      v20 = *(_DWORD *)v34;
      v12 = -1073741788;
    }
  }
  else
  {
    v20 = *(_DWORD *)v34;
  }
  if ( v12 < 0 )
    goto LABEL_95;
  MediaType = v37->MediaType;
  if ( v20 == MediaType )
  {
LABEL_54:
    v22 = v40;
    ValueName = 0LL;
    v23 = v40;
    v24 = 0x7FFFLL;
    do
    {
      if ( !*v23 )
        break;
      ++v23;
      --v24;
    }
    while ( v24 );
    v12 = -1073741811;
    if ( v24 )
    {
      v12 = 0;
      v25 = 2 * v24;
      ValueName.Buffer = v40;
      ValueName.Length = -2 - v25;
      ValueName.MaximumLength = -v25;
    }
    if ( v12 < 0 )
      goto LABEL_95;
    Data = 0;
    v42 = 0;
    KeyValueInformation = 0LL;
    v12 = ZwQueryValueKey(v6, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &Data);
    if ( v12 >= 0 )
    {
      if ( DWORD1(KeyValueInformation) == 4 )
      {
        if ( DWORD2(KeyValueInformation) == 4 )
        {
          v20 = HIDWORD(KeyValueInformation);
          v12 = 0;
        }
        else
        {
          v20 = v35;
          v12 = -1073741789;
        }
      }
      else
      {
        v20 = v35;
        v12 = -1073741788;
      }
    }
    else
    {
      v20 = v35;
    }
    if ( v12 < 0 )
      goto LABEL_95;
    MediaType = v37->PhysicalMediumType;
    if ( v20 == MediaType )
    {
      if ( !v30 )
        goto LABEL_95;
      goto LABEL_84;
    }
    if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x3Cu) )
    {
      if ( !v30 )
        goto LABEL_95;
      v12 = KRegKey::SetValueUlong((KRegKey *)&Handle, v22, MediaType);
      if ( v12 < 0 )
        goto LABEL_95;
LABEL_84:
      ValueName = 0LL;
      v27 = L"NdisUpdatedNetworkInterface";
      do
      {
        if ( !*v27 )
          break;
        ++v27;
        --v8;
      }
      while ( v8 );
      if ( v8 )
      {
        v11 = 0;
        v28 = 2 * v8;
        ValueName.Buffer = L"NdisUpdatedNetworkInterface";
        ValueName.Length = -2 - v28;
        ValueName.MaximumLength = -v28;
      }
      if ( v11 < 0 || (Data = 1, v12 = ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u), v11 = v12, v12 < 0) )
      {
        if ( v6 )
          ZwClose(v6);
        return v11;
      }
      ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
LABEL_95:
      if ( v6 )
        ZwClose(v6);
      return v12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 211;
      goto LABEL_79;
    }
    goto LABEL_80;
  }
  if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x3Cu) )
  {
    if ( v30 )
    {
      v12 = KRegKey::SetValueUlong((KRegKey *)&Handle, v16, MediaType);
      if ( v12 < 0 )
        goto LABEL_95;
    }
    goto LABEL_54;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = 210;
LABEL_79:
    LODWORD(v29) = v20;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      v26,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      MediaType,
      v29);
  }
LABEL_80:
  if ( v6 )
    ZwClose(v6);
  return -1073741823;
}
