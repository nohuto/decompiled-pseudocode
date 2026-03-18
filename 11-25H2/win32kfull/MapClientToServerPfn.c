/*
 * XREFs of MapClientToServerPfn @ 0x1401A71D4
 * Callers:
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 *     xxxSetClassData @ 0x1400C2294 (xxxSetClassData.c)
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapClientToServerPfn(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx

  v3 = 666;
  v4 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 584LL);
  while ( v3 <= 672 )
  {
    if ( v3 != 666 && *v4 == a1 )
      return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872) + 8LL * ((v3 & 0xFFFF2FFF) - 666) + 272);
    ++v3;
    ++v4;
  }
  v3 = 666;
  v5 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872) + 392LL);
  while ( v3 <= 672 )
  {
    if ( v3 != 666 && *v5 == a1 )
      return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872) + 8LL * ((v3 & 0xFFFF2FFF) - 666) + 272);
    ++v3;
    ++v5;
  }
  return 0LL;
}
