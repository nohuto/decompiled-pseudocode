/*
 * XREFs of AlpcpCleanupProcessViews @ 0x1409FD618
 * Callers:
 *     LpcExitProcess @ 0x1409FD5D4 (LpcExitProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     AlpcpForceUnlinkSecureView @ 0x1407C43BC (AlpcpForceUnlinkSecureView.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpCleanupProcessViews(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rsi
  unsigned int v4; // r14d
  __int64 v5; // rbp
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  ULONG_PTR v12; // rdi
  __int64 v13; // r13
  unsigned int v14; // eax
  const void *v15; // rax
  ULONG_PTR v16; // r15
  struct _KLOCK_ENTRIES *v17; // r9
  AutoBoost *v18; // rax
  void *v19; // rdx
  AutoBoost *v20; // rdi
  const void *v21; // [rsp+60h] [rbp+8h]
  _QWORD *i; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 1408);
  v21 = 0LL;
  --CurrentThread->KernelApcDisable;
  v4 = 0;
  v5 = 0LL;
  v6 = (AutoBoost *)KeAbPreAcquire(a1 + 1408, 0LL, 0LL, 0LL);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v6, (__int64)v2);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = (_QWORD *)(a1 + 1416);
  for ( i = (_QWORD *)(a1 + 1416); ; v9 = i )
  {
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
      break;
    v11 = 0LL;
    v12 = (ULONG_PTR)(v10 - 10);
    if ( v21 == (const void *)v12 )
      v11 = v5;
    v5 = v11;
    v13 = v11;
    v14 = v4 + 1;
    v4 = 0;
    if ( v21 == (const void *)v12 )
      v4 = v14;
    v15 = (const void *)v12;
    if ( v21 == (const void *)v12 )
      v15 = v21;
    v21 = v15;
    v16 = v12 & -(__int64)(AlpcpReferenceBlob(v12) != 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((unsigned __int64)v2);
    if ( v5 )
    {
      if ( v4 > 0x64 )
      {
        v17 = (struct _KLOCK_ENTRIES *)0xFFFFF78000000008LL;
        if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v13 - MEMORY[0xFFFFF780000003B0]) > 0x23C34600 )
        {
          DbgPrintEx(0x69u, 0, "ALPC: View @ %p is stuck.\n", v21);
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
          v4 = 0;
          v5 = 0LL;
        }
      }
    }
    else
    {
      v17 = (struct _KLOCK_ENTRIES *)0xFFFFF78000000008LL;
      v5 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    }
    if ( v16 )
    {
      AlpcpForceUnlinkSecureView(v16);
      AlpcpDereferenceBlobEx(v16, 1);
    }
    v18 = (AutoBoost *)KeAbPreAcquire((__int64)v2, 0LL, 0LL, v17);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, v18, (__int64)v2);
    if ( v20 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v20, v19);
      else
        *((_BYTE *)v20 + 10) = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((unsigned __int64)v2);
  KeLeaveCriticalRegion();
}
