/*
 * XREFs of MiPerformFaultClusterMaintenance @ 0x1402CD110
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiClearFaultClusterContext @ 0x140467884 (MiClearFaultClusterContext.c)
 *     MmExitThread @ 0x14094C484 (MmExitThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiResolvePageTablePage @ 0x1402CEAB0 (MiResolvePageTablePage.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInitializePageFaultPacket @ 0x14033B3D0 (MiInitializePageFaultPacket.c)
 *     MiLockAndConfirmFaultClusterDescriptor @ 0x1403A14FC (MiLockAndConfirmFaultClusterDescriptor.c)
 *     MiSetFaultClusterContextBlockEntryState @ 0x140467AA4 (MiSetFaultClusterContextBlockEntryState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

_OWORD *__fastcall MiPerformFaultClusterMaintenance(_OWORD *a1, __int64 a2, _QWORD *a3)
{
  _OWORD *result; // rax
  _QWORD *v4; // rdi
  _OWORD *v6; // rsi
  int v7; // r12d
  unsigned __int64 v8; // rbx
  int v9; // r15d
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rbx
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 *j; // r9
  unsigned __int64 v21; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rcx
  _KPROCESS *Process; // rcx
  _QWORD *i; // rbx
  int v28[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v32; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v33; // [rsp+68h] [rbp-98h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  _OWORD v41[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v42; // [rsp+110h] [rbp+10h]
  __int128 v43; // [rsp+120h] [rbp+20h]
  __int128 v44; // [rsp+130h] [rbp+30h]
  __int128 v45; // [rsp+140h] [rbp+40h]
  __int128 v46; // [rsp+150h] [rbp+50h]
  __int128 v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+70h]

  result = 0LL;
  v48 = 0LL;
  v4 = a3;
  v6 = a1;
  v7 = 0;
  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( a1 )
  {
    if ( *(_BYTE *)(a2 + 586) == 1 )
      return result;
  }
  else
  {
    LOBYTE(a3) = 1;
    MiInitializePageFaultPacket(0, 0x10000, (_DWORD)a3, 0, 0LL, (__int64)v41);
    v6 = v41;
    if ( a2 )
    {
      Process = *(_KPROCESS **)(a2 + 184);
    }
    else
    {
      v7 = 2;
      Process = KeGetCurrentThread()->ApcState.Process;
    }
    *((_QWORD *)&v42 + 1) = (char *)Process + 1024;
    BYTE4(v43) = MiLockWorkingSetShared(&Process[2].ReadyListHead.Blink);
  }
  if ( !v4 )
    v4 = *(_QWORD **)(a2 + 1928);
  v8 = v4[4];
  if ( v8 )
  {
    v36 = 0LL;
    v40 = 0LL;
    v30 = 0LL;
    v35 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v31 = (((v8 & 0xFFFFFFFFFFFF0000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v33 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v37 = 0uLL;
    v34 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v29[1] = 0LL;
    v29[0] = v8 & 0xFFFFFFFFFFFF0000uLL;
    LODWORD(v36) = _mm_cvtsi128_si32((__m128i)0LL) | 0x100;
    *((_QWORD *)&v34 + 1) = *((_QWORD *)v6 + 7);
    v30 = 0LL;
    v9 = (((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 6)) & 0x3F) != 0
       ? MiResolvePageTablePage(v29, 1LL)
       : -1073741823;
    v10 = v4[5];
    v28[0] = 0;
    do
    {
      for ( ; (v10 & 1) != 0; v10 = v4[5] )
        KeYieldProcessorEx(v28);
      v11 = v10;
      v10 = _InterlockedCompareExchange64(v4 + 5, v10 | 1, v10);
    }
    while ( v11 != v10 );
    if ( v4[4] == v8 )
    {
      if ( v9 >= 0 )
        MiConfirmFaultClusterDescriptor(v29, v4, v4 + 4, (v7 & 2) != 0);
      v12 = v4[5];
      v4[4] = 0LL;
      if ( (v12 & 0xE) == 0 && !v4[4] && (v7 & 2) == 0 )
        MiSetFaultClusterContextBlockEntryState(v4, 0LL);
    }
    _InterlockedDecrement64(v4 + 5);
    v13 = *((_QWORD *)&v35 + 1);
    v14 = *((_QWORD *)&v34 + 1);
    v15 = *((_QWORD *)&v34 + 1);
    if ( *((_QWORD *)&v35 + 1) )
    {
      if ( WORD1(v35) )
      {
        v16 = 2 * ((BYTE5(v35) >> 1) & 1u);
        v17 = ((unsigned __int64)(unsigned __int16)v35 << 12)
            + ((__int64)(*((_QWORD *)&v35 + 1) << 25) >> 16 << 25 >> 16);
        if ( v17 < 0xFFFFF68000000000uLL || v17 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v16 = (unsigned int)v16 | 5;
        }
        else
        {
          v14 = *((_QWORD *)&v34 + 1);
          if ( (*(_DWORD *)(*((_QWORD *)&v34 + 1) + 184LL) & 0xF) == 0 )
            v16 = (unsigned int)v16 | 4;
        }
        MiAddWorkingSetEntries(v14, v17, WORD1(v35), v16);
        v13 = *((_QWORD *)&v35 + 1);
        WORD1(v35) = 0;
      }
      if ( v13 == 0xFFFFF6FB7DBEDF68uLL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = *(_DWORD *)(v15 + 184) & 0xF;
        if ( v23 )
        {
          if ( v23 == 7 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
            goto LABEL_27;
          }
          v24 = 3LL;
          if ( v23 == 5 )
            v24 = 0LL;
        }
        else
        {
          v24 = 2LL;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v24]);
        goto LABEL_27;
      }
      if ( (*(_DWORD *)(v15 + 184) & 0xF) != 0
        || *((_QWORD *)&v35 + 1) < 0xFFFFF6FB7DBED000uLL
        || *((_QWORD *)&v35 + 1) > 0xFFFFF6FB7DBEDFFFuLL
        || (v25 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v15 + 184) & 0xF) != 0
          && *((_QWORD *)&v35 + 1) >= 0xFFFFF6FB7DBED000uLL
          && *((_QWORD *)&v35 + 1) <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          _InterlockedAnd(
            (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4
                                                                         * ((unsigned __int64)(2
                                                                                             * (unsigned int)((*((_QWORD *)&v35 + 1) + 0x90482413000LL) >> 3)) >> 5)
                                                                         + 4],
            ~(2 << ((2 * ((*((_QWORD *)&v35 + 1) + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                             * ((*((_QWORD *)&v35 + 1)
                                                                                               + 0x90482413000LL) >> 3)) & 0x1F)));
        }
        else
        {
          _InterlockedAnd64(*((volatile signed __int64 **)&v35 + 1), 0xCFFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v25
                                                                          + 4 * ((*((_QWORD *)&v35 + 1) >> 3) & 0x1FFLL)));
      }
    }
  }
LABEL_27:
  v18 = v4[5];
  if ( (v18 & 0xE) != 0 )
  {
    if ( (v18 & 0xFFFF80000000000LL) != 0 || v6 == v41 )
    {
      for ( i = v4; i < v4 + 4; ++i )
      {
        if ( *i )
        {
          MiLockAndConfirmFaultClusterDescriptor((_DWORD)v6, (_DWORD)v4, *i, (_DWORD)i, v7 | 1);
          if ( v6 != v41 )
            break;
        }
      }
    }
    if ( (v4[5] & 0x70) != 0 )
    {
      v19 = *(_QWORD *)v6 & 0xFFFFFFFFFFFF0000uLL;
      if ( v19 == (*(_QWORD *)v6 & 0xFFFFFFFFFFE00000uLL) )
      {
        for ( j = v4; j < v4 + 4; ++j )
        {
          v21 = *j;
          if ( *j )
          {
            if ( v19 < (v21 & 0xFFFFFFFFFFFF0000uLL) )
              break;
            if ( (v21 & 0xFFFFFFFFFFFF0000uLL) + (((v21 >> 6) & 0x3F) << 16) == v19 )
            {
              MiLockAndConfirmFaultClusterDescriptor((_DWORD)v6, (_DWORD)v4, v21, (_DWORD)j, 0);
              break;
            }
          }
        }
      }
    }
  }
  result = v41;
  if ( v6 == v41 )
    return (_OWORD *)MiUnlockWorkingSetShared(*((_QWORD *)v6 + 7), *((unsigned __int8 *)v6 + 68));
  return result;
}
