/*
 * XREFs of MiLockDriverPageRange @ 0x1406EA498
 * Callers:
 *     MiLockPatchIatForDV @ 0x1406FFC20 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x140701C34 (MmWriteSystemImageTracepoint.c)
 *     MiLockAndMapEntireDriver @ 0x140873B54 (MiLockAndMapEntireDriver.c)
 *     MiLockHotPatchPages @ 0x140877998 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x140877A3C (MiLockHotPatchUndoPages.c)
 *     MmReapplyBootPatchImports @ 0x140D01DB4 (MmReapplyBootPatchImports.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReferenceDriverPage @ 0x140295384 (MiReferenceDriverPage.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiLockDriverPageRange(__int64 a1, unsigned int a2, unsigned int a3, char a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 v7; // r8
  _QWORD *v8; // r10
  unsigned int v9; // ebx
  __int64 Reserved; // rdx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdi
  PVOID *v13; // rbp
  int i; // eax
  __int64 v15; // r14
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rbp
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // cl
  unsigned __int64 v29; // rdx
  struct _KEVENT *v30; // rax
  __int64 v31; // rdx
  PVOID *v33; // [rsp+30h] [rbp-F8h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-F0h]
  int v35; // [rsp+40h] [rbp-E8h] BYREF
  struct _KEVENT *v36; // [rsp+48h] [rbp-E0h]
  __int64 v37; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v38; // [rsp+58h] [rbp-D0h]
  __int16 v39; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-C0h]
  __int64 v41; // [rsp+70h] [rbp-B8h]
  __int64 v42; // [rsp+78h] [rbp-B0h]
  __int64 v43; // [rsp+80h] [rbp-A8h]
  char v44; // [rsp+130h] [rbp+8h]
  unsigned int v45; // [rsp+138h] [rbp+10h]

  v45 = a2;
  v5 = a2;
  memset_0(&v39, 0, 0x78uLL);
  v8 = *(_QWORD **)a1;
  v9 = 0;
  Reserved = 0x7FFFFFFFF8LL;
  v36 = 0LL;
  BugCheckParameter1 = v8[6] + ((unsigned __int64)v5 << 12);
  v11 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v11;
  if ( (*(_DWORD *)(a1 + 96) & 2) != 0 )
    v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = 0LL;
  v33 = 0LL;
  v37 = (a5 + 48) & -(__int64)(a5 != 0);
  for ( i = 0; !i; i = 1 )
  {
    Reserved = (__int64)stru_140E2D2D0.SchedulerApc.Reserved;
    if ( stru_140E2D2D0.SchedulerApc.Reserved[0] == v8 )
    {
      v13 = &stru_140E2D2D0.SchedulerApc.Reserved[1];
      v33 = &stru_140E2D2D0.SchedulerApc.Reserved[1];
      break;
    }
  }
  v15 = *(_QWORD *)(a1 + 16);
LABEL_9:
  v16 = 0LL;
  v44 = MiLockWorkingSetShared(v15, Reserved, v7);
  while ( 1 )
  {
    v38 = v12;
    if ( v5 > a3 )
      break;
    if ( v16 )
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_16;
      MiUnlockPageTableInternal(v15, v16);
    }
    v16 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v15, v16, 0);
LABEL_16:
    if ( v13
      && v5 < (unsigned __int64)*v13
      && _bittest64((const signed __int64 *)v13[1] + ((unsigned __int64)v5 >> 6), v5 & 0x3F) )
    {
LABEL_27:
      if ( (a4 & 2) == 0
        && (!*(_QWORD *)(a1 + 88)
         || (unsigned __int64)v5 >= *(_QWORD *)(a1 + 80)
         || !_bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)v5 >> 6)), v5 & 0x3F)) )
      {
        v9 = -1073741701;
        goto LABEL_66;
      }
LABEL_60:
      BugCheckParameter1 += 4096LL;
      ++v5;
      v11 += 8LL;
      v45 = v5;
      v12 = v38 + 8;
      if ( (v11 & 0xFFF) != 0 && (*(_BYTE *)(a1 + 96) & 2) != 0 )
        v12 = v38;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 56)
        && (unsigned __int64)v5 < *(_QWORD *)(a1 + 48)
        && _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 56) + 8 * ((unsigned __int64)v5 >> 6)), v5 & 0x3F) )
      {
        goto LABEL_60;
      }
      v17 = *(_QWORD *)v12;
      if ( (*(_QWORD *)v12 & 1) == 0 )
      {
        if ( v17 != MiMakeDemandZeroPte(16) )
        {
          MiUnlockPageTableInternal(v15, v16);
          LOBYTE(v18) = v44;
          MiUnlockWorkingSetShared(v15, v18);
          v39 = 6;
          v40 = 0LL;
          v41 = 0LL;
          v42 = 0LL;
          v43 = 0LL;
          if ( (int)MmAccessFault(0LL, BugCheckParameter1, 0, (ULONG_PTR)&v39 + 1) >= 0 )
          {
            v5 = v45;
            goto LABEL_9;
          }
          MiLockWorkingSetShared(v15, Reserved, v7);
          MiLockPageTableInternal(v15, v16, 0);
        }
        v5 = v45;
        goto LABEL_27;
      }
      v19 = (v17 >> 12) & 0xFFFFFFFFFFLL;
      if ( (*(_DWORD *)(a1 + 96) & 2) != 0 )
        v19 += (v11 >> 3) & 0x1FF;
      v20 = 48 * v19 - 0x220000000000LL;
      if ( *(__int64 *)(v20 + 40) >= 0 )
      {
        if ( _bittest64(*(const signed __int64 **)(a1 + 40), v45) )
        {
          v5 = v45;
        }
        else
        {
          v35 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v35);
            while ( *(__int64 *)(v20 + 24) < 0 );
          }
          MiReferenceDriverPage(48 * v19 - 0x220000000000LL);
          v28 = a4;
          if ( (a4 & 1) != 0 && ((*(_QWORD *)(v20 + 40) >> 60) & 7) != 3 )
          {
            KeSetPagePrivilege(v19, BugCheckParameter1, 0LL, 0x80u);
            *(_DWORD *)(a1 + 96) |= 1u;
            v28 = a4;
          }
          if ( v37 )
            *(_QWORD *)(v37 + 8LL * v45) = v19;
          if ( (v28 & 4) != 0 )
          {
            v29 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          }
          else
          {
            v29 = MiCaptureDirtyBitToPfn(48 * v19 - 0x220000000000LL);
            if ( v29 )
            {
              v30 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
              v36 = v30;
              goto LABEL_55;
            }
          }
          v30 = v36;
LABEL_55:
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v29 )
            MiReleasePageFileInfo(v30, v29, 1LL);
          v5 = v45;
          *(_BYTE *)(((unsigned __int64)v45 >> 3) + *(_QWORD *)(a1 + 40)) |= 1 << (v45 & 7);
        }
        v13 = v33;
        goto LABEL_60;
      }
      if ( *(__int64 *)(v20 + 8) <= 0 || (*(_QWORD *)(v20 + 40) & 0x10000000000LL) != 0 )
      {
        MiUnlockPageTableInternal(v15, v16);
        LOBYTE(v25) = v44;
        MiUnlockWorkingSetShared(v15, v25);
        v5 = v45;
        MiMakeDriverPagesPrivate(*(_QWORD *)a1, v12, v12 + 8LL * (a3 - v45), 8u);
        MiLockWorkingSetShared(v15, v26, v27);
        MiLockPageTableInternal(v15, v16, 0);
        v13 = v33;
      }
      else
      {
        v13 = v33;
        v21 = MiCopyOnWrite(BugCheckParameter1, v12, -1LL, 0, 0LL);
        if ( v21 < 0 )
        {
          MiUnlockPageTableInternal(v15, v16);
          LOBYTE(v22) = v44;
          MiUnlockWorkingSetShared(v15, v22);
          MiCopyOnWriteCheckConditions(v15, v21, 0LL);
          MiLockWorkingSetShared(v15, v23, v24);
          MiLockPageTableInternal(v15, v16, 0);
        }
        v5 = v45;
      }
    }
  }
  if ( a5 )
    *(_WORD *)(a5 + 10) |= 2u;
LABEL_66:
  MiUnlockPageTableInternal(v15, v16);
  LOBYTE(v31) = v44;
  MiUnlockWorkingSetShared(v15, v31);
  return v9;
}
