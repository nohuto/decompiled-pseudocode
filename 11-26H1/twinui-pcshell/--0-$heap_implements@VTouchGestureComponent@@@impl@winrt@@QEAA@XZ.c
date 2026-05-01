/*
 * XREFs of ??0?$heap_implements@VTouchGestureComponent@@@impl@winrt@@QEAA@XZ @ 0x18058B4F0
 * Callers:
 *     ??$make@VTouchGestureComponent@@$$V@winrt@@YA?A_PXZ @ 0x18058B450 (--$make@VTouchGestureComponent@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x180267780 (--0TouchGestureComponent@@QEAA@XZ.c)
 */

TouchGestureComponent *__fastcall winrt::impl::heap_implements<TouchGestureComponent>::heap_implements<TouchGestureComponent>(
        TouchGestureComponent *a1,
        __int64 a2,
        __int64 a3)
{
  TouchGestureComponent::TouchGestureComponent(a1, a2, a3);
  *(_QWORD *)a1 = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<TouchGestureComponent,IGlobalRudeWindowNotifications,void>'};
  *((_QWORD *)a1 + 1) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<TouchGestureComponent,IInputHostLayoutChanges,void>'};
  *((_QWORD *)a1 + 2) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 6) = &TouchGestureComponent::`vftable';
  return a1;
}
