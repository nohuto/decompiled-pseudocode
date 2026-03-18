/*
 * XREFs of MiLockPageListAndLastPage @ 0x14029B840
 * Callers:
 *     MiInsertPageLockStandbyList @ 0x1402DEE20 (MiInsertPageLockStandbyList.c)
 *     MiInsertPageLockModifiedList @ 0x14051E9C8 (MiInsertPageLockModifiedList.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __fastcall MiLockPageListAndLastPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  volatile LONG *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r15
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  volatile LONG *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx

  v3 = a1 + 40;
  v4 = a2;
  v6 = (volatile LONG *)(a1 + 32);
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0x3FuLL) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 8);
        if ( v7 != 0x3FFFFFFFFFLL )
          break;
        ExAcquireSpinLockSharedAtDpcLevel(v6);
        if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFLL )
          goto LABEL_13;
        ExReleaseSpinLockSharedFromDpcLevel(v6);
        v6 = (volatile LONG *)(a1 + 32);
      }
      v8 = 48 * v7 - 0x220000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
        break;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        _m_prefetchw((const void *)v6);
        v9 = *v6 & 0x7FFFFFFF;
        while ( 1 )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange(v6, v9 + 1, v9);
          if ( v10 == v9 )
            break;
          if ( v9 < 0 )
          {
            LOBYTE(a2) = -1;
            ExpWaitForSpinLockSharedAndAcquire(v6, a2);
            break;
          }
        }
      }
      else
      {
        LOBYTE(a2) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v6, a2);
      }
      if ( v7 == *(_QWORD *)(a1 + 8) )
      {
        if ( 48 * v7 == 0x220000000000LL )
        {
LABEL_13:
          *(_QWORD *)(v4 + 16) = v3;
          *(_QWORD *)(v4 + 8) = 0x3FFFFFFFFFLL;
        }
        else
        {
          *(_QWORD *)(v4 + 16) = v8;
          *(_QWORD *)(v4 + 8) = v7;
          *(_BYTE *)(v4 + 48) = 1;
        }
        *(_QWORD *)(v4 + 32) = 0x3FFFFFFFFFLL;
        *(_QWORD *)(v4 + 40) = v3;
        *(_BYTE *)(v4 + 24) = 1;
        *(_BYTE *)v4 = 1;
        return;
      }
      ExReleaseSpinLockSharedFromDpcLevel(v6);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( *(_BYTE *)(v4 + 24) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v4 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    *(_BYTE *)(v4 + 24) = 0;
  }
  v11 = v6;
  if ( *(_BYTE *)(v4 + 48) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v4 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    *(_BYTE *)(v4 + 48) = 0;
    v11 = (volatile LONG *)(a1 + 32);
  }
  if ( *(_BYTE *)(v4 + 72) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v4 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    *(_BYTE *)(v4 + 72) = 0;
    v6 = v11;
  }
  if ( *(_BYTE *)(v4 + 96) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v4 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    *(_BYTE *)(v4 + 96) = 0;
  }
  *(_BYTE *)v4 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v12 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire((int *)v6, 0xFFu);
    v13 = *(unsigned int *)v6;
    v14 = v13 & 0xFFFFFFFFBFFFFFFFuLL;
    if ( (v13 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v13 & 0x40000000) == 0 )
          _InterlockedOr(v6, 0x40000000u);
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, v13, a3) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
        v13 = *(unsigned int *)v6;
      }
      while ( (*v6 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)v6, 0xFFu);
  }
}
