/*
 * XREFs of EtwTraceQueueMessage @ 0x14003DA10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x14003C650 (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x14003C7A8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x14003DD58 (McTemplateK0cppppqq_EtwWriteTransfer.c)
 *     McTemplateK0qqsp_EtwWriteTransfer @ 0x14003DE10 (McTemplateK0qqsp_EtwWriteTransfer.c)
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x14003F7F8 (McTemplateK0cppqp_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall EtwTraceQueueMessage(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebp
  int v4; // ecx
  int v5; // r15d
  char v6; // bp
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 *v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __int64 *CurrentThreadNonPaged; // rax
  int v22; // r15d
  __int64 v23; // rdi
  int v24; // edx
  __int64 CurrentProcess; // rbp
  int v26; // r8d
  char ThreadId; // r12
  int *v28; // r14
  int *ProcessImageFileName; // rcx
  int v30; // ecx
  int v31; // r12d
  char v32; // r14
  __int64 v33; // r15
  __int64 v34; // rdi
  char CallbackCount; // al
  __int64 v36; // [rsp+28h] [rbp-80h]
  __int64 v37; // [rsp+30h] [rbp-78h]

  LOBYTE(v1) = 0;
  if ( *(_DWORD *)(a1 + 24) )
    goto LABEL_2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  v22 = -1;
  if ( CurrentThreadNonPaged )
  {
    v23 = *CurrentThreadNonPaged;
    CurrentProcess = PsGetCurrentProcess();
    if ( v23 )
    {
      ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v23);
      goto LABEL_26;
    }
  }
  else
  {
    v23 = 0LL;
    CurrentProcess = PsGetCurrentProcess();
  }
  ThreadId = -1;
LABEL_26:
  v28 = (int *)&unk_14025EF20;
  if ( CurrentProcess )
    ProcessImageFileName = (int *)PsGetProcessImageFileName(CurrentProcess);
  else
    ProcessImageFileName = (int *)&unk_14025EF20;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
  {
    if ( ProcessImageFileName )
      v28 = ProcessImageFileName;
    if ( v23 )
    {
      ProcessImageFileName = *(int **)(v23 + 464);
      if ( ProcessImageFileName )
        v22 = ProcessImageFileName[14];
    }
    McTemplateK0qqsp_EtwWriteTransfer(
      (_DWORD)ProcessImageFileName,
      v24,
      v26,
      v22,
      ThreadId,
      (__int64)v28,
      *(_QWORD *)(a1 + 16));
  }
LABEL_2:
  v3 = *(_DWORD *)(a1 + 100);
  if ( (v3 & 4) != 0 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return;
    v4 = *(_DWORD *)(a1 + 24);
    v5 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v4 - 581) <= 2 )
    {
      v6 = *(_DWORD *)(a1 + 24);
      if ( v4 == 582 || v4 == 581 || v4 == 583 )
      {
        v7 = *(_QWORD *)(a1 + 40);
        v1 = *(_QWORD *)(a1 + 32);
LABEL_7:
        v8 = *(_QWORD *)(a1 + 16);
        v9 = (__int64 *)W32GetCurrentThreadNonPaged();
        if ( v9 && (v10 = *v9) != 0 )
          v12 = *(unsigned __int8 *)(v10 + 1456);
        else
          LOBYTE(v12) = -1;
        McTemplateK0cppppqq_EtwWriteTransfer(v10, (unsigned int)&QueuePostMessage, v11, v12, a1, v8, v1, v7, v6, v5);
        return;
      }
    }
    else
    {
      v6 = 0;
    }
    LOBYTE(v7) = 0;
    goto LABEL_7;
  }
  if ( (v3 & 8) == 0 )
    return;
  v13 = *(_DWORD *)(a1 + 96);
  if ( !v13 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) == 0 )
      return;
    v30 = *(_DWORD *)(a1 + 24);
    v31 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v30 - 581) <= 2 )
    {
      v32 = *(_DWORD *)(a1 + 24);
      if ( v30 == 582 || v30 == 581 || v30 == 583 )
      {
        v33 = *(_QWORD *)(a1 + 40);
        v1 = *(_QWORD *)(a1 + 32);
        goto LABEL_42;
      }
    }
    else
    {
      v32 = 0;
    }
    LOBYTE(v33) = 0;
LABEL_42:
    v34 = *(_QWORD *)(a1 + 16);
    CallbackCount = GetCallbackCount();
    McTemplateK0cpttttttpppqq_EtwWriteTransfer(
      (unsigned int)(v3 << 25 >> 31),
      (__int64)&QueueInputMessage,
      (unsigned int)((char)v3 >> 7),
      CallbackCount,
      a1,
      v36,
      v37,
      v3 << 26 >> 31,
      v3 << 25 >> 31,
      v3 << 27 >> 31,
      (char)v3 >> 7,
      v34,
      v1,
      v33,
      v32,
      v31);
    return;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 16);
    v15 = *(_QWORD *)(a1 + 104);
    v16 = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( v16 && (v20 = *v16) != 0 )
      v19 = *(unsigned __int8 *)(v20 + 1456);
    else
      LOBYTE(v19) = -1;
    McTemplateK0cppqp_EtwWriteTransfer(v17, (unsigned int)&QueueEventMessage, v18, v19, a1, v15, v13, v14);
  }
}
