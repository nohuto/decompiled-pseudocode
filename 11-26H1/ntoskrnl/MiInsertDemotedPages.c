/*
 * XREFs of MiInsertDemotedPages @ 0x1404346F0
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402844A0 (MiDemoteLocalLargePage.c)
 *     MiInsertPossiblyBadPage @ 0x1403C65E0 (MiInsertPossiblyBadPage.c)
 *     MiDemoteLargeFreePage @ 0x140434410 (MiDemoteLargeFreePage.c)
 *     MiInsertDemotedPages @ 0x1404346F0 (MiInsertDemotedPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028B290 (MiGetPfnPageSizeIndex.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140408680 (MiCanPfnOriginalPteBeLost.c)
 *     MiInsertDemotedPages @ 0x1404346F0 (MiInsertDemotedPages.c)
 *     MiAnyPagesRemovalPending @ 0x140434D64 (MiAnyPagesRemovalPending.c)
 */

__int64 __fastcall MiInsertDemotedPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // r12
  __int64 v6; // r14
  unsigned int PfnPageSizeIndex; // eax
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r8
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r11
  ULONG_PTR v16; // r13
  __int64 v17; // rcx
  volatile signed __int32 *v18; // rsi
  _QWORD *v19; // rbp
  _QWORD *v20; // rax
  _DWORD *v21; // r15
  unsigned int v22; // edi
  int v23; // r10d
  __int64 v24; // rcx
  int v25; // edi
  bool v26; // zf
  volatile signed __int64 *v27; // r10
  signed __int64 v28; // rax
  unsigned __int64 v29; // rcx
  signed __int64 v30; // rtt
  __int64 inserted; // rax
  __int64 v33; // r10
  unsigned int v34; // [rsp+20h] [rbp-88h]
  int v35; // [rsp+24h] [rbp-84h]
  _DWORD v36[2]; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v37; // [rsp+30h] [rbp-78h]
  unsigned __int64 v38; // [rsp+38h] [rbp-70h]
  _QWORD *v39; // [rsp+40h] [rbp-68h]
  volatile signed __int32 *v40; // [rsp+48h] [rbp-60h]
  unsigned __int64 v41; // [rsp+50h] [rbp-58h]
  __int64 v42; // [rsp+58h] [rbp-50h]

  v4 = 0LL;
  v6 = a2;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a2);
  v8 = PfnPageSizeIndex;
  v9 = 14112LL;
  v10 = 14112LL;
  v34 = PfnPageSizeIndex;
  v36[1] = ((*(_QWORD *)(v6 + 16) & 0x3E0LL) != 0) + 1;
  if ( PfnPageSizeIndex >= 2 )
    v10 = 14104LL;
  v11 = *(_QWORD *)(v10 + a1);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v10 + a1),
            (v11 + 1) ^ (v11 ^ (v11 + 1)) & 0xFFFFFFFFFFFF0000uLL,
            v11);
  }
  while ( v12 != v11 );
  v13 = MiPageSizes[v8];
  v14 = v6 + 48 * v13;
  v15 = MiPageSizes[(unsigned int)(v8 + 1)];
  v38 = v15;
  v16 = (__int64)(v14 + 0x220000000000LL) / 48;
  v37 = v13 / v15;
  if ( v13 / v15 )
  {
    v17 = 48 * v15;
    v18 = (volatile signed __int32 *)(v14 + 24);
    v19 = (_QWORD *)(v14 + 40);
    v20 = (_QWORD *)(v14 + 16);
    v35 = (unsigned __int8)~(v8 + 1) << 27;
    v21 = (_DWORD *)(v14 + 32);
    v42 = 48 * v15;
    while ( 1 )
    {
      v41 = v14;
      v18 = (volatile signed __int32 *)((char *)v18 - v17);
      v39 = (_QWORD *)((char *)v20 - v17);
      v14 -= v17;
      v40 = v18;
      v16 -= v15;
      v21 = (_DWORD *)((char *)v21 - v17);
      v19 = (_QWORD *)((char *)v19 - v17);
      v22 = 0;
      while ( _interlockedbittestandset64(v18, 0x3FuLL) )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v22);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      if ( (*v19 & 0x20000000000000LL) == 0 )
        *(_DWORD *)(v14 + 32) = *v21 & 0xF8FFFFFF;
      v23 = *(_DWORD *)(v14 + 32);
      if ( (v23 & 0x80000) != 0
        && MiCanPfnOriginalPteBeLost(v14)
        && (*(_QWORD *)(v14 + 16) & 8LL) != 0
        && (v23 & 0x100000) == 0 )
      {
        *(_QWORD *)(v14 + 16) = *v39 & 0xFFFFFFFFFFFFFFF7uLL;
      }
      v24 = a2;
      *(_DWORD *)(v14 + 32) = v23 & 0xFFEFFFFF;
      *(_QWORD *)(v14 + 16) = *(_QWORD *)(v6 + 16);
      if ( v14 != a2 )
      {
        *(_QWORD *)(v14 + 24) &= 0xC000000000000000uLL;
        *(_DWORD *)(v14 + 32) &= 0xFFFF0000;
      }
      LODWORD(v8) = v34;
      v25 = 0;
      if ( v34 == 2 )
      {
        if ( (*(_QWORD *)(v14 + 40) & 0x20000000000LL) != 0 )
          *(_QWORD *)(v14 + 40) &= ~0x20000000000uLL;
        *(_QWORD *)(v14 + 40) &= ~0x10000000000uLL;
      }
      *(_DWORD *)(v14 + 36) = v35 ^ (v35 ^ *(_DWORD *)(v14 + 36)) & 0xE7FFFFFF;
      if ( v34 == 2 )
      {
        v6 = a2;
      }
      else
      {
        if ( v14 != a2 )
        {
          v36[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(v36);
            while ( *(__int64 *)(a2 + 24) < 0 );
            v18 = v40;
            v24 = a2;
          }
          LODWORD(v8) = v34;
        }
        if ( (*(_QWORD *)(v24 + 40) & 0x20000000000LL) != 0 )
        {
          if ( !(unsigned int)MiAnyPagesRemovalPending((__int64)(v14 + 0x220000000000LL) / 48, (unsigned int)(v8 + 1)) )
          {
            v6 = a2;
            if ( v14 == a2 )
            {
              *(_QWORD *)(v14 + 40) &= ~0x20000000000uLL;
              goto LABEL_20;
            }
LABEL_52:
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_20;
          }
          v25 = 1;
          *(_QWORD *)(v14 + 40) |= v33;
        }
        v6 = a2;
        if ( v14 != a2 )
          goto LABEL_52;
      }
LABEL_20:
      if ( a3 < v14 || a3 >= v41 )
      {
        if ( v25 )
          goto LABEL_45;
        if ( (*(_DWORD *)(v14 + 32) & 0x40000000) == 0 )
          v4 += v38;
        MiInsertPageInFreeOrZeroedList(v16);
        LODWORD(v8) = v34;
      }
      else
      {
        if ( a4 != (_DWORD)v8 + 1 )
        {
LABEL_45:
          *(_DWORD *)(v14 + 32) = *(_DWORD *)(v14 + 32) & 0xFFF8FFFF | 0x50000;
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          inserted = MiInsertDemotedPages(a1, v14, a3, a4);
          LODWORD(v8) = v34;
          v4 += inserted;
          goto LABEL_26;
        }
        *(_DWORD *)(v14 + 32) = *(_DWORD *)(v14 + 32) & 0xFFF8FFFF | 0x50000;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_26:
      v26 = v37-- == 1;
      v17 = v42;
      v15 = v38;
      v20 = v39;
      if ( v26 )
      {
        v9 = 14112LL;
        break;
      }
    }
  }
  if ( (unsigned int)v8 >= 2 )
    v9 = 14104LL;
  v27 = (volatile signed __int64 *)(a1 + v9);
  v28 = *v27;
  do
  {
    v29 = (v28 - 1) ^ (v28 ^ (v28 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v28 == 1 )
      v29 ^= (v29 ^ (v29 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v30 = v28;
    v28 = _InterlockedCompareExchange64(v27, v29, v28);
  }
  while ( v30 != v28 );
  return v4;
}
