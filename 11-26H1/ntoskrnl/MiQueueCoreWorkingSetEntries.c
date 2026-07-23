/*
 * XREFs of MiQueueCoreWorkingSetEntries @ 0x1402CC3A0
 * Callers:
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 * Callees:
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402C7EE0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 */

__int64 __fastcall MiQueueCoreWorkingSetEntries(__int64 a1, unsigned int a2, __int64 a3)
{
  char v5; // cl
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  __int16 v11; // ax
  __int64 result; // rax
  char v13; // cl

  v5 = *(_BYTE *)(a1 + 13);
  if ( (v5 & 9) != 8 || (v5 & 4) != 0 )
    return 0LL;
  v7 = *(unsigned __int16 *)(a1 + 10);
  if ( (_WORD)v7 )
  {
    if ( v7 + *(unsigned __int16 *)(a1 + 8) == ((a2 >> 3) & 0x1FF) )
    {
      if ( *(__int64 *)(a3 + 40) >= 0 )
      {
        if ( (*(_BYTE *)(a1 + 13) & 2) != 0 )
          goto LABEL_11;
        v8 = *(_QWORD *)a1;
        v9 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 8) << 12)
           + ((__int64)(*(_QWORD *)(a1 + 16) << 25) >> 16 << 25 >> 16);
        if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v10 = 5LL;
        }
        else
        {
          v10 = 4LL;
          if ( (*(_DWORD *)(v8 + 184) & 0xF) != 0 )
            v10 = 0LL;
        }
        goto LABEL_9;
      }
      if ( (*(_BYTE *)(a1 + 13) & 2) != 0 )
      {
        v8 = *(_QWORD *)a1;
        v9 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 8) << 12)
           + ((__int64)(*(_QWORD *)(a1 + 16) << 25) >> 16 << 25 >> 16);
        if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          MiAddWorkingSetEntries(v8, v9, *(unsigned __int16 *)(a1 + 10), 7LL);
          goto LABEL_10;
        }
        v10 = 6LL;
        if ( (*(_DWORD *)(v8 + 184) & 0xF) != 0 )
          v10 = 2LL;
LABEL_9:
        MiAddWorkingSetEntries(v8, v9, *(unsigned __int16 *)(a1 + 10), v10);
LABEL_10:
        *(_WORD *)(a1 + 10) = 0;
      }
    }
    else
    {
      MiEmptyDeferredWorkingSetEntries((__int64 *)a1);
    }
  }
LABEL_11:
  v11 = *(_WORD *)(a1 + 10);
  if ( v11 )
  {
    *(_WORD *)(a1 + 10) = v11 + 1;
    return 1LL;
  }
  else
  {
    *(_WORD *)(a1 + 10) = 1;
    *(_WORD *)(a1 + 8) = (a2 >> 3) & 0x1FF;
    v13 = *(_BYTE *)(a1 + 13) & 0xFD;
    if ( *(__int64 *)(a3 + 40) >= 0 )
      v13 = *(_BYTE *)(a1 + 13) | 2;
    result = 1LL;
    *(_BYTE *)(a1 + 13) = v13;
  }
  return result;
}
