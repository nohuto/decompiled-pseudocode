/*
 * XREFs of ?W32GetUserForegroundGlobals@@YAAEAU_tagFOREGROUNDGLOBALS@@XZ @ 0x1401A2100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _tagFOREGROUNDGLOBALS *__fastcall W32GetUserForegroundGlobals(__int64 a1, __int64 a2)
{
  return (struct _tagFOREGROUNDGLOBALS *)(W32GetUserSessionState(a1, a2) + 18832);
}
