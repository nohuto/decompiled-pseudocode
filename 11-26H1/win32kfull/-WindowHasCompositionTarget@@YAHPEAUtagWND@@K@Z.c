/*
 * XREFs of ?WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1402066D0
 * Callers:
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1402065E0 (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

__int64 __fastcall WindowHasCompositionTarget(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 UserSessionState; // rax
  unsigned int v5; // edi
  __int64 Prop; // rax

  v2 = (int)a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = 1;
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 42270), 1u);
  if ( !Prop || !*(_QWORD *)(Prop + 16 * v2 + 24) )
    return 0;
  return v5;
}
