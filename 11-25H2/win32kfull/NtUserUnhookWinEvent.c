/*
 * XREFs of NtUserUnhookWinEvent @ 0x1400CA120
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8FCC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400CA314 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     _UnhookWinEvent @ 0x1400CA498 (_UnhookWinEvent.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  struct _HEAD *v4; // rax
  __int64 v5; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v8[48]; // [rsp+30h] [rbp-48h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v7, 1LL);
  v2 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v7);
  DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>(v8);
  LOBYTE(v3) = 15;
  v4 = (struct _HEAD *)HMValidateHandleWithDescriptor(a1, v3);
  if ( v4 )
    v2 = UnhookWinEvent(v4);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v8);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v7);
  UserSessionSwitchLeaveCrit(v5);
  return v2;
}
