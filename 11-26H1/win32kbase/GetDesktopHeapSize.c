/*
 * XREFs of GetDesktopHeapSize @ 0x1401C3E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDesktopHeapSize(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // eax

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        v5 = *(_DWORD *)(W32GetUserSessionState(1, a2, a3) + 62924);
      else
        v5 = *(_DWORD *)(W32GetUserSessionState(v4, a2, a3) + 62920);
    }
    else
    {
      v5 = 96;
    }
  }
  else
  {
    v5 = 192;
  }
  return (unsigned int)(v5 << 10);
}
