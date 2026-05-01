/*
 * XREFs of ?TrayEdgeMayHaveChanged@XamlLauncher@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x180245850
 * Callers:
 *     <none>
 * Callees:
 *     ?TrayEdgeMayHaveChanged@ImmersiveMonitorHelper@@QEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x180210950 (-TrayEdgeMayHaveChanged@ImmersiveMonitorHelper@@QEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall XamlLauncher::TrayEdgeMayHaveChanged(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  int HaveChanged; // eax

  v3 = 0;
  if ( !*(_QWORD *)(a1 + 344) )
    return 2147943568LL;
  v5 = *(_QWORD *)(a1 + 168);
  if ( !v5 )
    return 2147947423LL;
  HaveChanged = ImmersiveMonitorHelper::TrayEdgeMayHaveChanged(v5, a2, a3);
  if ( HaveChanged < 0 )
    return (unsigned int)HaveChanged;
  return v3;
}
