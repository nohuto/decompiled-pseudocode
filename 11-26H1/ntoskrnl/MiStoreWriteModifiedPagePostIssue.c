/*
 * XREFs of MiStoreWriteModifiedPagePostIssue @ 0x140401104
 * Callers:
 *     MiStoreWriteIssue @ 0x140400FE8 (MiStoreWriteIssue.c)
 * Callees:
 *     MiStoreFreeWriteSupport @ 0x14020A1E8 (MiStoreFreeWriteSupport.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiUpdatePfnBackingStore @ 0x140401584 (MiUpdatePfnBackingStore.c)
 *     MiIsPfnOriginalPteLost @ 0x140401748 (MiIsPfnOriginalPteLost.c)
 *     MiStoreLogWriteIssueFailure @ 0x140532610 (MiStoreLogWriteIssueFailure.c)
 */

__int64 __fastcall MiStoreWriteModifiedPagePostIssue(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  unsigned __int64 v3; // r15
  int v4; // r14d
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int16 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // r10
  unsigned __int64 PageFilePte; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v22; // rcx
  _KPROCESS *Process; // r10
  unsigned __int64 v24; // r11
  __int64 v25; // rdx
  _KPROCESS *v26; // rax
  __int64 v27; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v29; // rax
  _KPROCESS *v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  struct _KEVENT *v34; // rdi
  unsigned __int64 v35; // rax
  int v36; // r9d
  int v37; // edx
  __int64 v38; // rcx
  _QWORD v39[7]; // [rsp+30h] [rbp-38h] BYREF
  int v40; // [rsp+70h] [rbp+8h] BYREF
  struct _KEVENT *v41; // [rsp+78h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 40);
  v41 = *(struct _KEVENT **)a1;
  v3 = *(unsigned int *)(v1 + 24);
  v4 = *(_DWORD *)v1;
  v5 = 48LL * *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v3 + 48) - 0x220000000000LL;
  v6 = *(unsigned int *)(v1 + 4);
  if ( *(int *)v1 < 0 )
  {
    if ( v4 == -1073741670 )
      *(_DWORD *)(a1 + 112) = 1;
    ++*(_DWORD *)(a1 + 96);
    v34 = v41;
    *(_BYTE *)((v3 >> 3) + *(_QWORD *)(*(_QWORD *)&v41[63].Header.Lock + 8LL)) |= 1 << (v3 & 7);
    v35 = MiTransferSoftwarePte(*(__int64 *)&CLFS_LSN_NULL_EXT, v2, v6, 1);
    MiReleasePageFileInfo(v34, v35, (unsigned int)(v36 + 2));
    MiStoreFreeWriteSupport(*(PSLIST_ENTRY *)(v1 + 48), (_SLIST_HEADER *)v34);
    v37 = v34[55].Header.LockNV + 1;
    v34[55].Header.LockNV = v37;
    if ( stru_140E366D8.FirstArgument )
    {
      if ( *(_DWORD *)stru_140E366D8.FirstArgument )
      {
        if ( (*((_BYTE *)stru_140E366D8.FirstArgument + 16) & 2) != 0 )
        {
          v38 = *((_QWORD *)stru_140E366D8.FirstArgument + 3);
          if ( (v38 & 2) == v38 )
            MiStoreLogWriteIssueFailure(v38, v4, v1 + 8, *(_DWORD *)(v1 + 4), v37);
        }
      }
    }
    return 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8);
    v40 = 0;
    v8 = *(_QWORD *)(v7 + 72);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v40);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    v9 = v8 + 96 + 8 * v3;
    v10 = *(_QWORD *)v9;
    if ( (*(_QWORD *)v9 & 8) != 0 )
    {
      *(_QWORD *)v9 &= ~8uLL;
    }
    else
    {
      v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( (v10 & 4) != 0 )
        v11 = *(_QWORD *)v9;
      v10 = v11;
    }
    v12 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v26 = MiPteHasShadow();
      if ( v26 )
      {
        KernelWaitTime = v26[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v29 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            v27 |= 0x20uLL;
          v12 = v27 | 0x42;
          if ( (v29 & 0x42) == 0 )
            v12 = v27;
        }
      }
    }
    v13 = v12 & 0xFFFFFFFFFFFFFFFBuLL;
    *(_QWORD *)v9 = v13;
    v14 = v13;
    v39[0] = v13;
    v15 = v13;
    if ( (unsigned __int64)v39 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v39 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v22 = v13;
      if ( (v13 & 1) != 0 && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          v24 = Process[2].KernelWaitTime;
          if ( v24 )
          {
            v25 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)v39 >> 3) & 0x1FF));
            if ( (v25 & 0x20) != 0 )
              v22 = v15 | 0x20;
            v15 = v22 | 0x42;
            if ( (v25 & 0x42) == 0 )
              v15 = v22;
          }
        }
      }
    }
    v39[0] = v15 & ((v15 & 0x400) != 0 ? -5LL : -65537LL);
    v16 = v39[0];
    if ( (v14 & 0x400) == 0 )
      v16 = v39[0] & 0xFFFFFFFFFFFFFFF3uLL;
    if ( v2 )
    {
      v17 = *(unsigned __int16 *)(v2 + 172);
      if ( v16 )
      {
        if ( qword_140E2D8C0 )
        {
          if ( (v16 & 0x10) != 0 )
            LODWORD(v16) = v16 & 0xFFFFFFEF;
          else
            LODWORD(v16) = qword_140E2D8C8 & v16;
        }
        PageFilePte = (unsigned int)v16 | (unsigned __int64)(v6 << 32);
        if ( qword_140E2D8C0 )
        {
          if ( (qword_140E2D8C0 & PageFilePte) != 0 )
            PageFilePte |= 0x10uLL;
          else
            PageFilePte |= qword_140E2D8C0;
        }
      }
      else
      {
        PageFilePte = MiMakePageFilePte(v6);
      }
      v16 = (v17 << 12) ^ (PageFilePte ^ (v17 << 12)) & 0xFFFFFFFFFFFF0FFFuLL | 8;
    }
    *(_QWORD *)v9 = v16;
    if ( !(unsigned int)MiIsPfnOriginalPteLost(v5) )
    {
      v19 = v5 + 16;
      v20 = *(_QWORD *)(v5 + 16);
      if ( (unsigned __int64)(v5 + 16) >= 0xFFFFF6FB7DBED000uLL
        && v19 <= 0xFFFFF6FB7DBED7F8uLL
        && (v20 & 1) != 0
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        v30 = MiPteHasShadow();
        if ( v30 )
        {
          v32 = v30[2].KernelWaitTime;
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 8 * ((v19 >> 3) & 0x1FF));
            if ( (v33 & 0x20) != 0 )
              v31 |= 0x20uLL;
            v20 = v31 | 0x42;
            if ( (v33 & 0x42) == 0 )
              v20 = v31;
          }
        }
      }
      *(_QWORD *)v19 = v20 & 0xFFFFFFFFFFFFFFFBuLL;
      MiUpdatePfnBackingStore(v5, v2, (unsigned int)v6);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v10 )
      MiReleasePageFileInfo(v41, v10, 3LL);
    return 1LL;
  }
}
