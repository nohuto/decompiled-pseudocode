/*
 * XREFs of PpDevCfgTraceDeviceStart @ 0x1409AF290
 * Callers:
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 * Callees:
 *     PiDevCfgLogDeviceStarted @ 0x140AE9900 (PiDevCfgLogDeviceStarted.c)
 */

void __fastcall PpDevCfgTraceDeviceStart(_DWORD *a1, char a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  bool v10; // zf
  int v11; // eax

  v2 = a1[75];
  if ( a2 )
  {
    if ( v2 == 778 )
      goto LABEL_11;
  }
  else
  {
    v3 = v2 - 771;
    if ( v3
      && (v4 = v3 - 1) != 0
      && (v5 = v4 - 1) != 0
      && (v6 = v5 - 1) != 0
      && (v7 = v6 - 1) != 0
      && (v8 = v7 - 1) != 0
      && (v9 = v8 - 1) != 0 )
    {
      if ( v9 == 1 || (a1[99] & 0x2000) == 0 )
        goto LABEL_11;
      v11 = a1[101];
      if ( v11 == 56 )
        return;
      v10 = v11 == 21;
    }
    else
    {
      v10 = (a1[99] & 0x6000) == 0;
    }
    if ( !v10 )
    {
LABEL_11:
      a1[176] &= ~1u;
      PiDevCfgLogDeviceStarted();
    }
  }
}
