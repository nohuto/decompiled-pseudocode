/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1400E12C0
 * Callers:
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 *     FindShadowWindow @ 0x1400E0E8C (FindShadowWindow.c)
 *     WindowHasShadow @ 0x1400E1290 (WindowHasShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1400E12FC (zzzUpdateShadowAlpha.c)
 *     xxxUpdateShadowZorder @ 0x1402180E4 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x140220F8C (zzzMoveShadow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSHADOW *__fastcall FindShadow(struct tagWND *a1, __int64 a2)
{
  struct tagSHADOW *result; // rax

  for ( result = *(struct tagSHADOW **)(W32GetUserSessionState(a1, a2) + 63384);
        result && *(struct tagWND **)result != a1;
        result = (struct tagSHADOW *)*((_QWORD *)result + 2) )
  {
    ;
  }
  return result;
}
