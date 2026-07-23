/*
 * XREFs of NtAlpcDeleteSectionView @ 0x140A7DC00
 * Callers:
 *     DifNtAlpcDeleteSectionViewWrapper @ 0x140670700 (DifNtAlpcDeleteSectionViewWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x140992A34 (AlpcpDeleteView.c)
 *     AlpcpEnumerateResourcesPort @ 0x140A7DD70 (AlpcpEnumerateResourcesPort.c)
 */

NTSTATUS __cdecl NtAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  struct _KTHREAD *CurrentThread; // rax
  signed int v5; // ebx
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
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v7 = Object;
      BugCheckParameter2[0] = (ULONG_PTR)ViewBase;
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
  return v5;
}
