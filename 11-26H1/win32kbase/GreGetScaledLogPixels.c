/*
 * XREFs of GreGetScaledLogPixels @ 0x14013A7E0
 * Callers:
 *     DxgkEngGetWindowGdiDpiScalingFactor @ 0x14013A740 (DxgkEngGetWindowGdiDpiScalingFactor.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall GreGetScaledLogPixels(__int64 a1)
{
  int v1; // ebx

  v1 = (unsigned __int16)a1;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 104LL) )
    return v1;
  else
    return 96 * ((v1 + 95) / 0x60u);
}
