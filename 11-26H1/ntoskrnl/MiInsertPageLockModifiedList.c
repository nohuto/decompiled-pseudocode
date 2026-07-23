/*
 * XREFs of MiInsertPageLockModifiedList @ 0x140520FD8
 * Callers:
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiDetermineModifiedPageListHead @ 0x140297EF0 (MiDetermineModifiedPageListHead.c)
 *     MiLockPageListAndLastPage @ 0x14029ADA0 (MiLockPageListAndLastPage.c)
 */

unsigned __int64 __fastcall MiInsertPageLockModifiedList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  volatile signed __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  v6 = (volatile signed __int64 *)(v4 + 7616);
  if ( *(__int64 *)(a2 + 40) >= 0 )
    v6 = (volatile signed __int64 *)(v4 + 16704);
  _InterlockedIncrement64(v6);
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 23248));
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    v10 = *(unsigned int *)(v4 + 1124);
    v9 = v4 + 88 * v10 + 6016;
    if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
      MiLockPageListAndLastPage(v4 + 88 * v10 + 6016, a1 + 32, a3);
    *(_BYTE *)(a2 + 36) ^= (v10 ^ *(_BYTE *)(a2 + 36)) & 0xF;
  }
  else
  {
    v7 = MiDetermineModifiedPageListHead(a2, v4, (*(_DWORD *)(a1 + 4) & 0x80) == 0);
    v9 = v7;
    if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
      MiLockPageListAndLastPage(v7, a1 + 32, v8);
    if ( !*(_QWORD *)(v9 + 16) )
      *(_DWORD *)a1 |= 2u;
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 23456));
  }
  *(_QWORD *)(a1 + 24) = v9;
  _InterlockedIncrement((volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].AvailableCpuState);
  result = MiSufficientAvailablePages(v4, 0x420uLL);
  if ( !(_DWORD)result )
  {
    v12 = *(_QWORD *)(v4 + 23456);
    if ( v12 >= 0x10 )
      *(_DWORD *)a1 |= 0x10u;
    result = *(_QWORD *)(v4 + 23248) - v12;
    if ( result >= 0x10 )
      *(_DWORD *)a1 |= 0x20u;
  }
  return result;
}
