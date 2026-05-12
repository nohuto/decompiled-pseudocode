/*
 * XREFs of StorpTelemetryMiniportEventUnit @ 0x140029DB8
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x140027DA8 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14003F1BC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorpTelemetryMiniportEventUnit(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r9
  const int *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // r10
  __int64 v21; // r11
  _BYTE *v22; // rax
  char v23; // al
  __int16 v24; // ax
  __int16 v25; // cx
  __int16 v26; // cx
  __int16 v27; // cx
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // r8d
  int v32; // r9d
  int v33; // [rsp+20h] [rbp-E0h]
  int v34; // [rsp+28h] [rbp-D8h]
  char v35; // [rsp+40h] [rbp-C0h] BYREF
  char v36; // [rsp+41h] [rbp-BFh] BYREF
  __int16 v37; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v38; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v39; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-58h]
  __int64 v54[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v55[16]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  __int128 *v58; // [rsp+120h] [rbp+20h]
  int v59; // [rsp+128h] [rbp+28h]
  int v60; // [rsp+12Ch] [rbp+2Ch]
  char v61[16]; // [rsp+130h] [rbp+30h] BYREF
  char v62[16]; // [rsp+140h] [rbp+40h] BYREF
  char v63[16]; // [rsp+150h] [rbp+50h] BYREF
  char v64[16]; // [rsp+160h] [rbp+60h] BYREF
  char *v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  __int16 *v67; // [rsp+180h] [rbp+80h]
  __int64 v68; // [rsp+188h] [rbp+88h]
  __int16 *v69; // [rsp+190h] [rbp+90h]
  __int64 v70; // [rsp+198h] [rbp+98h]
  __int16 *v71; // [rsp+1A0h] [rbp+A0h]
  __int64 v72; // [rsp+1A8h] [rbp+A8h]
  __int16 *v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h]
  int *v75; // [rsp+1C0h] [rbp+C0h]
  __int64 v76; // [rsp+1C8h] [rbp+C8h]
  char v77[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v78; // [rsp+1E0h] [rbp+E0h]
  __int64 v79; // [rsp+1E8h] [rbp+E8h]
  int *v80; // [rsp+1F0h] [rbp+F0h]
  __int64 v81; // [rsp+1F8h] [rbp+F8h]
  int *v82; // [rsp+200h] [rbp+100h]
  __int64 v83; // [rsp+208h] [rbp+108h]
  _DWORD *v84; // [rsp+210h] [rbp+110h]
  __int64 v85; // [rsp+218h] [rbp+118h]
  __int64 v86; // [rsp+220h] [rbp+120h]
  _DWORD v87[2]; // [rsp+228h] [rbp+128h] BYREF
  char v88[16]; // [rsp+230h] [rbp+130h] BYREF
  __int64 *v89; // [rsp+240h] [rbp+140h]
  __int64 v90; // [rsp+248h] [rbp+148h]
  char v91[16]; // [rsp+250h] [rbp+150h] BYREF
  __int64 *v92; // [rsp+260h] [rbp+160h]
  __int64 v93; // [rsp+268h] [rbp+168h]
  char v94[16]; // [rsp+270h] [rbp+170h] BYREF
  __int64 *v95; // [rsp+280h] [rbp+180h]
  __int64 v96; // [rsp+288h] [rbp+188h]
  char v97[16]; // [rsp+290h] [rbp+190h] BYREF
  __int64 *v98; // [rsp+2A0h] [rbp+1A0h]
  __int64 v99; // [rsp+2A8h] [rbp+1A8h]
  char v100[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 *v101; // [rsp+2C0h] [rbp+1C0h]
  __int64 v102; // [rsp+2C8h] [rbp+1C8h]
  char v103[16]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 *v104; // [rsp+2E0h] [rbp+1E0h]
  __int64 v105; // [rsp+2E8h] [rbp+1E8h]
  char v106[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 *v107; // [rsp+300h] [rbp+200h]
  __int64 v108; // [rsp+308h] [rbp+208h]
  char v109[16]; // [rsp+310h] [rbp+210h] BYREF
  __int64 *v110; // [rsp+320h] [rbp+220h]
  __int64 v111; // [rsp+328h] [rbp+228h]
  __int128 v112; // [rsp+330h] [rbp+230h] BYREF
  char v113; // [rsp+340h] [rbp+240h]

  result = 0LL;
  v113 = 0;
  v112 = 0LL;
  v53 = 0LL;
  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 160);
    if ( result )
      v112 = *(_OWORD *)(result + 90);
  }
  if ( (unsigned int)dword_140172178 > 5 )
  {
    result = tlgKeywordOn(a1, 0x200000000000LL);
    if ( (_BYTE)result )
    {
      v7 = *(_QWORD *)(v6 + 4784);
      v54[4] = (__int64)&v35;
      v35 = 2;
      v54[6] = v6 + 5128;
      v54[5] = 1LL;
      v54[7] = 16LL;
      tlgCreate1Sz_wchar_t(v55, v7);
      v9 = -1LL;
      v56 = v10;
      v57 = 16LL;
      do
        ++v9;
      while ( *((_BYTE *)&v112 + v9) );
      v60 = 0;
      v59 = v9 + 1;
      v58 = &v112;
      v11 = (const int *)(v8 + 168);
      if ( !v8 )
        v11 = &dword_140154ADC;
      tlgCreate1Sz_char(v61, v11);
      v14 = v13 + 177;
      if ( !v13 )
        v14 = v12;
      tlgCreate1Sz_char(v62, v14);
      v17 = v16 + 242;
      if ( !v16 )
        v17 = v15;
      tlgCreate1Sz_char(v63, v17);
      if ( v19 )
        v18 = v19 + 498;
      tlgCreate1Sz_char(v64, v18);
      if ( v20 && (v22 = *(_BYTE **)(v20 + 112)) != 0LL )
        v23 = *v22 & 0x1F;
      else
        v23 = 31;
      v36 = v23;
      v65 = &v36;
      v24 = -1;
      v66 = 1LL;
      if ( v21 )
        v25 = *(_WORD *)(v21 + 2);
      else
        v25 = -1;
      v37 = v25;
      v67 = &v37;
      v68 = 2LL;
      if ( v21 )
        v26 = *(unsigned __int8 *)(v21 + 8);
      else
        v26 = -1;
      v38 = v26;
      v69 = &v38;
      v70 = 2LL;
      if ( v21 )
        v27 = *(unsigned __int8 *)(v21 + 9);
      else
        v27 = -1;
      v39 = v27;
      v71 = &v39;
      v72 = 2LL;
      if ( v21 )
        v24 = *(unsigned __int8 *)(v21 + 10);
      v40 = v24;
      v74 = 2LL;
      v73 = &v40;
      v41 = *a4;
      v75 = &v41;
      v76 = 4LL;
      tlgCreate1Sz_char(v77, a4 + 2);
      v28 = a4[1];
      v78 = &v42;
      v43 = a4[10];
      v80 = &v43;
      v44 = a4[11];
      v82 = &v44;
      v84 = v87;
      v86 = *((_QWORD *)a4 + 7);
      v29 = *((unsigned __int16 *)a4 + 24);
      v42 = v28;
      v87[0] = v29;
      v79 = 4LL;
      v81 = 4LL;
      v83 = 4LL;
      v85 = 2LL;
      v87[1] = 0;
      tlgCreate1Sz_char(v88, a4 + 16);
      v45 = *((_QWORD *)a4 + 12);
      v89 = &v45;
      v90 = 8LL;
      tlgCreate1Sz_char(v91, a4 + 26);
      v46 = *((_QWORD *)a4 + 17);
      v92 = &v46;
      v93 = 8LL;
      tlgCreate1Sz_char(v94, a4 + 36);
      v47 = *((_QWORD *)a4 + 22);
      v95 = &v47;
      v96 = 8LL;
      tlgCreate1Sz_char(v97, a4 + 46);
      v48 = *((_QWORD *)a4 + 27);
      v98 = &v48;
      v99 = 8LL;
      tlgCreate1Sz_char(v100, a4 + 56);
      v49 = *((_QWORD *)a4 + 32);
      v101 = &v49;
      v102 = 8LL;
      tlgCreate1Sz_char(v103, a4 + 66);
      v50 = *((_QWORD *)a4 + 37);
      v104 = &v50;
      v105 = 8LL;
      tlgCreate1Sz_char(v106, a4 + 76);
      v51 = *((_QWORD *)a4 + 42);
      v107 = &v51;
      v108 = 8LL;
      tlgCreate1Sz_char(v109, a4 + 86);
      v30 = *((_QWORD *)a4 + 47);
      v110 = &v52;
      v52 = v30;
      v111 = 8LL;
      return tlgWriteEx_EtwWriteEx(v30, (int)&dword_140162FD9, v31, v32, v33, v34, 0x27u, (__int64)v54);
    }
  }
  return result;
}
