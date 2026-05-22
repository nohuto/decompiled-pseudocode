/*
 * XREFs of ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x1801176A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputSystemServerConnection@@UEAA@XZ @ 0x18011711C (--1InputSystemServerConnection@@UEAA@XZ.c)
 */

InputSystemServerConnection *__fastcall InputSystemServerConnection::`scalar deleting destructor'(
        InputSystemServerConnection *this,
        char a2)
{
  InputSystemServerConnection::~InputSystemServerConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x100);
  return this;
}
