/*
 * XREFs of PopManageTransitionRecordRequest @ 0x140AE1E44
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060A1F8 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140C03138 (PoDelistPowerStateTransitionBlocker.c)
 */

__int64 __fastcall PopManageTransitionRecordRequest(char a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 v7; // rcx
  int v8; // ebx
  _QWORD *v10; // r15
  PETHREAD CurrentThread; // rsi
  void *v12; // rcx
  struct _KPROCESS *v13; // rbp
  PETHREAD *v14; // r14
  PEPROCESS v15; // rcx
  _QWORD *v16; // rax
  PETHREAD *v17; // rcx
  unsigned int v18; // edx
  PETHREAD Thread; // [rsp+30h] [rbp-48h] BYREF
  PEPROCESS Process; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (unsigned int)a3 < 0x38 )
    return (unsigned int)-1073741789;
  if ( (unsigned int)(dword_140F105D4 - 1) > 1 )
    return (unsigned int)-1073741101;
  v7 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
      return (unsigned int)PoDelistPowerStateTransitionBlocker(v7, a2, a3, 0LL);
    return (unsigned int)-1073741811;
  }
  if ( a1 == 1 )
  {
    v10 = (_QWORD *)(a2 + 16);
    CurrentThread = KeGetCurrentThread();
    v12 = *(void **)(a2 + 16);
    Thread = CurrentThread;
    v13 = CurrentThread->ApcState.Process;
    Process = v13;
    if ( v12 && *(_QWORD *)(a2 + 24) )
    {
      v8 = PsLookupProcessByProcessId(v12, &Process);
      if ( v8 < 0 )
        return (unsigned int)v8;
      v8 = PsLookupThreadByThreadId(*(HANDLE *)(a2 + 24), &Thread);
      if ( v8 < 0 )
      {
        v15 = Process;
        goto LABEL_23;
      }
      v13 = Process;
      v4 = 0LL;
      CurrentThread = Thread;
    }
    v14 = (PETHREAD *)(a2 + 24);
  }
  else
  {
    if ( a1 )
      return (unsigned int)-1073741811;
    v16 = (_QWORD *)(a2 + 16);
    v13 = *(struct _KPROCESS **)(a2 + 16);
    v17 = (PETHREAD *)(a2 + 24);
    v18 = *(_DWORD *)(a2 + 40);
    CurrentThread = *v17;
    if ( v18 == 1 || (v10 = v16, v14 = v17, v18 == 2) )
    {
      v10 = v16;
      v14 = v17;
      if ( *(_QWORD *)(a2 + 48) )
      {
        v3 = *(_QWORD *)(a2 + 48);
        v4 = (struct _KLOCK_ENTRIES *)v18;
      }
    }
  }
  if ( !v13 || !CurrentThread )
    return (unsigned int)-1073741811;
  v8 = PopPushPowerStateTransitionRecordWithCallback(v13, CurrentThread, *(_QWORD *)(a2 + 32), v4, v3);
  if ( a1 == 1 && *v10 && *v14 )
  {
    ObfDereferenceObject(v13);
    v15 = (PEPROCESS)CurrentThread;
LABEL_23:
    ObfDereferenceObject(v15);
  }
  return (unsigned int)v8;
}
