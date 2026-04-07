/*
 * XREFs of ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x1800430D0
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180042F10 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180014E80 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180043524 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x18004362C (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18008A778 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::BeginDestroySprite(CTopLevelWindow3D *this, bool *a2)
{
  unsigned int v4; // edi
  bool v5; // si
  __int64 result; // rax
  int v7; // eax
  int started; // eax

  v4 = 0;
  v5 = 1;
  if ( CTopLevelWindow3D::ShouldDelayTransition(this, 0) )
  {
    started = CTopLevelWindow3D::StartDelayHideAnimation(this);
    v4 = started;
    if ( started < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x16Du, 0LL);
      goto LABEL_3;
    }
    goto LABEL_8;
  }
  if ( CTopLevelWindow3D::ShouldShowTransition(this)
    && (*(_DWORD *)(*((_QWORD *)this + 29) + 116LL) & 0x20000000) == 0
    && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
  {
    if ( !*((_QWORD *)this + 33) || *((_DWORD *)this + 70) != 3 )
    {
      v7 = CTopLevelWindow3D::StartAnimation(this, 6LL);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x178u, 0LL);
        goto LABEL_3;
      }
    }
LABEL_8:
    v5 = 0;
  }
LABEL_3:
  result = v4;
  *a2 = v5;
  return result;
}
