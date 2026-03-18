/*
 * XREFs of ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x14022FAE8
 * Callers:
 *     ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x1401974FC (-CopyRegistryKeys@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1400361A4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x140079B10 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x14008438C (-RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     DpiGetRegistryPathFromPDO @ 0x1400856C4 (DpiGetRegistryPathFromPDO.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1401B4904 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1401B4A98 (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x1403388F4 (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x14040A080 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys(DXG_GUEST_VIRTUALGPU_VMBUS *this, char *a2)
{
  wchar_t *v4; // rax
  wchar_t *v5; // r14
  __int64 v6; // rcx
  int v7; // eax
  __int64 RegistryPathFromPDO; // rdi
  unsigned int *v9; // rax
  unsigned int *v10; // r15
  const wchar_t *v12; // r9
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // r13
  unsigned int *v17; // rbx
  ULONG v18; // r8d
  __int64 i; // rax
  int v20; // eax
  NTSTATUS v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v29[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING v31; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING SourceString; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-50h] BYREF
  int v35; // [rsp+C0h] [rbp-40h]

  v35 = 0;
  v34 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v34, this, 0x220u, 0LL, 0LL, 0LL);
  if ( (_QWORD)v34 )
  {
    v4 = (wchar_t *)operator new(0x618uLL, 0x4B677844u, 64LL);
    v5 = v4;
    if ( v4 )
    {
      memset(v4, 0, 0x618uLL);
      v6 = v34;
      DestinationString.Buffer = v5 + 260;
      *(_QWORD *)&SourceString.Length = 34078720LL;
      ValueName.Buffer = v5 + 520;
      SourceString.Buffer = v5;
      *(_QWORD *)&DestinationString.Length = 34078720LL;
      *(_QWORD *)&ValueName.Length = 34078720LL;
      *(_BYTE *)(v34 + 12) = 0;
      *(_DWORD *)(v6 + 12) &= 0x1FFu;
      *(_QWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 63LL;
      KeyHandle = 0LL;
      v27 = 1;
      v7 = RtlStringCbCopyW((char *)(v6 + 24), 0x208uLL, a2);
      RegistryPathFromPDO = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 13231;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to copy RegPathIn to VMBus Command for VmBusGetRegistryKeys (status = 0x%I64x).",
          RegistryPathFromPDO,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_7:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v34);
        return (unsigned int)RegistryPathFromPDO;
      }
      v26 = 130040;
      v9 = (unsigned int *)operator new[](0x1FBF8uLL, 0x4B677844u, 64LL);
      v10 = v9;
      if ( !v9 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 13241;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Cannot allocate memory for DXGKVMB_COMMAND_GETREGISTRYKEYS_RETURN",
          13241LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(RegistryPathFromPDO) = -1073741801;
        goto LABEL_7;
      }
      RegistryPathFromPDO = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(
                              this,
                              (struct DXGVMBUSMESSAGE *)&v34,
                              v9,
                              &v26);
      if ( !v26 )
      {
        RegistryPathFromPDO = -1073741823LL;
        WdLogSingleEntry1(2LL);
        v12 = L"VmBusSendSyncMessage failed for VmBusGetRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 13251;
        goto LABEL_45;
      }
      if ( (v10[1] & 0x80000000) != 0 )
      {
        LODWORD(RegistryPathFromPDO) = v10[1];
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 13259;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmBusSendSyncMessage Output failed for VmBusGetRegistryKeys (status = 0x%I64x).",
          (int)RegistryPathFromPDO,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_46:
        CloseRegistrySubkey(KeyHandle);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
        goto LABEL_7;
      }
      if ( (int)RegistryPathFromPDO < 0 )
      {
        WdLogSingleEntry1(2LL);
        v12 = L"VmBusSendReadRegistryKeys failed: 0x%I64x";
        WdLogGlobalForLineNumber = 13390;
        goto LABEL_45;
      }
      if ( !*v10 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 13267;
        goto LABEL_46;
      }
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*((_QWORD *)this + 9) + 216LL));
      RegistryPathFromPDO = (int)DpiGetRegistryPathFromPDO(DeviceAttachmentBaseRef, 0, &SourceString.Length);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
      if ( (int)RegistryPathFromPDO < 0 )
      {
        WdLogSingleEntry1(2LL);
        v12 = L"Failed to read PnP registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 13278;
        goto LABEL_45;
      }
      wcscpy(v29, L"\\");
      *(_QWORD *)&v31.Length = 262146LL;
      v31.Buffer = v29;
      v14 = RtlUnicodeStringCat(&SourceString, &v31);
      RegistryPathFromPDO = v14;
      if ( v14 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v12 = L"Failed to concat \\ to RegPathRoot for VmBusGetRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 13286;
        goto LABEL_45;
      }
      v15 = 0;
      while ( 2 )
      {
        if ( v15 >= *v10 )
          goto LABEL_46;
        v16 = 774LL * v15;
        v17 = &v10[v16 + 2];
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        for ( i = 0LL; ; i = v26 + 1 )
        {
          v26 = i;
          *(_QWORD *)&v31.Length = (char *)v17 + 2 * i + 2048;
          if ( !**(_WORD **)&v31.Length )
            break;
          if ( **(_WORD **)&v31.Length == 92 )
          {
            v27 = 1;
            v20 = OpenRegistrySubkey(&KeyHandle, 0x20006u, 0LL, &DestinationString, &v27);
            RegistryPathFromPDO = v20;
            if ( v20 < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 13312;
              v12 = L"Failed to create registry key for VmBusGetRegistryKeys (status = 0x%I64x).";
              goto LABEL_45;
            }
            CloseRegistrySubkey(KeyHandle);
            KeyHandle = 0LL;
          }
          v21 = RtlUnicodeStringCchCatStringN(&DestinationString, *(const unsigned __int16 **)&v31.Length, v18);
          RegistryPathFromPDO = v21;
          if ( v21 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 13323;
            v12 = L"Failed to build registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
            goto LABEL_45;
          }
        }
        v27 = 1;
        v22 = OpenRegistrySubkey(&KeyHandle, 0x20006u, 0LL, &DestinationString, &v27);
        RegistryPathFromPDO = v22;
        if ( v22 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 13338;
          v12 = L"Failed to create registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
          goto LABEL_45;
        }
        if ( v17 == (unsigned int *)-2568LL && !v10[v16 + 775] )
          goto LABEL_38;
        v23 = v10[v16 + 774];
        if ( v23 == 1 || v23 == 2 )
        {
          v25 = TranslateUmdFileNameToVm((char *)&v10[v16 + 2], 0x400u, v17 + 773);
          RegistryPathFromPDO = v25;
          if ( v25 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 13353;
            v12 = L"Failed to translate UmdFileName to VM namespace for VmBusGetRegistryKeys (status = 0x%I64x).";
            goto LABEL_45;
          }
        }
        else if ( v23 == 7 )
        {
          v24 = TranslateUmdFileNameToVmMultiString((unsigned __int16 *)&v10[v16 + 2], 1024, v17 + 773);
          RegistryPathFromPDO = v24;
          if ( v24 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 13363;
            v12 = L"Failed to translate UmdFileNames in Multi String Type to VM namespace for VmBusGetRegistryKeys (status = 0x%I64x).";
            goto LABEL_45;
          }
        }
        RtlInitUnicodeString(&ValueName, (PCWSTR)v17 + 1284);
        RegistryPathFromPDO = ZwSetValueKey(KeyHandle, &ValueName, 0, v10[v16 + 774], &v10[v16 + 2], v10[v16 + 775]);
        CloseRegistrySubkey(KeyHandle);
        KeyHandle = 0LL;
        if ( (int)RegistryPathFromPDO >= 0 )
        {
LABEL_38:
          ++v15;
          continue;
        }
        break;
      }
      WdLogSingleEntry1(2LL);
      v12 = L"Failed to set value of reg key for VmBusGetRegistryKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 13381;
LABEL_45:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, RegistryPathFromPDO, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_46;
    }
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v34);
  return 3221225495LL;
}
