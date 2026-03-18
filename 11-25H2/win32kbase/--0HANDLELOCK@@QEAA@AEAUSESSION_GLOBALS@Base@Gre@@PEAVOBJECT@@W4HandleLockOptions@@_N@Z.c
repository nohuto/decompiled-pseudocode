/*
 * XREFs of ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@_N@Z @ 0x1401C4B7C
 * Callers:
 *     ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C4E20 (-HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@.c)
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C4ED4 (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 *     ?HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z @ 0x1401C4FCC (-HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall HANDLELOCK::HANDLELOCK(__int64 a1, __int64 a2, _DWORD *a3, char a4, char a5)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 12) = 0;
  if ( !a5 )
    a2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  *(_QWORD *)(a1 + 16) = a2;
  HANDLELOCK::vLockHandle((__int64 *)a1, (unsigned __int16)*a3 | (*a3 >> 8) & 0xFF0000, a4);
  return a1;
}
