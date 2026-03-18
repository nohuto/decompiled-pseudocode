/*
 * XREFs of ?bEmbedOk@PFEOBJ@@QEAAHXZ @ 0x1400CA1B0
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400C8780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::bEmbedOk(PFEOBJ *this)
{
  unsigned int v1; // edi
  __int64 v2; // rbx

  v1 = 0;
  v2 = *(_QWORD *)(**(_QWORD **)this + 152LL);
  if ( !v2 )
    return 0LL;
  do
  {
    if ( (*(_DWORD *)(v2 + 8) & 4) != 0 && *(_DWORD *)(v2 + 12) == (unsigned int)PsGetCurrentThreadId() )
      break;
    if ( *(_DWORD *)(v2 + 12) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      break;
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  if ( !v2 )
    return 0LL;
  LOBYTE(v1) = (*(_DWORD *)(v2 + 8) & 0xC) != 0;
  return v1;
}
