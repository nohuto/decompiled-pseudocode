/*
 * XREFs of PsInitializeVsmEnclave @ 0x140AB8D5C
 * Callers:
 *     MiInitializeVsmEnclave @ 0x140AB8C78 (MiInitializeVsmEnclave.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     VslInitializeEnclave @ 0x140794E5C (VslInitializeEnclave.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsInitializeVsmEnclave(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct _KLOCK_ENTRIES *a4,
        __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rbp
  _QWORD *Pool2; // r14
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi
  int v14; // ecx
  int v15; // edi
  unsigned int v16; // r15d
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->KernelApcDisable;
  Pool2 = 0LL;
  v11 = (AutoBoost *)KeAbPreAcquire(a1 + 48, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v11, (__int64)v6);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = *(_DWORD *)(a1 + 44);
  if ( v14 )
  {
    if ( v14 == 1 )
      v15 = -1073740528;
    else
      v15 = -1073740526;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 76) )
    {
      v16 = 0;
    }
    else
    {
      if ( a3 != 8 || *(_DWORD *)a2 != 8 )
      {
        v15 = -1073741820;
        goto LABEL_25;
      }
      v16 = *(_DWORD *)(a2 + 4);
      Pool2 = (_QWORD *)ExAllocatePool2(0x101uLL);
      if ( !Pool2 )
      {
        v15 = -1073741670;
        goto LABEL_25;
      }
    }
    v15 = VslInitializeEnclave(
            *(_QWORD *)(a1 + 24),
            a1 + 80,
            (struct _MDL *)a2,
            a3,
            (__int64)a4,
            a5,
            (_DWORD *)(a1 + 40));
    if ( v15 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 76) )
      {
        *(_DWORD *)(a1 + 72) = v16;
        *Pool2 = 0LL;
        if ( v16 > 1 )
        {
          v17 = Pool2 + 5;
          v18 = Pool2;
          v19 = v16 - 1;
          do
          {
            *v17 = v18;
            v18 += 5;
            v17 += 5;
            --v19;
          }
          while ( v19 );
        }
        *(_QWORD *)(a1 + 120) = Pool2;
        v20 = &Pool2[5 * v16 - 5];
        Pool2 = 0LL;
        *(_QWORD *)(a1 + 128) = v20;
      }
      v15 = 0;
      *(_QWORD *)(a1 + 64) = a1 + 56;
      *(_QWORD *)(a1 + 56) = a1 + 56;
      *(_DWORD *)(a1 + 44) = 1;
    }
  }
LABEL_25:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((unsigned __int64)v6);
  KeLeaveCriticalRegion();
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v15;
}
