/*
 * XREFs of ??_GCGenericInkTipPointSource@@EEAAPEAXI@Z @ 0x180288CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CGenericInkTipPointSource@@EEAA@XZ @ 0x180288C88 (--1CGenericInkTipPointSource@@EEAA@XZ.c)
 */

CGenericInkTipPointSource *__fastcall CGenericInkTipPointSource::`scalar deleting destructor'(
        CGenericInkTipPointSource *this,
        char a2)
{
  CGenericInkTipPointSource::~CGenericInkTipPointSource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
