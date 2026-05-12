/*
 * XREFs of RaCallMiniportFindAdapter @ 0x140042B00
 * Callers:
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 *     RaidAdapterReInitialize @ 0x14005A478 (RaidAdapterReInitialize.c)
 *     NvmeAdapterStartMiniport @ 0x1400DE784 (NvmeAdapterStartMiniport.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     McTemplateK0ddqqqqqqdduuuqqtt_EtwWriteTransfer @ 0x1400784AC (McTemplateK0ddqqqqqqdduuuqqtt_EtwWriteTransfer.c)
 *     McTemplateK0zzdqq_EtwWriteTransfer @ 0x14007864C (McTemplateK0zzdqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaCallMiniportFindAdapter(__int64 a1, void *a2, __int64 a3)
{
  _DWORD *v3; // r14
  void *v4; // rbp
  int v6; // edi
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r12
  struct _DEVICE_OBJECT *v11; // r13
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  unsigned int v18; // ecx
  unsigned int v19; // esi
  unsigned int v20; // r9d
  bool v22; // zf
  int v23; // edi
  int v24; // edi
  int v25; // edi
  unsigned int v26; // ebp
  __int64 v27; // r9
  __int64 v28; // rax
  char v29; // [rsp+D0h] [rbp+8h] BYREF

  v29 = 0;
  v3 = (_DWORD *)(a1 + 8);
  v4 = &unk_14015304C;
  v6 = 3;
  v7 = *(_QWORD **)a1;
  if ( a2 )
    v4 = a2;
  v8 = 0LL;
  v9 = v7[3];
  v10 = v7[4];
  v11 = (struct _DEVICE_OBJECT *)v7[1];
  if ( (*(_DWORD *)(a1 + 248) & 1) == 0 )
    v8 = v7 + 608;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0ddqqqqqqdduuuqqtt_EtwWriteTransfer(
      *((unsigned __int8 *)v3 + 83),
      (unsigned int)&EventAdapterInitPortConfigInfo,
      *((unsigned __int8 *)v3 + 97),
      *v3,
      v3[6],
      *((_BYTE *)v3 + 72),
      *((_BYTE *)v3 + 97),
      *((_BYTE *)v3 + 146),
      v3[51],
      v3[52],
      v3[53],
      v3[48],
      v3[55],
      *((_BYTE *)v3 + 98),
      *((_BYTE *)v3 + 99),
      *((_BYTE *)v3 + 144),
      v3[54],
      v3[40],
      *((_BYTE *)v3 + 83),
      *((_BYTE *)v3 + 196));
  v12 = *(_QWORD *)(a1 + 232);
  v13 = *(_DWORD *)(a1 + 248) | 2;
  *(_DWORD *)(a1 + 248) = v13;
  if ( *(_DWORD *)v12 == 136 )
  {
LABEL_24:
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *, _DWORD *, char *))(v12 + 32))(
            *(_QWORD *)(a1 + 240) + 16LL,
            0LL,
            0LL,
            v4,
            v3,
            &v29);
    goto LABEL_10;
  }
  if ( (v13 & 8) == 0 )
  {
    if ( *(_DWORD *)v12 != 208 )
      goto LABEL_11;
    goto LABEL_24;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, struct _DEVICE_OBJECT *, __int64, void *, _DWORD *, char *))(v12 + 32))(
          *(_QWORD *)(a1 + 240) + 16LL,
          v10,
          v11,
          v9,
          v4,
          v3,
          &v29);
LABEL_10:
  v6 = v14;
LABEL_11:
  *(_DWORD *)(a1 + 248) &= ~2u;
  if ( v6 == 1 && (!*((_BYTE *)v3 + 90) || !*((_BYTE *)v3 + 91) || !*((_BYTE *)v3 + 81) || !*((_BYTE *)v3 + 82)) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_de62a644c133373146b947968e24d4d0_Traceguids);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_de62a644c133373146b947968e24d4d0_Traceguids);
      }
    }
LABEL_60:
    v15 = -1073741438;
    goto LABEL_15;
  }
  if ( (v3[50] & 2) != 0 )
  {
    v22 = v6 == 4;
LABEL_62:
    if ( !v22 )
    {
      v15 = -1073741595;
      goto LABEL_15;
    }
    goto LABEL_65;
  }
  if ( !v6 )
  {
    v15 = -1073741275;
    goto LABEL_15;
  }
  v23 = v6 - 1;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( !v24 )
    {
      v15 = -1073741630;
      goto LABEL_15;
    }
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_60;
    v22 = v25 == 1;
    goto LABEL_62;
  }
LABEL_65:
  v15 = 0;
  if ( (*(_DWORD *)(a1 + 248) & 1) == 0 && *(_DWORD *)v8 && v8[1] && v8[2] )
  {
    a3 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    v26 = 0;
    v27 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    do
    {
      v12 = v8[1] + 16LL * v26;
      v28 = *(_QWORD *)v12 - v27;
      if ( *(_QWORD *)v12 == v27 )
        v28 = *(_QWORD *)(v12 + 8) - a3;
      if ( v28 )
      {
        PoRegisterPowerSettingCallback(
          v11,
          (LPCGUID)v12,
          RaidPowerSettingCallback,
          *(PVOID *)a1,
          (PVOID *)(v8[2] + 8LL * v26));
        a3 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
        v27 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
      }
      ++v26;
    }
    while ( v26 < *(_DWORD *)v8 );
  }
LABEL_15:
  v16 = *(_DWORD *)(a1 + 212);
  v17 = 1000;
  if ( v16 <= 0x3E8
    || (LODWORD(v12) = *(unsigned __int8 *)(a1 + 152), (_BYTE)v12 == 2)
    || (unsigned __int8)(v12 - 3) <= 1u )
  {
    v17 = *(_DWORD *)(a1 + 212);
    if ( v16 < 0x10 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        McTemplateK0zzdqq_EtwWriteTransfer(
          v16,
          v12,
          a3,
          (unsigned int)L"MaxNumberOfIO",
          (__int64)L"MaxNumberOfIO",
          16,
          v16,
          16);
      *(_DWORD *)(a1 + 212) = 16;
      v17 = 16;
    }
  }
  else
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0zzdqq_EtwWriteTransfer(
        v16,
        v12,
        a3,
        (unsigned int)L"MaxNumberOfIO",
        (__int64)L"Dma64BitAddresses",
        v12,
        v16,
        232);
    *(_DWORD *)(a1 + 212) = 1000;
  }
  v18 = *(_DWORD *)(a1 + 216);
  v19 = 255;
  if ( v18 > 0xFF )
  {
    LODWORD(v12) = *(unsigned __int8 *)(a1 + 106);
    if ( (_BYTE)v12 != 1 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        McTemplateK0zzdqq_EtwWriteTransfer(
          v18,
          v12,
          a3,
          (unsigned int)L"MaxIOsPerLun",
          (__int64)L"SrbType",
          v12,
          v18,
          255);
LABEL_80:
      *(_DWORD *)(a1 + 216) = v19;
      goto LABEL_20;
    }
LABEL_19:
    v19 = *(_DWORD *)(a1 + 216);
    if ( v18 <= v17 )
      goto LABEL_20;
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0zzdqq_EtwWriteTransfer(
        v18,
        v12,
        a3,
        (unsigned int)L"MaxIOsPerLun",
        (__int64)L"MaxNumberOfIO",
        v17,
        v18,
        v17);
    v19 = *(_DWORD *)(a1 + 212);
    goto LABEL_80;
  }
  if ( v18 >= 0x10 )
    goto LABEL_19;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0zzdqq_EtwWriteTransfer(
      v18,
      v12,
      a3,
      (unsigned int)L"MaxIOsPerLun",
      (__int64)L"MaxIOsPerLun",
      16,
      v18,
      16);
  *(_DWORD *)(a1 + 216) = 16;
  v19 = 16;
LABEL_20:
  v20 = *(_DWORD *)(a1 + 220);
  if ( v20 > v19 )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0zzdqq_EtwWriteTransfer(
        v18,
        v12,
        a3,
        (unsigned int)L"InitialLunQueueDepth",
        (__int64)L"MaxIOsPerLun",
        v19,
        v20,
        v19);
    v20 = *(_DWORD *)(a1 + 216);
    LOBYTE(v19) = v20;
    *(_DWORD *)(a1 + 220) = v20;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0ddqqqqqqdduuuqqtt_EtwWriteTransfer(
      *(_DWORD *)(a1 + 32),
      (unsigned int)&EventAdapterFinalPortConfigInfo,
      *(unsigned __int8 *)(a1 + 105),
      *v3,
      *(_DWORD *)(a1 + 32),
      *(_BYTE *)(a1 + 80),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 154),
      *(_DWORD *)(a1 + 212),
      v19,
      v20,
      *(_DWORD *)(a1 + 200),
      *(_DWORD *)(a1 + 228),
      *(_BYTE *)(a1 + 106),
      *(_BYTE *)(a1 + 107),
      *(_BYTE *)(a1 + 152),
      *(_DWORD *)(a1 + 224),
      *(_DWORD *)(a1 + 168),
      *(_BYTE *)(a1 + 91),
      *(_BYTE *)(a1 + 204));
  return v15;
}
