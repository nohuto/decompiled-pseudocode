/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x140A2FEC4
 * Callers:
 *     ExGetFirmwareEnvironmentVariable @ 0x140A2F990 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x140A30478 (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpGetFirmwareEnvironmentVariable(int a1, int a2, __int64 a3, unsigned int *a4, __int64 a5, char a6)
{
  struct _MDL *v6; // rbx
  int v7; // edi
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // rax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // edi
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  struct _MDL *v17; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = 0;
  v17 = 0LL;
  v9 = *a4;
  v10 = (int)a4;
  v16[0] = 0LL;
  v11 = a3;
  if ( (_DWORD)v9 )
  {
    LOBYTE(a3) = a6;
    result = ExLockUserBuffer(v11, v9, a3, 1LL, v16, &v17);
    if ( (int)result < 0 )
      return result;
    v6 = v17;
    v7 = v16[0];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
  EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, v7, v10, a5);
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
  KeLeaveCriticalRegion();
  if ( v6 )
    ExUnlockUserBuffer(v6);
  return EnvironmentVariable;
}
