/*
 * XREFs of MiInsertDemotedPages @ 0x14042B7D0
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140283A10 (MiDemoteLocalLargePage.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     MiDemoteLargeFreePage @ 0x14042B4F0 (MiDemoteLargeFreePage.c)
 *     MiInsertDemotedPages @ 0x14042B7D0 (MiInsertDemotedPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiInsertDemotedPages @ 0x14042B7D0 (MiInsertDemotedPages.c)
 *     MiAnyPagesRemovalPending @ 0x14042BE24 (MiAnyPagesRemovalPending.c)
 */

__int64 __fastcall MiInsertDemotedPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbp
  unsigned int PfnPageSizeIndex; // eax
  __int64 v8; // r13
  bool v9; // zf
  __int64 v10; // r11
  __int64 v11; // r8
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  ULONG_PTR v17; // r12
  __int64 v18; // rcx
  volatile signed __int32 *v19; // rdi
  _QWORD *v20; // r15
  _DWORD *v21; // r14
  unsigned int v22; // esi
  int v23; // r10d
  int v24; // ebp
  volatile signed __int64 *v25; // r11
  signed __int64 v26; // rax
  unsigned __int64 v27; // rcx
  signed __int64 v28; // rtt
  __int64 v30; // r9
  __int64 v31; // r11
  __int64 v32; // [rsp+20h] [rbp-88h]
  int v33; // [rsp+28h] [rbp-80h]
  int v34; // [rsp+2Ch] [rbp-7Ch] BYREF
  unsigned int v35; // [rsp+30h] [rbp-78h]
  int v36; // [rsp+34h] [rbp-74h]
  unsigned __int64 v37; // [rsp+38h] [rbp-70h]
  unsigned __int64 v38; // [rsp+40h] [rbp-68h]
  unsigned __int64 v39; // [rsp+48h] [rbp-60h]
  __int64 v40; // [rsp+50h] [rbp-58h]

  v4 = 0LL;
  v6 = a2;
  v32 = 0LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a2);
  v8 = PfnPageSizeIndex;
  v9 = (*(_QWORD *)(v6 + 16) & 0x3E0LL) == 0;
  v35 = PfnPageSizeIndex;
  v36 = !v9 + 1;
  v10 = 14112LL;
  v11 = 14112LL;
  if ( PfnPageSizeIndex >= 2 )
    v11 = 14104LL;
  v12 = *(_QWORD *)(v11 + a1);
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v11 + a1),
            (v12 + 1) ^ (v12 ^ (v12 + 1)) & 0xFFFFFFFFFFFF0000uLL,
            v12);
  }
  while ( v13 != v12 );
  v14 = MiPageSizes[v8];
  v15 = v6 + 48 * v14;
  v16 = MiPageSizes[(unsigned int)(v8 + 1)];
  v38 = v16;
  v17 = (__int64)(v15 + 0x220000000000LL) / 48;
  v37 = v14 / v16;
  if ( v14 / v16 )
  {
    v18 = 48 * v16;
    v19 = (volatile signed __int32 *)(v15 + 24);
    v20 = (_QWORD *)(v15 + 40);
    v21 = (_DWORD *)(v15 + 32);
    v33 = (unsigned __int8)~(v8 + 1) << 27;
    v40 = 48 * v16;
    while ( 1 )
    {
      v39 = v15;
      v17 -= v16;
      v15 -= v18;
      v21 = (_DWORD *)((char *)v21 - v18);
      v20 = (_QWORD *)((char *)v20 - v18);
      v19 = (volatile signed __int32 *)((char *)v19 - v18);
      v22 = 0;
      while ( _interlockedbittestandset64(v19, 0x3FuLL) )
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
        while ( *(__int64 *)v19 < 0 );
      }
      if ( (*v20 & 0x20000000000000LL) == 0 )
        *(_DWORD *)(v15 + 32) = *v21 & 0xF8FFFFFF;
      v23 = *(_DWORD *)(v15 + 32);
      if ( (v23 & 0x80000) != 0
        && MiCanPfnOriginalPteBeLost(v15)
        && (*(_QWORD *)(v15 + 16) & 8LL) != 0
        && (v23 & 0x100000) == 0 )
      {
        *(_QWORD *)(v15 + 16) &= ~8uLL;
      }
      *(_DWORD *)(v15 + 32) = v23 & 0xFFEFFFFF;
      *(_QWORD *)(v15 + 16) = *(_QWORD *)(v6 + 16);
      if ( v15 != v6 )
      {
        *(_QWORD *)(v15 + 24) &= 0xC000000000000000uLL;
        *(_DWORD *)(v15 + 32) &= 0xFFFF0000;
      }
      v24 = 0;
      if ( (_DWORD)v8 == 2 )
      {
        if ( (*(_QWORD *)(v15 + 40) & 0x20000000000LL) != 0 )
          *(_QWORD *)(v15 + 40) &= ~0x20000000000uLL;
        *(_QWORD *)(v15 + 40) &= ~0x10000000000uLL;
      }
      *(_DWORD *)(v15 + 36) = v33 ^ (v33 ^ *(_DWORD *)(v15 + 36)) & 0xE7FFFFFF;
      if ( (_DWORD)v8 != 2 )
      {
        v30 = a2;
        if ( v15 != a2 )
        {
          v34 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v34);
            while ( *(__int64 *)(a2 + 24) < 0 );
            LODWORD(v8) = v35;
            v30 = a2;
          }
        }
        if ( (*(_QWORD *)(v30 + 40) & 0x20000000000LL) != 0 )
        {
          if ( !(unsigned int)MiAnyPagesRemovalPending(
                                (__int64)(v15 + 0x220000000000LL) / 48,
                                (unsigned int)(v8 + 1),
                                0x20000000000LL) )
          {
            if ( v15 == v30 )
            {
              *(_QWORD *)(v15 + 40) &= v31;
              goto LABEL_19;
            }
LABEL_50:
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_19;
          }
          v24 = 1;
          *(_QWORD *)(v15 + 40) |= 0x20000000000uLL;
        }
        if ( v15 != v30 )
          goto LABEL_50;
      }
LABEL_19:
      if ( a3 < v15 || a3 >= v39 )
      {
        if ( v24 )
          goto LABEL_44;
        if ( (*(_DWORD *)(v15 + 32) & 0x40000000) == 0 )
          v32 += v38;
        MiInsertPageInFreeOrZeroedList(v17);
      }
      else
      {
        if ( a4 != (_DWORD)v8 + 1 )
        {
LABEL_44:
          *(_DWORD *)(v15 + 32) = *(_DWORD *)(v15 + 32) & 0xFFF8FFFF | 0x50000;
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v32 += MiInsertDemotedPages(a1, v15, a3, a4);
          goto LABEL_25;
        }
        *(_DWORD *)(v15 + 32) = *(_DWORD *)(v15 + 32) & 0xFFF8FFFF | 0x50000;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_25:
      v9 = v37-- == 1;
      v18 = v40;
      v16 = v38;
      v6 = a2;
      if ( v9 )
      {
        v10 = 14112LL;
        v4 = v32;
        break;
      }
    }
  }
  if ( (unsigned int)v8 >= 2 )
    v10 = 14104LL;
  v25 = (volatile signed __int64 *)(a1 + v10);
  v26 = *v25;
  do
  {
    v27 = (v26 - 1) ^ (v26 ^ (v26 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v26 == 1 )
      v27 ^= (v27 ^ (v27 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v28 = v26;
    v26 = _InterlockedCompareExchange64(v25, v27, v26);
  }
  while ( v28 != v26 );
  return v4;
}
