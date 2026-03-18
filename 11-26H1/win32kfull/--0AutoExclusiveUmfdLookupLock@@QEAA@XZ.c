/*
 * XREFs of ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1401FF22C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x140226FB4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
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
  v4 = v3 == -24232;
  v5 = (struct W32_PUSH_LOCK *)(v3 + 24232);
  *(_QWORD *)this = v5;
  if ( !v4 )
    GreAcquirePushLockExclusive(v5);
  return this;
}
