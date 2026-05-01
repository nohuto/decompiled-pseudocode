/*
 * XREFs of ??_E?$heap_implements@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805C2E30
 * Callers:
 *     ??_E?$heap_implements@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@WBI@EAAPEAXI@Z @ 0x1805C2E20 (--_E-$heap_implements@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SnapWindowProvider@SnapLauncher@@UEAA@XZ @ 0x1805C2DF4 (--1SnapWindowProvider@SnapLauncher@@UEAA@XZ.c)
 */

SnapLauncher::SnapWindowProvider *__fastcall winrt::impl::heap_implements<SnapLauncher::SnapWindowProvider>::`vector deleting destructor'(
        SnapLauncher::SnapWindowProvider *a1,
        char a2)
{
  SnapLauncher::SnapWindowProvider::~SnapWindowProvider(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
