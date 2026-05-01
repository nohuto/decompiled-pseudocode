/*
 * XREFs of ?zInternalStart@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180106FA0
 * Callers:
 *     ?StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAXXZ @ 0x180020E00 (-StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateAltTabControl@XamlSwitcherTelemetry@@QEAAXXZ @ 0x180021848 (-StartActivity@CreateAltTabControl@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1801060E4 (-StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@GetHostWindow@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180106718 (-StartActivity@GetHostWindow@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@CreateCachedData@XamlSwitcherTelemetry@@QEAAXXZ @ 0x18020BF2C (-StartActivity@CreateCachedData@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1802AD8C8 (-StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAAXXZ @ 0x18067C038 (-StartActivity@CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAXI@Z @ 0x18067C0D0 (-StartActivity@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAXI@Z.c)
 * Callees:
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18010705C (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdi

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v3 = v1 + 33;
    AcquireSRWLockExclusive(v3);
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)XamlSwitcherLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
