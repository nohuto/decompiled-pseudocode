/*
 * XREFs of NtOpenThreadTokenEx @ 0x140A47C40
 * Callers:
 *     DifNtOpenThreadTokenExWrapper @ 0x14067F2A0 (DifNtOpenThreadTokenExWrapper.c)
 *     NtOpenThreadToken @ 0x140A47C20 (NtOpenThreadToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x140271DC0 (PspUnlockThreadSecurityShared.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SepCreateImpersonationTokenDacl @ 0x1409278D0 (SepCreateImpersonationTokenDacl.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     PsRestoreImpersonation @ 0x140A48260 (PsRestoreImpersonation.c)
 *     PsSwapImpersonationToken @ 0x140A48460 (PsSwapImpersonationToken.c)
 *     SepSetTokenTrust @ 0x140A48600 (SepSetTokenTrust.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  void *v5; // rbx
  char v6; // r12
  int v7; // edi
  char *v8; // rsi
  int v9; // r13d
  ULONG v10; // r13d
  NTSTATUS result; // eax
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  signed __int64 *v14; // r14
  struct _KTHREAD *CurrentThread; // r15
  void *v16; // rdx
  LegacyAutoBoost *v17; // rdi
  BOOLEAN v18; // al
  struct _KTHREAD *v19; // rdi
  char v20; // r15
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // r13
  __int64 v24; // rcx
  void *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  KPROCESSOR_MODE v28; // di
  NTSTATUS inserted; // r15d
  _QWORD *Token; // rax
  __int64 v31; // rsi
  ULONG_PTR v32; // rdi
  _WORD *v33; // rax
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-C8h]
  char v35; // [rsp+41h] [rbp-C7h]
  char v36; // [rsp+42h] [rbp-C6h]
  char v37; // [rsp+43h] [rbp-C5h]
  unsigned int v38; // [rsp+44h] [rbp-C4h]
  PVOID v39; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  struct _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v43; // [rsp+70h] [rbp-98h]
  __int64 v44; // [rsp+78h] [rbp-90h]
  char *v45; // [rsp+80h] [rbp-88h] BYREF
  __int128 v46; // [rsp+88h] [rbp-80h] BYREF
  __int128 v47; // [rsp+98h] [rbp-70h]
  _WORD *v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  _WORD v50[16]; // [rsp+B8h] [rbp-50h] BYREF
  char *v51; // [rsp+D8h] [rbp-30h]

  v5 = 0LL;
  v39 = 0LL;
  v6 = 0;
  v37 = 0;
  v7 = 0;
  v38 = 0;
  ImpersonationState = 0LL;
  v35 = 0;
  Handle = 0LL;
  memset(v50, 0, sizeof(v50));
  v51 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  LODWORD(v49) = 0;
  v8 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  v36 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 73714;
  if ( PreviousMode )
    v9 = 7666;
  v10 = HandleAttributes & v9;
  v43 = v10;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             ThreadHandle,
             0x800u,
             (POBJECT_TYPE)PsThreadType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v14 = (signed __int64 *)Object;
    if ( (*((_DWORD *)Object + 360) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v14 + 178), 0LL, 0LL, v13);
      if ( _InterlockedCompareExchange64(v14 + 178, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v14 + 178, 0, v17, (struct _KTHREAD *)(v14 + 178));
      if ( v17 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v17, v16);
        else
          *((_BYTE *)v17 + 10) = 1;
      }
      if ( (v14[180] & 8) != 0 )
      {
        v5 = (void *)(v14[167] & 0xFFFFFFFFFFFFFFF8uLL);
        v6 = BYTE1(*((_DWORD *)v14 + 360)) & 1;
        ObfReferenceObjectWithTag(v5, 0x74726853u);
        v7 = v14[167] & 3;
        v38 = v7;
        v37 = (v14[167] & 4) != 0;
      }
      else
      {
        v7 = 0;
      }
      PspUnlockThreadSecurityShared((__int64)v14, CurrentThread);
    }
    if ( v5 )
    {
      if ( v7 )
      {
        v18 = OpenAsSelf;
        if ( OpenAsSelf )
        {
          v19 = KeGetCurrentThread();
          v20 = 0;
          v35 = 0;
          if ( (*(_DWORD *)(&v19[1].SwapListEntry + 1) & 8) != 0 )
          {
            Object = KeGetCurrentThread();
            --*((_WORD *)Object + 242);
            v21 = (AutoBoost *)KeAbPreAcquire((__int64)&v19[1].WaitBlockList, 0LL, 0LL, v13);
            v23 = v21;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&v19[1].WaitBlockList, 0LL) )
              ExfAcquirePushLockExclusiveEx(
                (unsigned __int64 *)&v19[1].WaitBlockList,
                v21,
                (__int64)&v19[1].WaitBlockList);
            if ( v23 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v23, v22);
              else
                *((_BYTE *)v23 + 10) = 1;
            }
            if ( _interlockedbittestandreset((volatile signed __int32 *)&v19[1].SwapListEntry + 2, 3u) )
            {
              v35 = 1;
              ImpersonationState.Level = *((_DWORD *)&v19[1].0 + 1) & 3;
              v24 = *(__int64 *)((char *)&v19[1].116 + 4);
              ImpersonationState.EffectiveOnly = (v24 & 4) != 0;
              ImpersonationState.CopyOnOpen = BYTE1(*((_DWORD *)&v19[1].SwapListEntry + 2)) & 1;
              v25 = (void *)(v24 & 0xFFFFFFFFFFFFFFF8uLL);
              if ( v19[1].WaitBlock[1].Thread )
              {
                ImpersonationState.Token = v19[1].WaitBlock[1].Thread;
                v19[1].WaitBlock[1].Thread = 0LL;
                ObfDereferenceObject(v25);
              }
              else
              {
                ImpersonationState.Token = v25;
              }
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v19[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&v19[1].WaitBlockList);
            KeAbPostRelease((unsigned __int64)&v19[1].WaitBlockList);
            KeLeaveCriticalRegionThread((__int64)Object, v26, v27);
            v10 = v43;
            v20 = v35;
          }
          if ( !v20 )
          {
            ImpersonationState.Level = SecurityAnonymous;
            *(_WORD *)&ImpersonationState.CopyOnOpen = 0;
            ImpersonationState.Token = 0LL;
          }
          v18 = OpenAsSelf;
        }
        if ( v6 )
        {
          if ( v18 )
            Token = ImpersonationState.Token;
          else
            Token = (_QWORD *)v14[201];
          if ( Token )
          {
            v36 = 1;
            v44 = Token[138];
          }
          v31 = v14[68];
          v32 = PsReferencePrimaryTokenWithTag(v31, 0x746C6644u, v12, v13);
          inserted = SepCreateImpersonationTokenDacl((__int64)v5, v32, &v45);
          ObFastDereferenceObject((signed __int64 *)(v31 + 584), v32, 0x746C6644u);
          v8 = v45;
          if ( inserted >= 0 )
          {
            if ( v45 )
            {
              LOBYTE(v50[0]) = 1;
              if ( v50[1] >= 0 )
              {
                v51 = v45;
                v50[1] = v50[1] & 0xFFF3 | 4;
              }
            }
            LODWORD(v46) = 48;
            *((_QWORD *)&v46 + 1) = 0LL;
            DWORD2(v47) = v10;
            *(_QWORD *)&v47 = 0LL;
            v33 = v50;
            if ( !v45 )
              v33 = 0LL;
            v48 = v33;
            v49 = 0LL;
            inserted = SepDuplicateToken((__int64)v5, (__int64)&v46, v37, 2, v38, 0, 0, (char **)&v39);
            if ( inserted >= 0 )
            {
              if ( v36 )
                inserted = SepSetTokenTrust(v39, v44);
              if ( inserted >= 0 )
              {
                PsReferenceSiloContext(v39);
                inserted = ObInsertObjectEx((char *)v39, 0LL, DesiredAccess, 0, 0, 0LL, &Handle);
              }
            }
          }
          v28 = PreviousMode;
        }
        else
        {
          v28 = PreviousMode;
          inserted = ObOpenObjectByPointer(
                       v5,
                       v10,
                       0LL,
                       DesiredAccess,
                       (POBJECT_TYPE)SeTokenObjectType,
                       PreviousMode,
                       &Handle);
        }
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        if ( v35 )
          PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
        if ( inserted >= 0 && v6 )
          PsSwapImpersonationToken(v14, v5, v39);
        ObfDereferenceObjectWithTag(v5, 0x74726853u);
        if ( v39 )
          ObfDereferenceObject(v39);
        ObfDereferenceObject(v14);
        if ( inserted >= 0 )
        {
          if ( v28 )
            RtlWriteULong64ToUser(TokenHandle, (__int64)Handle);
          else
            *TokenHandle = Handle;
        }
        return inserted;
      }
      else
      {
        ObfDereferenceObjectWithTag(v5, 0x74726853u);
        ObfDereferenceObject(v14);
        return -1073741658;
      }
    }
    else
    {
      ObfDereferenceObject(v14);
      return -1073741700;
    }
  }
  return result;
}
