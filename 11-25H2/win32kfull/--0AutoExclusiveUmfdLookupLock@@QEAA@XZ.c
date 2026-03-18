/*
 * XREFs of ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1401CEF3C
 * Callers:
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14010BDE4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x140263A94 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     <none>
 */

AutoExclusiveUmfdLookupLock *__fastcall AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock(
        AutoExclusiveUmfdLookupLock *this,
        __int64 a2)
{
  __int64 v3; // rcx
  bool v4; // zf
  struct W32_PUSH_LOCK *v5; // rcx

  v3 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96);
  v4 = v3 == -24248;
  v5 = (struct W32_PUSH_LOCK *)(v3 + 24248);
  *(_QWORD *)this = v5;
  if ( !v4 )
    GreAcquirePushLockExclusive(v5);
  return this;
}
