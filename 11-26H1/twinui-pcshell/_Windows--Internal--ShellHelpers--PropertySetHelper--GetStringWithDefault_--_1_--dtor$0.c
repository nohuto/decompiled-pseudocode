/*
 * XREFs of _Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault_::_1_::dtor$0 @ 0x1806D718B
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1801D08E4 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    ExperienceManagerUtils::CopyableHString::~CopyableHString(*(HSTRING **)(a2 + 88));
  }
}
