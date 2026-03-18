/*
 * XREFs of DpiFdoStartAdapterThread @ 0x140247F90
 * Callers:
 *     DpiSessionCreateCallback @ 0x1403FE19C (DpiSessionCreateCallback.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkEnsureVmBusInterface @ 0x1401E0370 (DxgkEnsureVmBusInterface.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 */

void __fastcall DpiFdoStartAdapterThread(_BYTE *StartContext, __int64 a2)
{
  char v3; // di
  NTSTATUS started; // esi
  void *Pool2; // rax
  void *v6; // rbp
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v3 = 1;
  if ( StartContext )
    v3 = *StartContext & 1;
  LOBYTE(a2) = v3;
  started = DpiFdoStartAdapterThreadImpl(StartContext, a2, &v7);
  if ( v7 )
  {
    DxgkEnsureVmBusInterface();
    Pool2 = (void *)ExAllocatePool2(256LL, 1552LL, 1953656900LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x610uLL);
      started = DpiFdoStartAdapterThreadImpl(v6, 0LL, &v7);
      ExFreePoolWithTag(v6, 0x74727044u);
    }
    else
    {
      started = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 17095;
    }
  }
  if ( StartContext )
    ExFreePoolWithTag(StartContext, 0x74727044u);
  if ( !v3 )
    PsTerminateSystemThread(started);
}
