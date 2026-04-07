/*
 * XREFs of ??_GCGrowPanel@@UEAAPEAXI@Z @ 0x1800588D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStoryboard@@UEAA@XZ @ 0x18005894C (--1CStoryboard@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CGrowPanel *__fastcall CGrowPanel::`scalar deleting destructor'(CGrowPanel *this, char a2)
{
  CStoryboard::~CStoryboard(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA0uLL);
  return this;
}
