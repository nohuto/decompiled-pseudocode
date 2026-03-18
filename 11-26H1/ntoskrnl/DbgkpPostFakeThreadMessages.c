/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x1409556F0
 * Callers:
 *     DbgkpSetProcessDebugObject @ 0x140985C5C (DbgkpSetProcessDebugObject.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140985F5C (DbgkpPostFakeProcessCreateMessages.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     PsMultiResumeThread @ 0x1404FE168 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     DbgkpQueueMessage @ 0x140953A1C (DbgkpQueueMessage.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140956164 (PsSynchronizeWithThreadInsertion.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     PspSuspendThread @ 0x140AD5030 (PspSuspendThread.c)
 *     DbgkpSectionToFileHandle @ 0x140B260F0 (DbgkpSectionToFileHandle.c)
 *     DbgkSendSystemDllMessages @ 0x140B51ED8 (DbgkSendSystemDllMessages.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(_KPROCESS *a1, struct _KEVENT *a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  void *v7; // r14
  void *v8; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  int v10; // r12d
  char v11; // r13
  __int64 NextProcessThread; // rax
  int v13; // esi
  _DWORD *v14; // rax
  _DWORD *v15; // r13
  char v16; // r13
  PRKEVENT Event; // [rsp+20h] [rbp-208h]
  __int64 v19; // [rsp+28h] [rbp-200h]
  __int64 v20; // [rsp+30h] [rbp-1F8h]
  _KPROCESS *BugCheckParameter1; // [rsp+38h] [rbp-1F0h]
  __int64 v22; // [rsp+40h] [rbp-1E8h]
  __int64 v23; // [rsp+48h] [rbp-1E0h]
  struct _KTHREAD *v25; // [rsp+58h] [rbp-1D0h]
  _BYTE v27[40]; // [rsp+A0h] [rbp-188h] BYREF
  int v28; // [rsp+C8h] [rbp-160h]
  HANDLE Handle; // [rsp+D8h] [rbp-150h]
  unsigned __int64 v30; // [rsp+E0h] [rbp-148h]
  int ULongFromUser; // [rsp+E8h] [rbp-140h]
  int v32; // [rsp+ECh] [rbp-13Ch]
  __int64 v33; // [rsp+F8h] [rbp-130h]
  _BYTE v34[48]; // [rsp+1B0h] [rbp-78h] BYREF

  BugCheckParameter1 = a1;
  memset(v34, 0, sizeof(v34));
  memset_0(v27, 0, 0x110uLL);
  v7 = 0LL;
  v23 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread;
  v10 = -1073741823;
  if ( !a3 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v11 = 1;
    LOBYTE(v20) = 1;
    goto LABEL_4;
  }
  v11 = 0;
  LOBYTE(v20) = 0;
  v7 = (void *)a3;
  v23 = a3;
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
          v13 = (((int)PspSuspendThread(a3, 0LL, 0LL, 0LL, Event, v19, v20, BugCheckParameter1, v22, v23) >> 31) & 0xFFFFFFE0)
              + 42;
        else
          v13 = 18;
        HIDWORD(v20) = v13;
        memset_0(v27, 0, 0x110uLL);
        if ( !v11 || (v13 & 0x10) != 0 )
        {
          v16 = 0;
          v28 = 1;
          Handle = *(HANDLE *)(a3 + 1376);
        }
        else
        {
          BYTE1(v20) = 1;
          v28 = 2;
          if ( BugCheckParameter1[1].Padding[4] )
            Handle = (HANDLE)DbgkpSectionToFileHandle();
          else
            Handle = 0LL;
          v30 = BugCheckParameter1[1].Padding[5];
          KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v34);
          v14 = RtlImageNtHeader(BugCheckParameter1[1].Padding[5]);
          v15 = v14;
          if ( v14 )
          {
            v33 = 0LL;
            ULongFromUser = RtlReadULongFromUser(v14 + 3);
            v32 = RtlReadULongFromUser(v15 + 4);
          }
          v16 = 1;
          KiUnstackDetachProcess((__int64)v34, 0);
        }
        v10 = DbgkpQueueMessage(BugCheckParameter1, (char *)a3, (__int64)v27, v13, a2);
        if ( v10 < 0 )
        {
          if ( (v13 & 0x20) != 0 )
            PsMultiResumeThread(a3, 0LL, 1LL);
          if ( (v13 & 8) != 0 )
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a3 + 1416));
          if ( v28 == 2 && Handle )
            ObCloseHandle(Handle, 0);
          ObfDereferenceObjectWithTag((PVOID)a3, 0x6E457350u);
          break;
        }
        if ( v16 )
        {
          v11 = 0;
          LOBYTE(v20) = 0;
          ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
          v7 = (void *)a3;
          v23 = a3;
          DbgkSendSystemDllMessages((PVOID)a3);
        }
        else
        {
          v11 = v20;
        }
        CurrentThread = v25;
      }
    }
    NextProcessThread = PsGetNextProcessThread(BugCheckParameter1, a3);
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
