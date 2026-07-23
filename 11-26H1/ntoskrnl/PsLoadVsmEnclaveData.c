/*
 * XREFs of PsLoadVsmEnclaveData @ 0x140619BC8
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x14087C968 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     VslLoadEnclaveData @ 0x140794F50 (VslLoadEnclaveData.c)
 *     PspFindVsmEnclaveThread @ 0x140ACC5E0 (PspFindVsmEnclaveThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsLoadVsmEnclaveData(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  bool v5; // di
  __int64 Pool2; // rsi
  int EnclaveData; // eax
  struct _KLOCK_ENTRIES *v13; // r9
  unsigned int v14; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  AutoBoost *v16; // rax
  volatile unsigned __int8 *v17; // rdx
  AutoBoost *v18; // rbp
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v21 = 0;
  if ( a3 == 4 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = 0LL;
  }
  EnclaveData = VslLoadEnclaveData(a1[3], a2, a3, a4, a5, (__int64)&v21);
  v14 = EnclaveData;
  if ( Pool2 )
  {
    if ( EnclaveData < 0 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      *(_DWORD *)(Pool2 + 32) = v21;
      *(_QWORD *)(Pool2 + 24) = a2;
      *(_DWORD *)(Pool2 + 36) = 0;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 14), 0LL, 0LL, v13);
      v18 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 28, 0LL) )
        ExfAcquirePushLockExclusiveEx(a1 + 14, v16, (__int64)(a1 + 14));
      if ( v18 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v17) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v18 + 33), v17, 1);
        }
        else
        {
          *((_BYTE *)v18 + 10) = 1;
        }
      }
      v19 = (_QWORD *)a1[13];
      if ( v19 )
      {
        while ( 1 )
        {
          if ( (int)PspFindVsmEnclaveThread(a2, v19) < 0 )
          {
            v20 = (_QWORD *)*v19;
            if ( !*v19 )
              break;
          }
          else
          {
            v20 = (_QWORD *)v19[1];
            if ( !v20 )
            {
              v5 = 1;
              break;
            }
          }
          v19 = v20;
        }
      }
      RtlAvlInsertNodeEx(a1 + 13, (unsigned __int64)v19, v5, (_QWORD *)Pool2);
      if ( (_InterlockedExchangeAdd64(a1 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 14);
      KeAbPostRelease((unsigned __int64)(a1 + 14));
      KeLeaveCriticalRegion();
    }
  }
  return v14;
}
