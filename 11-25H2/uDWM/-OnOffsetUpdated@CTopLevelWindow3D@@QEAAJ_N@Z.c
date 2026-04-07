/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18000A5C4
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000A050 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x1800042C8 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x22Au, 0LL);
  }
  else if ( !*((_BYTE *)this + 248) && !*((_DWORD *)this + 85) )
  {
    *((_OWORD *)this + 17) = *(_OWORD *)(*((_QWORD *)this + 36) + 48LL);
  }
  return v2;
}
