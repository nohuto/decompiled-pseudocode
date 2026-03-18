/*
 * XREFs of NtCreateKey @ 0x140A82AB0
 * Callers:
 *     DifNtCreateKeyWrapper @ 0x140671820 (DifNtCreateKeyWrapper.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140264800 (KeExpandKernelStackAndCallout.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404690D0 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmCreateKeyCallout @ 0x1409748A0 (CmCreateKeyCallout.c)
 */

__int64 __fastcall NtCreateKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  __int64 v8; // r10
  int v9; // r11d
  int v10; // r9d
  unsigned int v11; // r8d
  __int128 v13; // [rsp+20h] [rbp-31h] BYREF
  __int64 v14; // [rsp+30h] [rbp-21h]
  _QWORD Parameter[2]; // [rsp+40h] [rbp-11h] BYREF
  int v16; // [rsp+50h] [rbp-1h]
  int v17; // [rsp+54h] [rbp+3h]
  __int64 v18; // [rsp+58h] [rbp+7h]
  int v19; // [rsp+60h] [rbp+Fh]
  int v20; // [rsp+64h] [rbp+13h]
  __int64 v21; // [rsp+68h] [rbp+17h]
  int v22; // [rsp+70h] [rbp+1Fh]
  int v23; // [rsp+74h] [rbp+23h]
  __int64 v24; // [rsp+78h] [rbp+27h]
  __int64 v25; // [rsp+80h] [rbp+2Fh]

  v14 = 0LL;
  HIDWORD(Parameter[0]) = 0;
  v13 = 0LL;
  v17 = 0;
  v20 = 0;
  v23 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v13);
  v21 = a5;
  v22 = a6;
  v24 = a7;
  Parameter[0] = 0LL;
  v17 = 0;
  v20 = 0;
  v23 = 0;
  Parameter[1] = v8;
  v16 = v9;
  v18 = a3;
  v19 = v10;
  v25 = 0LL;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
    KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmCreateKeyCallout, Parameter, 0x4800uLL);
  else
    CmCreateKeyCallout(Parameter);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v13);
  return v11;
}
