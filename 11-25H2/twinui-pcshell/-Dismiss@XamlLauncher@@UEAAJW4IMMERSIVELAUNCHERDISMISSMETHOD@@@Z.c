/*
 * XREFs of ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180241290
 * Callers:
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18044EE40 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncher::Dismiss(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 352);
  if ( !v1 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  return 0LL;
}
