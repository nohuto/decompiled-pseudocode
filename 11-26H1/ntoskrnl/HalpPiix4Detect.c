/*
 * XREFs of HalpPiix4Detect @ 0x140C10AEC
 * Callers:
 *     HalpAcpiDetectPiix4Work @ 0x140784EC0 (HalpAcpiDetectPiix4Work.c)
 *     HaliInitPowerManagement @ 0x1407883A0 (HaliInitPowerManagement.c)
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HalSetBusDataByOffset @ 0x14042C360 (HalSetBusDataByOffset.c)
 *     HalGetBusDataByOffset @ 0x14042C5F0 (HalGetBusDataByOffset.c)
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalpGetCpuInfo @ 0x1404BEF80 (HalpGetCpuInfo.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalGetBusData @ 0x14057BE70 (HalGetBusData.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14057FEF8 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptSetMsiOverride @ 0x14057FFBC (HalpInterruptSetMsiOverride.c)
 *     HalpWhackICHUsbSmi @ 0x14059CB5C (HalpWhackICHUsbSmi.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x14059CE3C (HalpUsbLegacyStopUhciInterrupt.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpGetChipHacks @ 0x140CB9B9C (HalpGetChipHacks.c)
 */

char __fastcall HalpPiix4Detect(char a1)
{
  unsigned int v1; // edi
  int BusData; // eax
  char v4; // r12
  ULONG v5; // esi
  char v6; // r15
  ULONG v7; // ebx
  unsigned int v8; // r14d
  int v9; // eax
  __int64 v10; // r8
  ULONG v11; // edx
  unsigned __int16 v12; // r10
  unsigned __int16 v13; // ax
  bool v14; // zf
  ULONG v15; // ebx
  __int64 v16; // rcx
  HANDLE v17; // rcx
  __int16 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  char Buffer_2; // [rsp+4Ah] [rbp-BEh]
  int Buffer_4; // [rsp+4Ch] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  ULONG Disposition[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD ObjectAttributes[7]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v26[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v27[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v28[2]; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int16 v30; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int16 v31; // [rsp+EAh] [rbp-1Eh]
  unsigned __int8 v32; // [rsp+F0h] [rbp-18h]
  char v33; // [rsp+F6h] [rbp-12h]
  __int128 KeyValueInformation; // [rsp+128h] [rbp+20h] BYREF
  int v35; // [rsp+138h] [rbp+30h]

  v1 = 0;
  KeyHandle = 0LL;
  Buffer = 0;
  Disposition[0] = 0;
  Buffer_4 = 0;
  Handle = 0LL;
  Buffer_2 = 0;
  LODWORD(ObjectAttributes[0]) = 0;
  memset(&ObjectAttributes[1], 0, 44);
  memset_0(&v30, 0, 0x40uLL);
  *(_QWORD *)&ValueName.Length = 2490404LL;
  ValueName.Buffer = L"EnableBXWorkAround";
  v28[0] = 3276848LL;
  v28[1] = L"Services\\ACPI\\Parameters";
  v27[0] = 1572886LL;
  v27[1] = L"Control\\HAL";
  v26[0] = 5636180LL;
  v26[1] = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET";
  LOBYTE(BusData) = 0;
  v35 = 0;
  KeyValueInformation = 0LL;
  if ( a1 )
  {
    BusData = _InterlockedIncrement((_DWORD *)&IommuInterfaceStateChangeCallbackPushLock.WriteOperationCount + 1);
    if ( BusData != 1 )
      return BusData;
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = v26;
    ObjectAttributes[2] = 0LL;
    LODWORD(ObjectAttributes[4]) = 64;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    BusData = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]);
    if ( BusData < 0 )
      return BusData;
    ObjectAttributes[2] = KeyHandle;
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = v27;
    LODWORD(ObjectAttributes[4]) = 64;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    if ( ZwCreateKey(&Handle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 0, 0LL, 0, Disposition) < 0 )
      goto LABEL_78;
  }
  else if ( !LOBYTE(IommuInterfaceStateChangeCallbackPushLock.WriteOperationCount) )
  {
    return BusData;
  }
  LOBYTE(BusData) = -HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&Buffer);
  v4 = 0;
  v5 = 0;
  v6 = (_BYTE)BusData != 0 ? Buffer : 0;
  while ( 1 )
  {
    if ( v5 >= 0x100 )
      goto LABEL_70;
    v7 = 0;
    v8 = 0;
    LOBYTE(BusData) = 1;
LABEL_10:
    if ( v8 < 0x20 )
      break;
    ++v5;
  }
  while ( 1 )
  {
    if ( v1 >= 8 )
      goto LABEL_63;
    v7 = v8 & 0x1F | v7 & 0xFFFFFF00 | (32 * (v1 & 7));
    BusData = HalGetBusData(PCIConfiguration, v5, v7, &v30, 2u);
    if ( !BusData )
      goto LABEL_70;
    if ( (unsigned __int16)(v30 - 1) > 0xFFFDu )
    {
      v14 = v1 == 0;
      goto LABEL_60;
    }
    if ( !HalGetBusData(PCIConfiguration, v5, v7, &v30, 0x10u) )
      goto LABEL_61;
    v9 = HalpInterruptModel();
    if ( !a1 )
      break;
    LOBYTE(v10) = v32;
    v11 = 1;
    v12 = v30;
    if ( v9 == 1 && !v5 && !v8 && !v1 && v30 == 4358 && v32 < 0x80u )
      HalpInterruptSetMsiOverride(0);
    if ( v12 == 0x8086 && ((v31 - 29072) & 0xFFFD) == 0 && (unsigned __int8)v10 <= 2u )
    {
      Buffer_2 = v11;
      HalGetBusDataByOffset(PCIConfiguration, v5, v7, (char *)&Buffer + 1, 0x57u, v11);
      LOBYTE(v10) = v32;
      v12 = v30;
      if ( ((HIBYTE(Buffer) >> 5) & ((Buffer & 0x1800) != 0)) != 0 )
        LOBYTE(HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next) = 1;
    }
    if ( (int)HalpGetChipHacks(v12, v31, v10, &Buffer_4) >= 0 )
    {
      if ( (Buffer_4 & 2) != 0 )
        BYTE2(HalpDeviceBlockUnblockPushLock.OtherTransferCount) = 1;
      if ( (Buffer_4 & 8) != 0 )
        HalpWhackICHUsbSmi(v5, v7);
    }
    if ( v6 != 2 || v4 )
      break;
    if ( v30 == 0x8086 )
    {
      if ( v5 )
        goto LABEL_55;
      v13 = v31;
      if ( v8 != 17 )
        goto LABEL_46;
      if ( v1 || v31 != 0x98D0 )
      {
        if ( v1 != 1 )
          goto LABEL_56;
        if ( v31 != 0x98D1 )
        {
LABEL_46:
          if ( v8 != 16 )
            goto LABEL_56;
          if ( (v1 != 6 || v31 != 0xA0D0) && (v1 != 7 || v31 != 0xA0D1) )
          {
            if ( v1 != 6 )
              goto LABEL_51;
            if ( v31 != 17360 )
              goto LABEL_56;
            if ( v32 )
            {
LABEL_51:
              if ( v1 != 7 || v31 != 17361 )
                goto LABEL_56;
              if ( v32 )
                goto LABEL_61;
            }
          }
        }
      }
      v4 = 1;
      HalpInterruptSetLineSpecificOverride(23LL);
      HalpInterruptSetLineSpecificOverride(22LL);
      break;
    }
LABEL_57:
    if ( v1 )
      goto LABEL_61;
    v14 = v33 >= 0;
LABEL_60:
    if ( v14 )
    {
      LOBYTE(BusData) = 1;
LABEL_63:
      ++v8;
      v1 = 0;
      goto LABEL_10;
    }
LABEL_61:
    LOBYTE(BusData) = 1;
    ++v1;
  }
  if ( v30 != 0x8086 )
    goto LABEL_57;
