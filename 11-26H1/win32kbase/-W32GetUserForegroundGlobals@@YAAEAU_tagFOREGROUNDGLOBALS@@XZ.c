/*
 * XREFs of ?W32GetUserForegroundGlobals@@YAAEAU_tagFOREGROUNDGLOBALS@@XZ @ 0x1401C5FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _tagFOREGROUNDGLOBALS *__fastcall W32GetUserForegroundGlobals(int a1, int a2, int a3)
{
  return (struct _tagFOREGROUNDGLOBALS *)(W32GetUserSessionState(a1, a2, a3) + 18880);
}
