/*
 * XREFs of ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180038B94
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180038ADC (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800E69A8 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CWindowArrangementTransition@@QEAA@PEAVCWindowList@@@Z @ 0x18009A2E8 (--0CWindowArrangementTransition@@QEAA@PEAVCWindowList@@@Z.c)
 */

__int64 __fastcall CWindowList::EnsureWindowArrangementTransition(CWindowList *this, const struct std::nothrow_t *a2)
{
  unsigned int v2; // edi
  CWindowArrangementTransition *v5; // rax
  CWindowArrangementTransition *v6; // rax

  v2 = 0;
  if ( !*((_QWORD *)this + 66) )
  {
    v5 = (CWindowArrangementTransition *)operator new[](0x18uLL, a2);
    if ( v5 )
    {
      v6 = CWindowArrangementTransition::CWindowArrangementTransition(v5, this);
      *((_QWORD *)this + 66) = v6;
      if ( v6 )
        return v2;
    }
    else
    {
      *((_QWORD *)this + 66) = 0LL;
    }
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1DC1u, 0LL);
  }
  return v2;
}
