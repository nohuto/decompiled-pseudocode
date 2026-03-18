/*
 * XREFs of MiAgePteWorker @ 0x1402FF060
 * Callers:
 *     MiAgePte @ 0x1402FE880 (MiAgePte.c)
 *     MiAgeWorkingSetVpabCallback @ 0x140314D30 (MiAgeWorkingSetVpabCallback.c)
 * Callees:
 *     MiAcquirePrcbAgeTrimLists @ 0x14029CE20 (MiAcquirePrcbAgeTrimLists.c)
 *     MiSetVaAgeListEx @ 0x14029D300 (MiSetVaAgeListEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiClearPteAccessed @ 0x1402FF9B0 (MiClearPteAccessed.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiFreeWsleList @ 0x140328E50 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

int __fastcall MiAgePteWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rsi
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  unsigned __int8 v11; // bl
  unsigned __int8 v12; // r9
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned __int8 v15; // dl
  int result; // eax
  __int64 v17; // r8
  unsigned int v18; // ebp
  unsigned __int64 v19; // rcx
  ULONG_PTR BugCheckParameter4; // r11
  int v21; // r15d
  __int64 v22; // r9
  int v23; // r10d
  struct _KPRCB *CurrentPrcb; // r8
  __int64 *MmInternal; // rdx
  __int64 v26; // rax
  int v27; // r8d
  unsigned int v28; // r13d
  unsigned __int64 *v29; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 HasShadow; // rax
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 *v39; // rcx
  __int64 *v40; // r8
  __int64 *v41; // rdx
  int v42; // ecx
  int v43; // ecx
  ULONG *v44; // rax
  unsigned __int8 v45; // cl
  __int64 v46; // r8
  unsigned int v47; // ebp
  unsigned __int64 v48; // rcx

  v7 = *(_QWORD *)(a1 + 32);
  v9 = 0xFFFFF68000000000uLL;
  v10 = 0xFFFFDE0000000000uLL;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = HIBYTE(*(_QWORD *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF;
  }
  else
  {
    v29 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v30 = *v29;
    if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v30, v29);
      if ( HasShadow )
      {
        v36 = *(_QWORD *)(HasShadow + 1288);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 8 * ((v35 >> 3) & 0x1FF));
          if ( (v37 & 0x20) != 0 )
            v30 |= 0x20uLL;
          v38 = v30;
          v30 |= 0x42uLL;
          if ( (v37 & 0x42) == 0 )
            v30 = v38;
        }
      }
    }
    v11 = (*(_QWORD *)(v10 + 48 * ((v30 >> 12) & 0xFFFFFFFFFFLL)) >> 46) & 7;
  }
  v12 = -1;
  if ( (a6 & 1) == 0 )
  {
    v13 = *(_DWORD *)(a4 + 32);
    if ( (*(_QWORD *)(a4 + 40) & 0x20000000000000LL) == 0 )
    {
      if ( (*(_DWORD *)(a4 + 32) & 0x8000000) == 0 )
        goto LABEL_6;
      if ( a4 >= v10 && a4 < 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL )
      {
        v31 = (__int64)(a4 - v10) / 48;
        if ( v31 < qword_140E347B0 || v31 >= qword_140E347B0 + 2048 )
        {
          if ( (v13 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(a4) == 9 )
          {
            v14 = 5;
            goto LABEL_7;
          }
LABEL_6:
          v14 = HIBYTE(v13) & 7;
LABEL_7:
          if ( v11 < 6u )
          {
            if ( v14 < 5 )
            {
              v12 = 6;
              v11 = 6;
            }
            else if ( (*(_DWORD *)a5 & 1) != 0 )
            {
              v12 = ++v11;
            }
          }
          v15 = *(_BYTE *)(((*(__int64 *)(a4 + 40) >> 63) & 1) + a5 + 4);
          if ( !v15 )
            v15 = 7;
          if ( (*(_DWORD *)(v7 + 184) & 0xF) == 2
            && ((*(_QWORD *)(a4 + 40) >> 60) & 7) == 4
            && (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
            && (unsigned __int16)*(_DWORD *)(a4 + 32) == 1
            || (result = *(_DWORD *)a5, (*(_DWORD *)a5 & 3) != 0) && (v11 >= v15 || v14 < *(_DWORD *)(a5 + 8)) )
          {
            ++*(_QWORD *)(a5 + 32);
            v32 = *(_QWORD *)(a5 + 64);
            if ( !v32 )
            {
              MiAcquirePrcbAgeTrimLists(v7, (__int64 *)(a5 + 56));
              v32 = *(_QWORD *)(a5 + 64);
            }
            MiInsertTbFlushEntry(v32, a3, 1LL);
            result = *(_DWORD *)(v32 + 12);
            if ( *(_DWORD *)(v32 + 28) == result )
              return MiFreeWsleList(v7, v33, v32, 0LL);
          }
          else if ( v12 != 0xFF )
          {
            v17 = a5 + 80 * (v12 + 1LL);
            if ( !*(_BYTE *)(v17 + 72) )
            {
              *(_BYTE *)(v17 + 72) = 1;
              *(_QWORD *)(v17 + 64) = (__int64)((a2 << 25) - (v9 << 25)) >> 16;
            }
            v18 = ((unsigned int)a2 >> 3) & 0x1FF;
            v19 = (unsigned __int64)v18 >> 3;
            result = *(char *)(v19 + v17) | (1 << (v18 & 7));
            *(_BYTE *)(v19 + v17) = result;
            ++*(_QWORD *)(a5 + 16);
          }
          return result;
        }
      }
    }
    v14 = 5;
    goto LABEL_7;
  }
  BugCheckParameter4 = 0LL;
  if ( v11 != 7 )
  {
    v27 = *(_DWORD *)(a4 + 32);
    if ( (*(_QWORD *)(a4 + 40) & 0x20000000000000LL) == 0
      && ((*(_DWORD *)(a4 + 32) & 0x8000000) == 0
       || a4 >= v10
       && a4 < 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL
       && !MiIsDecayPfn((__int64)(a4 - v10) / 48)
       && ((v27 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(a4) != 9))
      && (v27 & 0x7000000u) < 0x5000000 )
    {
      v28 = BugCheckParameter4;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v28 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v28);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(a4 + 24) < 0 );
      }
      if ( (*(_QWORD *)(a4 + 40) & 0x20000000000000LL) == 0 )
        *(_DWORD *)(a4 + 32) = *(_DWORD *)(a4 + 32) & 0xF8FFFFFF | 0x5000000;
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      BugCheckParameter4 = 0LL;
    }
  }
  v21 = BugCheckParameter4;
  LODWORD(v22) = BugCheckParameter4;
  v23 = 8;
  if ( (a6 & 2) != 0 )
  {
    v22 = *(_QWORD *)(a5 + 56);
    if ( !v22 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      MmInternal = (__int64 *)CurrentPrcb->MmInternal;
      if ( !MmInternal )
      {
        dword_141031C94 = 512;
        MmInternal = MxTempPrcb;
        dword_14102EE18 = 1;
      }
      v26 = *((unsigned int *)MmInternal + 85);
      if ( (_DWORD)v26 == *((_DWORD *)MmInternal + 86) )
        KeBugCheckEx(0x1Au, 0x440uLL, (ULONG_PTR)CurrentPrcb, (unsigned int)v26, BugCheckParameter4);
      v39 = &MmInternal[2575 * v26];
      v39[3070] = (__int64)KeGetCurrentThread();
      v40 = v39 + 496;
      ++*((_DWORD *)MmInternal + 85);
      v41 = v39 + 1013;
      *((_DWORD *)v39 + 994) = BugCheckParameter4;
      v39[499] = BugCheckParameter4;
      v39[500] = BugCheckParameter4;
      *((_DWORD *)v39 + 995) = 512;
      *(_OWORD *)(v39 + 1013) = 0LL;
      *(_OWORD *)(v39 + 1015) = 0LL;
      v39[1017] = 0LL;
      *((_DWORD *)v39 + 2029) = 512;
      *((_DWORD *)v39 + 996) = BugCheckParameter4;
      *((_DWORD *)v39 + 997) = 2;
      v39[496] = v7;
      *((_BYTE *)v39 + 3992) = (*(_DWORD *)(v7 + 184) & 0x40) != 0;
      if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v7 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        v42 = BugCheckParameter4;
        if ( (*(_DWORD *)(v7 + 184) & 0xF) == 0 )
          v42 = 1;
      }
      else
      {
        *((_DWORD *)v39 + 996) |= 9u;
        v42 = BugCheckParameter4;
      }
      *((_DWORD *)v40 + 4) &= 0xFFFFFFDB;
      *((_DWORD *)v40 + 2) = v42;
      *(_WORD *)((char *)v40 + 25) = 0;
      *((_DWORD *)v40 + 7) = BugCheckParameter4;
      v40[4] = BugCheckParameter4;
      v40[5] = BugCheckParameter4;
      *(_QWORD *)(a5 + 56) = v40;
      *((_DWORD *)v41 + 4) = 2;
      *((_DWORD *)v41 + 5) = 1;
      *v41 = v7;
      *((_BYTE *)v41 + 24) = (*(_DWORD *)(v7 + 184) & 0x40) != 0;
      if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v7 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        v43 = BugCheckParameter4;
        if ( (*(_DWORD *)(v7 + 184) & 0xF) == 0 )
          v43 = 1;
      }
      else
      {
        *((_DWORD *)v41 + 4) |= 9u;
        v43 = BugCheckParameter4;
      }
      *((_DWORD *)v41 + 4) &= 0xFFFFFFDB;
      *((_DWORD *)v41 + 2) = v43;
      *(_WORD *)((char *)v41 + 25) = 0;
      *((_DWORD *)v41 + 7) = BugCheckParameter4;
      v41[4] = BugCheckParameter4;
      v41[5] = BugCheckParameter4;
      *(_QWORD *)(a5 + 64) = v41;
      if ( *(_QWORD *)(a5 + 72) == 1LL )
        *(_QWORD *)(a5 + 72) = v40 + 1034;
      v22 = *(_QWORD *)(a5 + 56);
    }
    goto LABEL_93;
  }
  if ( (a6 & 4) != 0 )
  {
    v23 = 10;
LABEL_93:
    v21 = 1;
  }
  if ( (*(_DWORD *)(v7 + 184) & 0xF) == 1 )
    v44 = &MiSystemPartition;
  else
    v44 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v7 + 174));
  if ( v44[4539] )
    v23 |= 1u;
  result = MiClearPteAccessed(v7, a4, a2, v22, v23);
  if ( result )
  {
    ++*(_QWORD *)(a5 + 24);
    if ( !v21 || v11 == 1 || v11 >= 7u )
      return result;
    v45 = 1;
  }
  else
  {
    if ( (unsigned __int8)(v11 - 1) > 5u )
      return result;
    v45 = 0;
  }
  if ( a3 >= 0xFFFFF68000000000uLL && a3 <= 0xFFFFF6FFFFFFFFFFuLL )
    return MiSetVaAgeListEx(v7, a3, 1u, v45, 0);
  v46 = a5 + 80 * (v45 + 1LL);
  if ( !*(_BYTE *)(v46 + 72) )
  {
    *(_BYTE *)(v46 + 72) = 1;
    *(_QWORD *)(v46 + 64) = a2 << 25 >> 16;
  }
  v47 = ((unsigned int)a2 >> 3) & 0x1FF;
  v48 = (unsigned __int64)v47 >> 3;
  result = *(char *)(v48 + v46) | (1 << (v47 & 7));
  *(_BYTE *)(v48 + v46) = result;
  return result;
}
