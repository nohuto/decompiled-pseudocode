/*
 * XREFs of ?W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ @ 0x1401A1318
 * Callers:
 *     HMCleanupGrantedHandle @ 0x14014EE04 (HMCleanupGrantedHandle.c)
 * Callees:
 *     <none>
 */

struct _tagJOBSGLOBALS *__fastcall W32GetUserJobsGlobals(__int64 a1, __int64 a2)
{
  return (struct _tagJOBSGLOBALS *)(W32GetUserSessionState(a1, a2) + 69096);
}
