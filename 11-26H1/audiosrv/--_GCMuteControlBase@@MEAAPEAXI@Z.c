/*
 * XREFs of ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x180108C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMuteControlBase@@MEAA@XZ @ 0x18010897C (--1CMuteControlBase@@MEAA@XZ.c)
 */

void **__fastcall CMuteControlBase::`scalar deleting destructor'(void **this, char a2)
{
  CMuteControlBase::~CMuteControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
