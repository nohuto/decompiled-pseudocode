/*
 * XREFs of PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C
 * Callers:
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x1407E4B50 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E4FE4 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E6000 (PopAdaptiveStandbyWnfCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     IoGetActivityIdThread @ 0x140468BC0 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCalculateBatteryRegion @ 0x1407E2E60 (PopAdaptiveStandbyCalculateBatteryRegion.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407E2E8C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckHibernateReserveAction @ 0x1407E34AC (PopAdaptiveStandbyCheckHibernateReserveAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x1407E38AC (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E4FE4 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407E5384 (PopAdaptiveStandbySessionStop.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E5664 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 */

NTSTATUS __fastcall PopAdaptiveStandbyHandleBatteryUpdate(__int64 a1, __int64 a2)
{
  NTSTATUS *v4; // rsi
  NTSTATUS result; // eax
  char v6; // al
  struct _LIST_ENTRY *ActivityIdThread; // rax
  int v8; // edi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  ULONG v11; // ecx
  ULONG v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int8 v14; // al
  int v15; // eax
  int v16; // r8d
  __int64 v17; // r9
  int v18; // esi
  unsigned __int8 v19; // al
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *v21; // rax
  char v22; // [rsp+30h] [rbp-99h] BYREF
  int v23; // [rsp+34h] [rbp-95h] BYREF
  int v24; // [rsp+38h] [rbp-91h] BYREF
  int v25; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v26; // [rsp+40h] [rbp-89h] BYREF
  int v27; // [rsp+44h] [rbp-85h] BYREF
  int v28; // [rsp+48h] [rbp-81h] BYREF
  int v29; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+50h] [rbp-79h] BYREF
  ULONG v31; // [rsp+60h] [rbp-69h]
  signed int v32; // [rsp+64h] [rbp-65h]
  int *v33; // [rsp+70h] [rbp-59h]
  __int64 v34; // [rsp+78h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+80h] [rbp-49h] BYREF
  char *v36; // [rsp+A0h] [rbp-29h]
  __int64 v37; // [rsp+A8h] [rbp-21h]
  int *v38; // [rsp+B0h] [rbp-19h]
  __int64 v39; // [rsp+B8h] [rbp-11h]
  int *v40; // [rsp+C0h] [rbp-9h]
  __int64 v41; // [rsp+C8h] [rbp-1h]
  int *v42; // [rsp+D0h] [rbp+7h]
  __int64 v43; // [rsp+D8h] [rbp+Fh]
  int *v44; // [rsp+E0h] [rbp+17h]
  __int64 v45; // [rsp+E8h] [rbp+1Fh]

  v26 = 0;
  v25 = 0;
  v28 = 0;
  v4 = (NTSTATUS *)(a1 + 136);
  result = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
  if ( result )
  {
    LODWORD(a2) = (_DWORD)v4;
  }
  else
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    result = *(_DWORD *)(a2 + 16);
    v4[4] = result;
    if ( (unsigned int)dword_140E08138 > 5 )
    {
      v6 = *(_BYTE *)a2 & 1;
      v37 = 1LL;
      v22 = v6;
      v36 = &v22;
      v24 = *(_DWORD *)(a2 + 4);
      v38 = &v24;
      v23 = *(_DWORD *)(a2 + 8);
      v40 = &v23;
      v29 = *(_DWORD *)(a2 + 12);
      v42 = &v29;
      v27 = *(_DWORD *)(a2 + 16);
      v44 = &v27;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      ActivityIdThread = IoGetActivityIdThread();
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E08138,
                 (unsigned __int8 *)byte_140050A31,
                 (const GUID *)ActivityIdThread,
                 0LL,
                 7u,
                 &v35);
    }
  }
  v8 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_QWORD *)(a1 + 200) )
  {
    if ( ((*(_BYTE *)v4 ^ *(_BYTE *)(a1 + 176)) & 1) != 0 )
    {
      PopAdaptiveStandbySessionStop(a1, 2LL);
      PopAdaptiveStandbySessionStart(a1, 2LL);
    }
    if ( *(_DWORD *)(a1 + 140) != *(_DWORD *)(a1 + 180) )
    {
      PopAdaptiveStandbySessionStop(a1, 3LL);
      PopAdaptiveStandbySessionStart(a1, 3LL);
    }
    result = *v4;
    if ( (*v4 & 1) == 0 )
    {
      HIDWORD(v30.Ptr) = 0;
      v32 = 0;
      v9 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
      v10 = MEMORY[0xFFFFF78000000008] / 0x989680uLL - *(_QWORD *)(a1 + 200);
      if ( v10 > 0xFFFFFFFF )
        LODWORD(v10) = -1;
      v11 = *(_DWORD *)(a1 + 192);
      LODWORD(v30.Ptr) = v10;
      v12 = *(_DWORD *)(a1 + 152);
      v30.Size = v11;
      v31 = v11 - v12;
      v30.Reserved = v12;
      if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
      {
        PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction(a1, (unsigned int *)&v30, &v26, &v23);
        v32 = *(_DWORD *)(a1 + 232) - v30.Reserved;
        v13 = v9 - *(_QWORD *)(a1 + 224);
        if ( v13 > 0xFFFFFFFF )
          LODWORD(v13) = -1;
        HIDWORD(v30.Ptr) = v13;
        v14 = PopAdaptiveStandbyCheckHibernateBudgetAction(a1, (unsigned int *)&v30, &v25, &v24);
        v8 = v23;
        if ( v14 )
          v8 = v24;
        v15 = PopAdaptiveStandbyCalculateBatteryRegion(v30.Reserved);
        if ( v15 != (_DWORD)v17 && v32 >= *((_DWORD *)&PopAdaptiveStandbyRegions + 5 * v17 + 2) )
        {
          *(_DWORD *)(a1 + 232) = v16;
          *(_DWORD *)(a1 + 216) = v15;
          *(_QWORD *)(a1 + 224) = v9;
        }
        v18 = 5;
      }
      else
      {
        if ( PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction(a1, (unsigned int *)&v30, &v26, 0LL) )
          v8 = 3;
        if ( PopAdaptiveStandbyCheckHibernateReserveAction(a1, (unsigned int *)&v30, &v28) )
          v8 = 2;
        v19 = PopAdaptiveStandbyCheckHibernateBudgetAction(a1, (unsigned int *)&v30, &v25, 0LL);
        v18 = v28;
        if ( v19 )
          v8 = 1;
      }
      if ( !v8 )
        goto LABEL_41;
      if ( v8 != 1 && v8 != 2 )
      {
        if ( v8 == 3 )
          goto LABEL_35;
        if ( v8 != 4 )
        {
          if ( v8 == 5 && (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
          {
LABEL_35:
            if ( *(_DWORD *)(a1 + 548) )
              goto LABEL_37;
            goto LABEL_36;
          }
LABEL_37:
          if ( !*(_BYTE *)(a1 + 544) )
          {
            if ( (unsigned int)dword_140E08138 > 5 )
            {
              v20 = IoGetActivityIdThread();
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E08138,
                (unsigned __int8 *)word_140050642,
                (const GUID *)v20,
                0LL,
                2u,
                &v30);
            }
            *(_BYTE *)(a1 + 544) = 1;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 512), DelayedWorkQueue);
          }
LABEL_41:
          ++*(_DWORD *)(a1 + 236);
          result = PopAdaptiveStandbyTraceBatteryUpdate(a1, a2, v26, v25, v18);
          goto LABEL_42;
        }
        if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_37;
      }
LABEL_36:
      *(_DWORD *)(a1 + 548) = v8;
      goto LABEL_37;
    }
  }
LABEL_42:
  if ( (unsigned int)dword_140E08138 > 5 )
  {
    v27 = v8;
    v33 = &v27;
    v34 = 4LL;
    v21 = IoGetActivityIdThread();
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E08138,
             (unsigned __int8 *)&dword_140050674,
             (const GUID *)v21,
             0LL,
             3u,
             &v30);
  }
  return result;
}
