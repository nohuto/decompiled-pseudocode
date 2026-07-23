/*
 * XREFs of MiReplaceTransitionPageFinish @ 0x140293E78
 * Callers:
 *     MiReplaceTransitionPage @ 0x1402931E8 (MiReplaceTransitionPage.c)
 *     MiTradePageMarkedTransition @ 0x1402DF640 (MiTradePageMarkedTransition.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 */

__int64 __fastcall MiReplaceTransitionPageFinish(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r9
  __int64 v14; // rsi
  _KPROCESS *Process; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r15d
  signed __int64 v22; // rdx
  signed __int64 v23; // rcx
  signed __int64 v24; // rax
  __int64 HasShadow; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rsi
  signed __int32 v33[14]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp+8h]

  v4 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
  v5 = 48LL * *(_QWORD *)(a1 + 24) - 0x220000000000LL;
  *(_DWORD *)(v4 + 32) = *(_DWORD *)(v4 + 32) & 0xFFF8FFFF | 0x50000;
  *(_QWORD *)(v4 + 24) &= 0xFFFFFF0000000000uLL;
  _InterlockedOr(v33, 0);
  v6 = 0x8000000000000000uLL;
  v7 = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(v4 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v4 + 24) = v7;
  if ( (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL) == *(_QWORD *)(a1 + 16) )
  {
    v10 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 40);
    *(_DWORD *)(a1 + 48) |= 1u;
    v9 = MiMapPageInHyperSpaceWorker(v8 & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
    v6 = 0x8000000000000000uLL;
    v7 = (*(_QWORD *)(v4 + 8) >> 3) & 0x1FFLL;
    v10 = v9 + 8 * v7;
  }
  v11 = *(_QWORD *)v10;
  v12 = 0xFFFFF6FB7DBED000uLL;
  v13 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL
    && v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    HasShadow = MiPteHasShadow(v7, v11, a3);
    if ( HasShadow )
    {
      v27 = *(_QWORD *)(HasShadow + 1288);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 8 * ((v10 >> 3) & 0x1FF));
        if ( (v28 & 0x20) != 0 )
          v11 |= 0x20uLL;
        v29 = v11;
        v11 |= 0x42uLL;
        if ( (v28 & 0x42) == 0 )
          v11 = v29;
      }
    }
  }
  v14 = *(_QWORD *)(a1 + 24);
  if ( qword_140E2D8C0 )
  {
    if ( (v11 & 0x10) != 0 )
      v11 &= ~0x10uLL;
    else
      v11 &= qword_140E2D8C8;
  }
  Process = (_KPROCESS *)(v14 << 12);
  v16 = (v14 << 12) ^ (v11 ^ (v14 << 12)) & 0xFFF0000000000FFFuLL;
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & v16) != 0 )
      v16 |= 0x10uLL;
    else
      v16 |= qword_140E2D8C0;
  }
  v34 = v16;
  v17 = 0LL;
  if ( v10 >= v12 && v10 <= v13 )
  {
    if ( MiPteHasShadow(Process, 0LL, v16) )
    {
      v17 = 1LL;
      if ( BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
        goto LABEL_11;
      v30 = v34;
      v31 = (v34 & 1) == 0;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
        goto LABEL_11;
      v30 = v34;
      v31 = (v34 & 1) == 0;
    }
    if ( !v31 )
      v16 = v6 | v30;
  }
LABEL_11:
  *(_QWORD *)v10 = v16;
  v18 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (_DWORD)v17 )
  {
    v19 = MiPteHasShadow(Process, v17, v16);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 1288);
      if ( v20 )
      {
        if ( (v16 & 1) != 0 )
          v16 &= v18;
        else
          v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        *(_QWORD *)(v20 + 8 * ((v10 >> 3) & 0x1FF)) = v16;
      }
    }
  }
  v21 = *(_DWORD *)(a1 + 48);
  if ( (v21 & 1) != 0 )
  {
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v10 = v6 | *(_QWORD *)(v4 + 8);
  }
  if ( *(__int64 *)(v4 + 40) >= 0 && (unsigned int)MiGetSystemRegionType(v10) == 4 )
  {
    v32 = v14 << 12;
    if ( KiFlushPcid )
      v32 |= 2uLL;
    *(_QWORD *)(v10 - 768) = v32;
  }
  if ( (v21 & 4) != 0 )
    MiInsertPageInList(v5, 2048LL, v16, v18);
  if ( (*(_DWORD *)(a1 + 44) & 2) == 0 )
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(a1 + 48) & 2) != 0 )
    *(_DWORD *)(v4 + 32) &= ~0x8000000u;
  v22 = *(_QWORD *)(v4 + 40);
  v23 = v22;
  while ( 1 )
  {
    v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 40), v23 & 0x8FFFFFFFFFFFFFFFuLL, v22);
    v23 = v24;
    if ( v22 == v24 )
      break;
    v22 = v24;
  }
  return MiClearPfnReuseFields(v4, v22, 0x8FFFFFFFFFFFFFFFuLL, v18);
}
