/*
 * XREFs of MiAgePteWorker @ 0x1402E10E0
 * Callers:
 *     MiAgePte @ 0x1402E0900 (MiAgePte.c)
 *     MiAgeWorkingSetVpabCallback @ 0x140316D60 (MiAgeWorkingSetVpabCallback.c)
 * Callees:
 *     MiAcquirePrcbAgeTrimLists @ 0x14029C380 (MiAcquirePrcbAgeTrimLists.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

int __fastcall MiAgePteWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rsi
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 CurrentThread; // rcx
  unsigned __int64 v13; // rax
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // r9
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned __int8 v18; // dl
  int result; // eax
  __int64 v20; // r8
  unsigned int v21; // ebp
  unsigned __int64 v22; // rcx
  ULONG_PTR BugCheckParameter4; // r11
  int v24; // r15d
  __int64 v25; // r9
  int v26; // r10d
  struct _KPRCB *CurrentPrcb; // r8
  __int64 *MmInternal; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // r8d
  __int64 v32; // r8
  unsigned int v33; // r13d
  unsigned __int64 *v34; // r8
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 HasShadow; // rax
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 *v43; // rcx
  __int64 *v44; // r8
  __int64 *v45; // rdx
  int v46; // ecx
  int v47; // ecx
  ULONG *v48; // rax
  unsigned __int8 v49; // cl
  __int64 v50; // r8
  unsigned int v51; // ebp
  unsigned __int64 v52; // rcx

  v7 = *(_QWORD *)(a1 + 32);
  v9 = 0xFFFFF68000000000uLL;
  v10 = 0xFFFFDE0000000000uLL;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    CurrentThread = 0xFFFFF6FB7DBED000uLL;
    v13 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL )
    {
      CurrentThread = 0xFFFFF6FB7DBED7F8uLL;
      if ( v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0)
        && (MiFlags & 0x1800000) != 0 )
      {
        CurrentThread = (unsigned __int64)KeGetCurrentThread();
        v30 = *(_QWORD *)(CurrentThread + 184);
        if ( *(_BYTE *)(v30 + 352) != 1 )
        {
          if ( v30 )
          {
            CurrentThread = *(_QWORD *)(v30 + 1288);
            if ( CurrentThread )
            {
              CurrentThread = *(_QWORD *)(CurrentThread + 8 * ((v11 >> 3) & 0x1FF));
              if ( (CurrentThread & 0x20) != 0 )
                v13 |= 0x20uLL;
              v11 = v13;
            }
          }
        }
      }
    }
    v14 = HIBYTE(v13) & 0xF;
  }
  else
  {
    v34 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    CurrentThread = 0xFFFFF6FB7DBED000uLL;
    v35 = *v34;
    if ( (unsigned __int64)v34 >= 0xFFFFF6FB7DBED000uLL )
    {
      CurrentThread = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v34 <= 0xFFFFF6FB7DBED7F8uLL && (v35 & 1) != 0 && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
      {
        HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v35, v34);
        if ( HasShadow )
        {
          v41 = *(_QWORD *)(HasShadow + 1288);
          if ( v41 )
          {
            v42 = *(_QWORD *)(v41 + 8 * ((v40 >> 3) & 0x1FF));
            if ( (v42 & 0x20) != 0 )
              v35 |= 0x20uLL;
            CurrentThread = v35;
            v35 |= 0x42uLL;
            if ( (v42 & 0x42) == 0 )
              v35 = CurrentThread;
          }
        }
      }
    }
    v11 = (v35 >> 12) & 0xFFFFFFFFFFLL;
    v14 = (*(_QWORD *)(v10 + 48 * v11) >> 46) & 7;
  }
  v15 = -1;
  if ( (a6 & 1) == 0 )
  {
    v16 = *(_DWORD *)(a4 + 32);
    if ( (*(_QWORD *)(a4 + 40) & 0x20000000000000LL) == 0 )
    {
      if ( (*(_DWORD *)(a4 + 32) & 0x8000000) == 0 )
        goto LABEL_7;
      if ( a4 >= v10 && a4 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL )
      {
        v36 = (__int64)(a4 - v10) / 48;
        if ( v36 < qword_140E34930 || v36 >= qword_140E34930 + 2048 )
        {
          if ( (v16 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(a4) == 9 )
          {
            v17 = 5;
            goto LABEL_8;
          }
LABEL_7:
          v17 = HIBYTE(v16) & 7;
LABEL_8:
          if ( v14 < 6u )
          {
            if ( v17 < 5 )
            {
              v15 = 6;
              v14 = 6;
            }
            else if ( (*(_DWORD *)a5 & 1) != 0 )
            {
              v15 = ++v14;
            }
          }
          v18 = *(_BYTE *)(((*(__int64 *)(a4 + 40) >> 63) & 1) + a5 + 4);
          if ( !v18 )
            v18 = 7;
          if ( (*(_DWORD *)(v7 + 184) & 0xF) == 2
            && ((*(_QWORD *)(a4 + 40) >> 60) & 7) == 4
            && (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
            && (unsigned __int16)*(_DWORD *)(a4 + 32) == 1
            || (result = *(_DWORD *)a5, (*(_DWORD *)a5 & 3) != 0) && (v14 >= v18 || v17 < *(_DWORD *)(a5 + 8)) )
          {
            ++*(_QWORD *)(a5 + 32);
            v37 = *(_QWORD *)(a5 + 64);
            if ( !v37 )
            {
              MiAcquirePrcbAgeTrimLists(v7, (__int64 *)(a5 + 56));
              v37 = *(_QWORD *)(a5 + 64);
            }
            MiInsertTbFlushEntry(v37, a3, 1LL);
            result = *(_DWORD *)(v37 + 12);
            if ( *(_DWORD *)(v37 + 28) == result )
              return MiFreeWsleList(v7, v38, v37, 0LL);
          }
          else if ( v15 != 0xFF )
          {
            v20 = a5 + 80 * (v15 + 1LL);
            if ( !*(_BYTE *)(v20 + 72) )
            {
              *(_BYTE *)(v20 + 72) = 1;
              *(_QWORD *)(v20 + 64) = (__int64)((a2 << 25) - (v9 << 25)) >> 16;
            }
            v21 = ((unsigned int)a2 >> 3) & 0x1FF;
            v22 = (unsigned __int64)v21 >> 3;
            result = *(char *)(v22 + v20) | (1 << (v21 & 7));
            *(_BYTE *)(v22 + v20) = result;
            ++*(_QWORD *)(a5 + 16);
          }
          return result;
        }
      }
    }
    v17 = 5;
    goto LABEL_8;
  }
  BugCheckParameter4 = 0LL;
  if ( v14 != 7 )
  {
    v31 = *(_DWORD *)(a4 + 32);
    if ( (*(_QWORD *)(a4 + 40) & 0x20000000000000LL) == 0
      && ((*(_DWORD *)(a4 + 32) & 0x8000000) == 0
       || a4 >= v10
       && a4 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
       && !MiIsDecayPfn((__int64)(a4 - v10) / 48)
       && ((v31 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(a4) != 9)) )
    {
      v32 = v31 & 0x7000000;
      if ( (unsigned int)v32 < 0x5000000 )
      {
        v33 = BugCheckParameter4;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v33 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentThread, v11, v32) )
            {
              HvlNotifyLongSpinWait(v33);
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
  }
  v24 = BugCheckParameter4;
  LODWORD(v25) = BugCheckParameter4;
  v26 = 8;
  if ( (a6 & 2) != 0 )
  {
    v25 = *(_QWORD *)(a5 + 56);
    if ( !v25 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      MmInternal = (__int64 *)CurrentPrcb->MmInternal;
      if ( !MmInternal )
      {
        dword_141032C94 = 512;
        MmInternal = MxTempPrcb;
        dword_14102FE18 = 1;
      }
      v29 = *((unsigned int *)MmInternal + 85);
      if ( (_DWORD)v29 == *((_DWORD *)MmInternal + 86) )
        KeBugCheckEx(0x1Au, 0x440uLL, (ULONG_PTR)CurrentPrcb, (unsigned int)v29, BugCheckParameter4);
      v43 = &MmInternal[2575 * v29];
      v43[3070] = (__int64)KeGetCurrentThread();
      v44 = v43 + 496;
      ++*((_DWORD *)MmInternal + 85);
      v45 = v43 + 1013;
      *((_DWORD *)v43 + 994) = BugCheckParameter4;
      v43[499] = BugCheckParameter4;
      v43[500] = BugCheckParameter4;
      *((_DWORD *)v43 + 995) = 512;
      *(_OWORD *)(v43 + 1013) = 0LL;
      *(_OWORD *)(v43 + 1015) = 0LL;
      v43[1017] = 0LL;
      *((_DWORD *)v43 + 2029) = 512;
      *((_DWORD *)v43 + 996) = BugCheckParameter4;
      *((_DWORD *)v43 + 997) = 2;
      v43[496] = v7;
      *((_BYTE *)v43 + 3992) = (*(_DWORD *)(v7 + 184) & 0x40) != 0;
      if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v7 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        v46 = BugCheckParameter4;
        if ( (*(_DWORD *)(v7 + 184) & 0xF) == 0 )
          v46 = 1;
      }
      else
      {
        *((_DWORD *)v43 + 996) |= 9u;
        v46 = BugCheckParameter4;
      }
      *((_DWORD *)v44 + 4) &= 0xFFFFFFDB;
      *((_DWORD *)v44 + 2) = v46;
      *(_WORD *)((char *)v44 + 25) = 0;
      *((_DWORD *)v44 + 7) = BugCheckParameter4;
      v44[4] = BugCheckParameter4;
      v44[5] = BugCheckParameter4;
      *(_QWORD *)(a5 + 56) = v44;
      *((_DWORD *)v45 + 4) = 2;
      *((_DWORD *)v45 + 5) = 1;
      *v45 = v7;
      *((_BYTE *)v45 + 24) = (*(_DWORD *)(v7 + 184) & 0x40) != 0;
      if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v7 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        v47 = BugCheckParameter4;
        if ( (*(_DWORD *)(v7 + 184) & 0xF) == 0 )
          v47 = 1;
      }
      else
      {
        *((_DWORD *)v45 + 4) |= 9u;
        v47 = BugCheckParameter4;
      }
      *((_DWORD *)v45 + 4) &= 0xFFFFFFDB;
      *((_DWORD *)v45 + 2) = v47;
      *(_WORD *)((char *)v45 + 25) = 0;
      *((_DWORD *)v45 + 7) = BugCheckParameter4;
      v45[4] = BugCheckParameter4;
      v45[5] = BugCheckParameter4;
      *(_QWORD *)(a5 + 64) = v45;
      if ( *(_QWORD *)(a5 + 72) == 1LL )
        *(_QWORD *)(a5 + 72) = v44 + 1034;
      v25 = *(_QWORD *)(a5 + 56);
    }
    goto LABEL_105;
  }
  if ( (a6 & 4) != 0 )
  {
    v26 = 10;
LABEL_105:
    v24 = 1;
  }
  if ( (*(_DWORD *)(v7 + 184) & 0xF) == 1 )
    v48 = &MiSystemPartition;
  else
    v48 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v7 + 174));
  if ( v48[4539] )
    v26 |= 1u;
  result = MiClearPteAccessed(v7, a4, a2, v25, v26);
  if ( result )
  {
    ++*(_QWORD *)(a5 + 24);
    if ( !v24 || v14 == 1 || v14 >= 7u )
      return result;
    v49 = 1;
  }
  else
  {
    if ( (unsigned __int8)(v14 - 1) > 5u )
      return result;
    v49 = 0;
  }
  if ( a3 >= 0xFFFFF68000000000uLL && a3 <= 0xFFFFF6FFFFFFFFFFuLL )
    return MiSetVaAgeListEx(v7, a3, 1u, v49, 0);
  v50 = a5 + 80 * (v49 + 1LL);
  if ( !*(_BYTE *)(v50 + 72) )
  {
    *(_BYTE *)(v50 + 72) = 1;
    *(_QWORD *)(v50 + 64) = a2 << 25 >> 16;
  }
  v51 = ((unsigned int)a2 >> 3) & 0x1FF;
  v52 = (unsigned __int64)v51 >> 3;
  result = *(char *)(v52 + v50) | (1 << (v51 & 7));
  *(_BYTE *)(v52 + v50) = result;
  return result;
}
