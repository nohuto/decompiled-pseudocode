/*
 * XREFs of AlpcpInitializeCompletionList @ 0x140A918A8
 * Callers:
 *     NtAlpcSetInformation @ 0x140A91EC0 (NtAlpcSetInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     AlpcGetHeaderSize @ 0x140427870 (AlpcGetHeaderSize.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1404A459C (AlpcpFreeCompletionPacketLookaside.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpRegisterCompletionListDatabase @ 0x140A91DA8 (AlpcpRegisterCompletionListDatabase.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A925D0 (AlpcpAllocateCompletionPacketLookaside.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140B25D8C (AlpcpUnregisterCompletionListDatabase.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpInitializeCompletionList(__int64 a1, char *a2, unsigned int a3, int a4, int Flags, int a6)
{
  char v6; // r15
  size_t v7; // r13
  char v8; // r14
  char *Pool2; // rax
  char *v12; // rdi
  PMDL Mdl; // rax
  int v14; // ebx
  __int64 v15; // rcx
  PVOID v16; // rax
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v21; // rcx
  ULONG HeaderSize; // eax
  ULONG v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  char *v26; // rcx
  unsigned __int64 v27; // r8
  AutoBoost *v28; // rax
  void *v29; // rdx
  AutoBoost *v30; // r15
  __int64 v31; // rdx
  __int64 CompletionPacketLookaside; // r15
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  ULONG v37; // eax
  char *v38; // rsi
  PMDL *v40; // rsi
  char *v41; // [rsp+38h] [rbp-50h]

  v6 = 0;
  v7 = a3;
  v8 = 0;
  if ( ((unsigned __int16)a2 & 0xFFF) != 0LL
    || (a3 & 0xFFF) != 0
    || a3 - 0x4000 > 0x3FFFC000
    || (Flags & 0x55FFFFFF) != 0
    || !a4 )
  {
    return (unsigned int)-1073741811;
  }
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v12 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset_0(Pool2, 0, 0xA0uLL);
  *((_QWORD *)v12 + 2) = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)v12 + 5) = a2;
  v41 = &a2[v7];
  *((_QWORD *)v12 + 6) = &a2[v7];
  if ( (unsigned int)AlpcpRegisterCompletionListDatabase(v12) )
  {
    v8 = 1;
    Mdl = IoAllocateMdl(a2, v7, 0, 0, 0LL);
    *((_QWORD *)v12 + 4) = Mdl;
    if ( Mdl )
    {
      v14 = MmProbeAndLockPagesEx((__int64)Mdl, KeGetCurrentThread()->PreviousMode & 1LL | 4);
      if ( v14 < 0 )
        goto LABEL_46;
      v15 = *((_QWORD *)v12 + 4);
      if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
        v16 = *(PVOID *)(v15 + 24);
      else
        v16 = MmMapLockedPagesSpecifyCache((PMDL)v15, 0, MmCached, 0LL, 0, 0x40000000u);
      *((_QWORD *)v12 + 8) = v16;
      if ( !v16 )
      {
        v14 = -1073741670;
        goto LABEL_64;
      }
      memset_0(v16, 0, v7);
      v17 = *((_QWORD *)v12 + 8);
      *(_QWORD *)v17 = 0xDEADBEEFBAADF00DuLL;
      *(_QWORD *)(v17 + 328) = 0xBAADF00DDEADBEEFuLL;
      *((_QWORD *)v12 + 9) = v7;
      *((_QWORD *)v12 + 10) = v17;
      *((_DWORD *)v12 + 37) = Flags;
      v18 = (8 * ((unsigned int)v7 >> 6) + 4095) & 0xFFFFF000;
      *((_QWORD *)v12 + 12) = v18;
      v19 = ((((unsigned int)v7 - ((8 * ((unsigned int)v7 >> 6) + 4095) & 0xFFFFF000) - 4096) >> 9) + 4095) & 0xFFFFF000;
      v20 = (struct _KLOCK_ENTRIES *)((_DWORD)v7
                                    - ((8 * ((unsigned int)v7 >> 6) + 4095) & 0xFFFFF000)
                                    - 4096
                                    - (((((unsigned int)v7 - ((8 * ((unsigned int)v7 >> 6) + 4095) & 0xFFFFF000) - 4096) >> 9)
                                      + 4095) & 0xFFFFF000));
      v21 = *((_QWORD *)v12 + 8) + 4096LL;
      *((_QWORD *)v12 + 11) = v21;
      *((_QWORD *)v12 + 14) = v19;
      *((_QWORD *)v12 + 16) = v20;
      *((_QWORD *)v12 + 13) = v18 + v21;
      *((_DWORD *)v12 + 34) = (((unsigned int)v7 - ((8 * ((unsigned int)v7 >> 6) + 4095) & 0xFFFFF000) - 4096) >> 6)
                            - ((((((unsigned int)v7 - ((8 * ((unsigned int)v7 >> 6) + 4095) & 0xFFFFF000) - 4096) >> 9)
                               + 4095) & 0xFFFFF000) >> 6);
      *((_QWORD *)v12 + 15) = v21 + v19 + v18;
      *((_DWORD *)v12 + 36) = a4;
      *((_QWORD *)v12 + 5) = a2;
      *((_QWORD *)v12 + 6) = v41;
      *((_QWORD *)v12 + 7) = &a2[v19 + 4096 + v18];
      if ( a6 )
      {
        v34 = ((Flags >> 31) & 0xC) + 24;
        if ( (Flags & 0x40000000) == 0 )
          v34 = ((Flags >> 31) & 0xC) + 8;
        v35 = v34 + 20;
        if ( (Flags & 0x20000000) == 0 )
          v35 = v34;
        v36 = v35 + 16;
        if ( (Flags & 0x10000000) == 0 )
          v36 = v35;
        v37 = v36 + 24;
        if ( (Flags & 0x8000000) == 0 )
          v37 = v36;
        v23 = v37 + 8;
        if ( (Flags & 0x2000000) == 0 )
          v23 = v37;
      }
      else
      {
        HeaderSize = AlpcGetHeaderSize(Flags);
        LODWORD(v19) = ((((unsigned int)v7 - ((8 * ((unsigned int)v7 >> 6) + 4095) & 0xFFFFF000) - 4096) >> 9) + 4095) & 0xFFFFF000;
        v23 = HeaderSize;
        v20 = (struct _KLOCK_ENTRIES *)((unsigned int)v7
                                      - ((8 * ((unsigned int)v7 >> 6) + 4095) & 0xFFFFF000)
                                      - 4096
                                      - (unsigned int)v19);
      }
      *((_DWORD *)v12 + 38) = v23;
      *(_DWORD *)(v17 + 20) = v18 + 4096;
      *(_DWORD *)(v17 + 24) = v19;
      *(_DWORD *)(v17 + 8) = v7;
      *(_DWORD *)(v17 + 28) = v19 + v18 + 4096;
      v24 = *(_QWORD *)(v17 + 64) | 0xFFFFFFLL;
      *(_DWORD *)(v17 + 12) = 4096;
      *(_DWORD *)(v17 + 16) = v18;
      *(_DWORD *)(v17 + 32) = (_DWORD)v20;
      *(_QWORD *)(v17 + 64) = v24;
      *(_QWORD *)(v17 + 64) |= 0xFFFFFF000000uLL;
      *(_QWORD *)(v17 + 64) &= 0xFFFFFFFFFFFFuLL;
      *(_DWORD *)(v17 + 36) = *((_DWORD *)v12 + 37);
      *(_DWORD *)(v17 + 40) = *((_DWORD *)v12 + 38);
      v25 = *((_QWORD *)v12 + 12);
      v26 = (char *)*((_QWORD *)v12 + 11);
      v27 = (unsigned __int64)(v25 + 3) >> 2;
      if ( v26 > &v26[v25] )
        v27 = 0LL;
      if ( v27 )
        memset_0(v26, -1, 4 * v27);
      v28 = (AutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, v20);
      v30 = v28;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v28, a1 + 352);
      if ( v30 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v30, v29);
        else
          *((_BYTE *)v30 + 10) = 1;
      }
      if ( *(_QWORD *)(a1 + 360) )
      {
        v14 = -1073740006;
      }
      else if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
      {
        v14 = -1073740032;
      }
      else
      {
        v31 = *(_QWORD *)(a1 + 32);
        if ( v31 )
        {
          CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(
                                        (unsigned int)v18 >> 3,
                                        v31,
                                        *(_QWORD *)(a1 + 40));
          if ( !CompletionPacketLookaside )
          {
            v14 = -1073741670;
            goto LABEL_43;
          }
          AlpcpFreeCompletionPacketLookaside(*(KSPIN_LOCK **)(a1 + 48));
          *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
        }
        v33 = *(_DWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 360) = v12;
        v12 = 0LL;
        *(_DWORD *)(a1 + 416) = v33 ^ ((unsigned __int16)v33 ^ (unsigned __int16)((_WORD)a6 << 11)) & 0x800 | 0x1C000;
        v14 = 0;
      }
LABEL_43:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      v6 = 1;
LABEL_46:
      v38 = v12;
      if ( !v12 )
        return (unsigned int)v14;
      if ( !v6 )
        goto LABEL_58;
LABEL_64:
      v40 = (PMDL *)(v12 + 32);
      MmUnlockPages(*((PMDL *)v12 + 4));
      goto LABEL_59;
    }
    v14 = -1073741670;
  }
  else
  {
    v14 = -1073741800;
  }
  v38 = v12;
LABEL_58:
  v40 = (PMDL *)(v38 + 32);
LABEL_59:
  if ( *v40 )
    IoFreeMdl(*v40);
  if ( v8 )
    AlpcpUnregisterCompletionListDatabase(v12);
  ExFreePoolWithTag(v12, 0);
  return (unsigned int)v14;
}
