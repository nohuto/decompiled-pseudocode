/*
 * XREFs of ?SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z @ 0x140102DC4
 * Callers:
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x14003DB50 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x140102E20 (-GreEncodeUserModePointer@@YAPEAXPEAX@Z.c)
 */

void __fastcall SetupDCAttributes(struct Gre::Base::SESSION_GLOBALS *a1, struct DC *this, struct _DC_ATTR *a3)
{
  struct _ENTRY *v5; // rbx

  v5 = DC::PentryFromPobj(this, a1);
  DC::RestoreAttributes(this, a3);
  *((_QWORD *)v5 + 2) = GreEncodeUserModePointer(a3);
}
