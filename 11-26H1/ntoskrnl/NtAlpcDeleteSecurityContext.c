/*
 * XREFs of NtAlpcDeleteSecurityContext @ 0x140991F30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140992A94 (AlpcpDeleteBlob.c)
 */

NTSTATUS __cdecl NtAlpcDeleteSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r15d
  int v5; // esi
  struct _KLOCK_ENTRIES *v6; // r9
  PVOID v7; // rbp
  _QWORD *v8; // r14
  volatile signed __int64 *v9; // rbx
  void *v10; // rdx
  LegacyAutoBoost *v11; // rdi
  unsigned __int64 v12; // rdi
  ULONG_PTR v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  signed __int32 v18[22]; // [rsp+0h] [rbp-58h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (int)ContextHandle;
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v5 = -1073741811;
    goto LABEL_23;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v7 = Object;
    v8 = (_QWORD *)(*((_QWORD *)Object + 2) + 40LL);
    if ( *((_QWORD *)Object + 2) != -40LL )
    {
      v9 = (volatile signed __int64 *)(*((_QWORD *)Object + 2) + 48LL);
      v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, v6);
      if ( _InterlockedCompareExchange64(v8 + 1, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v8 + 1, 0, v11, (struct _KTHREAD *)(v8 + 1));
      if ( v11 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v11, v10);
        else
          *((_BYTE *)v11 + 10) = 1;
      }
      v12 = (unsigned int)(v4 - 16);
      if ( v12 < v8[2] )
      {
        _mm_lfence();
        v13 = *(_QWORD *)(*v8 + 8 * v12);
        if ( v13 )
        {
          if ( *(_BYTE *)(v13 - 31) == 3 && AlpcpReferenceBlob(v13) )
          {
            if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v8 + 1);
            KeAbPostRelease((unsigned __int64)(v8 + 1));
            if ( (*(_BYTE *)(v13 - 32) & 4) != 0 )
            {
              _InterlockedOr(v18, 0);
              if ( (*(_QWORD *)(v13 - 16) & 1) != 0 )
                ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)(v13 - 16), v14, v15, v16);
            }
            if ( v7 == *(PVOID *)(v13 + 24) )
            {
              if ( (unsigned __int8)AlpcpDeleteBlob(v13) )
                AlpcpDereferenceBlobEx(v13, 1);
              else
                v5 = -1073741738;
            }
            else
            {
              v5 = -1073741790;
            }
            AlpcpDereferenceBlobEx(v13, 1);
            goto LABEL_22;
          }
        }
      }
      if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 + 1);
      KeAbPostRelease((unsigned __int64)(v8 + 1));
    }
    v5 = -1073741816;
LABEL_22:
    ObfDereferenceObject(v7);
  }
LABEL_23:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
