/*
 * XREFs of DpiAcpiEvalAcpiMethodEx @ 0x1403B21B4
 * Callers:
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x1402533C0 (DpiAcpiPrepareDisplayMuxSupport.c)
 *     DpEvalAcpiMethod @ 0x1403B1CC0 (DpEvalAcpiMethod.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x140430744 (DpiAcpiPrepareAcpiChildNameList.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiAcpiEvalAcpiMethodEx(
        __int64 a1,
        const void **a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned int Status; // ebx
  unsigned int v12; // eax
  unsigned int v13; // r14d
  ULONG v14; // r12d
  size_t v15; // rbp
  _DWORD *Pool2; // rax
  _DWORD *v17; // rdi
  size_t v18; // rsi
  unsigned int v19; // ecx
  int v20; // eax
  struct _DEVICE_OBJECT *v21; // rsi
  IRP *v22; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( a2 && *(_WORD *)a2 > 0xFAu )
  {
    Status = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 278;
    return Status;
  }
  v12 = a3[2];
  v13 = 4;
  if ( v12 < 4 )
    v12 = 4;
  v14 = v12 + 268;
  v15 = v12 + 268;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v15, 1953656900LL);
  v17 = Pool2;
  if ( !Pool2 )
  {
    Status = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 302;
    return Status;
  }
  memset(Pool2, 0, v15);
  *v17 = 1181312321;
  if ( a2 )
  {
    v18 = *(unsigned __int16 *)a2;
    memmove(v17 + 1, a2[1], v18);
    *((_BYTE *)v17 + v18 + 4) = 46;
    v8 = (unsigned int)(v18 + 1);
  }
  v19 = a3[2];
  *(_DWORD *)((char *)v17 + v8 + 4) = a3[1];
  *((_BYTE *)v17 + (unsigned int)(v8 + 4) + 4) = 0;
  if ( a7 )
    v13 = v19;
  v20 = a3[3];
  v17[65] = v19;
  v17[66] = v20;
  memmove(v17 + 67, a3 + 4, v13);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v21 = *(struct _DEVICE_OBJECT **)(v7 + 160);
  ObfReferenceObject(v21);
  v22 = IoBuildDeviceIoControlRequest(
          0x32C018u,
          v21,
          v17,
          v14,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( v22 )
  {
    Status = IofCallDriver(v21, v22);
    if ( Status == 259 )
    {
      Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( Status )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 427;
        goto LABEL_24;
      }
      Status = IoStatusBlock.Status;
    }
    if ( (Status & 0x80000000) == 0 )
    {
      if ( OutputBufferLength && (*OutputBuffer != 1114596673 || !OutputBuffer[2]) )
      {
        Status = -1072431089;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 463;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 443;
    }
    goto LABEL_24;
  }
  Status = -1073741670;
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 404;
LABEL_24:
  if ( v21 )
    ObfDereferenceObject(v21);
  ExFreePoolWithTag(v17, 0);
  return Status;
}
