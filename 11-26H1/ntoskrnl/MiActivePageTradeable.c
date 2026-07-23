/*
 * XREFs of MiActivePageTradeable @ 0x140295414
 * Callers:
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 */

_BOOL8 __fastcall MiActivePageTradeable(ULONG_PTR a1, unsigned __int64 a2, int a3, char a4)
{
  int v7; // ebx
  _BOOL8 result; // rax

  result = 0;
  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && (unsigned __int16)*(_DWORD *)(a1 + 32) == 1 )
  {
    if ( a3 != 2 )
      return 1;
    v7 = MiFlags;
    if ( ((MiFlags & 0x10000) == 0 || !(unsigned int)MiGetPagePrivilege(a1))
      && ((*(_QWORD *)&v7 & 0x80000LL) == 0 || !(unsigned int)MiGetPagePrivilege(a1))
      && ((*(_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x42) == 0 || (a4 & 2) != 0) )
    {
      return 1;
    }
  }
  return result;
}
