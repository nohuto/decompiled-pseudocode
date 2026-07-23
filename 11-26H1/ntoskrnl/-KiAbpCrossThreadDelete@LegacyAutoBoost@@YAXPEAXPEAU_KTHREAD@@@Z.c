/*
 * XREFs of ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC
 * Callers:
 *     KeDeleteMutant @ 0x1403DFA18 (KeDeleteMutant.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeAbThreadAreAllEntriesFree @ 0x140270FC4 (KeAbThreadAreAllEntriesFree.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     ?KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x140600118 (-KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall LegacyAutoBoost::KiAbpCrossThreadDelete(
        struct _KTHREAD *this,
        LegacyAutoBoost *a2,
        struct _KTHREAD *a3)
{
  __int64 v5; // rsi
  struct _KTHREAD *v6; // rdx
  __int64 v7; // r9
  unsigned int v8; // r8d
  unsigned int v10; // ecx
  unsigned __int64 v11; // r14
  unsigned __int64 *v12; // r8
  int v13; // eax
  volatile __int64 *v14; // rdi
  int v15; // r12d
  unsigned __int64 v16; // rcx
  char v17; // al
  __int64 v18; // r15
  __int64 v19; // r15
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int8 v25; // dl
  int v26; // edi
  signed __int32 v27[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int128 v28; // [rsp+30h] [rbp-79h] BYREF
  __int128 v29; // [rsp+40h] [rbp-69h] BYREF
  volatile signed __int64 *v30; // [rsp+50h] [rbp-59h]
  __int128 Object; // [rsp+58h] [rbp-51h] BYREF
  __int128 v32; // [rsp+68h] [rbp-41h]
  __int128 v33; // [rsp+78h] [rbp-31h]
  _WORD BugCheckParameter2[8]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-9h]
  void (__fastcall *v36)(LegacyAutoBoost *, struct _KEVENT *, void *, struct AutoBoost::_AB_BOOST_CONTEXT *); // [rsp+A8h] [rbp-1h]
  __int128 *p_Object; // [rsp+B0h] [rbp+7h]
  __int64 v38; // [rsp+C8h] [rbp+1Fh]
  int v39; // [rsp+120h] [rbp+77h] BYREF
  int v40; // [rsp+128h] [rbp+7Fh] BYREF

  Object = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset_0(BugCheckParameter2, 0, 0x40uLL);
  v5 = 0LL;
  v39 = 0;
  v28 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  if ( KeAbThreadAreAllEntriesFree(a2, v6) )
    return;
  v7 = *((_QWORD *)a2 + 142);
  v8 = (*(unsigned __int16 *)(v7 + 8) | *(unsigned __int16 *)(v7 + 10)) ^ ((1LL << *(_BYTE *)(v7 + 12)) - 1);
  do
  {
    if ( !_BitScanReverse(&v10, v8) )
      return;
    v8 &= ~(1 << v10);
    v11 = v7 + 88LL * v10 + 16;
  }
  while ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)this & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v11 + 10) );
  if ( *(__int64 *)v11 < 0 )
    goto LABEL_50;
  KiAcquireThreadLockRaiseToDpc((__int64)a2, (unsigned __int8 *)&v39);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *((unsigned __int8 *)a2 + 388);
        v14 = 0LL;
        v15 = v13;
        v16 = (unsigned int)(v13 - 1);
        if ( v13 == 1 )
          break;
        if ( v13 == 2 )
        {
LABEL_15:
          v18 = *((unsigned int *)a2 + 134);
          v5 = 0LL;
          if ( (int)v18 >= 0 )
          {
            v5 = KiProcessorBlock[v18];
            KiAcquirePrcbLocksForIsolationUnit(v5, 0, (unsigned __int64 *)&v28 + 1);
            if ( a2 == *(LegacyAutoBoost **)(v5 + 8) )
              goto LABEL_45;
            if ( *((_BYTE *)a2 + 388) == 2 && *((_DWORD *)a2 + 134) == (_DWORD)v18 )
              __fastfail(0x4Au);
            goto LABEL_44;
          }
        }
        else
        {
          v16 = (unsigned int)(v13 - 3);
          if ( v13 != 3 )
          {
            if ( v13 != 5 )
              goto LABEL_45;
            v17 = *((_BYTE *)a2 + 112) & 7;
            if ( v17 == 1 || (unsigned __int8)(v17 - 3) <= 3u )
              goto LABEL_45;
            v15 = 2;
            goto LABEL_15;
          }
          v19 = *((unsigned int *)a2 + 134);
          v5 = 0LL;
          if ( (int)v19 >= 0 )
          {
            v5 = KiProcessorBlock[v19];
            KiAcquirePrcbLocksForIsolationUnit(v5, 0, (unsigned __int64 *)&v28 + 1);
            if ( a2 == *(LegacyAutoBoost **)(v5 + 16) )
              goto LABEL_45;
            if ( *((_BYTE *)a2 + 388) == 3 && *((_DWORD *)a2 + 134) == (_DWORD)v19 )
              __fastfail(0x1Eu);
            goto LABEL_44;
          }
        }
      }
      v20 = *((unsigned int *)a2 + 134);
      v5 = 0LL;
      if ( (int)v20 < 0 )
        break;
      v5 = KiProcessorBlock[v20];
      KiAcquirePrcbLocksForIsolationUnit(v5, 0, (unsigned __int64 *)&v28 + 1);
      if ( *((_BYTE *)a2 + 388) == 1 && *((_DWORD *)a2 + 134) == (_DWORD)v20 )
        goto LABEL_45;
LABEL_44:
      KiReleasePrcbLocksForIsolationUnit((__int64 *)&v28 + 1);
      v5 = 0LL;
    }
    v21 = (unsigned int)v20;
    LODWORD(v21) = v20 & 0x7FFFFFFF;
    v22 = KiProcessorBlock[v21];
    v14 = *(volatile __int64 **)(v22 + 36488);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      v30 = *(volatile signed __int64 **)(v22 + 36488);
      *((_QWORD *)&v29 + 1) = 0LL;
      v23 = _InterlockedExchange64(v14, (__int64)&v29 + 8);
      if ( v23 )
        KxWaitForLockOwnerShip((signed __int64)&v29 + 8, v23, (__int64)v12);
    }
    else
    {
      v40 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
      {
        do
          KeYieldProcessorEx(&v40);
        while ( *v14 );
      }
    }
    if ( *((_BYTE *)a2 + 388) == 1 && *((_DWORD *)a2 + 134) == (_DWORD)v20 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw((char *)&v29 + 8);
      v24 = *((_QWORD *)&v29 + 1);
      if ( *((_QWORD *)&v29 + 1) )
      {
LABEL_35:
        *((_QWORD *)&v29 + 1) = 0LL;
        v25 = (unsigned __int8)v30;
        if ( ((v25 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v24 + 8), (__int64)v30)) & 4) != 0 )
          KeWakeAddressAll();
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(v30, 0LL, (signed __int64)&v29 + 8) != (__int128 *)((char *)&v29 + 8) )
      {
        v24 = KxWaitForLockChainValid((__int64 *)&v29 + 1, (__int64)KiProcessorBlock, (__int64)v12);
        goto LABEL_35;
      }
    }
    else
    {
      _InterlockedAnd64(v14, 0LL);
    }
  }
LABEL_45:
  *(_QWORD *)&v28 = v5;
  *(_QWORD *)&v29 = v14;
  if ( v15 == 2 )
  {
    v26 = *((_DWORD *)a2 + 134);
    KiReleaseThreadStateLock(v16, (__int64)&v28, v12);
    KiReleaseThreadLockLowerIrql((__int64)a2, v39);
    *((_QWORD *)&v32 + 1) = this;
    v38 = 0LL;
    *(_QWORD *)&v32 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    v36 = LegacyAutoBoost::KeAbCrossThreadDeleteDpcRoutine;
    p_Object = &Object;
    *(_QWORD *)&v33 = v11;
    *((_QWORD *)&v33 + 1) = a2;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    BugCheckParameter2[0] = 275;
    v35 = 0LL;
    BugCheckParameter2[1] = v26 + 2048;
    KiInsertQueueDpc((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 0LL, 0);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    goto LABEL_51;
  }
  if ( *((_WORD *)a2 + 57) )
  {
    KiReleaseThreadStateLock(v16, (__int64)&v28, v12);
    KiReleaseThreadLockLowerIrql((__int64)a2, v39);
    KeGenericCallDpcEx((__int64)EtwpSynchronizationDpc, 0LL);
  }
  else
  {
    KiReleaseThreadStateLock(v16, (__int64)&v28, v12);
    KiReleaseThreadLockLowerIrql((__int64)a2, v39);
  }
LABEL_50:
  *(_BYTE *)v11 |= 1u;
LABEL_51:
  _InterlockedOr(v27, 0);
  LegacyAutoBoost::KiAbCrossThreadRelease(this, v11, a2, (struct _KTHREAD *)v7);
}
