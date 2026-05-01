/*
 * XREFs of ?RuntimeClassInitialize@PerMonitorShellPositionerManager@@QEAAJXZ @ 0x1802C4CBC
 * Callers:
 *     ??$MakeAndInitialize@VPerMonitorShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18008114C (--$MakeAndInitialize@VPerMonitorShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800275B4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PerMonitorShellPositionerManager::RuntimeClassInitialize(PerMonitorShellPositionerManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (PerMonitorShellPositionerManager *)((char *)this + 24),
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\permonitorshellpositionermanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
