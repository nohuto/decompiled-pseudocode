/*
 * XREFs of NdisOpenProtocolConfiguration @ 0x1400613C0
 * Callers:
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140020890 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x14019118C (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1401913F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall NdisOpenProtocolConfiguration(NTSTATUS *a1, _QWORD *a2, _UNICODE_STRING *a3)
{
  __int64 MaximumLength; // rdi
  char *Pool2; // rax
  int v8; // edx
  char *v9; // rbx
  NTSTATUS v10; // eax
  _QWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  v11[0] = 6815846LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  v11[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x2Cu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      &a3->Length);
  MaximumLength = a3->MaximumLength;
  Pool2 = (char *)ExAllocatePool2(64LL, MaximumLength + 178, 1668301902LL);
  v9 = Pool2;
  if ( !Pool2 )
  {
    *a1 = -1073741670;
    *a2 = 0LL;
    goto LABEL_5;
  }
  *a1 = 0;
  memset(Pool2, 0, MaximumLength + 178);
  memmove(v9 + 176, a3->Buffer, a3->Length);
  *((_QWORD *)v9 + 2) = v9 + 40;
  *((_QWORD *)v9 + 3) = 0LL;
  *((_WORD *)v9 + 20) = 266;
  *(_WORD *)(*((_QWORD *)v9 + 2) + 2LL) = 40;
  *(_DWORD *)(*((_QWORD *)v9 + 2) + 16LL) |= 2u;
  *((_QWORD *)v9 + 8) = ndisSaveParameters;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
  *((_DWORD *)v9 + 18) = 20;
  *((_DWORD *)v9 + 24) = 0;
  *((_QWORD *)v9 + 15) = 0LL;
  *((_DWORD *)v9 + 32) = 0;
  *((_QWORD *)v9 + 17) = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  *a1 = v10;
  if ( v10 < 0 )
  {
LABEL_5:
    if ( *a1 < 0 && v9 )
      ExFreePoolWithTag(v9, 0);
    goto LABEL_6;
  }
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a3;
  if ( ZwOpenKey((PHANDLE)v9 + 4, 0xBu, &ObjectAttributes) < 0 )
    *((_QWORD *)v9 + 4) = 0LL;
  *a2 = v9;
  *a1 = 0;
LABEL_6:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      13,
      45,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids);
  }
}
