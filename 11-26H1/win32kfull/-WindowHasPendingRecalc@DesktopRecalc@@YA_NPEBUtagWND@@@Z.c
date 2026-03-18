/*
 * XREFs of ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x1402DEC28
 * Callers:
 *     CheckFullScreen @ 0x1401D954C (CheckFullScreen.c)
 *     ?GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z @ 0x1402E1FFC (-GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x14015EE84 (-ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x14015EFB0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 */

bool __fastcall DesktopRecalc::WindowHasPendingRecalc(DesktopRecalc *this, const struct tagWND *a2)
{
  __int64 v3; // rdx
  struct CRecalcProp *RecalcProperty; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  char v6; // al
  bool result; // al

  result = 1;
  if ( !(unsigned int)UserIsDisconnectConnection(this, a2) )
  {
    RecalcProperty = CRecalcProp::GetRecalcProperty(this, v3);
    if ( !RecalcProperty )
      return 0;
    IsEnabledDeviceUsageNoInline = Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline();
    if ( *((_DWORD *)RecalcProperty + 6) != 1 )
      return 0;
    v6 = IsEnabledDeviceUsageNoInline
       ? CRecalcProp::IsWindowEligibleForRecalc(this)
       : CRecalcProp::ShouldSkipRecalcForWindow(this, *((struct CRecalcState **)RecalcProperty + 4));
    if ( v6 && (*((_DWORD *)this + 95) & 0x10) == 0 )
      return 0;
  }
  return result;
}
