/*
 * XREFs of PpmPerfRecordUtility @ 0x1402120E0
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x140211FC0 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     PpmPerfResetHistory @ 0x1402127BC (PpmPerfResetHistory.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmPerfRecordUtility(__int64 a1)
{
  __int64 *v1; // rbx
  _DWORD *v3; // rdx
  __int64 result; // rax
  unsigned __int8 *v5; // r13
  int v6; // esi
  __int64 v7; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // r9
  __int64 v10; // r15
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r10
  int v15; // r15d
  int v16; // r11d
  _DWORD *v17; // r13
  int v18; // r12d
  char v19; // cl
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r15
  const EVENT_DESCRIPTOR *v22; // r10
  __int64 v23; // rcx
  unsigned __int64 Keyword; // r8
  unsigned __int8 v25; // al
  _DWORD *v26; // rdx
  int v27; // r11d
  int v28; // eax
  unsigned __int8 v29; // r12
  unsigned __int8 v30; // r9
  unsigned __int8 v31; // r10
  unsigned __int8 v32; // r8
  unsigned __int8 v33; // dl
  int v34; // ecx
  unsigned __int8 v35; // al
  int v36; // r15d
  unsigned __int8 v37; // r15
  unsigned int v38; // ecx
  unsigned __int8 v39; // al
  int v40; // r15d
  unsigned int v41; // ecx
  unsigned int v42; // r8d
  unsigned int v43; // r9d
  char v44; // cl
  __int64 v45; // rcx
  unsigned __int64 v46; // r8
  unsigned __int8 v47; // al
  unsigned __int64 v48; // rax
  __int64 v49; // r9
  unsigned int v50; // r10d
  _DWORD *v51; // r8
  int v52; // eax
  int v53; // eax
  int v54; // edx
  int v55; // eax
  int v56; // eax
  _DWORD *v57; // rcx
  unsigned int v58; // eax
  int v59; // eax
  int v60; // [rsp+48h] [rbp-C0h] BYREF
  char v61; // [rsp+50h] [rbp-B8h] BYREF
  char v62; // [rsp+58h] [rbp-B0h] BYREF
  int v63; // [rsp+60h] [rbp-A8h] BYREF
  int v64; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v66; // [rsp+78h] [rbp-90h] BYREF
  int v67; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v68; // [rsp+88h] [rbp-80h]
  unsigned __int64 v69; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v70; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v71; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 *v73; // [rsp+B8h] [rbp-50h]
  __int64 v74; // [rsp+C0h] [rbp-48h]
  unsigned __int64 *v75; // [rsp+C8h] [rbp-40h]
  __int64 v76; // [rsp+D0h] [rbp-38h]
  int *v77; // [rsp+D8h] [rbp-30h]
  __int64 v78; // [rsp+E0h] [rbp-28h]
  int *v79; // [rsp+E8h] [rbp-20h]
  __int64 v80; // [rsp+F0h] [rbp-18h]
  _QWORD *v81; // [rsp+F8h] [rbp-10h]
  __int64 v82; // [rsp+100h] [rbp-8h]
  __int64 *v83; // [rsp+108h] [rbp+0h]
  __int64 v84; // [rsp+110h] [rbp+8h]
  int *v85; // [rsp+118h] [rbp+10h]
  __int64 v86; // [rsp+120h] [rbp+18h]
  char *v87; // [rsp+128h] [rbp+20h]
  __int64 v88; // [rsp+130h] [rbp+28h]
  __int64 v89; // [rsp+138h] [rbp+30h]
  __int64 v90; // [rsp+140h] [rbp+38h]
  unsigned __int64 *v91; // [rsp+148h] [rbp+40h]
  __int64 v92; // [rsp+150h] [rbp+48h]
  char *v93; // [rsp+158h] [rbp+50h]
  __int64 v94; // [rsp+160h] [rbp+58h]
  int *v95; // [rsp+168h] [rbp+60h]
  __int64 v96; // [rsp+170h] [rbp+68h]

  v1 = *(__int64 **)(a1 + 16);
  v3 = *(_DWORD **)(a1 + 8);
  result = (unsigned int)PpmCheckMakeupCount;
  v5 = *(unsigned __int8 **)(a1 + 24);
  v66 = v3;
  if ( v1 )
  {
    v6 = *((_DWORD *)v1 + 20) - *((_DWORD *)v1 + 6);
    v7 = v1[2];
    v8 = v1[1];
    v9 = v1[4] - v8;
    v10 = *v1;
    v11 = v1[5] - *v1;
    v12 = v1[6] - v7;
    if ( PpmCheckMakeupCount )
    {
      v48 = v9 / (unsigned int)(PpmCheckMakeupCount + 1);
      v3 = v66;
      v9 = v48;
      if ( v11 < v48 )
        v48 = v1[5] - *v1;
      v11 = v48;
      if ( v12 >= v9 )
        v12 = v9;
    }
    v1[1] = v8 + v9;
    v13 = v9;
    if ( v11 <= v9 )
      v13 = v11;
    *v1 = v10 + v11;
    v14 = v9;
    v1[2] = v7 + v12;
    if ( v12 <= v9 )
      v14 = v12;
    *((_DWORD *)v1 + 6) = *((_DWORD *)v1 + 20);
    if ( v9 <= 1 )
      v9 = 1LL;
    if ( v5 )
    {
      result = *v5;
      *(_DWORD *)(a1 + 40) = *v5 * v5[1];
    }
    else
    {
      v15 = *(unsigned __int16 *)(a1 + 60);
      if ( v3 )
      {
        v16 = v3[40];
        LODWORD(v17) = v3[41];
      }
      else
      {
        v16 = 100;
        LODWORD(v17) = 100;
      }
      v18 = 0;
      LOBYTE(v63) = *((_BYTE *)v1 + 237);
      v19 = *((_BYTE *)v1 + 236);
      v61 = 100;
      v62 = v19;
      LODWORD(v66) = (_DWORD)v17;
      v67 = v16;
      v20 = v13 * (unsigned int)(100 * (_DWORD)v17) / v9;
      v71 = v14;
      LOWORD(v65) = v20;
      v70 = v13;
      v60 = 0;
      v21 = v13 * (unsigned int)(v15 * (_DWORD)v17) / v9;
      v68 = v21;
      LOWORD(v64) = v21;
      v69 = v9 - v13;
      if ( *(_BYTE *)(a1 + 68) )
      {
        v22 = &PPM_ETW_RECORDED_UTILITY;
        LOWORD(v60) = *(unsigned __int8 *)(a1 - 35056);
        BYTE2(v60) = *(_BYTE *)(a1 - 35055);
        v80 = 3LL;
      }
      else
      {
        v22 = (const EVENT_DESCRIPTOR *)PPM_ETW_RECORDED_UTILITY_HV;
        v60 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
        v80 = 4LL;
      }
      v79 = &v60;
      if ( PpmEtwRegistered && PpmEtwHandle )
      {
        if ( (v23 = *(_QWORD *)(PpmEtwHandle + 32), Keyword = v22->Keyword, *(_DWORD *)(v23 + 96))
          && ((v25 = *(_BYTE *)(v23 + 100), v22->Level <= v25) || !v25)
          && ((*(_DWORD *)(v23 + 104) & 0x40) != 0 && !Keyword
           || (*(_QWORD *)(v23 + 112) & Keyword) != 0 && (Keyword & *(_QWORD *)(v23 + 120)) == *(_QWORD *)(v23 + 120))
          || *(_WORD *)(PpmEtwHandle + 102)
          && (v45 = *(_QWORD *)(PpmEtwHandle + 40), v46 = v22->Keyword, *(_DWORD *)(v45 + 96))
          && ((v47 = *(_BYTE *)(v45 + 100), v22->Level <= v47) || !v47)
          && ((*(_DWORD *)(v45 + 104) & 0x40) != 0 && !v46
           || (*(_QWORD *)(v45 + 112) & v46) != 0 && (v46 & *(_QWORD *)(v45 + 120)) == *(_QWORD *)(v45 + 120)) )
        {
          UserData.Ptr = (ULONGLONG)&PpmCheckTime;
          *(_QWORD *)&UserData.Size = 8LL;
          v73 = &v69;
          v74 = 8LL;
          v75 = &v70;
          v76 = 8LL;
          v77 = &v67;
          v81 = &v66;
          v83 = &v65;
          v85 = &v64;
          v87 = &v61;
          v89 = (__int64)v1 + 233;
          v91 = &v71;
          v93 = &v62;
          v95 = &v63;
          v78 = 4LL;
          v82 = 4LL;
          v84 = 2LL;
          v86 = 2LL;
          v88 = 1LL;
          v90 = 1LL;
          v92 = 8LL;
          v94 = 1LL;
          v96 = 1LL;
          EtwWriteEx(PpmEtwHandle, v22, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
        }
      }
      v26 = *(_DWORD **)(a1 + 32);
      v27 = *((unsigned __int8 *)v1 + 236);
      v60 = *((unsigned __int8 *)v1 + 237);
      v66 = v26;
      if ( v26 )
      {
        v49 = (unsigned int)v26[1];
        v50 = *v26;
        v51 = &v26[3 * v49];
        v26[2] += (unsigned __int16)v20 - *((unsigned __int16 *)v51 + 22);
        v52 = *((unsigned __int16 *)v51 + 23);
        *((_WORD *)v51 + 22) = v20;
        v26[3] += (unsigned __int16)v21 - v52;
        v53 = *((unsigned __int16 *)v51 + 24);
        *((_WORD *)v51 + 23) = v21;
        v54 = (unsigned __int16)v17;
        v17 = v66;
        v66[4] += v54 - v53;
        v55 = *((unsigned __int8 *)v51 + 50);
        *((_WORD *)v51 + 24) = v54;
        v17[5] += v27 - v55;
        v56 = *((unsigned __int8 *)v51 + 51);
        LOBYTE(v54) = v60;
        *((_BYTE *)v51 + 50) = v27;
        v17[6] += (unsigned __int8)v54 - v56;
        *((_BYTE *)v51 + 51) = v54;
        v17[7] -= *((unsigned __int8 *)v51 + 52);
        v17[7] += *((unsigned __int8 *)v1 + 232);
        *((_BYTE *)v51 + 52) = *((_BYTE *)v1 + 232);
        v17[8] -= *((unsigned __int8 *)v51 + 53);
        v17[8] += *((unsigned __int8 *)v1 + 233);
        v57 = v66;
        *((_BYTE *)v51 + 53) = *((_BYTE *)v1 + 233);
        v17[9] -= *((unsigned __int8 *)v51 + 54);
        v17[9] += *((unsigned __int8 *)v1 + 234);
        *((_BYTE *)v51 + 54) = *((_BYTE *)v1 + 234);
        v17[10] -= *((unsigned __int8 *)v51 + 55);
        v17[10] += *((unsigned __int8 *)v1 + 235);
        *((_BYTE *)v51 + 55) = *((_BYTE *)v1 + 235);
        if ( (_DWORD)v49 + 1 != v50 )
          v18 = v49 + 1;
        v58 = v17[2];
        v17[1] = v18;
        LODWORD(v20) = v58 / v50;
        v59 = v17[4] / v50;
        v68 = v17[3] / v50;
        LOWORD(v17) = v59;
        v27 = v57[5] / v50;
        v60 = v57[6] / v50;
        v28 = v57[8] / v50;
      }
      else
      {
        v28 = *((_DWORD *)v1 + 58) >> 8;
      }
      LODWORD(v65) = v28;
      v29 = v28;
      v30 = v28;
      v31 = v28;
      v32 = v28;
      v64 = (unsigned __int8)v28;
      v33 = v28;
      v34 = (unsigned __int8)v28;
      v35 = v27;
      if ( (unsigned __int8)v27 >= 0x64u )
        v35 = 100;
      v36 = v64;
      if ( (unsigned __int8)v27 < 0x64u )
        v36 = v34;
      v64 = v36;
      v37 = v65;
      if ( (unsigned __int8)v27 < 0x64u )
        v37 = v33;
      v38 = v20 * v35;
      v39 = v60;
      *(_DWORD *)(a1 + 52) = v38 / 0x64;
      if ( (unsigned __int8)v27 < 0x64u )
      {
        v31 = v32;
        v29 = v30;
      }
      if ( v39 >= 0x64u )
      {
        v29 = v64;
        v39 = 100;
        v31 = v37;
      }
      v40 = v68;
      *(_DWORD *)(a1 + 56) = (unsigned int)v20 * v39 / 0x64;
      if ( v31 >= 0x64u )
        v29 = 100;
      v41 = v20 * v29;
      result = 1374389535 * v41;
      v42 = v41 / 0x64;
      if ( PpmCheckCurrentPipelineId == 5 )
      {
        v43 = v40 * v29;
        LODWORD(v20) = v20 - v42;
        v44 = 1;
        result = 1374389535 * v43;
        v40 -= v43 / 0x64;
      }
      else
      {
        v44 = 0;
      }
      *(_DWORD *)(a1 + 40) = v20;
      *(_DWORD *)(a1 + 44) = v40;
      *(_DWORD *)(a1 + 48) = v42;
      *(_WORD *)(a1 + 62) = (_WORD)v17;
      *((_DWORD *)v1 + 60) = v6;
      if ( v44 )
        return PpmPerfResetHistory(a1);
    }
  }
  return result;
}
