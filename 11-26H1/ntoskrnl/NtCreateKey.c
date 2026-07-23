/*
 * XREFs of NtCreateKey @ 0x140A88920
 * Callers:
 *     DifNtCreateKeyWrapper @ 0x140675400 (DifNtCreateKeyWrapper.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140263D70 (KeExpandKernelStackAndCallout.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404626A0 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmCreateKeyCallout @ 0x1409368B0 (CmCreateKeyCallout.c)
 */

NTSTATUS __cdecl NtCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  __int64 v8; // r10
  int v9; // r11d
  int v10; // r9d
  NTSTATUS v11; // r8d
  __int128 v13; // [rsp+20h] [rbp-31h] BYREF
  __int64 v14; // [rsp+30h] [rbp-21h]
  _QWORD Parameter[2]; // [rsp+40h] [rbp-11h] BYREF
  int v16; // [rsp+50h] [rbp-1h]
  int v17; // [rsp+54h] [rbp+3h]
  POBJECT_ATTRIBUTES v18; // [rsp+58h] [rbp+7h]
  int v19; // [rsp+60h] [rbp+Fh]
  int v20; // [rsp+64h] [rbp+13h]
  PUNICODE_STRING v21; // [rsp+68h] [rbp+17h]
  ULONG v22; // [rsp+70h] [rbp+1Fh]
  int v23; // [rsp+74h] [rbp+23h]
  PULONG v24; // [rsp+78h] [rbp+27h]
  __int64 v25; // [rsp+80h] [rbp+2Fh]

  v14 = 0LL;
  HIDWORD(Parameter[0]) = 0;
  v13 = 0LL;
  v17 = 0;
  v20 = 0;
  v23 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v13);
  v21 = Class;
  v22 = CreateOptions;
  v24 = Disposition;
  Parameter[0] = 0LL;
  v17 = 0;
  v20 = 0;
  v23 = 0;
  Parameter[1] = v8;
  v16 = v9;
  v18 = ObjectAttributes;
  v19 = v10;
  v25 = 0LL;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
    KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmCreateKeyCallout, Parameter, 0x4800uLL);
  else
    CmCreateKeyCallout(Parameter);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v13);
  return v11;
}
