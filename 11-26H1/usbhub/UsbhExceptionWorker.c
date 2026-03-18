/*
 * XREFs of UsbhExceptionWorker @ 0x140029470
 * Callers:
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhGetExceptionDispatch @ 0x1400295B0 (UsbhGetExceptionDispatch.c)
 *     UsbhReferenceListRemove @ 0x140029668 (UsbhReferenceListRemove.c)
 *     UsbhLogException @ 0x1400297BC (UsbhLogException.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhExceptionWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  char *ExceptionDispatch; // r10
  __int64 i; // r8
  void *v12; // rsi
  void (__fastcall *v13)(__int64, __int64); // rax

  FdoExt(a1);
  if ( (UsbhLogMask & 0x80u) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 880), 0xFFFFFFFF);
        v7 = *(_DWORD *)(v5 + 884);
        v8 = *(_QWORD *)(v5 + 888);
        v9 = 32LL * ((v6 - 1) & v7);
        *(_DWORD *)(v9 + v8) = 1465350245;
        *(_QWORD *)(v9 + v8 + 8) = 0LL;
        *(_QWORD *)(v9 + v8 + 16) = 0LL;
        *(_QWORD *)(v9 + v8 + 24) = a3;
      }
    }
  }
  ExceptionDispatch = (char *)UsbhGetExceptionDispatch(a1, *(unsigned int *)(a3 + 16));
  for ( i = 0LL; (unsigned int)i < 0x8E; i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(a3 + 16) == *((_DWORD *)&HubExceptionTable + 6 * i) )
    {
      ExceptionDispatch = (char *)&HubExceptionTable + 24 * i;
      break;
    }
  }
  if ( dword_1400705D4 )
    Log(a1, 128, 1768908081, a3, 0LL);
  if ( ExceptionDispatch )
  {
    v13 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)ExceptionDispatch + 2);
    if ( v13 )
      v13(a1, a3);
  }
  v12 = (void *)UsbhLogException(a1, a3);
  UsbhReferenceListRemove(a1, a3);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
}
