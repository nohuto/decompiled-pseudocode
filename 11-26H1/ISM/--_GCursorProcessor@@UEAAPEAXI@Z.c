/*
 * XREFs of ??_GCursorProcessor@@UEAAPEAXI@Z @ 0x18014A950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CursorProcessor@@UEAA@XZ @ 0x18014A8D8 (--1CursorProcessor@@UEAA@XZ.c)
 */

CursorProcessor *__fastcall CursorProcessor::`scalar deleting destructor'(CursorProcessor *this, char a2)
{
  CursorProcessor::~CursorProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
