/*
 * XREFs of ?vReleaseVis@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140179DF8
 * Callers:
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ @ 0x140017EF0 (-AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ.c)
 *     ?ReleaseLock@GreInnermostPushLock@@QEBAXXZ @ 0x14001B2E0 (-ReleaseLock@GreInnermostPushLock@@QEBAXXZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this, struct Gre::Base::SESSION_GLOBALS *a2)
{
  struct _ENTRY *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 9) |= 0x10u;
  v4 = DC::PentryFromPobj(this, a2);
  *((_BYTE *)v4 + 15) |= 4u;
  GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)this + 1112));
  v5 = *((_QWORD *)this + 142);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
  *((_QWORD *)this + 142) = *((_QWORD *)a2 + 533);
  GreInnermostPushLock::ReleaseLock((DC *)((char *)this + 1112));
}
