/*
 * XREFs of ??$make_self@UTabTipAdapter@KeyboardHosting@@PEAVTouchKeyboardExperienceManager@@PEAUIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@PEAUIDesktopKeyboardHostingPolicy@2678@$$T@winrt@@YA?AU?$com_ptr@UTabTipAdapter@KeyboardHosting@@@0@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAPEAUIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@$$QEAPEAUIDesktopKeyboardHostingPolicy@KeyboardHosting@567@$$QEA$$T@Z @ 0x180298790
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180256E20 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@4567@PEAUIDesktopKeyboardHostingPolicy@KeyboardHosting@567@PEAUIInputInjectionValidityHelper@KeyboardHosting@567@@Z @ 0x18029880C (--0-$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@QEAA@PEAUIInputExperienceHost@.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make_self<KeyboardHosting::TabTipAdapter,TouchKeyboardExperienceManager *,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy *,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy *,std::nullptr_t>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  void *v9; // [rsp+50h] [rbp+8h]

  v9 = operator new(0x248uLL);
  *a1 = winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::heap_implements<KeyboardHosting::TabTipAdapter>(
          v9,
          (*a2 + 200LL) & -(__int64)(*a2 != 0LL),
          *a3,
          *a4);
  return a1;
}
