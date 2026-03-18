/*
 * XREFs of AlpcpLocateMessageLog @ 0x140B407C8
 * Callers:
 *     AlpcpEnterFreeEventMessageLog @ 0x140B40710 (AlpcpEnterFreeEventMessageLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpLocateMessageLog(unsigned int a1)
{
  unsigned __int64 v2; // rax
  __int64 i; // rcx

  if ( AlpcpMessageLogLock.ThreadLock )
  {
    v2 = AlpcpMessageLogLock.ThreadLock + 16LL * ((a1 >> 2) & 0x3FF);
    for ( i = *(_QWORD *)(v2 + 8); i != v2; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)(i + 28) && *(_DWORD *)(i + 24) == a1 )
        return i - 16;
    }
  }
  return 0LL;
}
