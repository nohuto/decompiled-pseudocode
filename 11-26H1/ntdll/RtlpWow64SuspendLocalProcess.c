/*
 * XREFs of RtlpWow64SuspendLocalProcess @ 0x180138A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpWow64SuspendLocalProcess(unsigned __int64 a1, __int64 a2)
{
  if ( !g_LdrpWow64SuspendLocalProcess )
    return 3221225485LL;
  LOBYTE(a2) = a1 & 3;
  return g_LdrpWow64SuspendLocalProcess(a1 & 0xFFFFFFFFFFFFFFFCuLL, a2);
}
