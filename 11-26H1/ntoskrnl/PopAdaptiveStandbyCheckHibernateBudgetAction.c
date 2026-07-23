/*
 * XREFs of PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407E2E8C
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x140468BC0 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetAction @ 0x1407E3724 (PopAdaptiveStandbyCheckRefreshableBudgetAction.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions @ 0x1407E37E4 (PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionV2 @ 0x1407E3838 (PopAdaptiveStandbyCheckRefreshableBudgetActionV2.c)
 *     PopAdaptiveStandbySetPolicyTimer @ 0x1407E5600 (PopAdaptiveStandbySetPolicyTimer.c)
 */

unsigned __int8 __fastcall PopAdaptiveStandbyCheckHibernateBudgetAction(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        _DWORD *a4)
{
  __int64 v5; // rdi
  unsigned __int8 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rcx
  char v14; // al
  char v15; // al
  struct _LIST_ENTRY *ActivityIdThread; // r8
  struct _LIST_ENTRY *v17; // r8
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+31h] [rbp-CFh] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+64h] [rbp-9Ch] BYREF
  int v34; // [rsp+68h] [rbp-98h] BYREF
  int v35; // [rsp+6Ch] [rbp-94h] BYREF
  int v36; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+74h] [rbp-8Ch] BYREF
  int v38; // [rsp+78h] [rbp-88h] BYREF
  int v39; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  int *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  unsigned int *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  unsigned int *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  int *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  int *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  int *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  __int64 *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  __int64 *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  int *v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  __int64 *v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  int *v68; // [rsp+180h] [rbp+80h]
  __int64 v69; // [rsp+188h] [rbp+88h]
  __int64 *v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h]
  int *v72; // [rsp+1A0h] [rbp+A0h]
  __int64 v73; // [rsp+1A8h] [rbp+A8h]
  int *v74; // [rsp+1B0h] [rbp+B0h]
  __int64 v75; // [rsp+1B8h] [rbp+B8h]
  char *v76; // [rsp+1C0h] [rbp+C0h]
  __int64 v77; // [rsp+1C8h] [rbp+C8h]
  int *v78; // [rsp+1D0h] [rbp+D0h]
  __int64 v79; // [rsp+1D8h] [rbp+D8h]
  int *v80; // [rsp+1E0h] [rbp+E0h]
  __int64 v81; // [rsp+1E8h] [rbp+E8h]
  int *v82; // [rsp+1F0h] [rbp+F0h]
  __int64 v83; // [rsp+1F8h] [rbp+F8h]
  int *v84; // [rsp+200h] [rbp+100h]
  __int64 v85; // [rsp+208h] [rbp+108h]
  char *v86; // [rsp+210h] [rbp+110h]
  __int64 v87; // [rsp+218h] [rbp+118h]
  int *v88; // [rsp+220h] [rbp+120h]
  __int64 v89; // [rsp+228h] [rbp+128h]
  unsigned int *v90; // [rsp+230h] [rbp+130h]
  __int64 v91; // [rsp+238h] [rbp+138h]
  unsigned int *v92; // [rsp+240h] [rbp+140h]
  __int64 v93; // [rsp+248h] [rbp+148h]
  int *v94; // [rsp+250h] [rbp+150h]
  __int64 v95; // [rsp+258h] [rbp+158h]
  __int64 *v96; // [rsp+260h] [rbp+160h]
  __int64 v97; // [rsp+268h] [rbp+168h]

  v5 = a1 + 4;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_OWORD *)(v5 + 20) = *(__int128 *)((char *)&PopAdaptiveStandbyRegions + 20 * *(int *)(a1 + 216) + 4);
    PopAdaptiveStandbySetPolicyTimer(a1, *a2, *(unsigned int *)(v5 + 20));
    if ( (unsigned __int8)PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions(a1, v5, a2, a3) )
    {
      if ( (int)a2[3] <= 10 )
      {
        v10 = *a2;
        if ( (unsigned int)v10 >= 0x708 )
        {
          v9 = 1;
          v21 = 1;
          *(_BYTE *)v5 = 1;
          *a3 = 0;
          *a4 = 4;
          goto LABEL_12;
        }
        PopAdaptiveStandbySetPolicyTimer(a1, v10, 1800LL);
      }
      v9 = PopAdaptiveStandbyCheckRefreshableBudgetActionV2(v5, a2[5], a2[1], a3);
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
    v9 = PopAdaptiveStandbyCheckRefreshableBudgetAction(a1, v5, a2, a3);
  }
  v21 = 0;
