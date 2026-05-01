/*
 * XREFs of ??_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x180371FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x180371CB8 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
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
