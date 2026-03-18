/*
 * XREFs of ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1402102BC
 * Callers:
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x14015F394 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x140210060 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?Delete@CRecalcProp@@UEAAXXZ @ 0x1402101E0 (-Delete@CRecalcProp@@UEAAXXZ.c)
 * Callees:
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1402102EC (--1CRecalcProp@@AEAA@XZ.c)
 */

CRecalcProp *__fastcall CRecalcProp::`scalar deleting destructor'(CRecalcProp *this)
{
  CRecalcProp::~CRecalcProp(this);
  Win32FreePool(this);
  return this;
}
