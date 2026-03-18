/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x14035DBA4
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x14029C1E8 (MiEmptyWorkingSetHelper.c)
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035CA40 (MiTrimUnlockedVirtualAddreses.c)
 *     MiEmptyPte @ 0x14035D660 (MiEmptyPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140442198 (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimViewLeafPte @ 0x14046C164 (MiTrimViewLeafPte.c)
 *     MiProtectPagedPool @ 0x1404B84A4 (MiProtectPagedPool.c)
 *     MiDiscardPte @ 0x1406EEED0 (MiDiscardPte.c)
 *     MiTrimPoisonedPage @ 0x1406FFBBC (MiTrimPoisonedPage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 */

unsigned __int64 __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 *v8; // r8
  unsigned __int64 v9; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  __int64 v17; // rcx

  LODWORD(v4) = -1;
  v5 = (__int64)(a2 << 25) >> 16;
  v6 = 0xFFFFF6FB7DBED000uLL;
  v7 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v9 = *v8;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL && (v9 & 1) != 0 && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        result = (unsigned __int64)MiPteHasShadow();
        if ( result )
        {
          result = *(_QWORD *)(result + 1288);
          if ( result )
          {
            result = *(_QWORD *)(result + 8 * ((v15 >> 3) & 0x1FF));
            if ( (result & 0x20) != 0 )
              v14 |= 0x20uLL;
            v9 = v14 | 0x42;
            if ( (result & 0x42) == 0 )
              v9 = v14;
          }
        }
      }
    }
    v4 = HIBYTE(v9) & 0xF;
    if ( (_DWORD)v4 == 7 )
      return result;
  }
  v11 = *(_QWORD *)a2;
  result = v6;
  if ( a2 >= v6 )
  {
    result = v7;
    if ( a2 <= v7 && (v11 & 1) != 0 && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      result = (unsigned __int64)MiPteHasShadow();
      if ( result )
      {
        v17 = *(_QWORD *)(result + 1288);
        if ( v17 )
        {
          result = *(_QWORD *)(v17 + 8 * ((a2 >> 3) & 0x1FF));
          if ( (result & 0x20) != 0 )
            v16 |= 0x20uLL;
          v11 = v16 | 0x42;
          if ( (result & 0x42) == 0 )
            v11 = v16;
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
      return (unsigned __int64)MiLogPageAccess(a1, a2);
    v13 = (v12 & 0x40) == 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 624) )
      goto LABEL_14;
    v13 = (*(_QWORD *)(a1 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( v13 )
    return (unsigned __int64)MiLogPageAccess(a1, a2);
LABEL_14:
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
    result = MiGetPagePrivilege((_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL);
    if ( (result & 0x41) == 0 )
      return (unsigned __int64)MiLogPageAccess(a1, a2);
  }
  else
  {
    result = 0x7FFFFFFF0000LL;
    if ( v5 >= 0x7FFFFFFF0000LL )
      return (unsigned __int64)MiLogPageAccess(a1, a2);
    if ( !*(_QWORD *)(a1 + 624) )
    {
      result = MiGetPagePrivilege((_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL);
      if ( !(_DWORD)result || (*(_BYTE *)(a1 - 656) & 1) == 0 && (result & 8) != 0 )
        return (unsigned __int64)MiLogPageAccess(a1, a2);
    }
  }
  if ( !(_DWORD)v4 )
    return (unsigned __int64)MiLogPageAccess(a1, a2);
  return result;
}
