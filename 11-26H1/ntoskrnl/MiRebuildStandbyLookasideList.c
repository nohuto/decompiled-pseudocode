/*
 * XREFs of MiRebuildStandbyLookasideList @ 0x1402AD184
 * Callers:
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiInsertPageLockStandbyList @ 0x1402C0C30 (MiInsertPageLockStandbyList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiSkipStandbyEntries @ 0x1402AD440 (MiSkipStandbyEntries.c)
 *     MiClearEntireStandbyLookasideList @ 0x1402AD660 (MiClearEntireStandbyLookasideList.c)
 *     MiWriteStandbyLookasideEntry @ 0x1402AD730 (MiWriteStandbyLookasideEntry.c)
 *     MiGetStandbyPageType @ 0x1402ADC40 (MiGetStandbyPageType.c)
 *     MiPfnToStandbyLookaside @ 0x1402ADD70 (MiPfnToStandbyLookaside.c)
 *     MiGetStandbyLookaside @ 0x1402AE120 (MiGetStandbyLookaside.c)
 */

__int64 __fastcall MiRebuildStandbyLookasideList(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rcx
  int StandbyPageType; // r14d
  unsigned int v13; // r15d
  __int64 v14; // rdi
  __int64 i; // rdx
  bool v16; // zf
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+40h] [rbp-48h]
  __int128 v19; // [rsp+50h] [rbp-38h]
  int v20; // [rsp+A0h] [rbp+18h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v5 = (__int64)((unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  MiPfnToStandbyLookaside((v5 >> 63) + v5);
  result = MiGetStandbyLookaside(&v17, a2);
  v8 = result;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v9 = MEMORY[0xE48];
    }
    else
    {
      result = v18;
      v9 = *(_QWORD *)(v18 + 8);
    }
  }
  else
  {
    v9 = MEMORY[0xE40];
  }
  if ( a3 || (result = *(_QWORD *)(v8 + 504), result == -1) )
  {
    if ( v9 != 0x3FFFFFFFFFLL )
    {
      v10 = 0LL;
      v20 = MiClearEntireStandbyLookasideList(v7, v8, a2);
      if ( a2 )
        StandbyPageType = 0;
      else
        StandbyPageType = MiGetStandbyPageType(v9);
      v13 = 1;
      while ( 1 )
      {
        result = *(_QWORD *)(v8 + 8 * v10);
        if ( result != -1 )
          break;
        result = MiSkipStandbyEntries(v11, v9, StandbyPageType, a2, v13);
        v9 = result;
        if ( result == 0x3FFFFFFFFFLL )
          return result;
        v14 = 48 * result - 0x220000000000LL;
        if ( a2 )
          StandbyPageType = 0;
        else
          StandbyPageType = MiGetStandbyPageType(result);
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
LABEL_30:
          v13 = 1;
        }
        else
        {
          if ( !v20 )
          {
            for ( i = 0LL; (unsigned int)i < 0x40; i = (unsigned int)(i + 1) )
            {
              v11 = *(_QWORD *)(v8 + 8 * i);
              if ( v11 == v9 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_30;
              }
            }
          }
          MiWriteStandbyLookasideEntry(v8 + 8 * v10, a2, v9);
          result = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)v10 == 63 )
            return result;
          if ( a2 )
          {
            if ( a2 == 1 )
              v9 = *(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFLL;
            else
              v9 = (*(_QWORD *)(v14 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v14 + 36) & 0x1FFFFF) << 19);
            result = 1LL;
          }
          else
          {
            v9 = *(_QWORD *)v14 & 0xFFFFFFFFFFLL;
            result = 1LL;
            v13 = 16;
          }
          v10 = (unsigned int)(v10 + 1);
          v16 = v9 == 0x3FFFFFFFFFLL;
LABEL_25:
          if ( v16 )
            return result;
        }
      }
      v10 = (unsigned int)(v10 + 1);
      v16 = (_DWORD)v10 == 64;
      goto LABEL_25;
    }
  }
  return result;
}
