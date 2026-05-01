/*
 * XREFs of ??_ECortanaPositionerSelector@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x1803BE7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CortanaPositionerSelector@Cortana@TwinUI@@UEAA@XZ @ 0x1803BE754 (--1CortanaPositionerSelector@Cortana@TwinUI@@UEAA@XZ.c)
 */

TwinUI::Cortana::CortanaPositionerSelector *__fastcall TwinUI::Cortana::CortanaPositionerSelector::`vector deleting destructor'(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        char a2)
{
  TwinUI::Cortana::CortanaPositionerSelector::~CortanaPositionerSelector(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
