/*
 * XREFs of StorpTelemetryNvmeLogNamespacePerfDataMeasures @ 0x1400BE67C
 * Callers:
 *     StorpTelemetryNvmeSendNamespacePerfData @ 0x1400BF5B8 (StorpTelemetryNvmeSendNamespacePerfData.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryNvmeLogNamespacePerfDataMeasures(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // r9
  const wchar_t *v12; // rdx
  unsigned __int64 *v13; // r9
  unsigned __int64 v14; // kr00_8
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v18; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  int *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  _BYTE v41[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v42[16]; // [rsp+F0h] [rbp-10h] BYREF
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  int *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  _BYTE v47[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  char *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  __int64 *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  int *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  int *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  int *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  __int64 *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]
  __int64 *v62; // [rsp+1A0h] [rbp+A0h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h]
  _BYTE v64[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 *v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1C8h] [rbp+C8h]
  PVOID v67; // [rsp+1D0h] [rbp+D0h]
  int v68; // [rsp+1D8h] [rbp+D8h]
  int v69; // [rsp+1DCh] [rbp+DCh]
  _BYTE v70[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v71[16]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v72[16]; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int64 *v73; // [rsp+210h] [rbp+110h]
  __int64 v74; // [rsp+218h] [rbp+118h]
  __int16 *v75; // [rsp+220h] [rbp+120h]
  __int64 v76; // [rsp+228h] [rbp+128h]
  unsigned __int64 v77; // [rsp+230h] [rbp+130h]
  int v78; // [rsp+238h] [rbp+138h]
  int v79; // [rsp+23Ch] [rbp+13Ch]

  if ( (unsigned int)dword_140172178 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x400000000000LL) )
    {
      v2 = *(_QWORD *)(v1 + 16);
      v3 = *(_QWORD *)(v2 + 128);
      v34 = 16LL;
      v33 = v3 + 1048;
      v35 = v1 + 160;
      v20 = *(_DWORD *)(v1 + 56);
      v37 = &v20;
      v36 = 16LL;
      v38 = 4LL;
      v21 = *(_DWORD *)(*(_QWORD *)(v2 + 128) + 56LL);
      v39 = &v21;
      v40 = 4LL;
      tlgCreate1Sz_char((__int64)v41, *(_BYTE **)(v2 + 752));
      tlgCreate1Sz_char((__int64)v42, *(_BYTE **)(*(_QWORD *)(v4 + 16) + 792LL));
      v6 = *(_QWORD *)(v5 + 16);
      v22 = *(unsigned __int16 *)(v6 + 4);
      v43 = &v22;
      v44 = 4LL;
      v7 = *(_BYTE *)(v6 + 136) & 2;
      v46 = 4LL;
      v23 = v7 != 0 ? 20 : 17;
      v45 = &v23;
      tlgCreate1Sz_wchar_t((__int64)v47, *(const wchar_t **)(*(_QWORD *)(v6 + 128) + 1032LL));
      v48 = &v27;
      v17 = *(_BYTE *)(v8 + 8);
      v50 = &v17;
      v28 = *(_QWORD *)(v8 + 360);
      v52 = &v28;
      v24 = *(_DWORD *)(v8 + 376);
      v54 = &v24;
      v27 = *(_QWORD *)&g_SystemUptime_s;
      v10 = *(_QWORD *)(v9 + 608);
      v49 = 8LL;
      v51 = 1LL;
      v53 = 8LL;
      v55 = 4LL;
      v25 = *(_DWORD *)(v10 + 88);
      v56 = &v25;
      v57 = 4LL;
      v26 = *(_DWORD *)(v10 + 96);
      v58 = &v26;
      v29 = *(_QWORD *)(v8 + 384);
      v60 = &v29;
      v59 = 4LL;
      v30 = *(_QWORD *)(v8 + 392);
      v61 = 8LL;
      v62 = &v30;
      v63 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v64, L"Read, Write");
      v12 = *(const wchar_t **)(v11 + 16);
      v65 = &v18;
      v67 = qword_140173030;
      v18 = WORD1(TelemetryPerfContext);
      v68 = 8 * WORD1(TelemetryPerfContext);
      v66 = 2LL;
      v69 = 0;
      tlgCreate1Sz_wchar_t((__int64)v70, v12);
      tlgCreate1Sz_wchar_t((__int64)v71, L"Flush, Unmap");
      tlgCreate1Sz_wchar_t((__int64)v72, L"64ms, 256ms, 1024ms, 5120ms, 5120+ms");
      v74 = 8LL;
      v14 = *v13;
      v76 = 2LL;
      v73 = &v31;
      v31 = v14 / 0x2710;
      v79 = 0;
      v75 = &v19;
      v15 = v13[46];
      v19 = 3 * qword_1401730B0;
      v77 = v15;
      v78 = 8 * (unsigned __int16)(3 * qword_1401730B0);
      tlgWriteTransfer_EtwWriteTransfer(
        (3 * qword_1401730B0) & 0x1FFFFFFFFFFFFFFFLL,
        (unsigned __int8 *)dword_140164B2B,
        v16,
        (__int64)v13,
        0x1Cu,
        &v32);
    }
  }
}
