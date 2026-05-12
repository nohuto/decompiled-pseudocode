/*
 * XREFs of StorpTelemetryMiniportEventAdapter @ 0x140029AA8
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x140027DA8 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryMiniportEventAdapter(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r10
  int v4; // ecx
  int *v5; // r9
  __int64 v6; // r9
  int v7; // ecx
  int v8; // eax
  int v9; // r11d
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // r8d
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v35[16]; // [rsp+D0h] [rbp-30h] BYREF
  int *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  _BYTE v40[16]; // [rsp+100h] [rbp+0h] BYREF
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  int *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  int *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  _DWORD *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  __int64 v49; // [rsp+150h] [rbp+50h]
  _DWORD v50[2]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v51[16]; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  _BYTE v54[16]; // [rsp+180h] [rbp+80h] BYREF
  __int64 *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  _BYTE v57[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  _BYTE v60[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  _BYTE v63[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 *v64; // [rsp+1F0h] [rbp+F0h]
  __int64 v65; // [rsp+1F8h] [rbp+F8h]
  _BYTE v66[16]; // [rsp+200h] [rbp+100h] BYREF
  __int64 *v67; // [rsp+210h] [rbp+110h]
  __int64 v68; // [rsp+218h] [rbp+118h]
  _BYTE v69[16]; // [rsp+220h] [rbp+120h] BYREF
  __int64 *v70; // [rsp+230h] [rbp+130h]
  __int64 v71; // [rsp+238h] [rbp+138h]
  _BYTE v72[16]; // [rsp+240h] [rbp+140h] BYREF
  __int64 *v73; // [rsp+250h] [rbp+150h]
  __int64 v74; // [rsp+258h] [rbp+158h]

  if ( (unsigned int)dword_140172178 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(a1, 0x200000000000LL) )
    {
      v2 = *(_QWORD *)(v1 + 4784);
      v34[4] = (__int64)&v20;
      v34[6] = v1 + 5128;
      v20 = 2;
      v34[5] = 1LL;
      v34[7] = 16LL;
      tlgCreate1Sz_wchar_t(v35, v2);
      v4 = *(_DWORD *)(v3 + 4340);
      v36 = &v21;
      v22 = *v5;
      v21 = v4;
      v38 = &v22;
      v37 = 4LL;
      v39 = 4LL;
      tlgCreate1Sz_char(v40, v5 + 2);
      v7 = *(_DWORD *)(v6 + 4);
      v41 = &v23;
      v24 = *(_DWORD *)(v6 + 40);
      v43 = &v24;
      v25 = *(_DWORD *)(v6 + 44);
      v45 = &v25;
      v47 = v50;
      v49 = *(_QWORD *)(v6 + 56);
      v8 = *(unsigned __int16 *)(v6 + 48);
      v23 = v7;
      v50[0] = v8;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 2LL;
      v50[1] = v9;
      tlgCreate1Sz_char(v51, v6 + 64);
      v26 = *(_QWORD *)(v10 + 96);
      v52 = &v26;
      v53 = 8LL;
      tlgCreate1Sz_char(v54, v10 + 104);
      v27 = *(_QWORD *)(v11 + 136);
      v55 = &v27;
      v56 = 8LL;
      tlgCreate1Sz_char(v57, v11 + 144);
      v28 = *(_QWORD *)(v12 + 176);
      v58 = &v28;
      v59 = 8LL;
      tlgCreate1Sz_char(v60, v12 + 184);
      v29 = *(_QWORD *)(v13 + 216);
      v61 = &v29;
      v62 = 8LL;
      tlgCreate1Sz_char(v63, v13 + 224);
      v30 = *(_QWORD *)(v14 + 256);
      v64 = &v30;
      v65 = 8LL;
      tlgCreate1Sz_char(v66, v14 + 264);
      v31 = *(_QWORD *)(v15 + 296);
      v67 = &v31;
      v68 = 8LL;
      tlgCreate1Sz_char(v69, v15 + 304);
      v32 = *(_QWORD *)(v16 + 336);
      v70 = &v32;
      v71 = 8LL;
      tlgCreate1Sz_char(v72, v16 + 344);
      v18 = *(_QWORD *)(v17 + 376);
      v73 = &v33;
      v33 = v18;
      v74 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(v18, (int)&dword_1401616EA, v19, v17, 0x1Du, (__int64)v34);
    }
  }
}
