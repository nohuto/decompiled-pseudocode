/*
 * XREFs of PopAccountCbEnergyChange @ 0x1409C2F9C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

int PopAccountCbEnergyChange()
{
  __int64 *v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  const CHAR *v4; // rdx
  char v5; // r8
  const CHAR *v6; // rdx
  int v7; // r10d
  __int64 v8; // rsi
  unsigned __int8 v9; // r8
  const CHAR *v10; // rdx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r10
  const CHAR *v13; // rdx
  __int64 v14; // r10
  const CHAR *v15; // rdx
  unsigned __int8 v16; // r11
  __int64 v17; // r9
  char v18; // r8
  const CHAR *v19; // rdx
  unsigned __int8 v20; // r8
  const CHAR *v21; // rdx
  unsigned __int8 v22; // r8
  unsigned __int8 v23; // r10
  const CHAR *v24; // rdx
  char v25; // r8
  const CHAR *v26; // rdx
  char v27; // r8
  const CHAR *v28; // rdx
  char v29; // r8
  const CHAR *v30; // rdx
  const CHAR *v31; // rdx
  char v32; // r8
  unsigned __int8 v33; // r11
  const CHAR *v34; // rdx
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  __int128 v38; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+4Ch] [rbp-B4h] BYREF
  int v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  char v49[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v50[16]; // [rsp+B0h] [rbp-50h] BYREF
  char v51[16]; // [rsp+C0h] [rbp-40h] BYREF
  char v52[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  int *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char v57[16]; // [rsp+100h] [rbp+0h] BYREF
  char v58[16]; // [rsp+110h] [rbp+10h] BYREF
  char v59[16]; // [rsp+120h] [rbp+20h] BYREF
  char v60[16]; // [rsp+130h] [rbp+30h] BYREF
  char v61[16]; // [rsp+140h] [rbp+40h] BYREF
  char v62[16]; // [rsp+150h] [rbp+50h] BYREF
  char v63[16]; // [rsp+160h] [rbp+60h] BYREF
  char v64[16]; // [rsp+170h] [rbp+70h] BYREF
  char v65[16]; // [rsp+180h] [rbp+80h] BYREF
  unsigned int *v66; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  int *v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  int *v70; // [rsp+1B0h] [rbp+B0h]
  __int64 v71; // [rsp+1B8h] [rbp+B8h]
  int *v72; // [rsp+1C0h] [rbp+C0h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]
  __int64 *v74; // [rsp+1D0h] [rbp+D0h]
  __int64 v75; // [rsp+1D8h] [rbp+D8h]
  char *v76; // [rsp+1E0h] [rbp+E0h]
  __int64 v77; // [rsp+1E8h] [rbp+E8h]

  v0 = (__int64 *)qword_140F10640;
  v1 = 0LL;
  v38 = 0uLL;
  if ( (__int64 *)qword_140F10640 != &qword_140F10640 )
  {
    do
    {
      v1 += v0[29];
      v0 = (__int64 *)*v0;
    }
    while ( v0 != &qword_140F10640 );
    *((_QWORD *)&v38 + 1) = v1;
  }
  v2 = qword_140F10650;
  v3 = 0;
  LODWORD(v38) = 0;
  if ( (__int64 *)qword_140F10650 != &qword_140F10650 )
  {
    do
    {
      v3 |= *(_DWORD *)(v2 + 160);
      v2 = *(_QWORD *)v2;
    }
    while ( (__int64 *)v2 != &qword_140F10650 );
    LODWORD(v38) = v3;
  }
  if ( v3 != (_DWORD)xmmword_140F108A8 || v1 != *((_QWORD *)&xmmword_140F108A8 + 1) )
  {
    xmmword_140F108A8 = v38;
    if ( (unsigned int)dword_140E07560 > 5 )
    {
      v45 = v1;
      v47 = &v45;
      v4 = "Energy Counter Unavailable";
      if ( (v3 & 1) == 0 )
        v4 = "-";
      v48 = 8LL;
      tlgCreate1Sz_char((__int64)v49, v4);
      v6 = "Relative Capacity Unit";
      if ( (v5 & 2) == 0 )
        v6 = "-";
      tlgCreate1Sz_char((__int64)v50, v6);
      v8 = (unsigned int)(v7 - 4);
      v10 = "FCC Unavailable";
      if ( (v9 & (unsigned __int8)(v7 - 4)) == 0 )
        v10 = "-";
      tlgCreate1Sz_char((__int64)v51, v10);
      v13 = "Capacity Unavailable";
      if ( (v11 & v12) == 0 )
        v13 = "-";
      tlgCreate1Sz_char((__int64)v52, v13);
      v53 = &v38;
      v15 = "AC Power";
      v39 = dword_140F10634;
      *(_QWORD *)&v38 = v17;
      v55 = &v39;
      if ( ((unsigned __int8)xmmword_140F10660 & v16) == 0 )
        v15 = "DC Power";
      v54 = v14;
      v56 = v8;
      tlgCreate1Sz_char((__int64)v57, v15);
      v19 = "Battery Discharging";
      if ( (v18 & 2) == 0 )
        v19 = "-";
      tlgCreate1Sz_char((__int64)v58, v19);
      v21 = "Battery Charging";
      if ( (v20 & (unsigned __int8)v8) == 0 )
        v21 = "-";
      tlgCreate1Sz_char((__int64)v59, v21);
      v24 = "Battery Critical";
      if ( (v22 & v23) == 0 )
        v24 = "-";
      tlgCreate1Sz_char((__int64)v60, v24);
      v26 = "Battery charge limiting mode";
      if ( (v25 & 0x10) == 0 )
        v26 = "-";
      tlgCreate1Sz_char((__int64)v61, v26);
      v28 = "Battery charging state power supply present";
      if ( (v27 & 0x20) == 0 )
        v28 = "-";
      tlgCreate1Sz_char((__int64)v62, v28);
      v30 = "Battery charging state adequate";
      if ( (v29 & 0x40) == 0 )
        v30 = "-";
      tlgCreate1Sz_char((__int64)v63, v30);
      v31 = "Battery trip point supported";
      if ( v32 >= 0 )
        v31 = "-";
      tlgCreate1Sz_char((__int64)v64, v31);
      v34 = "Platform BCL Enabled";
      if ( (v33 & (unsigned __int8)byte_140F108B8) == 0 )
        v34 = "-";
      tlgCreate1Sz_char((__int64)v65, v34);
      if ( HIDWORD(qword_140F10694) )
        v35 = (unsigned int)(100 * DWORD1(xmmword_140F10660) + (HIDWORD(qword_140F10694) >> 1))
            / HIDWORD(qword_140F10694);
      else
        v35 = 0;
      v40 = v35;
      v66 = &v40;
      v67 = v8;
      if ( HIDWORD(qword_140F10694) )
        v36 = 100000 * (unsigned __int64)DWORD1(xmmword_140F10660) / HIDWORD(qword_140F10694);
      else
        LODWORD(v36) = 0;
      v41 = v36;
      v43 = HIDWORD(qword_140F10694);
      v68 = &v41;
      v42 = DWORD1(xmmword_140F10660);
      v69 = v8;
      v70 = &v42;
      v72 = &v43;
      v44 = *((_QWORD *)&xmmword_140F10660 + 1);
      v74 = &v44;
      v76 = (char *)&v44 + 4;
      v71 = v8;
      v73 = v8;
      v75 = v8;
      v77 = v8;
      LODWORD(v1) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E07560,
                      (unsigned __int8 *)&word_14004DC7E,
                      0LL,
                      0LL,
                      0x18u,
                      &v46);
    }
  }
  return v1;
}
