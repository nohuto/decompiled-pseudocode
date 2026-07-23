/*
 * XREFs of MiConvertLargePfnToSmall @ 0x140206E20
 * Callers:
 *     MiConvertActiveLargePageToSmall @ 0x140206C98 (MiConvertActiveLargePageToSmall.c)
 *     MiInitializeMdlSinglePage @ 0x14033DBB8 (MiInitializeMdlSinglePage.c)
 *     MiConvertLargeFreePageToActive @ 0x1404C8DD8 (MiConvertLargeFreePageToActive.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiConvertLargePfnToSmall(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r11
  int v6; // r10d
  __int64 result; // rax

  v4 = a2;
  if ( (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(a2 + 32) &= 0xF8FFFFFF;
  v6 = *(_DWORD *)(a2 + 32);
  if ( (v6 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(a2)
    && (v6 & 0x100000) == 0
    && (*(_DWORD *)(v4 + 16) & 8) != 0 )
  {
    *(_QWORD *)(v4 + 16) &= ~8uLL;
  }
  *(_DWORD *)(v4 + 32) = v6 & 0xFFEFFFFF;
  if ( v4 == a1 )
  {
    if ( (*(_QWORD *)(v4 + 40) & 0x20000000000LL) != 0 )
      *(_QWORD *)(v4 + 40) &= ~0x20000000000uLL;
  }
  else
  {
    *(_DWORD *)(v4 + 32) = (*(unsigned __int8 *)(a1 + 34) << 16) ^ ((*(unsigned __int8 *)(a1 + 34) << 16) ^ *(_DWORD *)(v4 + 32)) & 0xFFF8FFFF;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a1 + 16);
  }
  if ( (*(_QWORD *)(v4 + 40) & 0x20000000000LL) != 0 )
    *(_QWORD *)(v4 + 40) &= ~0x20000000000uLL;
  *(_QWORD *)(v4 + 40) &= ~0x10000000000uLL;
  result = *(_DWORD *)(v4 + 36) & 0xE7FFFFFF;
  *(_DWORD *)(v4 + 36) = result;
  if ( (a3 & 4) != 0 )
  {
    if ( v4 != a1 )
    {
      *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
      result = *(_DWORD *)(v4 + 32) & 0xFFFF0000;
      *(_DWORD *)(v4 + 32) = result;
    }
  }
  else if ( (a3 & 1) != 0 )
  {
    *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
    result = (*(_DWORD *)(v4 + 32) - 2) ^ ((*(_DWORD *)(v4 + 32) - 2) ^ *(_DWORD *)(v4 + 32)) & 0xFFFF0000;
    *(_DWORD *)(v4 + 32) = result;
  }
  return result;
}
