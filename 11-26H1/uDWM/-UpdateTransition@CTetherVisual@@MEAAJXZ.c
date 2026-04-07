/*
 * XREFs of ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800C8C00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800C8A50 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x1800C8ACC (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 *     ?UpdateVisual@CTetherVisual@@IEAAJXZ @ 0x1800C8C84 (-UpdateVisual@CTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::UpdateTransition(CTetherVisual *this)
{
  __int64 v1; // rax
  int updated; // eax
  unsigned int v4; // edi
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 35);
  if ( v1 && *(_BYTE *)(v1 + 72) )
    CTetherVisual::StopDelayTimer((CTimelineBase **)this);
  updated = CTetherVisual::UpdateVisual(this);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x119u, 0LL);
LABEL_9:
    CTetherVisual::Stop(this);
    return v4;
  }
  v5 = *((_QWORD *)this + 34);
  if ( v5 && *(_BYTE *)(v5 + 72) )
    goto LABEL_9;
  return v4;
}
