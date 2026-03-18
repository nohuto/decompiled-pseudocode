/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x140011E54
 * Callers:
 *     zzzUpdateShadowAlpha @ 0x140011CCC (zzzUpdateShadowAlpha.c)
 *     WindowHasShadow @ 0x140011E24 (WindowHasShadow.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 *     FindShadowWindow @ 0x140231868 (FindShadowWindow.c)
 *     zzzMoveShadow @ 0x14024B140 (zzzMoveShadow.c)
 *     xxxUpdateShadowZorder @ 0x1402536E8 (xxxUpdateShadowZorder.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSHADOW *__fastcall FindShadow(struct tagWND *a1, __int64 a2)
{
  struct tagSHADOW *result; // rax

  for ( result = *(struct tagSHADOW **)(W32GetUserSessionState(a1, a2) + 63368);
        result && *(struct tagWND **)result != a1;
        result = (struct tagSHADOW *)*((_QWORD *)result + 2) )
  {
    ;
  }
  return result;
}
