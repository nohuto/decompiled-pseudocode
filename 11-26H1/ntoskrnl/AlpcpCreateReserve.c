/*
 * XREFs of AlpcpCreateReserve @ 0x14098D004
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x140AC5570 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408EE5D0 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpCaptureMessageData @ 0x14098CCB0 (AlpcpCaptureMessageData.c)
 *     AlpcAddHandleTableEntry @ 0x14098D2D0 (AlpcAddHandleTableEntry.c)
 *     AlpcpStartInitialization @ 0x14098D4B8 (AlpcpStartInitialization.c)
 *     AlpcpChargePagedPoolQuota @ 0x14098D9AC (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAllocateMessage @ 0x14098DB40 (AlpcpAllocateMessage.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpInsertResourcePort @ 0x140A733D4 (AlpcpInsertResourcePort.c)
 *     AlpcpEndInitialization @ 0x140A95838 (AlpcpEndInitialization.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpCreateReserve(__int64 a1, size_t a2, _QWORD *a3)
{
  __int64 Pool2; // rax
  ULONG_PTR v7; // rdi
  _KPROCESS *Process; // r14
  int v9; // ebx
  ULONG_PTR v10; // rbx
  int v11; // eax
  int v12; // esi
  struct _KLOCK_ENTRIES *v13; // r9
  volatile signed __int64 *v14; // rbx
  void *v15; // rdx
  LegacyAutoBoost *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    *(_WORD *)(Pool2 + 16) = 1792;
    v7 = Pool2 + 48;
    *(_DWORD *)(Pool2 + 18) = 0;
    *(_WORD *)(Pool2 + 22) = 0;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    *(_BYTE *)(Pool2 + 16) &= ~2u;
    *(_QWORD *)(Pool2 + 24) = 1LL;
    if ( Pool2 != -48 )
    {
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)(Pool2 + 64) = 0LL;
      *(_OWORD *)(Pool2 + 80) = 0LL;
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = AlpcpChargePagedPoolQuota(Process, 792LL);
      if ( v9 >= 0 )
      {
        v9 = AlpcpAllocateMessage(&BugCheckParameter2, a2, 1LL);
        if ( v9 >= 0 )
        {
          ObfReferenceObjectWithTag(Process, 0x63706C41u);
          v10 = BugCheckParameter2;
          *(_QWORD *)(BugCheckParameter2 + 48) = Process;
          *(_QWORD *)(v7 + 24) = v10;
          *(_QWORD *)(v7 + 32) = a2;
          *(_QWORD *)(v10 + 96) = v7;
          v11 = AlpcpCaptureMessageData(*(_QWORD *)(v7 + 24), a2, 0LL, 0);
          *(_DWORD *)(v7 + 40) = 1;
          v12 = v11;
          AlpcpReferenceBlob(v7);
          AlpcpUnlockMessage(v10);
          if ( v12 < 0 )
          {
LABEL_18:
            AlpcpDereferenceBlobEx(v7);
            return (unsigned int)v12;
          }
          v14 = (volatile signed __int64 *)(a1 + 352);
          v16 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, v13);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 352), 0, v16, (struct _KTHREAD *)(a1 + 352));
          if ( v16 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v16, v15);
            else
              *((_BYTE *)v16 + 10) = 1;
          }
          if ( (*(_DWORD *)(a1 + 416) & 0x20) != 0 )
          {
            if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
            KeAbPostRelease(a1 + 352);
            v12 = -1073741769;
            goto LABEL_18;
          }
          AlpcpReferenceBlob(v7);
          AlpcpStartInitialization(v7);
          v17 = *(_QWORD *)(a1 + 16) + 40LL;
          BugCheckParameter2 = v7;
          *(_QWORD *)(v7 + 8) = v17;
          v18 = AlpcAddHandleTableEntry(*(_QWORD *)(a1 + 16) + 40LL, &BugCheckParameter2);
          *(_QWORD *)(v7 + 16) = v18;
          if ( v18 != -1 )
          {
            *(_QWORD *)v7 = a1;
            PsReferenceSiloContext((void *)a1);
            AlpcpInsertResourcePort(a1, v7);
            if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
            KeAbPostRelease(a1 + 352);
            *a3 = *(_QWORD *)(v7 + 16);
            AlpcpEndInitialization(v7);
            v12 = 0;
            goto LABEL_18;
          }
          if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
          KeAbPostRelease(a1 + 352);
          *(_QWORD *)(v7 + 8) = 0LL;
          AlpcpEndInitialization(v7);
          AlpcpDereferenceBlobEx(v7);
          return 3221225626LL;
        }
        AlpcpReleasePagedPoolQuota((ULONG_PTR)Process, 0x318uLL);
      }
      AlpcpDereferenceBlobEx(v7);
      return (unsigned int)v9;
    }
  }
  return 3221225626LL;
}
