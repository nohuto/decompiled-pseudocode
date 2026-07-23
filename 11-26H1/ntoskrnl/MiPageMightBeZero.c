/*
 * XREFs of MiPageMightBeZero @ 0x140463D40
 * Callers:
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 */

_BOOL8 __fastcall MiPageMightBeZero(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi

  if ( *(__int64 *)(a2 + 40) < 0 )
  {
    if ( (*(__int64 *)(a2 + 8) <= 0 || (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0)
      && (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
    {
LABEL_5:
      if ( (unsigned __int16)*(_DWORD *)(a2 + 32) == 1 && (*(_DWORD *)(a2 + 32) & 0xC00000) == 0x400000 )
        return (*(_DWORD *)(a2 + 32) & 0x40000000) == 0;
    }
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 || (MiGetPagePrivilege((_QWORD *)a2, 0LL, 0LL) & 0xFFFFFFFD) != 0 )
    return 0LL;
  v5 = a3 << 25 >> 16;
  if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_5;
  return 0LL;
}
