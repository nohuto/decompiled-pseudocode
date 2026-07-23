/*
 * XREFs of NtAlpcQueryInformation @ 0x140A7D210
 * Callers:
 *     DifNtAlpcQueryInformationWrapper @ 0x140671090 (DifNtAlpcQueryInformationWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C448C (AlpcpPortQueryServerInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryBasicInfo @ 0x140A7D454 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x140A7D538 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A7D6D8 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpWaitForPortReferences @ 0x140B55B74 (AlpcpWaitForPortReferences.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  HANDLE v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v11; // rbx
  char *v12; // rsi
  unsigned __int64 v13; // rsi
  char UCharFromUser; // al
  PULONG v15; // r14
  int ULongFromUser; // eax
  int v17; // ebx
  PVOID v18; // rsi
  NTSTATUS BasicInfo; // eax
  __int32 v21; // edi
  __int32 v22; // edi
  __int32 v23; // edi
  int Object; // [rsp+20h] [rbp-48h]
  PVOID v26; // [rsp+80h] [rbp+18h] BYREF

  v8 = PortHandle;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !PortInformation )
  {
    v17 = -1073741811;
    goto LABEL_23;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((PortInformationClass - 3) & 0xFFFFFFF7) != 0 && Length )
    {
      v11 = (unsigned __int64)PortInformation;
      if ( ((unsigned __int8)PortInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (char *)PortInformation + Length;
      if ( v12 <= PortInformation || (unsigned __int64)v12 > 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v13 = ((unsigned __int64)(v12 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        UCharFromUser = RtlReadUCharFromUser((volatile void *)v11);
        RtlWriteUCharToUser((_BYTE *)v11, UCharFromUser);
        v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v11 != v13 );
      v8 = PortHandle;
    }
    v15 = ReturnLength;
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(v15, ULongFromUser);
    }
  }
  else
  {
    v15 = ReturnLength;
  }
  if ( v8 )
  {
    v26 = 0LL;
    v17 = ObReferenceObjectByHandle(v8, 0x20000u, AlpcPortObjectType, PreviousMode, &v26, 0LL);
    v18 = v26;
    if ( v17 < 0 )
      goto LABEL_23;
  }
  else
  {
    v18 = 0LL;
  }
  if ( PortInformationClass == AlpcBasicInformation )
  {
    BasicInfo = AlpcpPortQueryBasicInfo((_DWORD)v18, (_DWORD)PortInformation, Length, (_DWORD)v15, PreviousMode);
LABEL_20:
    v17 = BasicInfo;
    goto LABEL_21;
  }
  v21 = PortInformationClass - 3;
  if ( !v21 )
  {
    LOBYTE(Object) = PreviousMode;
    BasicInfo = AlpcpPortQueryConnectedSidInfo(v18, PortInformation, PortInformation, v15, Object);
    goto LABEL_20;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    BasicInfo = AlpcpPortQueryServerInfo((__int64)v18, (void **)PortInformation, Length, v15, PreviousMode);
    goto LABEL_20;
  }
  v23 = v22 - 7;
  if ( !v23 )
  {
    BasicInfo = AlpcpWaitForPortReferences((_DWORD)v18, (_DWORD)PortInformation, Length, (_DWORD)v15, PreviousMode);
    goto LABEL_20;
  }
  if ( v23 == 1 )
  {
    BasicInfo = AlpcpPortQueryServerSessionInfo((_DWORD)v18, (_DWORD)PortInformation, Length, (_DWORD)v15, PreviousMode);
    goto LABEL_20;
  }
  v17 = -1073741811;
LABEL_21:
  if ( v18 )
    ObfDereferenceObject(v18);
LABEL_23:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v17;
}
