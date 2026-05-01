/*
 * XREFs of ??_GAltEscHotkeyHandler@@MEAAPEAXI@Z @ 0x1804B7000
 * Callers:
 *     ??_EAltEscHotkeyHandler@@ODA@EAAPEAXI@Z @ 0x1804B6FF0 (--_EAltEscHotkeyHandler@@ODA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x1804B6EA4 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 */

AltEscHotkeyHandler *__fastcall AltEscHotkeyHandler::`scalar deleting destructor'(AltEscHotkeyHandler *this, char a2)
{
  AltEscHotkeyHandler::~AltEscHotkeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
