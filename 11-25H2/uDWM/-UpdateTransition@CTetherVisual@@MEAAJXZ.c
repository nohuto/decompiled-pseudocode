/*
 * XREFs of ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800CEEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800CEAA0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x1800CEB1C (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800CEBD8 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::UpdateTransition(CTetherVisual *this)
{
  __int64 v1; // rax
  int updated; // eax
  unsigned int v4; // edi
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 45);
  if ( v1 && *(_BYTE *)(v1 + 72) )
    CTetherVisual::StopDelayTimer((CTimelineBase **)this);
  updated = CTetherVisual::UpdateInstructions(this);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x151u, 0LL);
LABEL_9:
    CTetherVisual::Stop(this);
    return v4;
  }
  v5 = *((_QWORD *)this + 44);
  if ( v5 && *(_BYTE *)(v5 + 72) )
    goto LABEL_9;
  return v4;
}
