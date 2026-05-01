/*
 * XREFs of ??$query@UIInspectable@@@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@PEAPEAUIInspectable@@@Z @ 0x180340294
 * Callers:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x180347020 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::weak_query_policy::query<IInspectable>(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)a1 + 24LL))(
             a1,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a2);
  if ( (int)result >= 0 && !*a2 )
    return 2147943568LL;
  return result;
}
