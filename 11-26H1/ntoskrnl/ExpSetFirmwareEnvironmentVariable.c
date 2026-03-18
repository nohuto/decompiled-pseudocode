/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x14083CB1C
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x14083AE70 (ExSetFirmwareEnvironmentVariable.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14083EAA0 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     IoSetEnvironmentVariableEx @ 0x140906830 (IoSetEnvironmentVariableEx.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpSetFirmwareEnvironmentVariable(int a1, int a2, __int64 a3, unsigned int a4, int a5, char a6)
{
  struct _MDL *v6; // rbx
  int v7; // edi
  __int64 v9; // rax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // edi
  struct _MDL *v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF

  v6 = 0LL;
  v7 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v9 = a3;
  if ( a4 )
  {
    LOBYTE(a3) = a6;
    result = ExLockUserBuffer(v9, a4, a3, 0LL, &v16, &v15);
    if ( (int)result < 0 )
      return result;
    v6 = v15;
    v7 = v16;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
  v14 = IoSetEnvironmentVariableEx(a1, a2, v7, a4, a5);
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
  KeLeaveCriticalRegion();
  if ( v6 )
    ExUnlockUserBuffer(v6);
  return v14;
}
