/*
 * XREFs of ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x1801D87B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x18005D5D4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CExternalLayer *__fastcall CExternalLayer::`vector deleting destructor'(CExternalLayer *this, char a2)
{
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
