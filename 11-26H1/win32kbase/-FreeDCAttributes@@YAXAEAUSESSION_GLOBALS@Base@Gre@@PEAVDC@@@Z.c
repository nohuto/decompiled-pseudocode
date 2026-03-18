/*
 * XREFs of ?FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x140186EB4
 * Callers:
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     HmgFreeDcAttr @ 0x14000E59C (HmgFreeDcAttr.c)
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x140040720 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 */

void __fastcall FreeDCAttributes(struct Gre::Base::SESSION_GLOBALS *a1, struct DC *this)
{
  struct _ENTRY *v4; // rbp
  struct _DC_ATTR *v5; // rax
  __int64 v6; // rbx

  v4 = DC::PentryFromPobj(this, a1);
  v5 = (struct _DC_ATTR *)GreDecodeUserModePointer(*((void **)v4 + 2));
  v6 = (__int64)v5;
  if ( v5 )
  {
    *((_QWORD *)v4 + 2) = 0LL;
    if ( (*((_DWORD *)this + 11) & 2) == 0 )
      DC::SaveAttributes(this, v5);
    HmgFreeDcAttr(a1, v6);
  }
}
