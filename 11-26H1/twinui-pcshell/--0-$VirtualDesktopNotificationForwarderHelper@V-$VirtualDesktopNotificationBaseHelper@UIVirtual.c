/*
 * XREFs of ??0?$VirtualDesktopNotificationForwarderHelper@V?$VirtualDesktopNotificationBaseHelper@UIVirtualDesktopNotification@@@@@@QEAA@XZ @ 0x1802C1B30
 * Callers:
 *     ??0?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@QEAA@XZ @ 0x180080B54 (--0-$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@QEAA@XZ.c)
 * Callees:
 *     ??0IShellExperienceViewLifetime@Cortana@TwinUI@@QEAA@XZ @ 0x1802930A0 (--0IShellExperienceViewLifetime@Cortana@TwinUI@@QEAA@XZ.c)
 */

_QWORD *__fastcall VirtualDesktopNotificationForwarderHelper<VirtualDesktopNotificationBaseHelper<IVirtualDesktopNotification>>::VirtualDesktopNotificationForwarderHelper<VirtualDesktopNotificationBaseHelper<IVirtualDesktopNotification>>(
        TwinUI::Cortana::IShellExperienceViewLifetime *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  TwinUI::Cortana::IShellExperienceViewLifetime::IShellExperienceViewLifetime(a1);
  result = v1;
  *v1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>::`vftable';
  return result;
}
