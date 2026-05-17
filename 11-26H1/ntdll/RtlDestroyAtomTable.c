/*
 * XREFs of RtlDestroyAtomTable @ 0x180112670
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180037A80 (RtlpLockAtomTable.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlDestroyHandleTable @ 0x18010D730 (RtlDestroyHandleTable.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlDestroyAtomTable(char *a1)
{
  unsigned int v3; // ebp
  _QWORD **i; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) == 1 )
  {
    if ( !RtlpLockAtomTable(a1) )
      return 3221225485LL;
    v3 = 0;
    for ( i = (_QWORD **)(a1 + 72); v3 < *((_DWORD *)a1 + 16); ++v3 )
    {
      v5 = *i;
      *i++ = 0LL;
      if ( v5 )
      {
        do
        {
          v6 = (_QWORD *)*v5;
          *v5 = 0LL;
          RtlpSysVolFree((__int64)v5);
          v5 = v6;
        }
        while ( v6 );
      }
    }
    *(_DWORD *)a1 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1 + 1);
    RtlDestroyHandleTable((__int64)(a1 + 16));
    memset_thunk_772440563353939046(a1, 0, 0x50uLL);
    RtlpSysVolFree((__int64)a1);
  }
  return 0LL;
}
