/*
 * XREFs of NtProtectVirtualMemory @ 0x14095E180
 * Callers:
 *     DifNtProtectVirtualMemoryWrapper @ 0x140680BD0 (DifNtProtectVirtualMemoryWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x140364A40 (MiMakeProtectionMask.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     PsIsProcessLoggingEnabled @ 0x1404AA304 (PsIsProcessLoggingEnabled.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     MmProtectVirtualMemory @ 0x14095E5D8 (MmProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x140A79D30 (EtwTiLogProtectExecVm.c)
 */

__int64 __fastcall NtProtectVirtualMemory(ULONG_PTR a1, PVOID *a2, _QWORD *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // di
  __int64 ULong64FromUser; // rax
  __int64 v11; // rax
  int ULongFromUser; // eax
  __int64 v13; // r13
  PVOID v14; // rax
  __int64 result; // rax
  _QWORD *v16; // r14
  int v17; // eax
  __int64 v18; // rsi
  int v19; // esi
  char v20[4]; // [rsp+44h] [rbp-144h] BYREF
  int ProtectionMask; // [rsp+48h] [rbp-140h]
  PVOID BaseAddress; // [rsp+50h] [rbp-138h] BYREF
  char v23[8]; // [rsp+58h] [rbp-130h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-128h]
  PVOID Object; // [rsp+68h] [rbp-120h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp-118h]
  _QWORD *v27; // [rsp+78h] [rbp-110h]
  PVOID *v28; // [rsp+80h] [rbp-108h]
  PVOID v29; // [rsp+88h] [rbp-100h]
  unsigned int *v30; // [rsp+90h] [rbp-F8h]
  _OWORD v31[3]; // [rsp+98h] [rbp-F0h] BYREF
  char v32[8]; // [rsp+D0h] [rbp-B8h] BYREF
  unsigned __int64 v33; // [rsp+D8h] [rbp-B0h]
  _KPROCESS *v34; // [rsp+E0h] [rbp-A8h]
  PVOID v35; // [rsp+E8h] [rbp-A0h]
  __int64 v36; // [rsp+F0h] [rbp-98h]
  __int64 v37; // [rsp+F8h] [rbp-90h]

  v5 = a4;
  v27 = a3;
  v28 = a2;
  BugCheckParameter1 = a1;
  v30 = a5;
  memset(v31, 0, sizeof(v31));
  Object = 0LL;
  BaseAddress = 0LL;
  *(_QWORD *)v23 = 0LL;
  *(_DWORD *)v20 = 0;
  if ( a4 == 0x80000000 || a4 == 0x10000000 )
  {
    ProtectionMask = 24;
  }
  else
  {
    if ( (a4 & 0x7F800) != 0 )
      return 3221225541LL;
    ProtectionMask = MiMakeProtectionMask(a4 & 0xFFFFFFF);
    if ( ProtectionMask == -1 )
      return 3221225541LL;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a2);
    RtlWriteULong64ToUser(a2, ULong64FromUser);
    v11 = RtlReadULong64FromUser(a3);
    RtlWriteULong64ToUser(a3, v11);
    ULongFromUser = RtlReadULongFromUser(a5);
    RtlWriteULongToUser(a5, ULongFromUser);
    v14 = (PVOID)RtlReadULong64FromUser(a2);
  }
  else
  {
    v14 = *a2;
  }
  BaseAddress = v14;
  if ( PreviousMode )
    v13 = RtlReadULong64FromUser(a3);
  else
    v13 = *a3;
  *(_QWORD *)v23 = v13;
  v29 = BaseAddress;
  if ( !v13 || (char *)BaseAddress + v13 <= BaseAddress || (unsigned __int64)BaseAddress + v13 > 0x7FFFFFFF0000LL )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             8LL,
             PsProcessType,
             PreviousMode,
             0x76506D4Du,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v16 = Object;
    v17 = (int)Process;
    if ( Process == Object )
    {
      LODWORD(Object) = 0;
    }
    else
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v31);
      LODWORD(Object) = 1;
      v17 = (int)Process;
    }
    v18 = v16[46];
    if ( (v18 & 1) != 0 )
    {
      memset_0(v32, 0, 0x68uLL);
      v33 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
      v34 = Process;
      v35 = BaseAddress;
      v36 = *(_QWORD *)v23;
      v37 = v5;
      v19 = VslpEnterIumSecureMode(2u, 0x28u, 0, (__int64)v32);
      if ( v19 >= 0 )
      {
        BaseAddress = v35;
        *(_QWORD *)v23 = v36;
        *(_DWORD *)v20 = v37;
      }
    }
    else
    {
      v19 = MmProtectVirtualMemory(v17, (_DWORD)v16, (unsigned int)&BaseAddress, (unsigned int)v23, v5, (__int64)v20);
    }
    LODWORD(BugCheckParameter1) = v19;
    if ( (_DWORD)Object )
      KiUnstackDetachProcess((__int64)v31, 0);
    if ( v19 >= 0
      && (((unsigned __int8)ProtectionMask | (unsigned __int8)MiMakeProtectionMask(*(unsigned int *)v20)) & 2) != 0
      && (unsigned int)PsIsProcessLoggingEnabled((__int64)Process, (__int64)v16, 8) )
    {
      EtwTiLogProtectExecVm((ULONG_PTR)v16, BaseAddress, v23[0], v5, v20[0]);
    }
    ObfDereferenceObjectWithTag(v16, 0x76506D4Du);
    ProtectionMask = 4;
    if ( PreviousMode )
      RtlWriteULong64ToUser(v27, *(__int64 *)v23);
    else
      *v27 = *(_QWORD *)v23;
    if ( PreviousMode )
      RtlWriteULong64ToUser(v28, (__int64)BaseAddress);
    else
      *v28 = BaseAddress;
    if ( a5 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(a5, *(int *)v20);
      else
        *a5 = *(_DWORD *)v20;
    }
    return (unsigned int)v19;
  }
  return result;
}
