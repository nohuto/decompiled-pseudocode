/*
 * XREFs of IsSysShadow @ 0x1400E0E50
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSysShadow(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 136);
  return **(_WORD **)(v2 + 8) == *(_WORD *)(W32GetUserSessionState(a1, a2) + 41326);
}
