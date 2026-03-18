/*
 * XREFs of ?GetUserAttr@DCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x14016CA40
 * Callers:
 *     <none>
 * Callees:
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 */

struct _DC_ATTR *__fastcall DCOBJ::GetUserAttr(DC **this)
{
  struct _DC_ATTR *result; // rax

  result = DC::PentryFromPobj(*this, this[2]);
  if ( result )
    return (struct _DC_ATTR *)GreDecodeUserModePointer(*((void **)result + 2));
  return result;
}
