/*
 * XREFs of TouchTargetingDownrank @ 0x1401C1FB8
 * Callers:
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1401C1E94 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     _TTHmToPixels @ 0x1401C1E58 (_TTHmToPixels.c)
 */

__int64 __fastcall TouchTargetingDownrank(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // ecx
  int v7; // eax
  int v8; // ecx

  v2 = *(_DWORD *)(a1 + 184);
  v3 = *(_DWORD *)(a1 + 188);
  if ( a2 == 1 )
  {
    if ( v2 >= v3 )
      v2 = *(_DWORD *)(a1 + 188);
    v4 = TTHmToPixels(600, v2);
    v5 = 40;
    if ( v4 > 40 )
      return (unsigned int)v4;
    return v5;
  }
  else
  {
    if ( v2 >= v3 )
      v2 = *(_DWORD *)(a1 + 188);
    v7 = TTHmToPixels(200, v2);
    v8 = -v7;
    if ( v7 > 0 )
      v8 = v7;
    if ( v8 > 20 )
      LOWORD(v8) = 20;
    return (unsigned __int16)v8;
  }
}
