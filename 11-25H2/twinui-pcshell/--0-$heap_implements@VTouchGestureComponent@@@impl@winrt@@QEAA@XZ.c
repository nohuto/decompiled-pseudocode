/*
 * XREFs of ??0?$heap_implements@VTouchGestureComponent@@@impl@winrt@@QEAA@XZ @ 0x180567294
 * Callers:
 *     ??$make@VTouchGestureComponent@@$$V@winrt@@YA?A_PXZ @ 0x1805671FC (--$make@VTouchGestureComponent@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x18026F720 (--0TouchGestureComponent@@QEAA@XZ.c)
 */

TouchGestureComponent *__fastcall winrt::impl::heap_implements<TouchGestureComponent>::heap_implements<TouchGestureComponent>(
        TouchGestureComponent *a1,
        __int64 a2)
{
  TouchGestureComponent::TouchGestureComponent(a1, a2);
  *(_QWORD *)a1 = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<TouchGestureComponent,IGlobalRudeWindowNotifications,void>'};
  *((_QWORD *)a1 + 1) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<TouchGestureComponent,IInputHostLayoutChanges,void>'};
  *((_QWORD *)a1 + 2) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 6) = &TouchGestureComponent::`vftable';
  return a1;
}
