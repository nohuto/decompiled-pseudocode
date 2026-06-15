/*
 * XREFs of _dynamic_atexit_destructor_for__g_CustomEndpointResourceManagerProvider__ @ 0x18016CF50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__g_CustomEndpointResourceManagerProvider__()
{
  __int64 result; // rax

  if ( g_CustomEndpointResourceManagerProvider )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_CustomEndpointResourceManagerProvider + 16LL))(g_CustomEndpointResourceManagerProvider);
  return result;
}
