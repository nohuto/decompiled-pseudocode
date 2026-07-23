/*
 * XREFs of PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x1407E38AC
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x140468BC0 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x14060E86C (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetAction @ 0x1407E3724 (PopAdaptiveStandbyCheckRefreshableBudgetAction.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions @ 0x1407E37E4 (PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionV2 @ 0x1407E3838 (PopAdaptiveStandbyCheckRefreshableBudgetActionV2.c)
 */

unsigned __int8 __fastcall PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        _DWORD *a4)
{
  __int64 v4; // rsi
  unsigned __int8 v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rcx
  char v15; // al
  char v16; // al
  struct _LIST_ENTRY *ActivityIdThread; // r8
  struct _LIST_ENTRY *v18; // r8
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21; // [rsp+31h] [rbp-CFh] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+6Ch] [rbp-94h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+74h] [rbp-8Ch] BYREF
  int v39; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  int *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  unsigned int *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  unsigned int *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  int *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  int *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  int *v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  __int64 *v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  __int64 *v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]
  int *v63; // [rsp+150h] [rbp+50h]
  __int64 v64; // [rsp+158h] [rbp+58h]
  int *v65; // [rsp+160h] [rbp+60h]
  __int64 v66; // [rsp+168h] [rbp+68h]
  __int64 *v67; // [rsp+170h] [rbp+70h]
  __int64 v68; // [rsp+178h] [rbp+78h]
  int *v69; // [rsp+180h] [rbp+80h]
  __int64 v70; // [rsp+188h] [rbp+88h]
  char *v71; // [rsp+190h] [rbp+90h]
  __int64 v72; // [rsp+198h] [rbp+98h]
  int *v73; // [rsp+1A0h] [rbp+A0h]
  __int64 v74; // [rsp+1A8h] [rbp+A8h]
  int *v75; // [rsp+1B0h] [rbp+B0h]
  __int64 v76; // [rsp+1B8h] [rbp+B8h]
  int *v77; // [rsp+1C0h] [rbp+C0h]
  __int64 v78; // [rsp+1C8h] [rbp+C8h]
  int *v79; // [rsp+1D0h] [rbp+D0h]
  __int64 v80; // [rsp+1D8h] [rbp+D8h]
  char *v81; // [rsp+1E0h] [rbp+E0h]
  __int64 v82; // [rsp+1E8h] [rbp+E8h]
  int *v83; // [rsp+1F0h] [rbp+F0h]
  __int64 v84; // [rsp+1F8h] [rbp+F8h]
  unsigned int *v85; // [rsp+200h] [rbp+100h]
  __int64 v86; // [rsp+208h] [rbp+108h]
  unsigned int *v87; // [rsp+210h] [rbp+110h]
  __int64 v88; // [rsp+218h] [rbp+118h]
  int *v89; // [rsp+220h] [rbp+120h]
  __int64 v90; // [rsp+228h] [rbp+128h]
  __int64 *v91; // [rsp+230h] [rbp+130h]
  __int64 v92; // [rsp+238h] [rbp+138h]

  v4 = a1 + 56;
  if ( *(_BYTE *)(a1 + 92) )
  {
    v9 = 0;
    *a3 = 15;
  }
  else if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions(a1, v4, a2, a3) )
    {
      if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_GetVariant(v10) == 8
        || (unsigned int)Feature_AdaptiveHibernateEnhancements__private_GetVariant(v11) == 6
        || (int)a2[3] > 20 )
      {
        v9 = PopAdaptiveStandbyCheckRefreshableBudgetActionV2(v4, a2[4], *a2, a3);
        if ( v9 )
          *a4 = 3;
      }
      else
      {
        v9 = 1;
        *(_BYTE *)v4 = 1;
        *a3 = 0;
        *a4 = 5;
      }
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = PopAdaptiveStandbyCheckRefreshableBudgetAction(a1, v4, a2, a3);
  }
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned int)dword_140E08138 > 5 && tlgKeywordOn((__int64)&dword_140E08138, 0x400000000000LL) )
    {
      v12 = *(_QWORD *)(a1 + 240);
      v13 = *(_DWORD *)(a1 + 248) == 2;
      v43 = *a2;
      v45 = &v43;
      v14 = v12 - 1;
      v31 = *(_DWORD *)(v4 + 20);
      if ( !v13 )
        v14 = v12;
      v41 = v14;
      v47 = &v31;
      v32 = a2[3];
      v49 = &v32;
      v33 = a2[4];
      v51 = &v33;
      v34 = *(_DWORD *)(v4 + 24);
      v53 = &v34;
      v35 = v9;
      v55 = &v35;
      v36 = *a3;
      v57 = &v36;
      v59 = &v40;
      v61 = &v41;
      v37 = *(_DWORD *)(v4 + 28);
      v63 = &v37;
      v38 = *(_DWORD *)(v4 + 32);
      v65 = &v38;
      v39 = *(_DWORD *)(a1 + 96);
      v67 = (__int64 *)&v39;
      v22 = *(_DWORD *)(a1 + 236);
      v69 = &v22;
      v15 = *(_BYTE *)(a1 + 136) & 1;
      v46 = 8LL;
      v20 = v15;
      v71 = &v20;
      v23 = *(_DWORD *)(a1 + 140);
      v73 = &v23;
      v24 = *(_DWORD *)(a1 + 144);
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v40 = v12;
      v60 = 8LL;
      v62 = 8LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 1LL;
      v74 = 4LL;
      v76 = 4LL;
      v75 = &v24;
      v25 = *(_DWORD *)(a1 + 148);
      v77 = &v25;
      v26 = *(_DWORD *)(a1 + 152);
      v79 = &v26;
      v16 = *(_BYTE *)(a1 + 156) & 1;
      v78 = 4LL;
      v21 = v16;
      v81 = &v21;
      v27 = *(_DWORD *)(a1 + 160);
      v83 = &v27;
      v28 = *(_DWORD *)(a1 + 164);
      v85 = &v28;
      v29 = *(_DWORD *)(a1 + 168);
      v87 = &v29;
      v30 = *(_DWORD *)(a1 + 172);
      v89 = &v30;
      v91 = &v42;
      v80 = 4LL;
      v82 = 1LL;
      v84 = 4LL;
      v86 = 4LL;
      v88 = 4LL;
      v90 = 4LL;
      v42 = 0x1000000LL;
      v92 = 8LL;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08138,
        (unsigned __int8 *)&word_1400506CE,
        (const GUID *)ActivityIdThread,
        0LL,
        0x1Au,
        v44);
    }
  }
  else if ( (unsigned int)dword_140E08138 > 5 && tlgKeywordOn((__int64)&dword_140E08138, 0x400000000000LL) )
  {
    v42 = *a2;
    v45 = &v42;
    v30 = *(_DWORD *)(v4 + 4);
    v47 = &v30;
    v29 = a2[3];
    v49 = &v29;
    v28 = a2[4];
    v51 = &v28;
    v27 = *(_DWORD *)(v4 + 8);
    v53 = &v27;
    v26 = v9;
    v55 = &v26;
    v25 = *a3;
    v57 = &v25;
    v41 = *(_QWORD *)(a1 + 240);
    v59 = &v41;
    v24 = *(_DWORD *)(v4 + 12);
    v61 = (__int64 *)&v24;
    v23 = *(_DWORD *)(v4 + 16);
    v63 = &v23;
    v22 = *(_DWORD *)(a1 + 96);
    v65 = &v22;
    v67 = &v40;
    v46 = 8LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 8LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v40 = 0x1000000LL;
    v68 = 8LL;
    v18 = IoGetActivityIdThread();
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&byte_140050917,
      (const GUID *)v18,
      0LL,
      0xEu,
      v44);
  }
  return v9;
}
