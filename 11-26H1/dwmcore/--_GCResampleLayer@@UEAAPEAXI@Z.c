/*
 * XREFs of ??_GCResampleLayer@@UEAAPEAXI@Z @ 0x18009A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResampleLayer@@UEAA@XZ @ 0x18009AA2C (--1CResampleLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CResampleLayer *__fastcall CResampleLayer::`scalar deleting destructor'(CResampleLayer *this, char a2)
{
  CResampleLayer::~CResampleLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA0uLL);
  return this;
}
