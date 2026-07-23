/*
 * XREFs of AlpcpCreateSection @ 0x14098C8B8
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x1408EB9BC (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x140AB7DB0 (NtAlpcCreatePortSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14098BA5C (MiCaptureSectionCreateExtendedParameters.c)
 *     AlpcAddHandleTableEntry @ 0x14098D2D0 (AlpcAddHandleTableEntry.c)
 *     AlpcpStartInitialization @ 0x14098D4B8 (AlpcpStartInitialization.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x140A733D4 (AlpcpInsertResourcePort.c)
 *     AlpcpEndInitialization @ 0x140A95838 (AlpcpEndInitialization.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpCreateSection(__int64 a1, char a2, char a3, void *a4, PVOID Object, ULONG_PTR *a6)
{
  PVOID v6; // r14
  char v9; // r12
  __int64 Pool2; // rax
  ULONG_PTR v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  int ExtendedParameters; // r14d
  int v18; // r14d
  _KPROCESS *Process; // r13
  char v20; // r12
  void *v21; // r15
  int SessionId; // eax
  volatile signed __int64 *v23; // rbx
  void *v24; // rdx
  LegacyAutoBoost *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v29[2]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v30; // [rsp+98h] [rbp+17h]
  int v31; // [rsp+A0h] [rbp+1Fh]
  char v32; // [rsp+A4h] [rbp+23h]

  v6 = Object;
  v9 = a3;
  if ( !Object || a4 && a2 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 256) & 0x1000000) != 0 )
    return 3221227270LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_WORD *)(Pool2 + 16) = 1024;
  v12 = Pool2 + 48;
  *(_DWORD *)(Pool2 + 18) = 0;
  *(_WORD *)(Pool2 + 22) = 0;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_BYTE *)(Pool2 + 16) &= ~2u;
  *(_QWORD *)(Pool2 + 24) = 1LL;
  if ( Pool2 == -48 )
    return 3221225626LL;
  memset_0((void *)(Pool2 + 48), 0, 0x48uLL);
  *(_QWORD *)(v12 + 32) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v12 + 8) = ~((unsigned int)AlpcpRegionGranularity - 1LL) & ((unsigned __int64)v6
                                                                        + (unsigned int)(AlpcpRegionGranularity - 1));
  *(_QWORD *)(v12 + 64) = v12 + 56;
  *(_QWORD *)(v12 + 56) = v12 + 56;
  if ( a4 )
  {
    Object = 0LL;
    ExtendedParameters = ObReferenceObjectByHandle(
                           a4,
                           6u,
                           MmSectionObjectType,
                           KeGetCurrentThread()->PreviousMode,
                           &Object,
                           0LL);
    *(_QWORD *)v12 = Object;
  }
  else
  {
    v14 = *(_QWORD *)(v12 + 8);
    *(_DWORD *)(v12 + 48) = (*(_DWORD *)(v12 + 48) | 1) ^ ((*(_BYTE *)(v12 + 48) | 1) ^ (unsigned __int8)(2 * a2)) & 2;
    v30 = 0LL;
    v31 = 0;
    v32 = 0;
    *(_OWORD *)v29 = 0LL;
    ExtendedParameters = MiCaptureSectionCreateExtendedParameters(0LL, 0LL, v13, 0, (__int64)v29);
    if ( ExtendedParameters >= 0 )
    {
      v18 = 0;
      Process = KeGetCurrentThread()->ApcState.Process;
      LOBYTE(Object) = KeGetCurrentThread()->PreviousMode;
      if ( (_BYTE)Object == 1 )
      {
        v20 = BYTE1(Process[3].ActiveGroupsMask.Masks[1]);
        v21 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u, v15, v16);
      }
      else
      {
        v21 = 0LL;
        v20 = (v29[1] & 0x800000000LL) != 0 ? LOBYTE(v29[1]) : 0;
        v18 = (v29[1] & 0x800000000LL) != 0 ? 0x10 : 0;
      }
      SessionId = PsGetSessionIdEx((__int64)Process);
      ExtendedParameters = MiCreateSection(
                             (_QWORD *)v12,
                             0,
                             v14,
                             4,
                             0x8000000,
                             v18,
                             (__int64)v21,
                             v20,
                             0LL,
                             0LL,
                             (char)Object,
                             SessionId,
                             (__int64)v29);
      if ( v21 )
        ObfDereferenceObject(v21);
      v9 = a3;
    }
  }
  if ( ExtendedParameters < 0 )
  {
LABEL_31:
    AlpcpDereferenceBlobEx(v12);
    return (unsigned int)ExtendedParameters;
  }
  v23 = (volatile signed __int64 *)(a1 + 352);
  v25 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, v16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 352), 0, v25, (struct _KTHREAD *)(a1 + 352));
  if ( v25 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v25, v24);
    else
      *((_BYTE *)v25 + 10) = 1;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    ExtendedParameters = -1073741769;
    goto LABEL_31;
  }
  AlpcpStartInitialization(v12);
  AlpcpReferenceBlob(v12);
  if ( v9 )
  {
    v26 = *(_QWORD *)(a1 + 16) + 40LL;
    Object = (PVOID)v12;
    *(_QWORD *)(v12 + 16) = v26;
    v27 = AlpcAddHandleTableEntry(v26, &Object);
    *(_QWORD *)(v12 + 24) = v27;
    if ( v27 == -1 )
    {
      if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      *(_QWORD *)(v12 + 16) = 0LL;
      AlpcpEndInitialization(v12);
      AlpcpDereferenceBlobEx(v12);
      return 3221225626LL;
    }
  }
  PsReferenceSiloContext((void *)a1);
  *(_QWORD *)(v12 + 40) = a1;
  AlpcpInsertResourcePort(a1, v12);
  if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpEndInitialization(v12);
  *a6 = v12;
  return 0LL;
}
