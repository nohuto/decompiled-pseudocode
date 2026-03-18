/*
 * XREFs of WMI_FireNotification @ 0x14008FAC0
 * Callers:
 *     HUBPDO_EvtDeviceD0Exit @ 0x140015C40 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtOutOfBandwidthTimer @ 0x140018AC0 (HUBPDO_EvtOutOfBandwidthTimer.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C108 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_CreatePdoInternal @ 0x1400811BC (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1400869EC (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x140033D50 (HUBMISC_StripSymbolicNamePrefix.c)
 *     _tlgWriteAgg @ 0x1400465A4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

int __fastcall WMI_FireNotification(__int64 *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 (__fastcall *v6)(PWDF_DRIVER_GLOBALS, __int64); // rax
  char v7; // r14
  int v8; // edi
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  _UNKNOWN **v13; // rax
  char v14; // r11
  unsigned __int8 *v15; // rdx
  unsigned __int8 v16; // r9
  char v17; // al
  bool v18; // al
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  const CHAR *v25; // rdx
  __int16 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r9d
  const CHAR *v30; // rdx
  __int64 v31; // r9
  int v32; // r9d
  const CHAR *v33; // rdx
  char v34; // al
  bool v35; // al
  char v37; // [rsp+30h] [rbp-D0h] BYREF
  char v38; // [rsp+31h] [rbp-CFh] BYREF
  char v39; // [rsp+32h] [rbp-CEh] BYREF
  char v40; // [rsp+33h] [rbp-CDh] BYREF
  _WORD v41[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v42[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v43[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  _WORD v44[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+58h] [rbp-A8h] BYREF
  int v50; // [rsp+5Ch] [rbp-A4h] BYREF
  int v51; // [rsp+60h] [rbp-A0h] BYREF
  int v52; // [rsp+64h] [rbp-9Ch] BYREF
  int v53; // [rsp+68h] [rbp-98h] BYREF
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int128 v57; // [rsp+88h] [rbp-78h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  int *v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  char *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  int *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  int *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  int *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  int *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  int *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  int *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  __int64 *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  char *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  const CHAR *v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  __int64 *v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]
  const CHAR *v86; // [rsp+190h] [rbp+90h]
  int v87; // [rsp+198h] [rbp+98h]
  int v88; // [rsp+19Ch] [rbp+9Ch]
  char *v89; // [rsp+1A0h] [rbp+A0h]
  __int64 v90; // [rsp+1A8h] [rbp+A8h]
  _WORD *v91; // [rsp+1B0h] [rbp+B0h]
  __int64 v92; // [rsp+1B8h] [rbp+B8h]
  _WORD *v93; // [rsp+1C0h] [rbp+C0h]
  __int64 v94; // [rsp+1C8h] [rbp+C8h]
  _WORD *v95; // [rsp+1D0h] [rbp+D0h]
  __int64 v96; // [rsp+1D8h] [rbp+D8h]
  int *v97; // [rsp+1E0h] [rbp+E0h]
  __int64 v98; // [rsp+1E8h] [rbp+E8h]
  __int64 *v99; // [rsp+1F0h] [rbp+F0h]
  __int64 v100; // [rsp+1F8h] [rbp+F8h]
  char *v101; // [rsp+200h] [rbp+100h]
  __int64 v102; // [rsp+208h] [rbp+108h]
  char *v103; // [rsp+210h] [rbp+110h]
  __int64 v104; // [rsp+218h] [rbp+118h]
  __int64 *v105; // [rsp+220h] [rbp+120h]
  __int64 v106; // [rsp+228h] [rbp+128h]

  v2 = *a1;
  v58 = 0LL;
  v57 = 0LL;
  v4 = *(_QWORD *)(v2 + 2552);
  v6 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3016);
  v7 = 0;
  v48 = 0LL;
  v8 = -1073741823;
  v9 = v6(WdfDriverGlobals, v4);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
         WdfDriverGlobals,
         v9,
         1LL) )
  {
    v7 = 1;
    HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)(v2 + 2560), &v48);
    DWORD1(v57) = *((unsigned __int16 *)a1 + 100);
    HIDWORD(v58) = v48 + 6;
    LODWORD(v57) = a2;
    LODWORD(v13) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int128 *))(WdfFunctions_01015
                                                                                               + 3024))(
                     WdfDriverGlobals,
                     *(_QWORD *)(v2 + 2552),
                     24LL,
                     &v57);
    v8 = (int)v13;
    if ( (int)v13 < 0 )
    {
      v13 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        LODWORD(v13) = WPP_RECORDER_SF_d(
                         *(_QWORD *)(v2 + 2536),
                         2u,
                         3u,
                         0x17u,
                         (__int64)&WPP_b48bfb8efb7f3208dce8b8d3052aa366_Traceguids,
                         v8);
    }
  }
  else
  {
    v13 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      LODWORD(v13) = WPP_RECORDER_SF_(
                       *(_QWORD *)(v2 + 2536),
                       v10,
                       3,
                       22,
                       (__int64)&WPP_b48bfb8efb7f3208dce8b8d3052aa366_Traceguids);
    }
  }
  v14 = *(_BYTE *)(v2 + 240);
  if ( !v14 || (*(_DWORD *)(v2 + 44) & 0x100) != 0 )
  {
    if ( (unsigned int)dword_14006D2D0 > 5 && (qword_14006D2E0 & 0x400000000000LL) != 0 )
    {
      LODWORD(v13) = 0;
      if ( (qword_14006D2E8 & 0x400000000000LL) == qword_14006D2E8 )
      {
        v55 = 1LL;
        v60 = &v55;
        v61 = 8LL;
        v62 = &v47;
        v64 = &v40;
        v66 = &v46;
        v19 = *(_DWORD *)(v2 + 168);
        v47 = a2;
        v63 = 4LL;
        v40 = v7;
        v65 = 1LL;
        v46 = v8;
        v67 = 4LL;
        v49 = v19;
        v68 = &v49;
        v69 = 4LL;
        if ( v19 == 1 )
          v20 = *(_DWORD *)(v2 + 188);
        else
          v20 = 0;
        v50 = v20;
        v70 = &v50;
        v71 = 4LL;
        if ( v19 == 1 )
          v21 = *(_DWORD *)(v2 + 192);
        else
          v21 = 0;
        v51 = v21;
        v72 = &v51;
        v73 = 4LL;
        if ( v19 == 1 )
          v22 = *(_DWORD *)(v2 + 196);
        else
          v22 = 0;
        v52 = v22;
        v23 = 0x7FFFFFFF;
        v75 = 4LL;
        v74 = &v52;
        if ( v19 == 1 )
          v24 = *(_DWORD *)(v2 + 176);
        else
          v24 = 0x7FFFFFFF;
        v53 = v24;
        v25 = (const CHAR *)(v2 + 176);
        v77 = 4LL;
        v76 = &v53;
        if ( v19 == 1 )
          v23 = *(_DWORD *)(v2 + 180);
        LODWORD(v54) = v23;
        v78 = &v54;
        v79 = 4LL;
        if ( v19 == 1 )
          v26 = *(_WORD *)(v2 + 184);
        else
          v26 = 0;
        v44[0] = v26;
        v81 = 2LL;
        if ( v19 != 2 )
          v25 = 0LL;
        v80 = (char *)v44;
        v27 = -1LL;
        if ( v25 )
        {
          v28 = -1LL;
          do
            ++v28;
          while ( v25[v28] );
          v29 = v28 + 1;
        }
        else
        {
          v25 = File;
          v29 = 1;
        }
        v82 = v25;
        v30 = (const CHAR *)(v2 + 181);
        LODWORD(v83) = v29;
        if ( v19 != 2 )
          v30 = 0LL;
        HIDWORD(v83) = 0;
        if ( v30 )
        {
          v31 = -1LL;
          do
            ++v31;
          while ( v30[v31] );
          v32 = v31 + 1;
        }
        else
        {
          v30 = File;
          v32 = 1;
        }
        v84 = (__int64 *)v30;
        v33 = (const CHAR *)(v2 + 186);
        LODWORD(v85) = v32;
        if ( v19 != 2 )
          v33 = 0LL;
        HIDWORD(v85) = 0;
        if ( v33 )
        {
          do
            ++v27;
          while ( v33[v27] );
          v12 = (unsigned int)(v27 + 1);
        }
        else
        {
          v33 = File;
          v12 = 1LL;
        }
        v86 = v33;
        v89 = &v39;
        v15 = (unsigned __int8 *)&unk_140069090;
        v16 = 25;
        v43[0] = *(_WORD *)(v2 + 2480);
        v91 = v43;
        v42[0] = *(_WORD *)(v2 + 2482);
        v93 = v42;
        v41[0] = *(_WORD *)(v2 + 2484);
        v95 = v41;
        LOWORD(v45) = *((_WORD *)a1 + 100);
        v97 = &v45;
        LODWORD(v48) = *((_DWORD *)a1 + 52);
        v99 = &v48;
        v34 = *((_BYTE *)a1 + 204) & 1;
        v87 = v12;
        v38 = v34;
        v101 = &v38;
        v35 = (*((_DWORD *)a1 + 51) & 0x1000) != 0;
        v88 = 0;
        v37 = v35;
        v103 = &v37;
        v105 = &v56;
        v39 = v14;
        v90 = 1LL;
        v92 = 2LL;
        v94 = 2LL;
        v96 = 2LL;
        v98 = 2LL;
        v100 = 4LL;
        v102 = 1LL;
        v104 = 1LL;
        v56 = 16779264LL;
        v106 = 8LL;
        goto LABEL_54;
      }
    }
  }
  else if ( (unsigned int)dword_14006D2D0 > 5 && (qword_14006D2E0 & 0x400000000000LL) != 0 )
  {
    LODWORD(v13) = 0;
    if ( (qword_14006D2E8 & 0x400000000000LL) == qword_14006D2E8 )
    {
      v48 = 1LL;
      v60 = &v48;
      v15 = (unsigned __int8 *)&unk_140068FA5;
      v61 = 8LL;
      v62 = &v45;
      v16 = 15;
      v45 = a2;
      v64 = &v37;
      v66 = &v46;
      v68 = (int *)&v38;
      v41[0] = *(_WORD *)(v2 + 2480);
      v70 = (int *)v41;
      v42[0] = *(_WORD *)(v2 + 2482);
      v72 = (int *)v42;
      v43[0] = *(_WORD *)(v2 + 2484);
      v74 = (int *)v43;
      v44[0] = *((_WORD *)a1 + 100);
      v76 = (int *)v44;
      v47 = *((_DWORD *)a1 + 52);
      v78 = (__int64 *)&v47;
      v17 = *((_BYTE *)a1 + 204) & 1;
      v63 = 4LL;
      v39 = v17;
      v80 = &v39;
      v18 = (*((_DWORD *)a1 + 51) & 0x1000) != 0;
      v37 = v7;
      v40 = v18;
      v82 = &v40;
      v84 = &v54;
      v65 = 1LL;
      v46 = v8;
      v67 = 4LL;
      v38 = v14;
      v69 = 1LL;
      v71 = 2LL;
      v73 = 2LL;
      v75 = 2LL;
      v77 = 2LL;
      v79 = 4LL;
      v81 = 1LL;
      v83 = 1LL;
      v54 = 16779264LL;
      v85 = 8LL;
LABEL_54:
      LODWORD(v13) = tlgWriteAgg(v11, v15, v12, v16, &v59);
    }
  }
  return (int)v13;
}
