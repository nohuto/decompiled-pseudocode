/*
 * XREFs of NtProtectVirtualMemory @ 0x140A03A40
 * Callers:
 *     DifNtProtectVirtualMemoryWrapper @ 0x1406847B0 (DifNtProtectVirtualMemoryWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     PsIsProcessLoggingEnabled @ 0x1404A3994 (PsIsProcessLoggingEnabled.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x140A81C70 (EtwTiLogProtectExecVm.c)
 */

NTSTATUS __cdecl NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // di
  __int64 ULong64FromUser; // rax
  __int64 v11; // rax
  int ULongFromUser; // eax
  ULONG_PTR v13; // r13
  void *v14; // rax
  NTSTATUS result; // eax
  _QWORD *v16; // r14
  int v17; // eax
  __int64 v18; // rsi
  NTSTATUS v19; // esi
  char v20[4]; // [rsp+44h] [rbp-144h] BYREF
  int ProtectionMask; // [rsp+48h] [rbp-140h]
  PVOID BaseAddressa; // [rsp+50h] [rbp-138h] BYREF
  char v23[8]; // [rsp+58h] [rbp-130h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-128h]
  PVOID Object; // [rsp+68h] [rbp-120h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp-118h]
  PSIZE_T v27; // [rsp+78h] [rbp-110h]
  PVOID *v28; // [rsp+80h] [rbp-108h]
  PVOID v29; // [rsp+88h] [rbp-100h]
  PULONG v30; // [rsp+90h] [rbp-F8h]
  _OWORD v31[3]; // [rsp+98h] [rbp-F0h] BYREF
  char v32[8]; // [rsp+D0h] [rbp-B8h] BYREF
  unsigned __int64 v33; // [rsp+D8h] [rbp-B0h]
  _KPROCESS *v34; // [rsp+E0h] [rbp-A8h]
  PVOID v35; // [rsp+E8h] [rbp-A0h]
  __int64 v36; // [rsp+F0h] [rbp-98h]
  __int64 v37; // [rsp+F8h] [rbp-90h]

  v5 = NewProtect;
  v27 = RegionSize;
  v28 = BaseAddress;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v30 = OldProtect;
  memset(v31, 0, sizeof(v31));
  Object = 0LL;
  BaseAddressa = 0LL;
  *(_QWORD *)v23 = 0LL;
  *(_DWORD *)v20 = 0;
  if ( NewProtect == 0x80000000 || NewProtect == 0x10000000 )
  {
    ProtectionMask = 24;
  }
  else
  {
    if ( (NewProtect & 0x7F800) != 0 )
      return -1073741755;
    ProtectionMask = MiMakeProtectionMask(NewProtect & 0xFFFFFFF);
    if ( ProtectionMask == -1 )
      return -1073741755;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(BaseAddress);
    RtlWriteULong64ToUser(BaseAddress, ULong64FromUser);
    v11 = RtlReadULong64FromUser(RegionSize);
    RtlWriteULong64ToUser(RegionSize, v11);
    ULongFromUser = RtlReadULongFromUser(OldProtect);
    RtlWriteULongToUser(OldProtect, ULongFromUser);
    v14 = (void *)RtlReadULong64FromUser(BaseAddress);
  }
  else
  {
    v14 = *BaseAddress;
  }
  BaseAddressa = v14;
  if ( PreviousMode )
    v13 = RtlReadULong64FromUser(RegionSize);
  else
    v13 = *RegionSize;
  *(_QWORD *)v23 = v13;
  v29 = BaseAddressa;
  if ( !v13 || (char *)BaseAddressa + v13 <= BaseAddressa || (unsigned __int64)BaseAddressa + v13 > 0x7FFFFFFF0000LL )
    return -1073741811;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x76506D4Du,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
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
      v35 = BaseAddressa;
      v36 = *(_QWORD *)v23;
      v37 = v5;
      v19 = VslpEnterIumSecureMode(2u, 0x28u, 0, (__int64)v32);
      if ( v19 >= 0 )
      {
        BaseAddressa = v35;
        *(_QWORD *)v23 = v36;
        *(_DWORD *)v20 = v37;
      }
    }
    else
    {
      v19 = MmProtectVirtualMemory(v17, (_DWORD)v16, (unsigned int)&BaseAddressa, (unsigned int)v23, v5, (__int64)v20);
    }
    LODWORD(BugCheckParameter1) = v19;
    if ( (_DWORD)Object )
      KiUnstackDetachProcess((__int64)v31, 0);
    if ( v19 >= 0
      && (((unsigned __int8)ProtectionMask | (unsigned __int8)MiMakeProtectionMask(*(unsigned int *)v20)) & 2) != 0
      && (unsigned int)PsIsProcessLoggingEnabled((__int64)Process, (__int64)v16, 8) )
    {
      EtwTiLogProtectExecVm((ULONG_PTR)v16, BaseAddressa, v23[0], v5, v20[0]);
    }
    ObfDereferenceObjectWithTag(v16, 0x76506D4Du);
    ProtectionMask = 4;
    if ( PreviousMode )
      RtlWriteULong64ToUser(v27, *(__int64 *)v23);
    else
      *v27 = *(_QWORD *)v23;
    if ( PreviousMode )
      RtlWriteULong64ToUser(v28, (__int64)BaseAddressa);
    else
      *v28 = BaseAddressa;
    if ( OldProtect )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(OldProtect, *(int *)v20);
      else
        *OldProtect = *(_DWORD *)v20;
    }
    return v19;
  }
  return result;
}
