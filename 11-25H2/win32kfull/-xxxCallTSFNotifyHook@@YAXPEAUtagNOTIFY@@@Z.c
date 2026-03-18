/*
 * XREFs of ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x140289620
 * Callers:
 *     xxxProcessTSFEvent @ 0x1400CADAC (xxxProcessTSFEvent.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x14022BAC0 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_WINEVENT@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x140170A34 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_WINEVENT@@@-$UnlockDomainShared@$$V@@QEAA.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14017BB28 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     fnHkINLPNOTIFYSTRUCT @ 0x1402BD110 (fnHkINLPNOTIFYSTRUCT.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxCallTSFNotifyHook(struct tagNOTIFY *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[48]; // [rsp+38h] [rbp-40h] BYREF

  v7 = 0;
  UnlockDomainShared<>::UnlockDomainExclusive<DLT_WINEVENT>::UnlockObjectLock<>::UnlockObjectLock<>((__int64)v8);
  UserSessionState = W32GetUserSessionState(v3, v2);
  fnHkINLPNOTIFYSTRUCT(
    *((_DWORD *)a1 + 7),
    v5,
    (_DWORD)a1,
    v6,
    *(_QWORD *)(*(_QWORD *)(UserSessionState + 19872) + 856LL),
    (__int64)&v7);
  UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::~UnlockObjectLock<>((__int64)v8);
}
