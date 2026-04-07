/*
 * XREFs of ?PartitionSwitchRemotingMode@CCompositor@@QEAAJW4Enum@DwmRemotingMode@@I@Z @ 0x180085248
 * Callers:
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180029EA8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::PartitionSwitchRemotingMode(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 152LL))(*(_QWORD *)(a1 + 24));
}
