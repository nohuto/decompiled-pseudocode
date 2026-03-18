/*
 * XREFs of NtChangeProcessState @ 0x1407F1690
 * Callers:
 *     DifNtChangeProcessStateWrapper @ 0x14066E8F0 (DifNtChangeProcessStateWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PsThawMultiProcess @ 0x14051967C (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x14077B540 (PsFreezeProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtChangeProcessState(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  unsigned int v8; // edi
  int v9; // eax
  unsigned __int64 *v10; // rsi
  int v11; // eax
  struct _KLOCK_ENTRIES *v12; // r9
  PVOID v13; // r15
  struct _KTHREAD *CurrentThread; // r12
  AutoBoost *v15; // rax
  void *v16; // rdx
  struct _KLOCK_ENTRIES *v17; // r9
  AutoBoost *v18; // rdi
  __int64 v19; // rdx
  PVOID v21; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+48h] [rbp-20h] BYREF

  Object = 0LL;
  v21 = 0LL;
  if ( a3 >= 2 )
    return (unsigned int)-1073741821;
  if ( a5 )
    return (unsigned int)-1073741820;
  if ( a4 || a6 )
    return (unsigned int)-1073741811;
  v9 = ObpReferenceObjectByHandleWithTag(a1, 0x63507350u, (__int64)&v21, 0LL, 0LL);
  v10 = (unsigned __int64 *)v21;
  v8 = v9;
  if ( v9 >= 0 )
  {
    v11 = ObpReferenceObjectByHandleWithTag(a2, 0x63507350u, (__int64)&Object, 0LL, 0LL);
    v13 = Object;
    v8 = v11;
    if ( v11 < 0 )
      goto LABEL_32;
    if ( (PVOID)*v10 != Object )
    {
      v8 = -1073741811;
LABEL_32:
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x63507350u);
      goto LABEL_34;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (AutoBoost *)KeAbPreAcquire((__int64)(v10 + 1), 0LL, 0LL, v12);
    v18 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10 + 1, v15, (__int64)(v10 + 1));
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v16);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( !*((_DWORD *)v10 + 4) )
        {
          v8 = -1073741811;
LABEL_29:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v10 + 1);
          KeAbPostRelease((unsigned __int64)(v10 + 1));
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v19);
          goto LABEL_32;
        }
        PsThawMultiProcess((__int64)v13, 0, 1LL, v17);
        --*((_DWORD *)v10 + 4);
      }
    }
    else
    {
      if ( *((_DWORD *)v10 + 4) == -1 )
      {
        v8 = -1073741750;
        goto LABEL_29;
      }
      if ( !PsFreezeProcess((__int64)v13, 0) )
      {
        v8 = -1073741558;
        goto LABEL_29;
      }
      ++*((_DWORD *)v10 + 4);
    }
    v8 = 0;
    goto LABEL_29;
  }
LABEL_34:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x63507350u);
  return v8;
}
