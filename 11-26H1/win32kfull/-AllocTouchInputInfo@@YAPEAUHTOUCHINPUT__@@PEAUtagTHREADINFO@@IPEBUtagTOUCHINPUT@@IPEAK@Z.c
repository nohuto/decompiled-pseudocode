/*
 * XREFs of ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1401EE3F4
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1401EE0CC (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400378B8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14003A7F0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14003AB48 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x14003AD08 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

struct HTOUCHINPUT__ *__fastcall AllocTouchInputInfo(
        struct tagTHREADINFO *a1,
        unsigned int a2,
        const struct tagTOUCHINPUT *a3,
        int a4)
{
  unsigned __int64 v8; // rax
  struct HTOUCHINPUT__ *result; // rax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  _BYTE v16[48]; // [rsp+20h] [rbp-68h] BYREF
  char v17; // [rsp+50h] [rbp-38h]

  if ( !a2
    || (v8 = 48LL * (a2 - 1), v8 > 0xFFFFFFFF)
    || (v10 = v8 + 80, (unsigned int)v8 >= 0xFFFFFFB0)
    || (v11 = 48 * a2, 48 * (unsigned __int64)a2 > 0xFFFFFFFF) )
  {
    SetLastNtError(-1073741675);
    return 0LL;
  }
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)v16);
  v17 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v13, v12) )
  {
    v17 = 1;
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)v16);
  }
  LOBYTE(v14) = 20;
  v15 = HMAllocObject(a1, 0LL, v14, v10);
  SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v16);
  if ( !v15 )
    return 0LL;
  *(_DWORD *)(v15 + 24) = a2;
  memmove((void *)(v15 + 32), a3, v11);
  result = *(struct HTOUCHINPUT__ **)v15;
  *(_DWORD *)(v15 + 28) = a4;
  return result;
}
