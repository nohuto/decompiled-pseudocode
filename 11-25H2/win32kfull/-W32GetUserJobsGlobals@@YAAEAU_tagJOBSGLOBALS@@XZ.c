/*
 * XREFs of ?W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ @ 0x1402939D0
 * Callers:
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1400D7FB4 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     UserJobCallout @ 0x1400D8250 (UserJobCallout.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1400D8850 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 * Callees:
 *     <none>
 */

struct _tagJOBSGLOBALS *__fastcall W32GetUserJobsGlobals(__int64 a1, __int64 a2)
{
  return (struct _tagJOBSGLOBALS *)(W32GetUserSessionState(a1, a2) + 69096);
}
