/*
 * XREFs of _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$95 @ 0x1806A7F02
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1801DAEB0 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 */

void __fastcall UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor_95(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~0x10u;
    ExperienceManagerUtils::CopyableHString::~CopyableHString((HSTRING *)(a2 + 160));
  }
}
