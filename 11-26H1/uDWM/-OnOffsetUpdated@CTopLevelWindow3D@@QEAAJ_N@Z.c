/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180014854
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180014300 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180014E80 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnOffsetUpdated(CTopLevelWindow3D *this, char a2)
{
  unsigned int v2; // edi
  int started; // eax

  v2 = 0;
  if ( a2 && CTopLevelWindow3D::ShouldDelayTransition(this, 0) )
  {
    started = CTopLevelWindow3D::StartAnimation(this, 9LL);
    v2 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x226u, 0LL);
  }
  else if ( !*((_BYTE *)this + 192) && !*((_DWORD *)this + 71) )
  {
    *(_OWORD *)((char *)this + 216) = *(_OWORD *)(*((_QWORD *)this + 29) + 48LL);
  }
  return v2;
}
