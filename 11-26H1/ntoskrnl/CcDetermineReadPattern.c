/*
 * XREFs of CcDetermineReadPattern @ 0x140471EF8
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcDetermineReadPattern(__int64 a1, int *a2)
{
  int v3; // r8d
  int v4; // r8d
  int v5; // edx
  int v6; // edx
  __int64 result; // rax

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
  if ( (v3 & 0x20) != 0 )
    return 1LL;
  if ( (v3 & 0x100000) != 0 )
    return 0LL;
  if ( a2[1] == *(_DWORD *)(a1 + 44) )
  {
    v4 = *a2;
    v5 = *(_DWORD *)(a1 + 40);
    if ( ((unsigned int)(*a2 - v5) <= 0x200 || (unsigned int)(v5 - v4) <= 0x200)
      && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a1 + 36) )
    {
      v6 = *(_DWORD *)(a1 + 32);
      if ( (unsigned int)(*(_DWORD *)(a1 + 24) - v6) <= 0x200 || (unsigned int)(v6 - *(_DWORD *)(a1 + 24)) <= 0x200 )
        return 2LL;
    }
  }
  result = 0LL;
  if ( *(_QWORD *)a2 - *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16) )
    return 3LL;
  return result;
}
