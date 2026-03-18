/*
 * XREFs of ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x14015C818
 * Callers:
 *     _EnableIAMThreadAccess @ 0x14015C51C (_EnableIAMThreadAccess.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 * Callees:
 *     <none>
 */

struct tagIAM_THREAD *__fastcall FindIAMThread(const struct tagTHREADINFO *a1, __int64 a2)
{
  struct tagIAM_THREAD *v3; // rdx
  struct tagIAM_THREAD *result; // rax

  v3 = (struct tagIAM_THREAD *)(W32GetUserSessionState(a1, a2) + 71184);
  for ( result = *(struct tagIAM_THREAD **)v3; result != v3; result = *(struct tagIAM_THREAD **)result )
  {
    if ( *((const struct tagTHREADINFO **)result + 2) == a1 )
      return result;
  }
  return 0LL;
}
