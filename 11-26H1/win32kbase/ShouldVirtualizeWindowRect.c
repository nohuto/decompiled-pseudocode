/*
 * XREFs of ShouldVirtualizeWindowRect @ 0x1401AADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall ShouldVirtualizeWindowRect(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  char v4; // bl

  v2 = a2;
  v4 = 0;
  if ( a1 && (*(_BYTE *)(*((_QWORD *)PtiCurrent(a1, a2) + 64) + 224LL) & 0x20) == 0 )
    return (((unsigned __int16)(v2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8)) & 0x1FF) != 0;
  return v4;
}
