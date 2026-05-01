/*
 * XREFs of ??_EIInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1803AFCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1IInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAA@XZ @ 0x1803AE450 (--1IInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Shell::IInputHostLayoutChangesHandler *__fastcall Windows::Internal::Shell::IInputHostLayoutChangesHandler::`vector deleting destructor'(
        Windows::Internal::Shell::IInputHostLayoutChangesHandler *this,
        char a2)
{
  Windows::Internal::Shell::IInputHostLayoutChangesHandler::~IInputHostLayoutChangesHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x118);
  return this;
}
