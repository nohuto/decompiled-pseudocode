/*
 * XREFs of _FreeTouchInputInfo @ 0x1400CABF0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPMSG @ 0x1400C4FD0 (fnHkINLPMSG.c)
 *     ForwardTouchMessage @ 0x1400CA82C (ForwardTouchMessage.c)
 *     UnlinkSendListSms @ 0x14016F354 (UnlinkSendListSms.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1401AD7F8 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     NtUserGetTouchInputInfo @ 0x1402006B0 (NtUserGetTouchInputInfo.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x1400C9768 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400C9B3C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1400C9B8C (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall FreeTouchInputInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  _BYTE v6[48]; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+50h] [rbp-18h]

  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)v6);
  v7 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v7 = 1;
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)v6);
  }
  LOBYTE(v2) = 20;
  v3 = HMValidateHandleNoSecure(a1, v2);
  v4 = v3;
  if ( v3 && *(_BYTE *)(_HMPheFromObject(v3) + 24) == 20 )
  {
    HMDestroyObject(v4);
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v6);
    return 1LL;
  }
  else
  {
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v6);
    return 0LL;
  }
}
