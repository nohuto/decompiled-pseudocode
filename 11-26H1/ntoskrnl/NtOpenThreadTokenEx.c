/*
 * XREFs of NtOpenThreadTokenEx @ 0x140A50F30
 * Callers:
 *     DifNtOpenThreadTokenExWrapper @ 0x140682E80 (DifNtOpenThreadTokenExWrapper.c)
 *     NtOpenThreadToken @ 0x140A50F10 (NtOpenThreadToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     SepCreateImpersonationTokenDacl @ 0x1409033E0 (SepCreateImpersonationTokenDacl.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsRestoreImpersonation @ 0x140A51550 (PsRestoreImpersonation.c)
 *     PsSwapImpersonationToken @ 0x140A51750 (PsSwapImpersonationToken.c)
 *     SepSetTokenTrust @ 0x140A518F0 (SepSetTokenTrust.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  ACL *v8; // rsi
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
  KPROCESSOR_MODE v26; // di
  NTSTATUS inserted; // r15d
  _QWORD *Token; // rax
  __int64 v29; // rsi
  ULONG_PTR v30; // rdi
  _WORD *v31; // rax
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-C8h]
  char v33; // [rsp+41h] [rbp-C7h]
  char v34; // [rsp+42h] [rbp-C6h]
  char v35; // [rsp+43h] [rbp-C5h]
  unsigned int v36; // [rsp+44h] [rbp-C4h]
  PVOID v37; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v41; // [rsp+70h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-90h]
  ACL *v43; // [rsp+80h] [rbp-88h] BYREF
  __int128 v44; // [rsp+88h] [rbp-80h] BYREF
  __int128 v45; // [rsp+98h] [rbp-70h]
  _WORD *v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  _WORD v48[16]; // [rsp+B8h] [rbp-50h] BYREF
  ACL *v49; // [rsp+D8h] [rbp-30h]

  v5 = 0LL;
  v37 = 0LL;
  v6 = 0;
  v35 = 0;
  v7 = 0;
  v36 = 0;
  ImpersonationState = 0LL;
  v33 = 0;
  Handle = 0LL;
  memset(v48, 0, sizeof(v48));
  v49 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  LODWORD(v47) = 0;
  v8 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v34 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 73714;
  if ( PreviousMode )
    v9 = 7666;
  v10 = HandleAttributes & v9;
  v41 = v10;
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
        v36 = v7;
        v35 = (v14[167] & 4) != 0;
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
          v33 = 0;
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
              v33 = 1;
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
            KeLeaveCriticalRegionThread((__int64)Object);
            v10 = v41;
            v20 = v33;
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
            v34 = 1;
            v42 = Token[138];
          }
          v29 = v14[68];
          v30 = PsReferencePrimaryTokenWithTag(v29, 0x746C6644u, v12, v13);
          inserted = SepCreateImpersonationTokenDacl((__int64)v5, v30, &v43);
          ObFastDereferenceObject((signed __int64 *)(v29 + 584), v30, 0x746C6644u);
          v8 = v43;
          if ( inserted >= 0 )
          {
            if ( v43 )
            {
              LOBYTE(v48[0]) = 1;
              if ( v48[1] >= 0 )
              {
                v49 = v43;
                v48[1] = v48[1] & 0xFFF3 | 4;
              }
            }
            LODWORD(v44) = 48;
            *((_QWORD *)&v44 + 1) = 0LL;
            DWORD2(v45) = v10;
            *(_QWORD *)&v45 = 0LL;
            v31 = v48;
            if ( !v43 )
              v31 = 0LL;
            v46 = v31;
            v47 = 0LL;
            inserted = SepDuplicateToken((__int64)v5, (int)&v44, v35, 2, v36, 0, 0, (char **)&v37);
            if ( inserted >= 0 )
            {
              if ( v34 )
                inserted = SepSetTokenTrust(v37, v42);
              if ( inserted >= 0 )
              {
                PsReferenceSiloContext(v37);
                inserted = ObInsertObjectEx((char *)v37, 0LL, DesiredAccess, 0, 0, 0LL, &Handle);
              }
            }
          }
          v26 = PreviousMode;
        }
        else
        {
          v26 = PreviousMode;
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
        if ( v33 )
          PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
        if ( inserted >= 0 && v6 )
          PsSwapImpersonationToken(v14, v5, v37);
        ObfDereferenceObjectWithTag(v5, 0x74726853u);
        if ( v37 )
          ObfDereferenceObject(v37);
        ObfDereferenceObject(v14);
        if ( inserted >= 0 )
        {
          if ( v26 )
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
