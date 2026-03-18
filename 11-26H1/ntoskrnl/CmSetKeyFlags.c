/*
 * XREFs of CmSetKeyFlags @ 0x1408B09D8
 * Callers:
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B8B98 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404BD714 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmAddLogForAction @ 0x1408AD014 (CmAddLogForAction.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408AF680 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpCleanupRollbackPacket @ 0x1408B1080 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1408B10E4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1408BC430 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockIXLockIntent @ 0x1408BC8A0 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408BC950 (CmpLockIXLockExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     CmpRundownUnitOfWork @ 0x1408D0A08 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D0EE0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpAllocateUnitOfWork @ 0x140AB9B34 (CmpAllocateUnitOfWork.c)
 *     CmpRetryBackOff @ 0x140B3C68C (CmpRetryBackOff.c)
 *     CmpAbortRollbackPacket @ 0x140B4CB14 (CmpAbortRollbackPacket.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140C58CC0 (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  __int128 v3; // xmm0
  __int64 v4; // rdi
  __int64 v7; // r14
  int v8; // edx
  PPRIVILEGE_SET v9; // rcx
  __int64 v10; // rbx
  ULONG_PTR v11; // rsi
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r9
  ULONG_PTR v18; // rcx
  __int64 CellFlat; // rax
  __int64 v20; // r14
  int v21; // r15d
  int v22; // r15d
  int v23; // r15d
  __int16 v24; // cx
  __int16 v25; // ax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int16 v29; // ax
  _QWORD *UnitOfWork; // rax
  ULONG_PTR v31; // rbx
  __int64 v32; // rcx
  __int64 v34; // [rsp+40h] [rbp-51h] BYREF
  int v35; // [rsp+48h] [rbp-49h] BYREF
  __int64 v36; // [rsp+50h] [rbp-41h] BYREF
  __int128 v37; // [rsp+58h] [rbp-39h] BYREF
  __int128 v38; // [rsp+68h] [rbp-29h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+78h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-1h] BYREF

  v3 = 0LL;
  v4 = a1;
  v38 = 0LL;
  v34 = 0LL;
  v7 = 0LL;
  v36 = 0LL;
  WORD1(v38) = -1;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Privileges = 0LL;
  *(double *)&v3 = HvpGetCellContextInitialize(&v34);
  v35 = v8;
  v37 = v3;
  CmpAttachToRegistryProcess(&ApcState);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v12 = -1073741811;
  }
  else
  {
    while ( !(unsigned __int8)CmpIsShutdownRundownActive(v9) )
    {
      v10 = MEMORY[0xFFFFF78000000014];
      CmpLockRegistry();
      v11 = *(_QWORD *)(v4 + 8);
      CmpStartKcbStackForTopLayerKcb(&v38, v11);
      CmpLockKcbStackTopExclusiveRestShared(&v38);
      v12 = CmpPerformKeyBodyDeletionCheck(v4, 0LL);
      if ( v12 < 0 )
        goto LABEL_57;
      v13 = a1;
      if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
      {
        v12 = CmpTransSearchAddTransFromKeyBody(a1, &v36);
        if ( v12 < 0 )
          goto LABEL_57;
        if ( (*(_DWORD *)(*(_QWORD *)(v11 + 32) + 160LL) & 2) != 0 )
        {
          v12 = -1072103423;
          goto LABEL_57;
        }
        v7 = v36;
        v12 = CmpPerformKeyBodyDeletionCheck(a1, v36);
        if ( v12 < 0 )
          goto LABEL_57;
        v13 = a1;
      }
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v11, v13) == 1 )
      {
        v12 = -1073741790;
        goto LABEL_57;
      }
      if ( (unsigned int)(a2 - 2) <= 2 )
        v7 = v15;
      v36 = v7;
      if ( v7 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        v31 = (ULONG_PTR)UnitOfWork;
        if ( UnitOfWork )
        {
          CmpTransEnlistUowInKcb(UnitOfWork, v11);
          v12 = CmpTransEnlistUowInCmTrans((_QWORD *)v31, v7);
          if ( v12 >= 0 )
          {
            if ( (unsigned __int8)CmpLockIXLockIntent(v11 + 248, v31)
              && (unsigned __int8)CmpLockIXLockExclusive(v11 + 264, v31, 1LL) )
            {
              *(_DWORD *)(v31 + 68) = 7;
              *(_DWORD *)(v31 + 88) = a3;
              v12 = CmAddLogForAction(v31, 1u);
              if ( v12 >= 0 )
              {
                v12 = 0;
                goto LABEL_57;
              }
            }
            else
            {
              v12 = -1072103423;
            }
          }
          CmpRundownUnitOfWork(v31);
          ExFreePoolWithTag((PVOID)v31, 0x77554D43u);
          goto LABEL_57;
        }
        v12 = -1073741670;
LABEL_57:
        CmpUnlockKcbStack(&v38);
LABEL_32:
        CmpUnlockRegistry(v27);
        goto LABEL_33;
      }
      v16 = CmpTryAcquireKcbIXLocks(v11, 0LL, v14, &v37);
      v12 = v16;
      if ( v16 == -1073741267 )
      {
        CmpLogTransactionAbortedWithChildName(v11, 0LL, 3, v17, v37);
        CmpUnlockKcbStack(&v38);
        CmpUnlockRegistry(v32);
        v12 = CmpAbortRollbackPacket(&v37, 0LL);
        if ( v12 < 0 )
          goto LABEL_33;
        CmpRetryBackOff(&v35);
        CmpCleanupRollbackPacket(&v37);
        v37 = 0LL;
      }
      else
      {
        if ( v16 < 0 )
          goto LABEL_57;
        if ( *(_DWORD *)(v11 + 40) != -1 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v11 + 32));
          v12 = HvpMarkCellDirty(*(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 40));
          if ( v12 >= 0 )
          {
            v18 = *(_QWORD *)(v11 + 32);
            if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v18, *(_DWORD *)(v11 + 40), (unsigned int *)&v34);
            else
              CellFlat = HvpGetCellPaged(v18);
            v20 = CellFlat;
            CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v11 + 32));
            v21 = a2 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  if ( v23 == 1 )
                  {
                    *(_BYTE *)(v20 + 55) = a3;
                    *(_BYTE *)(v11 + 185) = a3;
                  }
                }
                else
                {
                  v24 = *(_WORD *)(v20 + 2);
                  if ( (a3 & 4) != 0 )
                  {
                    v29 = 128;
                    *(_WORD *)(v20 + 2) = v24 | 0x80;
                  }
                  else
                  {
                    if ( (a3 & 1) != 0 )
                    {
                      *(_WORD *)(v20 + 2) = v24 | 0x300;
                      v25 = *(_WORD *)(v11 + 186) | 0x300;
                    }
                    else
                    {
                      *(_WORD *)(v20 + 2) = v24 & 0xFEFF;
                      v25 = *(_WORD *)(v11 + 186) & 0xFEFF;
                    }
                    *(_WORD *)(v11 + 186) = v25;
                    if ( (a3 & 2) == 0 )
                      goto LABEL_23;
                    v29 = 512;
                    *(_WORD *)(v20 + 2) |= 0x200u;
                  }
                  *(_WORD *)(v11 + 186) |= v29;
                }
              }
              else
              {
                *(_DWORD *)(v20 + 52) ^= (*(_DWORD *)(v20 + 52) ^ (a3 << 20)) & 0xF00000;
                *(_DWORD *)(v11 + 184) ^= ((unsigned __int8)*(_DWORD *)(v11 + 184) ^ (unsigned __int8)*(_WORD *)(v20 + 54)) & 0xF0;
                if ( (a3 & 2) != 0 )
                {
                  *(_WORD *)(v20 + 2) &= ~0x80u;
                  *(_WORD *)(v11 + 186) = *(_WORD *)(v20 + 2);
                }
              }
            }
            else
            {
              *(_DWORD *)(v20 + 52) ^= (*(_DWORD *)(v20 + 52) ^ (a3 << 16)) & 0xF0000;
              *(_DWORD *)(v11 + 184) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(v11 + 184)) & 0xF;
            }
LABEL_23:
            *(_QWORD *)(v20 + 4) = v10;
            ++*(_QWORD *)(v11 + 304);
            *(_QWORD *)(v11 + 168) = v10;
            v12 = 0;
            if ( v20 )
            {
              v26 = *(_QWORD *)(v11 + 32);
              if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v26, &v34);
              else
                HvpReleaseCellPaged(v26, &v34);
            }
          }
          HvUnlockHiveFlusherShared(*(_QWORD *)(v11 + 32));
          goto LABEL_57;
        }
        CmpUnlockKcbStack(&v38);
        v12 = CmpPromoteKey(&v38, 0LL, 0LL);
        if ( v12 < 0 )
          goto LABEL_32;
        CmpUnlockRegistry(v27);
        v9 = Privileges[1];
        if ( Privileges[1] )
          CmSiFreeMemory(Privileges[1]);
        v38 = 0LL;
        WORD1(v38) = -1;
        *(_OWORD *)Privileges = 0LL;
      }
      v4 = a1;
    }
    v12 = -1073741431;
  }
LABEL_33:
  CmpDetachFromRegistryProcess(&ApcState);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket(&v37);
  return (unsigned int)v12;
}
