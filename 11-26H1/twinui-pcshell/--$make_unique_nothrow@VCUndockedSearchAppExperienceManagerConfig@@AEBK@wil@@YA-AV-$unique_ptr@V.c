/*
 * XREFs of ??$make_unique_nothrow@VCUndockedSearchAppExperienceManagerConfig@@AEBK@wil@@YA?AV?$unique_ptr@VCUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VCUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@AEBK@Z @ 0x1801B3AE0
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@9@3V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@9@@Z @ 0x1803B8640 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewC.c)
 * Callees:
 *     ??0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ @ 0x1801B3FDC (--0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::make_unique_nothrow<CUndockedSearchAppExperienceManagerConfig,unsigned long const &>(
        _QWORD *a1,
        int *a2)
{
  _DWORD *v4; // rbx
  int v6; // ecx

  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = *a2;
    *(_QWORD *)v4 = &CUndockedSearchAppExperienceManagerConfig::`vftable';
    v4[2] = v6;
    winrt::Windows::UI::ViewManagement::UISettings::UISettings((winrt::Windows::UI::ViewManagement::UISettings *)(v4 + 4));
    *((_QWORD *)v4 + 3) = 0LL;
  }
  *a1 = v4;
  return a1;
}
