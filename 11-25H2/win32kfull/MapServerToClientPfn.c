/*
 * XREFs of MapServerToClientPfn @ 0x14026D5A8
 * Callers:
 *     _GetClassInfoEx @ 0x140034694 (_GetClassInfoEx.c)
 *     xxxSetClassData @ 0x1400C2294 (xxxSetClassData.c)
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapServerToClientPfn(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rsi
  int i; // ebx
  __int64 v5; // rax

  v2 = a2;
  v3 = a1;
  for ( i = 666; ; ++i )
  {
    if ( i > 672 )
      return 0LL;
    if ( i != 666 )
    {
      a1 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
      if ( v3 == *(_QWORD *)(a1 + 8LL * ((i & 0xFFFF2FFF) - 666) + 272) )
        break;
    }
  }
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  if ( v2 )
    return *(_QWORD *)(v5 + 8LL * i - 4936);
  else
    return *(_QWORD *)(v5 + 8LL * i - 4744);
}
