/*
 * XREFs of ?SetInterceptDataPropAtom@WindowActions@@YAXG@Z @ 0x1402CCBA4
 * Callers:
 *     SetupClassAtoms @ 0x1401F1AF0 (SetupClassAtoms.c)
 * Callees:
 *     <none>
 */

void __fastcall WindowActions::SetInterceptDataPropAtom(WindowActions *this, __int64 a2)
{
  *(_WORD *)(W32GetUserSessionState(this, a2) + 42264) = (_WORD)this;
}
