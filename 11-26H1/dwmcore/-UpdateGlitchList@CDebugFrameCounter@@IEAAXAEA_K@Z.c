/*
 * XREFs of ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x18022F8A4
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDebugFrameCounter::UpdateGlitchList(CDebugFrameCounter *this, unsigned __int64 *a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  unsigned int v4; // r9d
  unsigned __int64 v5; // r11

  v2 = *((_DWORD *)this + 1036);
  v3 = *((_DWORD *)this + 1037);
  if ( v2 != v3 )
  {
    v4 = *((_DWORD *)this + 1036);
    v5 = *a2 - 10000000;
    do
    {
      if ( *((_QWORD *)this + v4 + 519) >= v5 )
        break;
      v2 = (v2 + 1) % 0x3C;
      *((_DWORD *)this + 1036) = v2;
      v4 = v2;
    }
    while ( v2 != v3 );
  }
}
