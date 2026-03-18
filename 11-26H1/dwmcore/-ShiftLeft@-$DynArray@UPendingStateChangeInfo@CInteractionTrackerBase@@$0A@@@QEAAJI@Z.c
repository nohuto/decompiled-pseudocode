/*
 * XREFs of ?ShiftLeft@?$DynArray@UPendingStateChangeInfo@CInteractionTrackerBase@@$0A@@@QEAAJI@Z @ 0x180195354
 * Callers:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker2@@AEAAX_N@Z @ 0x180275CAC (-SendPendingStateChangeCallbacks@CInteractionTracker2@@AEAAX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall DynArray<CInteractionTrackerBase::PendingStateChangeInfo,0>::ShiftLeft(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ebx

  v2 = 0;
  if ( a2 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( a2 > v5 )
    {
      v2 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x23Bu, 0LL);
    }
    else
    {
      v6 = v5 - a2;
      if ( v6 )
        memmove_0(*(void **)a1, (const void *)(*(_QWORD *)a1 + 24LL * a2), 24LL * v6);
      *(_DWORD *)(a1 + 24) = v6;
    }
  }
  return v2;
}
