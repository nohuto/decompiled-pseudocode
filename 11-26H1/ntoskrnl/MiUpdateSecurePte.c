/*
 * XREFs of MiUpdateSecurePte @ 0x1404AA50C
 * Callers:
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiUpdateSecurePte(struct _LIST_ENTRY *BugCheckParameter2, __int16 a2, _QWORD *a3)
{
  unsigned __int64 result; // rax
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  result = MiGetPagePrivilege(a3, 2LL, (unsigned __int64)&v7);
  if ( (_DWORD)result )
  {
    result = KeSetPagePrivilege(
               (__int64)(a3 + 0x44000000000LL) / 48,
               BugCheckParameter2,
               &v7,
               ~(a2 << 6) & 0x800 | 0x200u);
    if ( (_DWORD)result == -2147483595 )
    {
      if ( (__int64)a3[5] >= 0
        || BugCheckParameter2 < stru_140E2D2D0.MutantListHead.Blink
        || (result = *(_QWORD *)&stru_140E2D2D0.AbWaitEntryCount,
            (unsigned __int64)BugCheckParameter2 >= *(_QWORD *)&stru_140E2D2D0.AbWaitEntryCount) )
      {
        KeBugCheckEx(0x1Au, 0x51517uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
      }
    }
    else if ( (result & 0x80000000) != 0LL )
    {
      KeBugCheckEx(0x1Au, 0x51510uLL, (ULONG_PTR)a3, (int)result, 0LL);
    }
  }
  return result;
}
