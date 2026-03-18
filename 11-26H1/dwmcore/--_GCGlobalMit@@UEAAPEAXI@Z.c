/*
 * XREFs of ??_GCGlobalMit@@UEAAPEAXI@Z @ 0x180228610
 * Callers:
 *     ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18020A320 (-Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CGlobalMit@@UEAA@XZ @ 0x1802285B8 (--1CGlobalMit@@UEAA@XZ.c)
 */

wil::details **__fastcall CGlobalMit::`scalar deleting destructor'(wil::details **this, char a2)
{
  CGlobalMit::~CGlobalMit(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
