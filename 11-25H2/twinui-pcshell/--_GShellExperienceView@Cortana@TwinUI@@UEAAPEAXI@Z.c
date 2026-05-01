/*
 * XREFs of ??_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x18036AE60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x18036AB58 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall TwinUI::Cortana::ShellExperienceView::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  TwinUI::Cortana::ShellExperienceView::~ShellExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x138);
  return this;
}
