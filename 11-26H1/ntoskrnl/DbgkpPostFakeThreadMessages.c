/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x140949760
 * Callers:
 *     DbgkpSetProcessDebugObject @ 0x14091D490 (DbgkpSetProcessDebugObject.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140947C5C (DbgkpPostFakeProcessCreateMessages.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     PsMultiResumeThread @ 0x1404F76A8 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PspSuspendThread @ 0x140949620 (PspSuspendThread.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14094BA20 (PsSynchronizeWithThreadInsertion.c)
 *     DbgkpQueueMessage @ 0x1409CF35C (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140B28350 (DbgkpSectionToFileHandle.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(__int64 a1, struct _KEVENT *a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  void *v7; // r14
  void *v8; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  int v10; // r12d
  char v11; // r13
  __int64 NextProcessThread; // rax
  unsigned int v13; // esi
  PIMAGE_NT_HEADERS v14; // rax
  PIMAGE_NT_HEADERS v15; // r13
  char v16; // r13
  char v18; // [rsp+30h] [rbp-1F8h]
  struct _KTHREAD *v21; // [rsp+58h] [rbp-1D0h]
  _BYTE v23[40]; // [rsp+A0h] [rbp-188h] BYREF
  int v24; // [rsp+C8h] [rbp-160h]
  HANDLE Handle; // [rsp+D8h] [rbp-150h]
  __int64 v26; // [rsp+E0h] [rbp-148h]
  int ULongFromUser; // [rsp+E8h] [rbp-140h]
  int v28; // [rsp+ECh] [rbp-13Ch]
  __int64 v29; // [rsp+F8h] [rbp-130h]
  _BYTE v30[48]; // [rsp+1B0h] [rbp-78h] BYREF

  memset(v30, 0, sizeof(v30));
  memset_0(v23, 0, 0x110uLL);
  v7 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v21 = CurrentThread;
  v10 = -1073741823;
  if ( !a3 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v11 = 1;
    v18 = 1;
    goto LABEL_4;
  }
  v11 = 0;
  v18 = 0;
  v7 = (void *)a3;
  ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
  while ( a3 )
  {
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
    v8 = (void *)a3;
    ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
    if ( (*(_DWORD *)(a3 + 116) & 0x400) == 0 )
    {
      if ( (*(_DWORD *)(a3 + 1440) & 2) != 0
        || (PsSynchronizeWithThreadInsertion(a3, CurrentThread), (*(_DWORD *)(a3 + 1440) & 2) != 0) )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a3 + 1416)) )
          v13 = (((int)PspSuspendThread(a3, 0, 0LL, 0LL) >> 31) & 0xFFFFFFE0) + 42;
        else
          LOBYTE(v13) = 18;
        memset_0(v23, 0, 0x110uLL);
        if ( !v11 || (v13 & 0x10) != 0 )
        {
          v16 = 0;
          v24 = 1;
          Handle = *(HANDLE *)(a3 + 1376);
        }
        else
        {
          v24 = 2;
          if ( *(_QWORD *)(a1 + 680) )
            Handle = (HANDLE)DbgkpSectionToFileHandle();
          else
            Handle = 0LL;
          v26 = *(_QWORD *)(a1 + 688);
          KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v30);
          v14 = RtlImageNtHeader(*(PVOID *)(a1 + 688));
          v15 = v14;
          if ( v14 )
          {
            v29 = 0LL;
            ULongFromUser = RtlReadULongFromUser(&v14->FileHeader.PointerToSymbolTable);
            v28 = RtlReadULongFromUser(&v15->FileHeader.NumberOfSymbols);
          }
          v16 = 1;
          KiUnstackDetachProcess((__int64)v30, 0);
        }
        v10 = DbgkpQueueMessage((PVOID)a1, (PVOID)a3, a2);
        if ( v10 < 0 )
        {
          if ( (v13 & 0x20) != 0 )
            PsMultiResumeThread(a3, 0LL, 1LL);
          if ( (v13 & 8) != 0 )
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a3 + 1416));
          if ( v24 == 2 && Handle )
            ObCloseHandle(Handle, 0);
          ObfDereferenceObjectWithTag((PVOID)a3, 0x6E457350u);
          break;
        }
        if ( v16 )
        {
          v11 = 0;
          v18 = 0;
          ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
          v7 = (void *)a3;
          DbgkSendSystemDllMessages((PVOID)a3);
        }
        else
        {
          v11 = v18;
        }
        CurrentThread = v21;
      }
    }
    NextProcessThread = PsGetNextProcessThread(a1, a3);
LABEL_4:
    a3 = NextProcessThread;
  }
  if ( v10 >= 0 )
  {
    if ( v7 )
    {
      *a4 = v7;
      *a5 = v8;
    }
    else
    {
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x4F676244u);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
  }
  return (unsigned int)v10;
}
