/*
 * XREFs of ?vRemoveTranslation@EXFORMOBJ@@QEAAXXZ @ 0x14013F9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vRemoveTranslation(EXFORMOBJ *this)
{
  *(_DWORD *)(*(_QWORD *)this + 24LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 16LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 20LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 32LL) |= 0x40u;
}
