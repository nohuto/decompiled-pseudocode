/*
 * XREFs of ??_ECGlassColorizationResources@@UEAAPEAXI@Z @ 0x1800641E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGlassColorizationResources@@UEAA@XZ @ 0x18006421C (--1CGlassColorizationResources@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CGlassColorizationResources *__fastcall CGlassColorizationResources::`vector deleting destructor'(
        CGlassColorizationResources *this,
        char a2)
{
  CGlassColorizationResources::~CGlassColorizationResources(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x28uLL);
  return this;
}
