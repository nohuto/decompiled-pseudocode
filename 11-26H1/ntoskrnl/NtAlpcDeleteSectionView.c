/*
 * XREFs of NtAlpcDeleteSectionView @ 0x140A74EE0
 * Callers:
 *     DifNtAlpcDeleteSectionViewWrapper @ 0x14066CB20 (DifNtAlpcDeleteSectionViewWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x1409C1A54 (AlpcpDeleteView.c)
 *     AlpcpEnumerateResourcesPort @ 0x140A75050 (AlpcpEnumerateResourcesPort.c)
 */

__int64 __fastcall NtAlpcDeleteSectionView(void *a1, int a2, ULONG_PTR a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  struct _KLOCK_ENTRIES *v6; // r9
  PVOID v7; // rsi
  signed __int64 *v8; // rbx
  void *v9; // rdx
  LegacyAutoBoost *v10; // rdi
  __int64 v11; // r8
  int v12; // edi
  ULONG_PTR v13; // rdi
  ULONG_PTR BugCheckParameter2[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v7 = Object;
      BugCheckParameter2[0] = a3;
      v8 = (signed __int64 *)((char *)Object + 352);
      do
      {
        v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, v6);
        if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v8, 0, v10, (struct _KTHREAD *)v8);
        if ( v10 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v10, v9);
          else
            *((_BYTE *)v10 + 10) = 1;
        }
        v12 = AlpcpEnumerateResourcesPort(v7, v9, v11, BugCheckParameter2);
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8);
        KeAbPostRelease((unsigned __int64)v8);
      }
      while ( v12 == -1073741267 );
      v13 = BugCheckParameter2[1];
      if ( BugCheckParameter2[1] )
      {
        v5 = AlpcpDeleteView(BugCheckParameter2[1]) == 0 ? 0xC0000056 : 0;
        AlpcpDereferenceBlobEx(v13, 1);
      }
      else
      {
        v5 = -1073741503;
      }
      ObfDereferenceObject(v7);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
