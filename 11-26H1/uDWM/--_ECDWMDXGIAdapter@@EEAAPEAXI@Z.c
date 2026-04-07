/*
 * XREFs of ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x1800084E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x18000877C (--1CDWMDXGIAdapter@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CDWMDXGIAdapter *__fastcall CDWMDXGIAdapter::`vector deleting destructor'(CDWMDXGIAdapter *this, char a2)
{
  CDWMDXGIAdapter::~CDWMDXGIAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x180uLL);
  return this;
}
