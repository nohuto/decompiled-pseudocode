/*
 * XREFs of ?W32pQuerySubsystemProcess@@YAJPEAU_WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS@@@Z @ 0x14015F620
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall W32pQuerySubsystemProcess(struct _WIN32_SUBSYSTEM_PROCESS_QUERY_CALLOUT_PARAMETERS *a1)
{
  __int64 UserGdiSessionState; // rax
  __int64 v3; // rbx

  UserGdiSessionState = W32GetUserGdiSessionState(a1);
  v3 = *(_QWORD *)(UserGdiSessionState + 40);
  if ( v3 )
    v3 &= -(__int64)((unsigned __int8)ObReferenceObjectSafe(*(_QWORD *)(UserGdiSessionState + 40)) != 0);
  *(_QWORD *)a1 = v3;
  return 0LL;
}
