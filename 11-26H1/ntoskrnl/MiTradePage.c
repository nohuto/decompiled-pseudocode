/*
 * XREFs of MiTradePage @ 0x140290ED0
 * Callers:
 *     MiFindContiguousPagesNode @ 0x14028FA50 (MiFindContiguousPagesNode.c)
 *     MiClaimPhysicalRun @ 0x140290C60 (MiClaimPhysicalRun.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiTradePageMarkedFreeZero @ 0x14028D864 (MiTradePageMarkedFreeZero.c)
 *     MiTradePageMarkedBad @ 0x14028DD80 (MiTradePageMarkedBad.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiActivePageClaimCandidate @ 0x140291950 (MiActivePageClaimCandidate.c)
 *     MiLockAndInsertPageInFreeList @ 0x1402925F8 (MiLockAndInsertPageInFreeList.c)
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 *     MiGetBaseResidentPage @ 0x1402D3C20 (MiGetBaseResidentPage.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiTradePageMarkedTransition @ 0x1402DF640 (MiTradePageMarkedTransition.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 *     MiPfnLargeBitSet @ 0x14041DD70 (MiPfnLargeBitSet.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     MiTradePageMarkedPoisoned @ 0x140512E38 (MiTradePageMarkedPoisoned.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiTradePage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _WORD *v3; // r14
  __int64 v4; // r8
  unsigned int v5; // r12d
  unsigned __int64 v6; // r13
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int8 CurrentIrql; // di
  unsigned int v12; // esi
  __int64 PfnPageSizeIndex; // r14
  int v14; // esi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 result; // rax
  int v19; // eax
  __int64 BaseResidentPage; // r13
  __int64 active; // rax
  int v22; // eax
  volatile signed __int32 *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  signed __int64 v27; // rcx
  unsigned __int64 v28; // r8
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  signed __int32 v33[6]; // [rsp+8h] [rbp-69h] BYREF
  __int64 v34; // [rsp+38h] [rbp-39h] BYREF
  __int64 v35; // [rsp+40h] [rbp-31h]
  unsigned __int64 v36; // [rsp+48h] [rbp-29h] BYREF
  __int64 v37; // [rsp+50h] [rbp-21h]
  __int64 v38; // [rsp+58h] [rbp-19h]
  __int64 v39; // [rsp+60h] [rbp-11h]
  __int64 v40; // [rsp+68h] [rbp-9h]
  __int64 v41; // [rsp+70h] [rbp-1h]
  __int64 v42; // [rsp+78h] [rbp+7h]
  __int64 v43; // [rsp+80h] [rbp+Fh]
  int v44; // [rsp+D8h] [rbp+67h] BYREF
  unsigned __int64 v45; // [rsp+E0h] [rbp+6Fh]
  __int64 v46; // [rsp+E8h] [rbp+77h]
  _WORD *v47; // [rsp+F0h] [rbp+7Fh]

  v46 = a3;
  v45 = a2;
  v3 = *(_WORD **)a1;
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 24);
  v6 = a2;
  *(_QWORD *)(a1 + 40) = 0LL;
  v44 = 0;
  v35 = 48 * a2;
  v8 = -1LL;
  v37 = 0LL;
  v38 = 1LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v47 = v3;
  v39 = 0LL;
  v9 = 48 * a2 - 0x220000000000LL;
  v36 = a2;
  while ( 1 )
  {
    v10 = 2LL;
    if ( *(_QWORD *)(a1 + 32) != -1LL )
      v8 = *(_QWORD *)(a1 + 32);
    v34 = v8;
    if ( v6 > qword_140E2D920 )
    {
      if ( !(unsigned int)MiIsDecayPfn(v6) )
        goto LABEL_40;
      v10 = 2LL;
    }
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
      v4 = 0LL;
    }
    if ( (*(_QWORD *)(v9 + 40) & 0x40000000000000LL) == 0 && !(unsigned int)MiIsDecayPfn(v6) )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
LABEL_40:
      CurrentIrql = 17;
LABEL_41:
      _InterlockedIncrement(&dword_140EF90F4);
      goto LABEL_23;
    }
    v12 = v4;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v10, v4) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    LOBYTE(v37) = CurrentIrql;
    if ( CurrentIrql == 17 )
      goto LABEL_41;
    if ( ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FF) != *v3 )
    {
      if ( (v5 & 0x410000) != 0x410000 )
      {
        v19 = MiPfnLargeBitSet(&MiSystemPartition, v6);
        if ( v19 != 3 )
          *(_QWORD *)(a1 + 40) = MiPageSizes[v19];
      }
      _InterlockedIncrement(&dword_140EF90FC);
      goto LABEL_23;
    }
    LODWORD(PfnPageSizeIndex) = 3;
    v14 = *(_BYTE *)(v9 + 34) & 7;
    v41 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v15 = *(_QWORD *)(v9 + 40);
    LODWORD(v40) = 0;
    HIDWORD(v37) = v14;
    if ( (v15 & 0x10000000000LL) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(v9);
      v14 = *(_BYTE *)(BaseResidentPage + 34) & 7;
      HIDWORD(v37) = v14;
      PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(BaseResidentPage);
      LODWORD(v40) = MI_PAGE_TO_FULL_COLOR((BaseResidentPage + 0x220000000000LL) / 48);
      v41 = *(_QWORD *)(BaseResidentPage + 16);
      if ( BaseResidentPage != v9 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v14 == 6 )
      {
        *(_QWORD *)(a1 + 40) = MiPageSizes[PfnPageSizeIndex];
        _InterlockedIncrement(&dword_140EF9104);
        goto LABEL_23;
      }
      v6 = v45;
    }
    HIDWORD(v38) = PfnPageSizeIndex;
    if ( v14 == 5 )
    {
      MiTradePageMarkedBad((__int64)&v36, (_QWORD *)a1);
      goto LABEL_47;
    }
    if ( (*(_QWORD *)(v9 + 40) & 0x20000000000000LL) != 0 )
      goto LABEL_41;
    if ( byte_140E3BEA6 )
    {
      if ( (v5 & 0x410000) != 0x410000 )
      {
        v16 = (unsigned __int64)(v35 / 48) >> 9;
        if ( *(_BYTE *)(qword_140E3D240 + 2 * v16) )
        {
          if ( *(_BYTE *)(qword_140E3D240 + 2 * v16) != 10 )
          {
            _InterlockedIncrement(&dword_140EF90F8);
            goto LABEL_23;
          }
        }
      }
    }
    if ( (((v5 & 0x10000000) == 0) & (*(_DWORD *)(v9 + 32) >> 30)) != 0 )
    {
      _InterlockedIncrement(&dword_140EF9134);
      goto LABEL_23;
    }
    if ( v14 <= 1 )
    {
      MiTradePageMarkedFreeZero((__int64)&v36, a1);
LABEL_47:
      if ( (_DWORD)v43 != 2 )
        goto LABEL_51;
LABEL_48:
      CurrentIrql = v37;
      v3 = v47;
      goto LABEL_49;
    }
    if ( *(int *)(v9 + 32) < 0 )
    {
      MiTradePageMarkedPoisoned(&v36, a1);
      if ( !(_DWORD)v43 || BYTE1(v37) )
        goto LABEL_51;
      v14 = HIDWORD(v37);
      CurrentIrql = v37;
    }
    if ( v14 <= 4 )
    {
      MiTradePageMarkedTransition(&v36, a1, &v34);
      if ( (_DWORD)v43 != 2 )
      {
        if ( (_DWORD)v43 )
        {
LABEL_51:
          CurrentIrql = v37;
          goto LABEL_23;
        }
        v17 = v34;
        if ( ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FF) == *v47 )
        {
          if ( (v5 & 0x400000) != 0 )
          {
            MiLockAndInsertPageInFreeList(v9);
            CurrentIrql = v37;
            v42 = 1LL;
          }
          else
          {
            v32 = *(_QWORD *)(a1 + 56);
            if ( v32 )
            {
              *(_QWORD *)(v32 + 8 * ((unsigned __int64)*(unsigned int *)(v32 + 40) >> 12) + 48) = v6;
              *(_DWORD *)(v32 + 40) += 4096;
            }
            CurrentIrql = v37;
            v42 = 1LL;
          }
        }
        else
        {
          _InterlockedIncrement(&dword_140EF90FC);
          MiLockAndInsertPageInFreeList(v9);
          CurrentIrql = v37;
        }
LABEL_24:
        if ( CurrentIrql != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
        }
        goto LABEL_29;
      }
      goto LABEL_48;
    }
    if ( v14 != 6 )
    {
      _InterlockedIncrement(&dword_140EF9144);
LABEL_23:
      v17 = -1LL;
      goto LABEL_24;
    }
    if ( (v5 & 0x200000) != 0 && MiIsPageOnBadList(v9) )
    {
      _InterlockedIncrement(&dword_140EF913C);
      goto LABEL_23;
    }
    if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) != 2 )
      break;
    if ( (v5 & 8) != 0 )
    {
LABEL_121:
      _InterlockedIncrement(&dword_140EF9140);
      goto LABEL_23;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v3 = v47;
    CurrentIrql = 17;
    if ( (unsigned int)MiSwapStackPage((_DWORD)v47, v9, *(_DWORD *)(a1 + 28), v5, (__int64)&v34, (__int64)&v44) )
    {
      v23 = (volatile signed __int32 *)&unk_140EF90E0;
      v17 = v34;
      if ( !v44 )
        v23 = (volatile signed __int32 *)&unk_140EF90EC;
      goto LABEL_76;
    }
    if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 2 )
    {
      _InterlockedIncrement(&dword_140EF9148);
      v17 = -1LL;
      goto LABEL_29;
    }
    _InterlockedIncrement(&dword_140EF90F0);
LABEL_49:
    if ( v42 )
      goto LABEL_23;
    v8 = -1LL;
    v4 = 0LL;
  }
  v3 = v47;
  active = MiActivePageClaimCandidate((_DWORD)v47, v9, 1, v5, 1, v46);
  if ( active )
  {
    _InterlockedIncrement(&dword_140EF91C8);
    *(_QWORD *)(a1 + 40) = active;
    goto LABEL_23;
  }
  if ( (v5 & 8) != 0 )
    goto LABEL_121;
  if ( *(__int64 *)(v9 + 40) < 0 )
    v22 = MiTrimSharedPage(v9, CurrentIrql, v5);
  else
    v22 = MiTradePageMarkedActive(&v36, a1, &v34);
  LODWORD(v43) = v22;
  CurrentIrql = 17;
  if ( v22 == 2 )
    goto LABEL_49;
  if ( v22 )
  {
    _InterlockedIncrement(&dword_140EF9150);
    v17 = -1LL;
    goto LABEL_29;
  }
  v17 = v34;
  if ( ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FF) != *v3 )
  {
    _InterlockedIncrement(&dword_140EF90FC);
    MiLockAndInsertPageInFreeList(v9);
    goto LABEL_29;
  }
  v23 = (volatile signed __int32 *)&unk_140EF90E4;
LABEL_76:
  _InterlockedIncrement(v23);
  *(_QWORD *)(v9 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v24 = *(_QWORD *)(v9 + 16);
  if ( v24 )
  {
    v26 = v24 & 0xFFFFFFFFFFFFFC9FuLL;
LABEL_80:
    v25 = v26 | 0x80;
  }
  else
  {
    v25 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( qword_140E2D8C0 )
    {
      if ( (qword_140E2D8C0 & v25) == 0 )
      {
        v26 = qword_140E2D8C0 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL;
        goto LABEL_80;
      }
      v25 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
    }
  }
  *(_QWORD *)(v9 + 16) = v25;
  if ( (v5 & 0x400000) != 0 )
  {
    MiLockAndInsertPageInFreeList(v9);
    v42 = 1LL;
  }
  else
  {
    _InterlockedOr(v33, 0);
    v27 = *(_QWORD *)(v9 + 24);
    v28 = (unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59;
    v29 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v9 + 24),
            v28 ^ (v28 ^ v27) & 0xC7FFFFFFFFFFFFFFuLL,
            v27);
    if ( v27 != v29 )
    {
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v9 + 24),
                v28 ^ (v28 ^ v29) & 0xC7FFFFFFFFFFFFFFuLL,
                v29);
      }
      while ( v30 != v29 );
    }
    v31 = *(_QWORD *)(a1 + 56);
    if ( v31 )
    {
      *(_QWORD *)(v31 + 8 * ((unsigned __int64)*(unsigned int *)(v31 + 40) >> 12) + 48) = v6;
      *(_DWORD *)(v31 + 40) += 4096;
    }
    v42 = 1LL;
  }
LABEL_29:
  result = v42;
  *(_QWORD *)(a1 + 32) = v17;
  return result;
}
