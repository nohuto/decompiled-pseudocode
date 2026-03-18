/*
 * XREFs of ExFastReferenceHandleTableEntry @ 0x1403F3A50
 * Callers:
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExFastReferenceHandleTableEntry(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rbx
  __int128 v7; // rt0
  unsigned __int8 v8; // tt
  unsigned __int64 v9; // rcx
  __int64 result; // rax

  _m_prefetchw(a2);
  *a3 = *a2;
  a3[1] = a2[1];
  do
  {
    while ( 1 )
    {
      v6 = *a3;
      if ( (*a3 & 0x1FFFE) == 0 )
        return 0xFFFFFFFFLL;
      if ( (v6 & 1) != 0 )
        break;
      ExpBlockOnLockedHandleEntry(a1, a2, *a3);
      _m_prefetchw(a2);
      *a3 = *a2;
      a3[1] = a2[1];
    }
    v7 = *(_OWORD *)a3;
    v8 = _InterlockedCompareExchange128(a2, *((signed __int64 *)&v7 + 1), v6 - 2, (signed __int64 *)&v7);
    *(_OWORD *)a3 = v7;
  }
  while ( !v8 );
  v9 = *a3 >> 1;
  if ( (_WORD)v9 != 16 )
    return 0LL;
  result = 32752LL;
  *a3 = (2 * v9 - 2) ^ (*a3 ^ (2 * v9 - 2)) & 0xFFFFFFFFFFFE0001uLL;
  return result;
}
