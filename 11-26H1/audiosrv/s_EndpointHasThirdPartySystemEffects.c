/*
 * XREFs of s_EndpointHasThirdPartySystemEffects @ 0x18010E500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_EndpointHasThirdPartySystemEffects(__int64 a1, __int64 a2, _DWORD *a3)
{
  *a3 = (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 320LL))(g_PolicyConfig);
  return 0LL;
}
