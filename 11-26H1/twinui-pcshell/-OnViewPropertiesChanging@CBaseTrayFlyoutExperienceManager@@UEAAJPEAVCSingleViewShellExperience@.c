/*
 * XREFs of ?OnViewPropertiesChanging@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C4320
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ @ 0x1803C49CC (-PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewPropertiesChanging(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CBaseTrayFlyoutExperienceManager *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (CBaseTrayFlyoutExperienceManager *)((char *)this - 48);
  *((_DWORD *)v4 + 110) = (int)*((float *)a2 + 11);
  *((_DWORD *)this + 99) = (int)*((float *)a2 + 12);
  v5 = CBaseTrayFlyoutExperienceManager::PositionFlyoutCore(v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = *((_QWORD *)this + 42);
    if ( v8 )
      (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v8 + 16LL))(v8, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
