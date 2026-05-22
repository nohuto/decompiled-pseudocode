/*
 * XREFs of ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x18017D22C
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x180115110 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801803F4 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyZoomDelta(ControllerProcessor *this)
{
  float v1; // xmm0_4
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax

  v1 = *((float *)this + 109);
  if ( v1 == 0.0 )
  {
    v3 = *((_DWORD *)this + 315);
    if ( v3 == 16 || v3 == 32 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  }
  else
  {
    v4 = 16LL;
    if ( v1 <= 1.0 )
      v4 = 32LL;
    ControllerProcessor::TryUpdateInteractionType(this, v4);
    v5 = *((_DWORD *)this + 315);
    if ( v5 == 16 || v5 == 32 )
      ManipulationInjector::InjectZoom((ControllerProcessor *)((char *)this + 448), *((float *)this + 109), 0);
    *((_DWORD *)this + 109) = 0;
  }
  return 0LL;
}
