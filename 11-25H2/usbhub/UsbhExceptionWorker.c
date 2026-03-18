/*
 * XREFs of UsbhExceptionWorker @ 0x14002AE50
 * Callers:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhGetExceptionDispatch @ 0x14002AF80 (UsbhGetExceptionDispatch.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 *     UsbhLogException @ 0x14002B180 (UsbhLogException.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhExceptionWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *ExceptionDispatch; // r10
  __int64 i; // r8
  void *v9; // rsi
  void (__fastcall *v10)(__int64, __int64); // rax

  FdoExt(a1);
  if ( (UsbhLogMask & 0x80u) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = 0LL;
        *(_DWORD *)v6 = 1465350245;
        *(_QWORD *)(v6 + 24) = a3;
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
  if ( dword_14006F574 )
    Log(a1, 128, 1768908081, a3, 0LL);
  if ( ExceptionDispatch )
  {
    v10 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)ExceptionDispatch + 2);
    if ( v10 )
      v10(a1, a3);
  }
  v9 = (void *)UsbhLogException(a1, a3);
  UsbhReferenceListRemove(a1, a3);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
