/*
 * XREFs of ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x18020B638
 * Callers:
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x18020B5F8 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x18021DEF0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ??$_Move_unchecked@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@00@Z @ 0x18022FF90 (--$_Move_unchecked@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@@std@@YAPEAUSuperWetStroke@CSu.c)
 */

void __fastcall CSuperWetInkManager::RemoveSourceLocal(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  struct CSuperWetSource **i; // rbx

  for ( i = (struct CSuperWetSource **)*((_QWORD *)this + 4); i != *((struct CSuperWetSource ***)this + 5); i += 13 )
  {
    if ( *i == a2 )
    {
      if ( *i == *(struct CSuperWetSource **)this )
        CSuperWetInkManager::DeactivateCurrentSource(this);
      std::_Move_unchecked<CSuperWetInkManager::SuperWetStroke *,CSuperWetInkManager::SuperWetStroke *>(
        i + 13,
        *((_QWORD *)this + 5),
        i);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 5) - 96LL));
      *((_QWORD *)this + 5) -= 104LL;
      return;
    }
  }
}
