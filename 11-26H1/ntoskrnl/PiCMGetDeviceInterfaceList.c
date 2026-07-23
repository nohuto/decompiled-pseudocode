/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x14095A610
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x140498420 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0jzt_EtwWriteTransfer @ 0x14049864C (McTemplateK0jzt_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PiCMReturnBufferResultData @ 0x140959E10 (PiCMReturnBufferResultData.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140B73060 (PiCMCaptureInterfaceListInputData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(void *a1, __int64 a2, char *a3, unsigned int a4, int a5, _DWORD *a6)
{
  void *v8; // rbx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  char v14; // edi^2
  const WCHAR *v15; // r15
  NTSTATUS inited; // ecx
  int v17; // r9d
  int DeviceInterfaces; // eax
  int v19; // eax
  unsigned int v21; // [rsp+50h] [rbp-59h] BYREF
  void *v22; // [rsp+58h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  __int128 v24; // [rsp+78h] [rbp-31h] BYREF
  PCWSTR SourceString[2]; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-11h]

  v26 = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v9 = 0;
  DestinationString = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v21 = 0;
  *(_OWORD *)SourceString = 0LL;
  v12 = PiCMCaptureInterfaceListInputData(a1);
  if ( v12 < 0 )
    goto LABEL_15;
  v14 = BYTE6(v24);
  v15 = SourceString[1];
  if ( (byte_140EF412B & 4) != 0 )
    McTemplateK0jzt_EtwWriteTransfer(v11, v10, v13, (__int64)&v24 + 8, SourceString[1], BYTE6(v24) & 1);
  if ( !a3 || a4 < 0x14 || (DWORD1(v24) & 0xFFFE0000) != 0 || WORD2(v24) )
  {
    inited = -1073741811;
LABEL_12:
    v19 = PiCMReturnBufferResultData(inited, v9, 0, 0LL, 0, SHIDWORD(v26), a3, a4, a6);
    goto LABEL_13;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, v15);
  if ( inited < 0 )
    goto LABEL_12;
  LOBYTE(v17) = 1;
  DeviceInterfaces = IopGetDeviceInterfaces(
                       (unsigned int)&v24 + 8,
                       (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0),
                       (v14 & 1) == 0,
                       v17,
                       (__int64)&v22,
                       (__int64)&v21);
  v9 = v21;
  inited = DeviceInterfaces;
  v8 = v22;
  if ( a4 - 20 < v21 )
  {
    inited = -1073741789;
    goto LABEL_12;
  }
  if ( DeviceInterfaces < 0 )
    goto LABEL_12;
  v19 = PiCMReturnBufferResultData(DeviceInterfaces, v21, 0, v22, v21, SHIDWORD(v26), a3, a4, a6);
LABEL_13:
  v12 = v19;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_15:
  if ( SourceString[1] && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag((PVOID)SourceString[1], 0);
  if ( (byte_140EF412B & 4) != 0 )
    McTemplateK0d_EtwWriteTransfer(v11, (__int64)KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v13, v12);
  return (unsigned int)v12;
}
