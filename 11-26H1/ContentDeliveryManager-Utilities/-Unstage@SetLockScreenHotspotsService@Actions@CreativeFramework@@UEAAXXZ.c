/*
 * XREFs of ?Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800A42F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800A369C (-DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 */

void __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::Unstage(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  int v1; // eax
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys(this);
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      88LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v1,
      v2);
}
