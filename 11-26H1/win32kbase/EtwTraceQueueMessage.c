/*
 * XREFs of EtwTraceQueueMessage @ 0x1400E63B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqsp_EtwWriteTransfer @ 0x14001E380 (McTemplateK0qqsp_EtwWriteTransfer.c)
 *     EtwTraceQueuePostMessage @ 0x1400E6690 (EtwTraceQueuePostMessage.c)
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x1400E6880 (McTemplateK0cppqp_EtwWriteTransfer.c)
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x1400E6928 (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceQueueMessage(_DWORD *ProcessImageFileName, __int64 a2)
{
  _DWORD *v2; // rbx
  int v3; // edi
  int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v12; // rcx
  int v13; // r15d
  __int64 v14; // rdi
  __int64 CurrentProcess; // rbp
  __int64 v16; // r8
  char ThreadId; // r12
  const char *v18; // r14
  __int64 *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax

  v2 = ProcessImageFileName;
  if ( ProcessImageFileName[6] )
    goto LABEL_2;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(ProcessImageFileName, a2);
  v13 = -1;
  if ( CurrentThreadWin32Thread )
  {
    v14 = *CurrentThreadWin32Thread;
    CurrentProcess = PsGetCurrentProcess(v12);
    if ( v14 )
    {
      ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v14);
      goto LABEL_15;
    }
  }
  else
  {
    v14 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v12);
  }
  ThreadId = -1;
LABEL_15:
  v18 = (const char *)&unk_140269890;
  if ( CurrentProcess )
    ProcessImageFileName = (_DWORD *)PsGetProcessImageFileName(CurrentProcess);
  else
    ProcessImageFileName = &unk_140269890;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
  {
    if ( ProcessImageFileName )
      v18 = (const char *)ProcessImageFileName;
    if ( v14 )
    {
      ProcessImageFileName = *(_DWORD **)(v14 + 456);
      if ( ProcessImageFileName )
        v13 = ProcessImageFileName[14];
    }
    McTemplateK0qqsp_EtwWriteTransfer((__int64)ProcessImageFileName, a2, v16, v13, ThreadId, v18, *((_QWORD *)v2 + 2));
  }
LABEL_2:
  v3 = v2[25];
  if ( (v3 & 4) != 0 )
  {
    EtwTraceQueuePostMessage(v2);
  }
  else if ( (v3 & 8) != 0 )
  {
    v4 = v2[24];
    if ( v4 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      {
        v5 = *((_QWORD *)v2 + 2);
        v6 = *((_QWORD *)v2 + 13);
        v7 = (__int64 *)PsGetCurrentThreadWin32Thread(ProcessImageFileName, a2);
        if ( v7 && (v8 = *v7) != 0 )
          v10 = *(unsigned __int8 *)(v8 + 1456);
        else
          LOBYTE(v10) = -1;
        McTemplateK0cppqp_EtwWriteTransfer(v8, (unsigned int)&QueueEventMessage, v9, v10, (char)v2, v6, v4, v5);
      }
    }
    else if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
    {
      v19 = (__int64 *)PsGetCurrentThreadWin32Thread((unsigned int)v2[6], a2);
      if ( v19 && (v23 = *v19) != 0 )
        v22 = *(unsigned __int8 *)(v23 + 1456);
      else
        LOBYTE(v22) = -1;
      McTemplateK0cpttttttpppqq_EtwWriteTransfer(v20, (unsigned int)&QueueInputMessage, v21, v22, (char)v2);
    }
  }
}
