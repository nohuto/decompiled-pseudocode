/*
 * XREFs of NtCreateKeyTransacted @ 0x140974390
 * Callers:
 *     DifNtCreateKeyTransactedWrapper @ 0x140671650 (DifNtCreateKeyTransactedWrapper.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140264800 (KeExpandKernelStackAndCallout.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404690D0 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpTransDereferenceTransaction @ 0x1408ECC08 (CmpTransDereferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     CmCreateKeyCallout @ 0x1409748A0 (CmCreateKeyCallout.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtCreateKeyTransacted(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        HANDLE Handle,
        __int64 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  NTSTATUS v18; // edi
  KPROCESSOR_MODE v19; // r9
  NTSTATUS v20; // eax
  PVOID Object; // [rsp+38h] [rbp-49h] BYREF
  __int128 v23; // [rsp+40h] [rbp-41h] BYREF
  __int64 v24; // [rsp+50h] [rbp-31h]
  _DWORD Parameter[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v26; // [rsp+60h] [rbp-21h]
  int v27; // [rsp+68h] [rbp-19h]
  __int64 v28; // [rsp+70h] [rbp-11h]
  int v29; // [rsp+78h] [rbp-9h]
  __int64 v30; // [rsp+80h] [rbp-1h]
  int v31; // [rsp+88h] [rbp+7h]
  __int64 v32; // [rsp+90h] [rbp+Fh]
  __int64 v33; // [rsp+98h] [rbp+17h]

  v24 = 0LL;
  Parameter[1] = 0;
  v23 = 0LL;
  memset_0(Parameter, 0, 0x44uLL);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v23);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v13, v12) )
  {
    v18 = -1073741431;
    goto LABEL_12;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v17 = (__int64)Object;
  v18 = v15;
  if ( v15 == -1073741788 )
  {
    v19 = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v20 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v19, &Object, 0LL);
    v17 = (__int64)Object;
    v18 = v20;
    if ( v20 < 0 )
      goto LABEL_9;
  }
  else
  {
    if ( v15 < 0 )
      goto LABEL_9;
    v17 = (unsigned __int64)Object | 1;
  }
  v30 = a5;
  v31 = a6;
  v32 = a8;
  v26 = a1;
  v27 = a2;
  v28 = a3;
  v29 = a4;
  v33 = v17;
  if ( !(unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
  {
    CmCreateKeyCallout(Parameter);
    goto LABEL_8;
  }
  v18 = KeExpandKernelStackAndCallout(CmCreateKeyCallout, Parameter, 0x4800uLL);
  if ( v18 >= 0 )
LABEL_8:
    v18 = Parameter[0];
LABEL_9:
  if ( v17 )
    CmpTransDereferenceTransaction(v17);
  CmpReleaseShutdownRundown(v16);
LABEL_12:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v23);
  return (unsigned int)v18;
}
