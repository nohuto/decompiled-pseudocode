/*
 * XREFs of QueryTrackMouseEvent @ 0x1401A5E58
 * Callers:
 *     NtUserTrackMouseEvent @ 0x1401A5BD0 (NtUserTrackMouseEvent.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall QueryTrackMouseEvent(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // r9
  __int64 v4; // r8

  v3 = PtiCurrent(a1, a2);
  v4 = *((_QWORD *)v3 + 62);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 24;
  if ( (*(_DWORD *)(v4 + 48) & 0xC0) != 0
    && *((_QWORD *)v3 + 59) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL) + 472LL) )
  {
    if ( *(_DWORD *)(v4 + 200) != 1 )
      *(_DWORD *)(a1 + 4) |= 0x10u;
    if ( (*(_DWORD *)(v4 + 48) & 0x80u) != 0 )
      *(_DWORD *)(a1 + 4) |= 2u;
    if ( (*(_DWORD *)(v4 + 48) & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 4) |= 1u;
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(v4 + 220);
    }
    *(_QWORD *)(a1 + 8) = **(_QWORD **)(v4 + 192);
  }
  return 1LL;
}
