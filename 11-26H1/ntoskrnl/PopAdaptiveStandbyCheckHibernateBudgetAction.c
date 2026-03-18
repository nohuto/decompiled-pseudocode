/*
 * XREFs of PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407DE80C
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407DF44C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x14046F440 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetAction @ 0x1407DEEF4 (PopAdaptiveStandbyCheckRefreshableBudgetAction.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions @ 0x1407DEFB4 (PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionV2 @ 0x1407DF008 (PopAdaptiveStandbyCheckRefreshableBudgetActionV2.c)
 *     PopAdaptiveStandbySetPolicyTimer @ 0x1407E07A4 (PopAdaptiveStandbySetPolicyTimer.c)
 */

unsigned __int8 __fastcall PopAdaptiveStandbyCheckHibernateBudgetAction(
        __int64 a1,
        unsigned int *a2,
        _DWORD *a3,
        _DWORD *a4)
{
  __int64 v6; // rdi
  unsigned __int8 v9; // r13
  __int64 v10; // rdx
  int v11; // r12d
  struct _LIST_ENTRY *ActivityIdThread; // r8
  struct _LIST_ENTRY *v13; // r8
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  unsigned int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  unsigned int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  __int64 *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  int *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  unsigned int *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  __int64 *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  int *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  __int64 *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]

  v23 = (__int64)a3;
  v6 = a1 + 4;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_OWORD *)(v6 + 20) = *(__int128 *)((char *)&PopAdaptiveStandbyRegions + 20 * *(int *)(a1 + 200) + 4);
    PopAdaptiveStandbySetPolicyTimer(a1, *a2, *(unsigned int *)(v6 + 20));
    if ( (unsigned __int8)PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions(a1, v6, a2, a3) )
    {
      if ( (int)a2[3] <= 10 )
      {
        v10 = *a2;
        if ( (unsigned int)v10 >= 0x708 )
        {
          v11 = 1;
          *(_BYTE *)v6 = 1;
          v9 = 1;
          *a3 = 0;
          *a4 = 4;
          goto LABEL_12;
        }
        PopAdaptiveStandbySetPolicyTimer(a1, v10, 1800LL);
      }
      v9 = PopAdaptiveStandbyCheckRefreshableBudgetActionV2(v6, a2[5], a2[1], a3);
      if ( v9 )
        *a4 = 1;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = PopAdaptiveStandbyCheckRefreshableBudgetAction(a1, v6, a2, a3);
  }
  v11 = 0;
LABEL_12:
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v9 && *(_BYTE *)(a1 + 308) )
    {
      *(_BYTE *)(a1 + 308) = 0;
      KeCancelTimer2(a1 + 320);
    }
    if ( (unsigned int)dword_140E08090 > 5 && tlgKeywordOn((__int64)&dword_140E08090, 0x400000000000LL) )
    {
      v26 = *a2;
      v29 = &v26;
      v24 = *(_DWORD *)(v6 + 20);
      v31 = &v24;
      v25 = a2[3];
      v33 = &v25;
      v15 = a2[4];
      v35 = &v15;
      v16 = *(_DWORD *)(v6 + 24);
      v37 = &v16;
      v17 = v9;
      v39 = &v17;
      v30 = 8LL;
      v32 = 4LL;
      v34 = 4LL;
      v18 = *(_DWORD *)v23;
      v41 = &v18;
      v23 = *(_QWORD *)(a1 + 224);
      v43 = &v23;
      v19 = *(_DWORD *)(v6 + 28);
      v45 = &v19;
      v20 = *(_DWORD *)(v6 + 32);
      v47 = &v20;
      v21 = *(_DWORD *)(a1 + 200);
      v49 = (__int64 *)&v21;
      v51 = &v22;
      v53 = &v27;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 8LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v22 = v11;
      v52 = 4LL;
      v27 = 0x1000000LL;
      v54 = 8LL;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08090,
        (unsigned __int8 *)&byte_14004F2EF,
        (const GUID *)ActivityIdThread,
        0LL,
        0xFu,
        v28);
    }
  }
  else if ( (unsigned int)dword_140E08090 > 5 && tlgKeywordOn((__int64)&dword_140E08090, 0x400000000000LL) )
  {
    v27 = *a2;
    v29 = &v27;
    v22 = *(_DWORD *)(v6 + 4);
    v31 = &v22;
    v21 = a2[3];
    v33 = &v21;
    v20 = a2[4];
    v35 = &v20;
    v19 = *(_DWORD *)(v6 + 8);
    v37 = &v19;
    v18 = v9;
    v39 = &v18;
    v30 = 8LL;
    v32 = 4LL;
    v34 = 4LL;
    v17 = *(_DWORD *)v23;
    v41 = &v17;
    v26 = *(_QWORD *)(a1 + 224);
    v43 = &v26;
    v16 = *(_DWORD *)(v6 + 12);
    v45 = &v16;
    v15 = *(_DWORD *)(v6 + 16);
    v47 = &v15;
    v49 = &v23;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 8LL;
    v46 = 4LL;
    v48 = 4LL;
    v23 = 0x1000000LL;
    v50 = 8LL;
    v13 = IoGetActivityIdThread();
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)byte_14004F415,
      (const GUID *)v13,
      0LL,
      0xDu,
      v28);
  }
  return v9;
}
