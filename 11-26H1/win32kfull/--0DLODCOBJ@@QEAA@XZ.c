/*
 * XREFs of ??0DLODCOBJ@@QEAA@XZ @ 0x14006D0E4
 * Callers:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?GrepSetICMMode@@YAHAEAVXDCOBJ@@KK@Z @ 0x14006D194 (-GrepSetICMMode@@YAHAEAVXDCOBJ@@KK@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400ABEE8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

DLODCOBJ *__fastcall DLODCOBJ::DLODCOBJ(DLODCOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  DLODCOBJ *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v2 = Gre::Base::Globals(this);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = v2;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 32,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 32) >> 64),
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  *((_OWORD *)this + 4) = 0LL;
  *((_OWORD *)this + 5) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 64,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 64) >> 64),
    UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
  result = this;
  *((_WORD *)this + 48) = 256;
  return result;
}
