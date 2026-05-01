/*
 * XREFs of ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18018920C
 * Callers:
 *     ?OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z @ 0x180189160 (-OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z.c)
 *     ?MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18022A6B0 (-MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18022A730 (-DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1805A0470 (-OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1805A3340 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

bool __fastcall SnapFlyoutHost::IsAnySnapFlyoutInstanceVisible(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  _QWORD *i; // rdx
  bool v4; // bl
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rcx

  v1 = this + 22;
  AcquireSRWLockShared(this + 22);
  for ( i = this[3].Ptr; ; i += 2 )
  {
    if ( i == this[4].Ptr )
    {
      v4 = 0;
      goto LABEL_8;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*i + 8LL) + 339LL) )
      break;
  }
  v5 = i[1];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v6 = (std::_Ref_count_base *)i[1];
  v4 = *i != 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
LABEL_8:
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v4;
}
