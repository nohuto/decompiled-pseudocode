/*
 * XREFs of ??0DCOBJ@@QEAA@XZ @ 0x140197710
 * Callers:
 *     ?bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z @ 0x140197674 (-bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z.c)
 *     ?bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z @ 0x140310FE0 (-bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

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
  return this;
}
