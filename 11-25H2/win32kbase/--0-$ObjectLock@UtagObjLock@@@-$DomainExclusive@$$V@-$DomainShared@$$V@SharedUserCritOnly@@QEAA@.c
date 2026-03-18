/*
 * XREFs of ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x14009CAF4
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C720 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x14009C8EC (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??$vInitAndLock@UtagObjLock@@@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAAXAEAUtagObjLock@@@Z @ 0x14009CE8C (--$vInitAndLock@UtagObjLock@@@-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainS.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        __int64 a1,
        __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = UserSessionState + 42360;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    *(_BYTE *)(a1 + 40) = 1;
    DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::vInitAndLock<tagObjLock>(a1, a2);
  }
  return a1;
}