LABEL_55:
  v13 = v31;
LABEL_56:
  if ( v13 != 28944 )
    goto LABEL_57;
  LOBYTE(IommuInterfaceStateChangeCallbackPushLock.WriteOperationCount) = 1;
  v15 = v7 & 0xFFFFFF1F | 0x60;
  HalGetBusData(PCIConfiguration, v5, v15, &v30, 0x40u);
  LOBYTE(v16) = v32;
  HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[4] = v32;
  if ( (HalpDeviceBlockUnblockPushLock.WriteTransferCount & 0x200000000LL) == 0 )
    KeBugCheckEx(0x5Cu, 0x111uLL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\xxacpi.c", 0x662uLL, 0LL);
  if ( v32 <= 1u )
  {
    *(_DWORD *)HalpDeviceBlockUnblockPushLock.PriorityFloorCounts = v5;
    *(_DWORD *)&HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[12] = v15;
    HalGetBusDataByOffset(
      PCIConfiguration,
      v5,
      v15,
      (char *)&HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next + 4,
      0x58u,
      4u);
    HIDWORD(HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next) |= 0x23u;
    HalSetBusDataByOffset(
      PCIConfiguration,
      *(ULONG *)HalpDeviceBlockUnblockPushLock.PriorityFloorCounts,
      *(ULONG *)&HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[12],
      (char *)&HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next + 4,
      0x58u,
      4u);
  }
  LOBYTE(BusData) = HalpUsbLegacyStopUhciInterrupt(v16, v5, v15 & 0xFFFFFF5F, 1);
LABEL_70:
  if ( a1 )
  {
    v17 = Handle;
    if ( Handle )
    {
      ZwClose(Handle);
      v17 = 0LL;
      Handle = 0LL;
    }
    if ( Buffer_2 )
    {
      ObjectAttributes[2] = KeyHandle;
      LODWORD(ObjectAttributes[1]) = 48;
      ObjectAttributes[3] = v28;
      LODWORD(ObjectAttributes[4]) = 64;
      *(_OWORD *)&ObjectAttributes[5] = 0LL;
      if ( ZwCreateKey(&Handle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 0, 0LL, 0, Disposition) >= 0
        && ZwQueryValueKey(
             Handle,
             &ValueName,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             (PULONG)ObjectAttributes) >= 0
        && DWORD2(KeyValueInformation) )
      {
        LOBYTE(HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next) = BYTE12(KeyValueInformation);
      }
LABEL_78:
      v17 = Handle;
    }
    if ( v17 )
      ZwClose(v17);
    if ( KeyHandle )
      ZwClose(KeyHandle);
    LOBYTE(BusData) = KeSetEvent((PRKEVENT)&IommuInterfaceStateChangeCallbackPushLock.ReadTransferCount, 0, 0);
  }
  return BusData;
}
