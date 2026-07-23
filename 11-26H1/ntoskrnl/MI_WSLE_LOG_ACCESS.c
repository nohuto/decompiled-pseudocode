/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x14035F944
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x14029B748 (MiEmptyWorkingSetHelper.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiEmptyPte @ 0x14035F400 (MiEmptyPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimViewLeafPte @ 0x1404658E4 (MiTrimViewLeafPte.c)
 *     MiProtectPagedPool @ 0x1404B1CD4 (MiProtectPagedPool.c)
 *     MiDiscardPte @ 0x1406F3B70 (MiDiscardPte.c)
 *     MiTrimPoisonedPage @ 0x14070488C (MiTrimPoisonedPage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 */

unsigned __int64 __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx

  LODWORD(v5) = -1;
  v6 = (__int64)(a2 << 25) >> 16;
  v7 = 0xFFFFF6FB7DBED000uLL;
  v8 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    a3 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = *(_QWORD *)a3;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( a3 <= 0xFFFFF6FB7DBED7F8uLL && (v9 & 1) != 0 && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        result = (unsigned __int64)MiPteHasShadow();
        if ( result )
        {
          result = *(_QWORD *)(result + 1288);
          if ( result )
          {
            a3 = (a3 >> 3) & 0x1FF;
            result = *(_QWORD *)(result + 8 * a3);
            if ( (result & 0x20) != 0 )
              v14 |= 0x20uLL;
            v9 = v14 | 0x42;
            if ( (result & 0x42) == 0 )
              v9 = v14;
          }
        }
      }
    }
    v5 = HIBYTE(v9) & 0xF;
    if ( (_DWORD)v5 == 7 )
      return result;
  }
  v11 = *(_QWORD *)a2;
  result = v7;
  if ( a2 >= v7 )
  {
    result = v8;
    if ( a2 <= v8 )
    {
      a3 = *(_QWORD *)a2;
      if ( (v11 & 1) != 0 && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        result = (unsigned __int64)MiPteHasShadow();
        if ( result )
        {
          v15 = *(_QWORD *)(result + 1288);
          if ( v15 )
          {
            result = *(_QWORD *)(v15 + 8 * ((a2 >> 3) & 0x1FF));
            if ( (result & 0x20) != 0 )
              a3 |= 0x20uLL;
            v11 = a3 | 0x42;
            if ( (result & 0x42) == 0 )
              v11 = a3;
          }
        }
      }
    }
  }
  if ( (v11 & 0x20) == 0 )
    return result;
  v12 = *(_DWORD *)(a1 + 184);
  if ( (v12 & 0xF) != 0 )
  {
    if ( !_bittest64(&MiFlags, 0x26u) )
      return (unsigned __int64)MiLogPageAccess(a1, a2, a3);
    v13 = (v12 & 0x40) == 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 624) )
      goto LABEL_14;
    v13 = (*(_QWORD *)(a1 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( v13 )
    return (unsigned __int64)MiLogPageAccess(a1, a2, a3);
LABEL_14:
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    result = MiGetPagePrivilege((_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL);
    if ( (result & 0x41) == 0 )
      return (unsigned __int64)MiLogPageAccess(a1, a2, a3);
  }
  else
  {
    result = 0x7FFFFFFF0000LL;
    if ( v6 >= 0x7FFFFFFF0000LL )
      return (unsigned __int64)MiLogPageAccess(a1, a2, a3);
    if ( !*(_QWORD *)(a1 + 624) )
    {
      result = MiGetPagePrivilege((_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL);
      if ( !(_DWORD)result || (*(_BYTE *)(a1 - 656) & 1) == 0 && (result & 8) != 0 )
        return (unsigned __int64)MiLogPageAccess(a1, a2, a3);
    }
  }
  if ( !(_DWORD)v5 )
    return (unsigned __int64)MiLogPageAccess(a1, a2, a3);
  return result;
}
