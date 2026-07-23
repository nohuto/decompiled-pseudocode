/*
 * XREFs of PpmPerfArbitratorApplyProcessorState @ 0x140331C90
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1402545E8 (PpmPerfApplyProcessorState.c)
 *     PpmPerfSetProcessorIdle @ 0x1402F7A14 (PpmPerfSetProcessorIdle.c)
 *     PoSetProcessorQos @ 0x140331A90 (PoSetProcessorQos.c)
 *     KeCheckAndApplyBamQos @ 0x140332380 (KeCheckAndApplyBamQos.c)
 *     KiCheckForPendingQosUpdate @ 0x140332CE0 (KiCheckForPendingQosUpdate.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfArbitratorApplyProcessorState(__int64 a1, unsigned __int8 a2, char a3)
{
  char v4; // r15
  __int64 v5; // rcx
  const GUID *ActivityId; // r9
  char v7; // r13
  __int64 v9; // rbx
  signed int v10; // r14d
  int v11; // edx
  int v12; // eax
  _OWORD *v13; // rdx
  __int64 v14; // r8
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  volatile signed __int32 *v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // dx
  unsigned __int64 v21; // rcx
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // dx
  unsigned __int64 v24; // rcx
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // dx
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // dx
  unsigned __int64 v30; // rcx
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // dx
  unsigned __int64 v33; // rcx
  __int16 v34; // ax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm1
  __int64 v38; // rdx
  __int64 v39; // r9
  signed __int64 v40; // rbx
  signed __int64 v41; // rcx
  __int128 v42; // rt0
  unsigned __int8 v43; // tt
  bool v44; // zf
  const EVENT_DESCRIPTOR *v45; // rbx
  __int64 v47; // r8
  __int64 v48; // rdx
  unsigned __int64 Keyword; // r8
  unsigned __int8 v50; // al
  __int64 v51; // rcx
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh] BYREF
  int v54; // [rsp+48h] [rbp-B8h] BYREF
  int v55; // [rsp+4Ch] [rbp-B4h] BYREF
  int v56; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+60h] [rbp-A0h]
  __int128 v59; // [rsp+70h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  int *v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  __int64 v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  int *v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  int *v79; // [rsp+120h] [rbp+20h]
  __int64 v80; // [rsp+128h] [rbp+28h]
  int *v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  __int64 v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+148h] [rbp+48h]
  __int64 v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 35272);
  ActivityId = 0LL;
  v7 = a3;
  v9 = *(_QWORD *)(a1 + 35264);
  if ( PpmPerfQosEnabled )
    v10 = *(_DWORD *)(a1 + 35408);
  else
    v10 = 0;
  v11 = *(_DWORD *)(v9 + 868);
  if ( v10 == *(_DWORD *)(a1 + 35412) )
  {
    if ( *(_DWORD *)(v5 + 144) == v11 )
      goto LABEL_9;
    if ( v10 )
    {
      if ( *(_BYTE *)(v9 + 499) && (struct _KPRCB *)a1 != KeGetCurrentPrcb() )
        return 0;
      a2 = 1;
    }
    *(_DWORD *)(v5 + 144) = v11;
    goto LABEL_14;
  }
  if ( !*(_BYTE *)(v9 + 499) || (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
  {
    v12 = *(unsigned __int16 *)(a1 + 35416);
    if ( !_bittest(&v12, v10) || *(_DWORD *)(v5 + 144) != v11 )
    {
      a3 = 1;
      *(_DWORD *)(v5 + 144) = v11;
      a2 = 1;
    }
    *(_DWORD *)(a1 + 35412) = v10;
    v4 = 1;
LABEL_9:
    if ( !a3 )
    {
LABEL_48:
      if ( !v4 )
        return 1;
LABEL_49:
      v44 = *(_BYTE *)(a1 + 35332) == 0;
      v57 = *(_DWORD *)(a1 + 35412);
      v56 = a2;
      v52 = 0;
      if ( v44 )
      {
        v45 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PROCESSOR_PERF_STATE_CHANGE_HV;
        v52 = *(_DWORD *)(*(_QWORD *)(a1 + 35272) + 20LL);
        v64 = 4LL;
      }
      else
      {
        v45 = &PPM_ETW_PROCESSOR_PERF_STATE_CHANGE;
        LOWORD(v52) = *(unsigned __int8 *)(a1 + 208);
        BYTE2(v52) = *(_BYTE *)(a1 + 209);
        v64 = 3LL;
      }
      v63 = &v52;
      if ( PpmEtwRegistered && PpmEtwHandle )
      {
        if ( (v48 = *(_QWORD *)(PpmEtwHandle + 32), Keyword = v45->Keyword, *(_DWORD *)(v48 + 96))
          && ((v50 = *(_BYTE *)(v48 + 100), v45->Level <= v50) || !v50)
          && ((*(_DWORD *)(v48 + 104) & 0x40) != 0 && !Keyword
           || (Keyword & *(_QWORD *)(v48 + 112)) != 0 && (*(_QWORD *)(v48 + 120) & Keyword) == *(_QWORD *)(v48 + 120))
          || *(_WORD *)(PpmEtwHandle + 102)
          && EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 96LL, v45->Level, v45->Keyword) )
        {
          v51 = *(_QWORD *)(a1 + 35272);
          v53 = *(_DWORD *)(v51 + 64);
          v54 = *(_DWORD *)(v51 + 84);
          UserData.Ptr = (ULONGLONG)&v53;
          v61 = &v54;
          v65 = v51 + 80;
          v67 = v51 + 96;
          v69 = v51 + 88;
          v71 = v51 + 92;
          v73 = v51 + 100;
          v75 = v51 + 104;
          *(_QWORD *)&UserData.Size = 4LL;
          v62 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 4LL;
          v76 = 4LL;
          v55 = *(unsigned __int8 *)(v51 + 136);
          v77 = &v55;
          v79 = &v56;
          v81 = &v57;
          v78 = 4LL;
          v85 = v51 + 108;
          v80 = 4LL;
          v82 = 4LL;
          v83 = v51 + 72;
          v84 = 8LL;
          v86 = 4LL;
          EtwWriteEx(PpmEtwHandle, v45, 0LL, 0, ActivityId, ActivityId, 0xEu, &UserData);
        }
      }
      return 1;
    }
LABEL_14:
    if ( v7 )
      *(_DWORD *)(v5 + 144) = 0;
    v13 = (_OWORD *)(v5 + 64);
    *(_DWORD *)(v5 + 156) = *(_DWORD *)(v5 + 80);
    *(_DWORD *)(v5 + 152) = *(_DWORD *)(v5 + 84);
    v14 = v9 + 80LL * v10 + 872;
    if ( *(_BYTE *)(v14 + 72) )
      *(_DWORD *)(v5 + 148) = -1;
    else
      *(_DWORD *)(v5 + 148) = *(_DWORD *)(v14 + 16);
    *v13 = *(_OWORD *)v14;
    *(_OWORD *)(v5 + 80) = *(_OWORD *)(v14 + 16);
    *(_OWORD *)(v5 + 96) = *(_OWORD *)(v14 + 32);
    *(_OWORD *)(v5 + 112) = *(_OWORD *)(v14 + 48);
    *(_OWORD *)(v5 + 128) = *(_OWORD *)(v14 + 64);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 8), v13, a2);
    if ( PopHeteroSystem )
    {
      v15 = *(_WORD *)(v9 + 2LL * v10 + 852);
      v16 = *(_WORD *)(a1 + 35416);
      if ( v15 != v16 )
      {
        *(_WORD *)(a1 + 35416) = v15;
        v17 = *(volatile signed __int32 **)(a1 + 192);
        if ( (v15 & 1) != (v16 & 1) )
        {
          v18 = *(unsigned __int8 *)(a1 + 209);
          if ( (v15 & 1) != 0 )
            _interlockedbittestandset64(v17 + 64, v18);
          else
            _interlockedbittestandreset64(v17 + 64, v18);
        }
        v19 = v15 >> 1;
        v20 = v16 >> 1;
        if ( (v19 & 1) != (v20 & 1) )
        {
          v21 = *(unsigned __int8 *)(a1 + 209);
          if ( (v19 & 1) != 0 )
            _interlockedbittestandset64(v17 + 66, v21);
          else
            _interlockedbittestandreset64(v17 + 66, v21);
        }
        v22 = v19 >> 1;
        v23 = v20 >> 1;
        if ( (v22 & 1) != (v23 & 1) )
        {
          v24 = *(unsigned __int8 *)(a1 + 209);
          if ( (v22 & 1) != 0 )
            _interlockedbittestandset64(v17 + 68, v24);
          else
            _interlockedbittestandreset64(v17 + 68, v24);
        }
        v25 = v22 >> 1;
        v26 = v23 >> 1;
        if ( (v25 & 1) != (v26 & 1) )
        {
          v27 = *(unsigned __int8 *)(a1 + 209);
          if ( (v25 & 1) != 0 )
            _interlockedbittestandset64(v17 + 70, v27);
          else
            _interlockedbittestandreset64(v17 + 70, v27);
        }
        v28 = v25 >> 1;
        v29 = v26 >> 1;
        if ( (v28 & 1) != (v29 & 1) )
        {
          v30 = *(unsigned __int8 *)(a1 + 209);
          if ( (v28 & 1) != 0 )
            _interlockedbittestandset64(v17 + 72, v30);
          else
            _interlockedbittestandreset64(v17 + 72, v30);
        }
        v31 = v28 >> 1;
        v32 = v29 >> 1;
        if ( (v31 & 1) != (v32 & 1) )
        {
          v33 = *(unsigned __int8 *)(a1 + 209);
          if ( (v31 & 1) != 0 )
            _interlockedbittestandset64(v17 + 74, v33);
          else
            _interlockedbittestandreset64(v17 + 74, v33);
        }
        v34 = (v31 >> 1) & 1;
        if ( v34 != ((v32 >> 1) & 1) )
        {
          v35 = *(unsigned __int8 *)(a1 + 209);
          if ( v34 )
            _interlockedbittestandset64(v17 + 76, v35);
          else
            _interlockedbittestandreset64(v17 + 76, v35);
        }
      }
    }
    v36 = *(_QWORD *)(a1 + 192);
    v37 = *(_OWORD *)(v36 + 320);
    v38 = *(_QWORD *)(v36 + 328);
    v59 = v37;
    v39 = v37;
    while ( 1 )
    {
      v58 = v37;
      if ( (unsigned int)(v10 - 5) <= 1 || v10 == 2 || v10 == 1 && !KiDisableMediumQosGrouping )
      {
        v47 = *(_QWORD *)(a1 + 36512);
        v40 = *(_QWORD *)(a1 + 200) | v39;
        v41 = *((_QWORD *)&v58 + 1);
        if ( (v40 & v47) == v47 )
          v41 = v47 | *((_QWORD *)&v58 + 1);
      }
      else
      {
        v40 = v39 & ~*(_QWORD *)(a1 + 200);
        v41 = ~*(_QWORD *)(a1 + 36512) & *((_QWORD *)&v58 + 1);
      }
      *(_QWORD *)&v42 = v39;
      *((_QWORD *)&v42 + 1) = v38;
      v43 = _InterlockedCompareExchange128(
              (volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 320LL),
              v41,
              v40,
              (signed __int64 *)&v42);
      v38 = *((_QWORD *)&v42 + 1);
      v39 = v42;
      v59 = v42;
      if ( v43 )
        break;
      v37 = v59;
    }
    ActivityId = 0LL;
    if ( !v7 )
      goto LABEL_49;
    goto LABEL_48;
  }
  return 0;
}
