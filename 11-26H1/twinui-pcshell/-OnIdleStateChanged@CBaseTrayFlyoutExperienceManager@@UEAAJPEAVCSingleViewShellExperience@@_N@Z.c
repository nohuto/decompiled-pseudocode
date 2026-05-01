/*
 * XREFs of ?OnIdleStateChanged@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x1803C3600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnIdleStateChanged(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 42);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v2 + 96LL))(v2, a2);
  return 0LL;
}
