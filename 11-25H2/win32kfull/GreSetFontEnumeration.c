/*
 * XREFs of GreSetFontEnumeration @ 0x140203D30
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetFontEnumeration(int a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ebx

  v2 = a1;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v4 = *(_DWORD *)(v3 + 20372);
  if ( (v2 & 4) != 0 )
  {
    v5 = v4 & 0x11;
    v6 = v2 & 2;
  }
  else if ( (v2 & 0x20) != 0 )
  {
    v5 = v4 & 3;
    v6 = v2 & 0x10;
  }
  else
  {
    v5 = v4 & 0x12;
    v6 = v2 & 1;
  }
  *(_DWORD *)(v3 + 20372) = v6 | v5;
  return v4;
}
