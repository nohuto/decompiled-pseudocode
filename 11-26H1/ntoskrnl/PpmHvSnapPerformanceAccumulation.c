/*
 * XREFs of PpmHvSnapPerformanceAccumulation @ 0x1402540F0
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140254FC0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x1404CB840 (PpmResetPerfTimes.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     HvlpGetLpcbByLpIndex @ 0x1402F3138 (HvlpGetLpcbByLpIndex.c)
 *     PpmConvertTime @ 0x1402F32B0 (PpmConvertTime.c)
 *     HvlGetReferenceTime @ 0x140411360 (HvlGetReferenceTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmHvSnapPerformanceAccumulation(__int64 a1, char a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  __int64 v4; // rax
  __int64 *v5; // r12
  char v6; // bl
  char v8; // r15
  unsigned int v9; // esi
  __int64 v10; // r13
  __int64 LpcbByLpIndex; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  char v16; // r14
  char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r11
  __int64 v27; // r13
  char *v28; // rdx
  unsigned __int64 v29; // r9
  _QWORD *v30; // r8
  __int64 v31; // rcx
  bool v32; // cf
  bool v33; // zf
  _DWORD *v34; // r10
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // r12
  _QWORD *v39; // rsi
  __int64 v40; // rax
  unsigned int *v41; // r11
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 *v49; // rcx
  char v51; // [rsp+30h] [rbp-D0h] BYREF
  char v52; // [rsp+31h] [rbp-CFh] BYREF
  char v53; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v54; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v55; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+48h] [rbp-B8h]
  __int64 ReferenceTime; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  __int64 v62; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v64; // [rsp+80h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  char *v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+E8h] [rbp-18h]
  char *v74; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  __int64 *v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  __int64 *v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  __int64 *v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  char *v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]
  __int64 v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  __int64 v86; // [rsp+150h] [rbp+50h]
  __int64 v87; // [rsp+158h] [rbp+58h]
  __int64 v88; // [rsp+160h] [rbp+60h]
  __int64 v89; // [rsp+168h] [rbp+68h]
  char v90; // [rsp+178h] [rbp+78h] BYREF
  char v91; // [rsp+180h] [rbp+80h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = (__int64 *)(a1 + 96);
  v6 = 0;
  v64 = a4;
  v63 = a3;
  v51 = a2;
  v8 = 0;
  v9 = *(_DWORD *)(v4 + 20);
  v10 = 2LL;
  v55 = 0LL;
  v59 = 2LL;
  v56 = 0LL;
  v54 = v9;
  do
  {
    while ( 1 )
    {
      do
      {
        LpcbByLpIndex = HvlpGetLpcbByLpIndex(v9);
        if ( !LpcbByLpIndex )
          break;
        v12 = *(_QWORD *)(LpcbByLpIndex + 24);
        v13 = *(_QWORD *)(v12 + 8LL * LODWORD(stru_140E3EAA8.WriteOperationCount));
        v8 = *(_QWORD *)(v12 + 8LL * stru_140E3EAA8.ForegroundLossTime) & 1;
        v55 = *(_QWORD *)(v12 + 8LL * HIDWORD(stru_140E3EAA8.WriteOperationCount));
      }
      while ( (v13 & 1) != 0 );
      ReferenceTime = HvlGetReferenceTime();
      v14 = HvlpGetLpcbByLpIndex(v9);
      v57 = v14 ? *(_QWORD *)(*(_QWORD *)(v14 + 24) + 8LL * LODWORD(stru_140E3EAA8.OtherOperationCount)) : 0LL;
      v16 = v51;
      v17 = &v90;
      do
      {
        v18 = *v5;
        if ( *v5 )
        {
          if ( v55 <= *(_QWORD *)(a1 + 80) )
          {
            *((_DWORD *)v17 + 2) = *(_DWORD *)(v18 + 24);
            *((_QWORD *)v17 - 1) = *(_QWORD *)(v18 + 16);
            *(_QWORD *)v17 = *(_QWORD *)(v18 + 8);
          }
          else
          {
            v19 = *(_QWORD *)(v18 + 40);
            if ( *(_BYTE *)(v18 + 33) )
            {
              LOBYTE(v18) = v16;
              guard_dispatch_icall_no_overrides(v19, v18, v17 - 8);
            }
            else
            {
              guard_dispatch_icall_no_overrides(v19, v17 + 8, v15);
            }
          }
        }
        ++v5;
        v17 += 24;
        --v10;
      }
      while ( v10 );
      v9 = v54;
      v20 = HvlpGetLpcbByLpIndex(v54);
      v22 = v56;
      if ( !v20 )
        break;
      v23 = *(_QWORD *)(v20 + 24);
      v24 = *(_QWORD *)(v23 + 8LL * LODWORD(stru_140E3EAA8.WriteOperationCount));
      v8 = *(_QWORD *)(v23 + 8LL * stru_140E3EAA8.ForegroundLossTime) & 1;
      v22 = *(_QWORD *)(v23 + 8LL * HIDWORD(stru_140E3EAA8.WriteOperationCount));
      v56 = v22;
      if ( (v24 & 1) == 0 )
        break;
      v10 = 2LL;
      v5 = (__int64 *)(a1 + 96);
    }
    v5 = (__int64 *)(a1 + 96);
    v10 = 2LL;
  }
  while ( v22 != v21 );
  v25 = *(unsigned int *)(a1 + 136);
  v26 = 2LL;
  v27 = a1 + 72 * (v25 + 2);
  *(_DWORD *)(a1 + 136) = v25 + 1;
  if ( (_DWORD)v25 == 7 )
    *(_DWORD *)(a1 + 136) = 0;
  v28 = &v90;
  v29 = ReferenceTime;
  v30 = (_QWORD *)(v27 + 32);
  v31 = v57;
  *(_DWORD *)v27 = KeGetPcr()->Prcb.Number;
  *(_BYTE *)(v27 + 5) = v51;
  *(_BYTE *)(v27 + 6) = v8;
  *(_QWORD *)(v27 + 8) = v22;
  *(_QWORD *)(v27 + 16) = v29;
  *(_QWORD *)(v27 + 24) = v31;
  v32 = v21 < *(_QWORD *)(a1 + 80);
  v33 = v21 == *(_QWORD *)(a1 + 80);
  v34 = (_DWORD *)(v27 + 64);
  *(_BYTE *)(v27 + 4) = v32 || v33;
  do
  {
    v35 = *(_QWORD *)((char *)v30 + a1 - v27 + 64);
    if ( v35 )
    {
      if ( *(_BYTE *)(v35 + 33) )
      {
        *v30 = *((_QWORD *)v28 - 1);
        v30[2] = *(_QWORD *)v28;
      }
      else
      {
        *v34 = *((_DWORD *)v28 + 2);
      }
    }
    ++v34;
    ++v30;
    v28 += 24;
    --v26;
  }
  while ( v26 );
  if ( (unsigned int)dword_140E07608 > 5 )
  {
    v54 = *(_DWORD *)(a1 + 136);
    v67 = 4LL;
    v66 = &v54;
    LODWORD(v56) = v9;
    v68 = &v56;
    LODWORD(v55) = *(_DWORD *)v27;
    v70 = &v55;
    v51 = *(_BYTE *)(v27 + 5);
    v72 = &v51;
    v52 = *(_BYTE *)(v27 + 6);
    v74 = &v52;
    v60 = *(_QWORD *)(v27 + 8);
    v76 = &v60;
    v61 = *(_QWORD *)(v27 + 16);
    v78 = &v61;
    v62 = *(_QWORD *)(v27 + 24);
    v80 = &v62;
    v53 = *(_BYTE *)(v27 + 4);
    v82 = &v53;
    v84 = v27 + 64;
    v86 = v27 + 32;
    v88 = v27 + 48;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 1LL;
    v75 = 1LL;
    v77 = 8LL;
    v79 = 8LL;
    v81 = 8LL;
    v83 = 1LL;
    v85 = 8LL;
    v87 = 16LL;
    v89 = 16LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07608,
      (unsigned __int8 *)byte_140050B30,
      0LL,
      0LL,
      0xEu,
      &v65);
    v31 = v57;
    v29 = ReferenceTime;
  }
  if ( v8 && v29 > v22 )
  {
    v36 = v29 - v22;
    v22 = v29;
    v31 += v36;
  }
  if ( v22 >= v63 )
  {
    *(_QWORD *)(a1 + 80) = v22;
    v37 = v22 - v31;
    v38 = v22 - v31 - *(_QWORD *)(a1 + 88);
    v33 = v22 - v31 == *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v22 - v31;
    if ( !v33 )
    {
      v39 = (_QWORD *)(a1 + 120);
      v40 = 2LL;
      v41 = (unsigned int *)&v91;
      do
      {
        v42 = *(v39 - 3);
        if ( v42 )
        {
          if ( *(_BYTE *)(v42 + 33) )
          {
            v43 = *(_QWORD *)(v42 + 16);
            v44 = *((_QWORD *)v41 - 2);
            if ( v44 != v43 )
            {
              v45 = *((_QWORD *)v41 - 1) - *(_QWORD *)(v42 + 8);
              *(_QWORD *)(v42 + 16) = v44;
              *(_QWORD *)(v42 + 8) = *((_QWORD *)v41 - 1);
              *(_DWORD *)(v42 + 24) = v45 * (unsigned __int64)*(unsigned int *)(v42 + 36) / (v44 - v43);
            }
            v46 = *(_DWORD *)(v42 + 24);
            *v41 = v46;
            v47 = PpmConvertTime(v38 * v46, 0x10000LL, 100LL);
          }
          else
          {
            v47 = v38 * *v41;
          }
          *v39 += v47;
          v40 = v59;
        }
        ++v39;
        v41 += 6;
        v59 = --v40;
      }
      while ( v40 );
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
      v48 = *(_QWORD *)(a1 + 120);
    }
    else if ( *(_QWORD *)(a1 + 104) )
    {
      v48 = *(_QWORD *)(a1 + 128);
    }
    else
    {
      v48 = 100LL * *(_QWORD *)(a1 + 112);
    }
    v49 = v64;
    v64[3] = v48;
    if ( *(_QWORD *)(a1 + 104) )
      v48 = *(_QWORD *)(a1 + 128);
    v49[4] = v48;
    *v49 = v22;
    v49[1] = v37;
  }
  else
  {
    v6 = 1;
  }
  *(_BYTE *)(v27 + 7) = v6;
  return v6 ^ 1;
}