LABEL_12:
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v9 && *(_BYTE *)(a1 + 324) )
    {
      *(_BYTE *)(a1 + 324) = 0;
      KeCancelTimer2(a1 + 336);
    }
    if ( (unsigned int)dword_140E08138 > 5 && tlgKeywordOn((__int64)&dword_140E08138, 0x400000000000LL) )
    {
      v11 = *(_QWORD *)(a1 + 240);
      v12 = *(_DWORD *)(a1 + 248) == 2;
      v43 = *a2;
      v46 = &v43;
      v13 = v11 - 1;
      v30 = *(_DWORD *)(v5 + 20);
      if ( !v12 )
        v13 = v11;
      v40 = v13;
      v48 = &v30;
      v31 = a2[3];
      v50 = &v31;
      v32 = a2[4];
      v52 = &v32;
      v33 = *(_DWORD *)(v5 + 24);
      v54 = &v33;
      v34 = v9;
      v56 = &v34;
      v35 = *a3;
      v58 = &v35;
      v60 = &v44;
      v62 = &v40;
      v36 = *(_DWORD *)(v5 + 28);
      v64 = &v36;
      v37 = *(_DWORD *)(v5 + 32);
      v66 = (__int64 *)&v37;
      v38 = *(_DWORD *)(a1 + 216);
      v68 = &v38;
      v41 = a2[1];
      v70 = &v41;
      v72 = &v21;
      v39 = *(_DWORD *)(a1 + 236);
      v74 = &v39;
      v14 = *(_BYTE *)(a1 + 136) & 1;
      v47 = 8LL;
      v19 = v14;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v44 = v11;
      v61 = 8LL;
      v63 = 8LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      v71 = 8LL;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 1LL;
      v76 = &v19;
      v22 = *(_DWORD *)(a1 + 140);
      v78 = &v22;
      v23 = *(_DWORD *)(a1 + 144);
      v80 = &v23;
      v24 = *(_DWORD *)(a1 + 148);
      v82 = &v24;
      v25 = *(_DWORD *)(a1 + 152);
      v84 = &v25;
      v15 = *(_BYTE *)(a1 + 156) & 1;
      v79 = 4LL;
      v20 = v15;
      v86 = &v20;
      v26 = *(_DWORD *)(a1 + 160);
      v88 = &v26;
      v27 = *(_DWORD *)(a1 + 164);
      v90 = &v27;
      v28 = *(_DWORD *)(a1 + 168);
      v92 = &v28;
      v29 = *(_DWORD *)(a1 + 172);
      v94 = &v29;
      v96 = &v42;
      v81 = 4LL;
      v83 = 4LL;
      v85 = 4LL;
      v87 = 1LL;
      v89 = 4LL;
      v91 = 4LL;
      v93 = 4LL;
      v95 = 4LL;
      v42 = 0x1000000LL;
      v97 = 8LL;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08138,
        (unsigned __int8 *)&word_1400501CE,
        (const GUID *)ActivityIdThread,
        0LL,
        0x1Cu,
        v45);
    }
  }
  else if ( (unsigned int)dword_140E08138 > 5 && tlgKeywordOn((__int64)&dword_140E08138, 0x400000000000LL) )
  {
    v42 = *a2;
    v46 = &v42;
    v29 = *(_DWORD *)(v5 + 4);
    v48 = &v29;
    v28 = a2[3];
    v50 = &v28;
    v27 = a2[4];
    v52 = &v27;
    v26 = *(_DWORD *)(v5 + 8);
    v54 = &v26;
    v25 = v9;
    v56 = &v25;
    v24 = *a3;
    v58 = &v24;
    v41 = *(_QWORD *)(a1 + 240);
    v60 = &v41;
    v23 = *(_DWORD *)(v5 + 12);
    v62 = (__int64 *)&v23;
    v22 = *(_DWORD *)(v5 + 16);
    v64 = &v22;
    v66 = &v40;
    v47 = 8LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 8LL;
    v63 = 4LL;
    v65 = 4LL;
    v40 = 0x1000000LL;
    v67 = 8LL;
    v17 = IoGetActivityIdThread();
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&word_140050026,
      (const GUID *)v17,
      0LL,
      0xDu,
      v45);
  }
  return v9;
}
