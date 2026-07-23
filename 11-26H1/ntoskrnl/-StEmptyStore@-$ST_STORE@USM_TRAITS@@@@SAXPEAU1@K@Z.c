/*
 * XREFs of ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1406420B0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StEmptyStore(__int64 a1)
{
  REGHANDLE v2; // rcx
  __int64 v3; // [rsp+40h] [rbp-48h] BYREF
  __int64 v4; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+60h] [rbp-28h]
  __int64 v7; // [rsp+68h] [rbp-20h]

  if ( ((unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((BYTE4(stru_140E27C48.InitialStack) & 0x10) != 0)) != 0 )
  {
    v2 = *(_QWORD *)((unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((BYTE4(stru_140E27C48.InitialStack) & 0x10) != 0));
    v5.Ptr = (ULONGLONG)&v3;
    v6 = &v4;
    v4 = 0LL;
    v3 = a1;
    *(_QWORD *)&v5.Size = 8LL;
    v7 = 8LL;
    EtwWriteEx(v2, (PCEVENT_DESCRIPTOR)StEventStoreEmpty, 0LL, 1u, 0LL, 0LL, 2u, &v5);
  }
  ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 64, 1u);
}
