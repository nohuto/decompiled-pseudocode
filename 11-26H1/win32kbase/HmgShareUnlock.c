/*
 * XREFs of HmgShareUnlock @ 0x140055534
 * Callers:
 *     ?GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z @ 0x1400554B0 (-GrepDeleteReferencedRegion@@YAJPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140019490 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z @ 0x14001C700 (-TrackHmgrReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@EPEAVOBJECT@@@Z.c)
 */

void __fastcall HmgShareUnlock(struct OBJECT *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  __int16 v7; // [rsp+2Ch] [rbp-1Ch]
  struct Gre::Base::SESSION_GLOBALS *v8; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v2 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  v3 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
  v8 = v2;
  HANDLELOCK::vLockHandle(&v5, v3, 1);
  if ( v6 )
  {
    v4 = HmgPentryFromPobj((__int64)v2);
    TrackHmgrReferenceDecrement(v2, *(_BYTE *)(v4 + 14), a1);
    --*((_DWORD *)a1 + 2);
    HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
}
