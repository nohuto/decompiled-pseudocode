/*
 * XREFs of ?RuntimeClassInitialize@PeoplePaneViewManager@@QEAAJXZ @ 0x18007FEFC
 * Callers:
 *     ??$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18007FC78 (--$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800275B4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::RuntimeClassInitialize(PeoplePaneViewManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 129) = SHTaskPoolGetUniqueContext();
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (PeoplePaneViewManager *)((char *)this + 24),
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
