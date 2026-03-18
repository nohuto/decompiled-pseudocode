/*
 * XREFs of MiReadWriteVirtualMemory @ 0x140A21D00
 * Callers:
 *     NtReadVirtualMemoryEx @ 0x1404B2E30 (NtReadVirtualMemoryEx.c)
 *     DifNtReadVirtualMemoryExWrapper @ 0x140687E70 (DifNtReadVirtualMemoryExWrapper.c)
 *     NtWriteVirtualMemory @ 0x140A21C60 (NtWriteVirtualMemory.c)
 *     NtReadVirtualMemory @ 0x140A21CD0 (NtReadVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessLoggingEnabled @ 0x1404AA304 (PsIsProcessLoggingEnabled.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     EtwTiLogReadWriteVm @ 0x140A22020 (EtwTiLogReadWriteVm.c)
 *     MiCopyVirtualMemory @ 0x140A22370 (MiCopyVirtualMemory.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  int v8; // r14d
  __int64 v9; // rsi
  unsigned int v10; // r12d
  char PreviousMode; // r13
  unsigned __int64 v12; // rax
  __int64 *v14; // rdi
  __int64 ULong64FromUser; // rax
  int v16; // ebx
  struct _KTHREAD *Process; // r11
  PVOID v18; // r15
  unsigned __int64 v19; // r14
  int v20; // eax
  __int64 v21; // r11
  unsigned __int64 v22; // rax
  int v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+48h] [rbp-50h] BYREF
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-40h]
  ULONG_PTR BugCheckParameter1; // [rsp+A0h] [rbp+8h]
  int v29; // [rsp+B0h] [rbp+18h]

  v29 = a3;
  BugCheckParameter1 = a1;
  v8 = a7;
  v9 = 0LL;
  Object = 0LL;
  if ( (a7 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 2) != 0 )
      return 3221225485LL;
    v10 = a6;
    if ( (_DWORD)a6 != 16 )
      return 3221225485LL;
  }
  else
  {
    v10 = a6;
    if ( (a7 & 2) == 0 )
    {
      if ( (_DWORD)a6 == 16 )
        v8 = a7 | 1;
      goto LABEL_6;
    }
    if ( (_DWORD)a6 != 16 )
      return 3221225485LL;
  }
LABEL_6:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v12 = a2 + a4;
    if ( a2 + a4 <= a2 )
    {
      if ( a4 || v12 >= 0x7FFFFFFF0000LL )
        return 3221225477LL;
    }
    else if ( v12 > 0x7FFFFFFF0000LL )
    {
      return 3221225477LL;
    }
    v22 = a3 + a4;
    if ( a3 + a4 <= a3 )
    {
      if ( a4 || v22 >= 0x7FFFFFFF0000LL )
        return 3221225477LL;
    }
    else if ( v22 > 0x7FFFFFFF0000LL )
    {
      return 3221225477LL;
    }
    v14 = a5;
    if ( a5 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a5);
      RtlWriteULong64ToUser(a5, ULong64FromUser);
    }
    a1 = BugCheckParameter1;
  }
  else
  {
    v14 = a5;
  }
  v24 = 0LL;
  v16 = 0;
  if ( a4 )
  {
    v16 = ObpReferenceObjectByHandleWithTag(a1, v10, PsProcessType, PreviousMode, 0x6D566D4Du, &Object, 0LL, 0LL);
    if ( v16 >= 0 )
    {
      Process = (struct _KTHREAD *)CurrentThread->ApcState.Process;
      CurrentThread = Process;
      v18 = Object;
      if ( (*((_BYTE *)Object + 368) & 1) == 0 || Process == Object || *((_QWORD *)Object + 97) )
      {
        if ( v10 == 16 )
        {
          v23 = v8;
          v19 = a2;
          v20 = MiCopyVirtualMemory((_DWORD)Object, a2, (_DWORD)Process, v29, a4, PreviousMode, (__int64)&v24, v23);
        }
        else
        {
          v19 = a2;
          v20 = MiCopyVirtualMemory((_DWORD)Process, v29, (_DWORD)Object, a2, a4, PreviousMode, (__int64)&v24, 0);
        }
        v16 = v20;
        v9 = v24;
        Process = CurrentThread;
      }
      else
      {
        v16 = -1073741819;
        v19 = a2;
      }
      if ( (unsigned int)PsIsProcessLoggingEnabled((__int64)Process, (__int64)v18, v10) )
        EtwTiLogReadWriteVm((unsigned int)v16, v21, v18, v10, v19, v9);
      ObfDereferenceObjectWithTag(v18, 0x6D566D4Du);
    }
  }
  if ( v14 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(v14, v9);
    else
      *v14 = v9;
  }
  return (unsigned int)v16;
}
