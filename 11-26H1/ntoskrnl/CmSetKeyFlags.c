/*
 * XREFs of CmSetKeyFlags @ 0x1408B6EC8
 * Callers:
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B23C8 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404B6EF4 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpCleanupRollbackPacket @ 0x1408B7570 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1408B75D4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1408C2A00 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockIXLockIntent @ 0x1408C2E70 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408C2F20 (CmpLockIXLockExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpRundownUnitOfWork @ 0x1408D6FC8 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x140ABAF54 (CmpAllocateUnitOfWork.c)
 *     CmpRetryBackOff @ 0x140B3E90C (CmpRetryBackOff.c)
 *     CmpAbortRollbackPacket @ 0x140B4E8A4 (CmpAbortRollbackPacket.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140C5ECC0 (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  __int128 v3; // xmm0
  __int64 v4; // rdi
  __int64 v7; // r14
  int v8; // edx
  PPRIVILEGE_SET v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  ULONG_PTR v15; // rsi
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // r9
  ULONG_PTR v22; // rcx
  __int64 CellFlat; // rax
  __int64 v24; // r14
  int v25; // r15d
  int v26; // r15d
  int v27; // r15d
  __int16 v28; // cx
  __int16 v29; // ax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int16 v33; // ax
  _QWORD *UnitOfWork; // rax
  ULONG_PTR v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // [rsp+28h] [rbp-69h]
  __int64 v38; // [rsp+30h] [rbp-61h]
  __int64 v39; // [rsp+38h] [rbp-59h]
  __int64 v40; // [rsp+40h] [rbp-51h] BYREF
  int v41; // [rsp+48h] [rbp-49h] BYREF
  __int64 v42; // [rsp+50h] [rbp-41h] BYREF
  __int128 v43; // [rsp+58h] [rbp-39h] BYREF
  __int128 v44; // [rsp+68h] [rbp-29h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+78h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-1h] BYREF

  v3 = 0LL;
  v39 = a1;
  v4 = a1;
  v44 = 0LL;
  v40 = 0LL;
  v7 = 0LL;
  v42 = 0LL;
  WORD1(v44) = -1;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Privileges = 0LL;
  *(double *)&v3 = HvpGetCellContextInitialize(&v40);
  v41 = v8;
  v43 = v3;
  CmpAttachToRegistryProcess(&ApcState);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v16 = -1073741811;
  }
  else
  {
    while ( !(unsigned __int8)CmpIsShutdownRundownActive(v9) )
    {
      v14 = MEMORY[0xFFFFF78000000014];
      CmpLockRegistry(v11, v10, v12, v13, v37, v38, v39);
      v15 = *(_QWORD *)(v4 + 8);
      CmpStartKcbStackForTopLayerKcb(&v44, v15);
      CmpLockKcbStackTopExclusiveRestShared(&v44);
      v16 = CmpPerformKeyBodyDeletionCheck(v4, 0LL);
      if ( v16 < 0 )
        goto LABEL_57;
      v17 = v39;
      if ( *(_QWORD *)(v39 + 56) || *(_QWORD *)(v39 + 64) )
      {
        v16 = CmpTransSearchAddTransFromKeyBody(v39, &v42);
        if ( v16 < 0 )
          goto LABEL_57;
        if ( (*(_DWORD *)(*(_QWORD *)(v15 + 32) + 160LL) & 2) != 0 )
        {
          v16 = -1072103423;
          goto LABEL_57;
        }
        v7 = v42;
        v16 = CmpPerformKeyBodyDeletionCheck(v39, v42);
        if ( v16 < 0 )
          goto LABEL_57;
        v17 = v39;
      }
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v15, v17) == 1 )
      {
        v16 = -1073741790;
        goto LABEL_57;
      }
      if ( (unsigned int)(a2 - 2) <= 2 )
        v7 = v19;
      v42 = v7;
      if ( v7 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        v35 = (ULONG_PTR)UnitOfWork;
        if ( UnitOfWork )
        {
          CmpTransEnlistUowInKcb(UnitOfWork, v15);
          v16 = CmpTransEnlistUowInCmTrans((_QWORD *)v35, v7);
          if ( v16 >= 0 )
          {
            if ( (unsigned __int8)CmpLockIXLockIntent(v15 + 248, v35)
              && (unsigned __int8)CmpLockIXLockExclusive(v15 + 264, v35, 1LL) )
            {
              *(_DWORD *)(v35 + 68) = 7;
              *(_DWORD *)(v35 + 88) = a3;
              v16 = CmAddLogForAction(v35, 1u);
              if ( v16 >= 0 )
              {
                v16 = 0;
                goto LABEL_57;
              }
            }
            else
            {
              v16 = -1072103423;
            }
          }
          CmpRundownUnitOfWork(v35);
          ExFreePoolWithTag((PVOID)v35, 0x77554D43u);
          goto LABEL_57;
        }
        v16 = -1073741670;
LABEL_57:
        CmpUnlockKcbStack(&v44);
LABEL_32:
        CmpUnlockRegistry(v31);
        goto LABEL_33;
      }
      v20 = CmpTryAcquireKcbIXLocks(v15, 0LL, v18, &v43);
      v16 = v20;
      if ( v20 == -1073741267 )
      {
        CmpLogTransactionAbortedWithChildName(v15, 0LL, 3, v21, v43);
        CmpUnlockKcbStack(&v44);
        CmpUnlockRegistry(v36);
        v16 = CmpAbortRollbackPacket(&v43, 0LL);
        if ( v16 < 0 )
          goto LABEL_33;
        CmpRetryBackOff(&v41);
        CmpCleanupRollbackPacket(&v43);
        v43 = 0LL;
      }
      else
      {
        if ( v20 < 0 )
          goto LABEL_57;
        if ( *(_DWORD *)(v15 + 40) != -1 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v15 + 32));
          v16 = HvpMarkCellDirty(*(_QWORD *)(v15 + 32), *(unsigned int *)(v15 + 40));
          if ( v16 >= 0 )
          {
            v22 = *(_QWORD *)(v15 + 32);
            if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v22, *(_DWORD *)(v15 + 40), (unsigned int *)&v40);
            else
              CellFlat = HvpGetCellPaged(v22);
            v24 = CellFlat;
            CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v15 + 32));
            v25 = a2 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 == 1 )
                  {
                    *(_BYTE *)(v24 + 55) = a3;
                    *(_BYTE *)(v15 + 185) = a3;
                  }
                }
                else
                {
                  v28 = *(_WORD *)(v24 + 2);
                  if ( (a3 & 4) != 0 )
                  {
                    v33 = 128;
                    *(_WORD *)(v24 + 2) = v28 | 0x80;
                  }
                  else
                  {
                    if ( (a3 & 1) != 0 )
                    {
                      *(_WORD *)(v24 + 2) = v28 | 0x300;
                      v29 = *(_WORD *)(v15 + 186) | 0x300;
                    }
                    else
                    {
                      *(_WORD *)(v24 + 2) = v28 & 0xFEFF;
                      v29 = *(_WORD *)(v15 + 186) & 0xFEFF;
                    }
                    *(_WORD *)(v15 + 186) = v29;
                    if ( (a3 & 2) == 0 )
                      goto LABEL_23;
                    v33 = 512;
                    *(_WORD *)(v24 + 2) |= 0x200u;
                  }
                  *(_WORD *)(v15 + 186) |= v33;
                }
              }
              else
              {
                *(_DWORD *)(v24 + 52) ^= (*(_DWORD *)(v24 + 52) ^ (a3 << 20)) & 0xF00000;
                *(_DWORD *)(v15 + 184) ^= ((unsigned __int8)*(_DWORD *)(v15 + 184) ^ (unsigned __int8)*(_WORD *)(v24 + 54)) & 0xF0;
                if ( (a3 & 2) != 0 )
                {
                  *(_WORD *)(v24 + 2) &= ~0x80u;
                  *(_WORD *)(v15 + 186) = *(_WORD *)(v24 + 2);
                }
              }
            }
            else
            {
              *(_DWORD *)(v24 + 52) ^= (*(_DWORD *)(v24 + 52) ^ (a3 << 16)) & 0xF0000;
              *(_DWORD *)(v15 + 184) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(v15 + 184)) & 0xF;
            }
LABEL_23:
            *(_QWORD *)(v24 + 4) = v14;
            ++*(_QWORD *)(v15 + 304);
            *(_QWORD *)(v15 + 168) = v14;
            v16 = 0;
            if ( v24 )
            {
              v30 = *(_QWORD *)(v15 + 32);
              if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v30, &v40);
              else
                HvpReleaseCellPaged(v30, &v40);
            }
          }
          HvUnlockHiveFlusherShared(*(_QWORD *)(v15 + 32));
          goto LABEL_57;
        }
        CmpUnlockKcbStack(&v44);
        v16 = CmpPromoteKey(&v44, 0LL, 0LL);
        if ( v16 < 0 )
          goto LABEL_32;
        CmpUnlockRegistry(v31);
        v9 = Privileges[1];
        if ( Privileges[1] )
          CmSiFreeMemory(Privileges[1]);
        v44 = 0LL;
        WORD1(v44) = -1;
        *(_OWORD *)Privileges = 0LL;
      }
      v4 = v39;
    }
    v16 = -1073741431;
  }
LABEL_33:
  CmpDetachFromRegistryProcess(&ApcState);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket(&v43);
  return (unsigned int)v16;
}
