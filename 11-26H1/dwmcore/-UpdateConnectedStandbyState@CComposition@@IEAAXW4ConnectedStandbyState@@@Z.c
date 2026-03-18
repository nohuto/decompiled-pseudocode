/*
 * XREFs of ?UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z @ 0x18022B414
 * Callers:
 *     ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x1801D1120 (-s_PowerNotification@CComposition@@KAKPEAXK0@Z.c)
 *     wistd::__function::__func__CComposition::RegisterMonitorPowerNotification_::_2_::_lambda_1__void___cdecl(void)_::operator() @ 0x18022A360 (wistd--__function--__func__CComposition--RegisterMonitorPowerNotification_--_2_--_lambda_1__void.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

ULONG __fastcall CComposition::UpdateConnectedStandbyState(__int64 a1, unsigned int a2)
{
  CComposition *v2; // rbx
  ULONG result; // eax

  v2 = g_pComposition;
  if ( *((_DWORD *)g_pComposition + 1612) != a2 )
  {
    *((_DWORD *)g_pComposition + 1612) = a2;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      result = McTemplateU0t_EventWriteTransfer(
                 Microsoft_Windows_Dwm_Compositor_Context,
                 (const EVENT_DESCRIPTOR *)"\x1B",
                 a2);
    if ( *((_DWORD *)v2 + 1612) == -1 )
      return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 78) + 72LL))(*((_QWORD *)v2 + 78));
  }
  return result;
}
