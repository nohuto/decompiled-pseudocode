/*
 * XREFs of NtAlpcQueryInformation @ 0x140A6BBE0
 * Callers:
 *     DifNtAlpcQueryInformationWrapper @ 0x14066D4B0 (DifNtAlpcQueryInformationWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C0EF8 (AlpcpPortQueryServerInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408F5DA0 (ExRaiseAccessViolation.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryBasicInfo @ 0x140A6BE24 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x140A6BF08 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A6C0A8 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpWaitForPortReferences @ 0x140B532D4 (AlpcpWaitForPortReferences.c)
 */

__int64 __fastcall NtAlpcQueryInformation(
        HANDLE Handle,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v7; // edi
  HANDLE v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  char UCharFromUser; // al
  unsigned int *v15; // r14
  int ULongFromUser; // eax
  NTSTATUS v17; // ebx
  PVOID v18; // rsi
  NTSTATUS BasicInfo; // eax
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int Object; // [rsp+20h] [rbp-48h]
  PVOID v26; // [rsp+80h] [rbp+18h] BYREF

  v7 = a2;
  v8 = Handle;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a3 )
  {
    v17 = -1073741811;
    goto LABEL_23;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (((_DWORD)a2 - 3) & 0xFFFFFFF7) != 0 && a4 )
    {
      v11 = a3;
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = a3 + a4;
      if ( v12 <= a3 || v12 > 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v13 = ((v12 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        UCharFromUser = RtlReadUCharFromUser((volatile void *)v11);
        RtlWriteUCharToUser((_BYTE *)v11, UCharFromUser);
        v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v11 != v13 );
      v8 = Handle;
    }
    v15 = a5;
    if ( a5 )
    {
      ULongFromUser = RtlReadULongFromUser(a5);
      RtlWriteULongToUser(v15, ULongFromUser);
    }
  }
  else
  {
    v15 = a5;
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
  if ( !v7 )
  {
    BasicInfo = AlpcpPortQueryBasicInfo((_DWORD)v18, a3, a4, (_DWORD)v15, PreviousMode);
LABEL_20:
    v17 = BasicInfo;
    goto LABEL_21;
  }
  v21 = v7 - 3;
  if ( !v21 )
  {
    LOBYTE(Object) = PreviousMode;
    BasicInfo = AlpcpPortQueryConnectedSidInfo(v18, a3, a3, v15, Object);
    goto LABEL_20;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    BasicInfo = AlpcpPortQueryServerInfo((__int64)v18, (void **)a3, a4, v15, PreviousMode);
    goto LABEL_20;
  }
  v23 = v22 - 7;
  if ( !v23 )
  {
    BasicInfo = AlpcpWaitForPortReferences((_DWORD)v18, a3, a4, (_DWORD)v15, PreviousMode);
    goto LABEL_20;
  }
  if ( v23 == 1 )
  {
    BasicInfo = AlpcpPortQueryServerSessionInfo((_DWORD)v18, a3, a4, (_DWORD)v15, PreviousMode);
    goto LABEL_20;
  }
  v17 = -1073741811;
LABEL_21:
  if ( v18 )
    ObfDereferenceObject(v18);
LABEL_23:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3);
  return (unsigned int)v17;
}
