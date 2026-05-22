/*
 * XREFs of ?TransitionZoomTypes@ManipulationInjector@@AEAAXXZ @ 0x180115844
 * Callers:
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x180115110 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::TransitionZoomTypes(ManipulationInjector *this)
{
  int v2; // edi
  const char *v3; // rdx

  v2 = 32;
  if ( *((_DWORD *)this + 22) != 16 )
    v2 = 16;
  if ( *((_BYTE *)this + 13) )
  {
    v3 = "Increasing";
    if ( *((_DWORD *)this + 22) == 16 )
      v3 = "Decreasing";
    DbgPrint("Transitioning Zoom Type to %s\n", v3);
  }
  *((_DWORD *)this + 22) = v2;
}
