/*
 * XREFs of RtlDestroyAtomTable @ 0x180112120
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180001750 (RtlpLockAtomTable.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlDestroyHandleTable @ 0x18010D280 (RtlDestroyHandleTable.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  unsigned int v3; // ebp
  _QWORD **i; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) == 1 )
  {
    if ( !RtlpLockAtomTable((__int64)AtomTableHandle) )
      return -1073741811;
    v3 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 72); v3 < *((_DWORD *)AtomTableHandle + 16); ++v3 )
    {
      v5 = *i;
      *i++ = 0LL;
      if ( v5 )
      {
        do
        {
          v6 = (_QWORD *)*v5;
          *v5 = 0LL;
          RtlpSysVolFree(v5);
          v5 = v6;
        }
        while ( v6 );
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    RtlDestroyHandleTable((PRTL_HANDLE_TABLE)((char *)AtomTableHandle + 16));
    memset_thunk_772440563353939046(AtomTableHandle, 0, 0x50uLL);
    RtlpSysVolFree(AtomTableHandle);
  }
  return 0;
}
