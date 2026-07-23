/*
 * XREFs of PiSwDeviceInterfaceSetState @ 0x140B1284C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x140B12678 (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     McTemplateK0zzzt_EtwWriteTransfer @ 0x1405DEF98 (McTemplateK0zzzt_EtwWriteTransfer.c)
 *     PnpAllocatePWSTR @ 0x140951520 (PnpAllocatePWSTR.c)
 *     _CmValidateDeviceInterfaceName @ 0x140960DB0 (_CmValidateDeviceInterfaceName.c)
 *     IoSetDeviceInterfaceState @ 0x1409AA7B0 (IoSetDeviceInterfaceState.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceInterfaceSetState(__int64 a1, __int64 a2, char a3)
{
  WCHAR *v3; // rbx
  __int64 v5; // rax
  int v6; // edi
  __int64 v9; // rax
  int PWSTR; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(a1 + 120);
  v6 = 0;
  if ( !v5 || (v9 = *(_QWORD *)(v5 + 64)) == 0 || (*(_DWORD *)(v9 + 8) & 1) == 0 || *(_BYTE *)(a2 + 36) == a3 )
  {
LABEL_3:
    *(_BYTE *)(a2 + 36) = a3;
    goto LABEL_4;
  }
  PWSTR = PnpAllocatePWSTR(*(_WORD **)(a2 + 16), 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString);
  v3 = (WCHAR *)SourceString;
  v6 = PWSTR;
  if ( PWSTR >= 0 )
  {
    v6 = CmValidateDeviceInterfaceName(v12, SourceString);
    if ( v6 >= 0 )
    {
      *(_QWORD *)v3 = 0x5C003F003F005CLL;
      RtlInitUnicodeString(&DestinationString, v3);
      v6 = IoSetDeviceInterfaceState(&DestinationString, a3);
      if ( v6 >= 0 )
      {
        if ( (byte_140EF412C & 0x40) != 0 )
          McTemplateK0zzzt_EtwWriteTransfer(
            v14,
            v13,
            v15,
            *(const wchar_t **)(a1 + 8),
            *(const wchar_t **)(a1 + 16),
            v3,
            a3);
        goto LABEL_3;
      }
    }
  }
LABEL_4:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x57706E50u);
  return (unsigned int)v6;
}
