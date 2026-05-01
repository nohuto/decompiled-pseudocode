/*
 * XREFs of ?HampInProcStopActivity@@YAJPEAX_K@Z @ 0x180017F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampInProcStopActivity(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  return HamSrvStopActivity(a1, a2);
}
