/*
 * XREFs of StorpTelemetryNvmeHealthInfo @ 0x1400BDE84
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x140046910 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryNvmeHealthInfo(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int16 a6,
        __int64 a7,
        unsigned __int16 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // r10
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // r11
  __int64 v22; // r8
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  char v24; // [rsp+31h] [rbp-CFh] BYREF
  char v25; // [rsp+32h] [rbp-CEh] BYREF
  char v26; // [rsp+33h] [rbp-CDh] BYREF
  char v27; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  int *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  char *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  char *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  _BYTE v50[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v51[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v52[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v53[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  char *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  _DWORD *v58; // [rsp+160h] [rbp+60h]
  __int64 v59; // [rsp+168h] [rbp+68h]
  __int64 v60; // [rsp+170h] [rbp+70h]
  _DWORD v61[2]; // [rsp+178h] [rbp+78h] BYREF
  char *v62; // [rsp+180h] [rbp+80h]
  __int64 v63; // [rsp+188h] [rbp+88h]
  __int16 *v64; // [rsp+190h] [rbp+90h]
  __int64 v65; // [rsp+198h] [rbp+98h]
  _DWORD *v66; // [rsp+1A0h] [rbp+A0h]
  __int64 v67; // [rsp+1A8h] [rbp+A8h]
  __int64 v68; // [rsp+1B0h] [rbp+B0h]
  _DWORD v69[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 *v70; // [rsp+1C0h] [rbp+C0h]
  __int64 v71; // [rsp+1C8h] [rbp+C8h]
  __int64 *v72; // [rsp+1D0h] [rbp+D0h]
  __int64 v73; // [rsp+1D8h] [rbp+D8h]
  __int64 *v74; // [rsp+1E0h] [rbp+E0h]
  __int64 v75; // [rsp+1E8h] [rbp+E8h]
  __int64 *v76; // [rsp+1F0h] [rbp+F0h]
  __int64 v77; // [rsp+1F8h] [rbp+F8h]
  __int64 *v78; // [rsp+200h] [rbp+100h]
  __int64 v79; // [rsp+208h] [rbp+108h]
  __int64 *v80; // [rsp+210h] [rbp+110h]
  __int64 v81; // [rsp+218h] [rbp+118h]

  if ( (unsigned int)dword_140172178 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x400000000000LL) )
    {
      v16 = *(_QWORD *)(v15 + 24);
      v39 = 16LL;
      v41 = 16LL;
      v38 = v16 + 5128;
      v40 = v15 + 2104;
      v29 = *(_DWORD *)(v16 + 56);
      v42 = &v29;
      v23 = *(_BYTE *)(v15 + 104);
      v44 = &v23;
      v24 = *(_BYTE *)(v15 + 105);
      v46 = &v24;
      v25 = *(_BYTE *)(v15 + 106);
      v48 = &v25;
      v43 = 4LL;
      v45 = 1LL;
      v47 = 1LL;
      v49 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v50, *(const wchar_t **)(v16 + 4784));
      tlgCreate1Sz_char((__int64)v51, (_BYTE *)(v17 + 168));
      tlgCreate1Sz_char((__int64)v52, (_BYTE *)(v18 + 177));
      tlgCreate1Sz_wchar_t((__int64)v53, a2);
      v54 = &v30;
      v26 = *(_BYTE *)(v19 + 2124);
      v56 = &v26;
      v58 = v61;
      v61[0] = (unsigned __int16)v20;
      v27 = a5;
      v62 = &v27;
      v28 = a6;
      v64 = &v28;
      v66 = v69;
      v68 = a7;
      v69[0] = a8;
      v31 = a9;
      v70 = &v31;
      v32 = a10;
      v30 = *(_QWORD *)&g_SystemUptime_s;
      v55 = 8LL;
      v57 = 1LL;
      v59 = 2LL;
      v60 = v21;
      v61[1] = 0;
      v63 = 1LL;
      v65 = 2LL;
      v67 = 2LL;
      v69[1] = 0;
      v71 = 8LL;
      v73 = 8LL;
      v72 = &v32;
      v33 = a11;
      v74 = &v33;
      v34 = a12;
      v76 = &v34;
      v35 = a13;
      v78 = &v35;
      v36 = a14;
      v80 = &v36;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 8LL;
      v81 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        *(__int64 *)&g_SystemUptime_s,
        (unsigned __int8 *)dword_1401647E6,
        v22,
        v20,
        0x1Au,
        &v37);
    }
  }
}
