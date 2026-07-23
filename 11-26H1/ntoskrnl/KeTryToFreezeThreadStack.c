/*
 * XREFs of KeTryToFreezeThreadStack @ 0x1405EE9D0
 * Callers:
 *     MiTradeIsolatedThreadStackPage @ 0x1406F82F8 (MiTradeIsolatedThreadStackPage.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiIsKernelStackSwappable @ 0x14042EA10 (KiIsKernelStackSwappable.c)
 */

char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  int v5; // eax
  __int64 v6; // r14
  volatile __int64 *v7; // rsi
  int v8; // ebx
  unsigned __int64 v9; // rcx
  char v10; // al
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int8 v18; // dl
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  char result; // al
  __int128 v26; // [rsp+20h] [rbp-30h] BYREF
  __int128 v27; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int64 *v28; // [rsp+40h] [rbp-10h]
  int v29; // [rsp+80h] [rbp+30h] BYREF

  v28 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( *(_UNKNOWN **)(a1 + 544) == &unk_140FC9F40 )
    return 0;
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v29);
    while ( *(_QWORD *)(a1 + 64) );
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(unsigned __int8 *)(a1 + 388);
        v6 = 0LL;
        v7 = 0LL;
        v8 = v5;
        v9 = (unsigned int)(v5 - 1);
        if ( v5 == 1 )
          break;
        if ( v5 == 2 )
        {
LABEL_13:
          v11 = *(unsigned int *)(a1 + 536);
          if ( (int)v11 >= 0 )
          {
            v6 = KiProcessorBlock[v11];
            KiAcquirePrcbLocksForIsolationUnit(v6, 0, (unsigned __int64 *)&v26 + 1);
            if ( a1 == *(_QWORD *)(v6 + 8) )
              goto LABEL_43;
            if ( *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == (_DWORD)v11 )
              __fastfail(0x4Au);
            goto LABEL_42;
          }
        }
        else
        {
          v9 = (unsigned int)(v5 - 3);
          if ( v5 != 3 )
          {
            if ( v5 != 5 )
              goto LABEL_43;
            v10 = *(_BYTE *)(a1 + 112) & 7;
            if ( v10 == 1 || (unsigned __int8)(v10 - 3) <= 3u )
              goto LABEL_43;
            v8 = 2;
            goto LABEL_13;
          }
          v12 = *(unsigned int *)(a1 + 536);
          if ( (int)v12 >= 0 )
          {
            v6 = KiProcessorBlock[v12];
            KiAcquirePrcbLocksForIsolationUnit(v6, 0, (unsigned __int64 *)&v26 + 1);
            if ( a1 == *(_QWORD *)(v6 + 16) )
              goto LABEL_43;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v12 )
              __fastfail(0x1Eu);
            goto LABEL_42;
          }
        }
      }
      v13 = *(unsigned int *)(a1 + 536);
      if ( (int)v13 < 0 )
        break;
      v6 = KiProcessorBlock[v13];
      KiAcquirePrcbLocksForIsolationUnit(v6, 0, (unsigned __int64 *)&v26 + 1);
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
        goto LABEL_43;
LABEL_42:
      KiReleasePrcbLocksForIsolationUnit((__int64 *)&v26 + 1);
    }
    v14 = (unsigned int)v13;
    LODWORD(v14) = v13 & 0x7FFFFFFF;
    v15 = KiProcessorBlock[v14];
    v7 = *(volatile __int64 **)(v15 + 36488);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      v28 = *(volatile signed __int64 **)(v15 + 36488);
      *((_QWORD *)&v27 + 1) = 0LL;
      v16 = _InterlockedExchange64(v7, (__int64)&v27 + 8);
      if ( v16 )
        KxWaitForLockOwnerShip((signed __int64)&v27 + 8, v16, (__int64)a3);
    }
    else
    {
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( *v7 );
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw((char *)&v27 + 8);
      v17 = *((_QWORD *)&v27 + 1);
      if ( *((_QWORD *)&v27 + 1) )
      {
LABEL_33:
        *((_QWORD *)&v27 + 1) = 0LL;
        v18 = (unsigned __int8)v28;
        if ( ((v18 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v17 + 8), (__int64)v28)) & 4) != 0 )
          KeWakeAddressAll();
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(v28, 0LL, (signed __int64)&v27 + 8) != (__int128 *)((char *)&v27 + 8) )
      {
        v17 = KxWaitForLockChainValid((__int64 *)&v27 + 1, (__int64)KiProcessorBlock, (__int64)a3);
        goto LABEL_33;
      }
    }
    else
    {
      _InterlockedAnd64(v7, 0LL);
    }
  }
LABEL_43:
  *(_QWORD *)&v26 = v6;
  *(_QWORD *)&v27 = v7;
  if ( !v8 || (v19 = v8 - 1) == 0 || (v20 = v19 - 1) == 0 || (v21 = v20 - 1) == 0 || (v22 = v21 - 1) == 0 )
  {
LABEL_51:
    KiReleaseThreadStateLock(v9, (__int64)&v26, a3);
    *(_QWORD *)(a1 + 64) = 0LL;
    return 0;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    if ( KiIsKernelStackSwappable(a1) )
    {
      v9 = *(unsigned __int16 *)(a1 + 114);
      if ( !(_WORD)v9 )
        goto LABEL_55;
    }
    goto LABEL_51;
  }
  v24 = v23 - 2;
  if ( !v24 || v24 == 2 )
    goto LABEL_51;
LABEL_55:
  result = 1;
  *a2 = *((_QWORD *)&v26 + 1);
  return result;
}
