/*
 * XREFs of s_GetCustomDeviceFormatsSupportedOnEndpoint @ 0x18007F460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 s_GetCustomDeviceFormatsSupportedOnEndpoint()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 312LL))(g_PolicyConfig);
}
