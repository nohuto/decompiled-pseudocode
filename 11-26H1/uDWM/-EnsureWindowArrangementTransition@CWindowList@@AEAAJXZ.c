/*
 * XREFs of ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180042B4C
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180042A8C (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800E216C (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??0CWindowArrangementTransition@@QEAA@PEAVCWindowList@@@Z @ 0x18008DDD8 (--0CWindowArrangementTransition@@QEAA@PEAVCWindowList@@@Z.c)
 */

__int64 __fastcall CWindowList::EnsureWindowArrangementTransition(CWindowList *this)
{
  unsigned int v1; // edi
  CWindowArrangementTransition *v4; // rax
  CWindowArrangementTransition *v5; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 66) )
  {
    v4 = (CWindowArrangementTransition *)operator new(0x18uLL);
    if ( v4 )
    {
      v5 = CWindowArrangementTransition::CWindowArrangementTransition(v4, this);
      *((_QWORD *)this + 66) = v5;
      if ( v5 )
        return v1;
    }
    else
    {
      *((_QWORD *)this + 66) = 0LL;
    }
    v1 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1EDDu, 0LL);
  }
  return v1;
}
