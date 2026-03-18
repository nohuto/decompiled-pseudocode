/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0
 * Callers:
 *     NVMeSetPowerState @ 0x140008720 (NVMeSetPowerState.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeMaskInterrupt @ 0x140006BC0 (NVMeMaskInterrupt.c)
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 *     RequestPendingCompletion @ 0x1400095A0 (RequestPendingCompletion.c)
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 *     NVMeMapError @ 0x14000AD00 (NVMeMapError.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeLogTelemetry @ 0x140013404 (NVMeLogTelemetry.c)
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 *     NVMeControllerReclaimLocalCommand @ 0x14001D4C4 (NVMeControllerReclaimLocalCommand.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140032570 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  bool v4; // zf
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // r11
  unsigned int v10; // r13d
  __int64 v11; // rbx
  unsigned int v12; // r15d
  unsigned int v13; // r8d
  unsigned int v14; // r12d
  unsigned int v15; // esi
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // rdx
  unsigned int i; // ecx
  __int64 v21; // rcx
  unsigned int ii; // ecx
  bool v23; // al
  char v24; // r15
  char v25; // al
  char v26; // al
  unsigned int v27; // r11d
  __int64 v28; // rdi
  __int64 v29; // rcx
  unsigned __int8 v30; // r10
  __int64 result; // rax
  unsigned __int8 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned int v35; // r15d
  __int64 v36; // r14
  __int64 v37; // r14
  _BYTE *v38; // rcx
  char v39; // al
  int v40; // eax
  __int64 v41; // r9
  bool v42; // dl
  unsigned int v43; // r13d
  __int64 v44; // rdx
  char v45; // al
  __int64 v46; // rdx
  unsigned int kk; // ecx
  __int64 v48; // rcx
  unsigned int nn; // ecx
  __int64 v50; // rax
  __int64 v51; // rcx
  void *v52; // rax
  __int64 v53; // rdi
  __int64 v54; // r8
  unsigned int j; // edx
  __int64 v56; // rdx
  unsigned int i1; // ecx
  __int64 v58; // rdx
  __int64 v59; // r12
  unsigned int v60; // edi
  __int64 v61; // r10
  __int64 v62; // r10
  __int64 v63; // r10
  __int64 v64; // r11
  unsigned int n; // edx
  __int64 v66; // r8
  unsigned int k; // edx
  void (__fastcall *v68)(__int64, __int64, _QWORD); // rax
  unsigned int mm; // edx
  __int64 v70; // rdx
  unsigned int i2; // ecx
  __int64 v72; // r9
  unsigned int m; // ecx
  unsigned __int64 v74; // rdx
  __int128 v75; // xmm2
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  unsigned int jj; // ecx
  __int64 v79; // r8
  void *v80; // rcx
  unsigned int v81; // eax
  unsigned int v82; // r14d
  int v83; // edx
  unsigned int i3; // ecx
  unsigned __int64 v85; // rdi
  void *v86; // r8
  void *v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  signed __int32 v90[8]; // [rsp+0h] [rbp-188h] BYREF
  void *Src; // [rsp+20h] [rbp-168h]
  const wchar_t *v92; // [rsp+28h] [rbp-160h]
  __int64 v93; // [rsp+30h] [rbp-158h]
  int v94; // [rsp+38h] [rbp-150h]
  int v95; // [rsp+40h] [rbp-148h]
  void *v96; // [rsp+48h] [rbp-140h]
  __int64 v97; // [rsp+50h] [rbp-138h]
  void *v98; // [rsp+58h] [rbp-130h]
  __int64 v99; // [rsp+60h] [rbp-128h]
  void *v100; // [rsp+68h] [rbp-120h]
  __int64 v101; // [rsp+70h] [rbp-118h]
  void *v102; // [rsp+78h] [rbp-110h]
  __int64 v103; // [rsp+80h] [rbp-108h]
  void *v104; // [rsp+88h] [rbp-100h]
  __int64 v105; // [rsp+A0h] [rbp-E8h]
  char v106; // [rsp+D0h] [rbp-B8h]
  unsigned __int8 v107; // [rsp+D1h] [rbp-B7h]
  char v108; // [rsp+D2h] [rbp-B6h]
  char v109; // [rsp+D3h] [rbp-B5h] BYREF
  char v110; // [rsp+D4h] [rbp-B4h]
  int v111[2]; // [rsp+D8h] [rbp-B0h]
  unsigned int v112; // [rsp+E0h] [rbp-A8h]
  unsigned int v113; // [rsp+E4h] [rbp-A4h]
  unsigned int v114; // [rsp+E8h] [rbp-A0h]
  __int128 v115; // [rsp+F0h] [rbp-98h]
  __int128 v116; // [rsp+100h] [rbp-88h]
  __int128 v117; // [rsp+110h] [rbp-78h]
  __int128 v118; // [rsp+120h] [rbp-68h]
  __int128 v119; // [rsp+130h] [rbp-58h] BYREF
  int v120; // [rsp+140h] [rbp-48h]

  v114 = a4;
  v4 = *(_BYTE *)(a2 + 2) == 40;
  v5 = 104LL;
  v110 = a3;
  v6 = 104LL;
  *(_QWORD *)v111 = a1;
  if ( !v4 )
    v6 = 56LL;
  v7 = a4;
  v9 = a1;
  v10 = 0;
  v11 = *(_QWORD *)(v6 + a2);
  if ( (v11 & 0xFFF) != 0 )
    v11 = v11 - (v11 & 0xFFF) + 4096;
  v106 = 0;
  LOBYTE(a4) = 1;
  v108 = 0;
  v12 = v7;
  v13 = 10 * (v7 / 0xA);
  if ( v7 != v13 )
    v12 = v13 + 10;
  v14 = -1;
  v15 = v12 / 0xA;
  if ( v12 / 0xA > 0x3E8 )
    v15 = 1000;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 176) + 40LL) != -1LL )
  {
    if ( v15 > 0x32 )
      v16 = 50;
    else
      v16 = v15;
    v112 = v16;
    while ( 1 )
    {
      if ( !(_BYTE)a4 )
        goto LABEL_39;
      StorPortExtendedFunction(81LL, v9, v16, a4);
      if ( !v110 )
        goto LABEL_15;
      v39 = RequestPendingCompletion(*(_QWORD *)v111, 0LL);
      v18 = *(_QWORD *)v111;
      if ( v39 && (*(_DWORD *)(*(_QWORD *)v111 + 24LL) & 0x10) == 0 )
      {
        if ( *(_WORD *)(*(_QWORD *)v111 + 272LL) > 1u )
        {
          if ( (*(_BYTE *)(*(_QWORD *)v111 + 21LL) & 0x20) == 0 )
          {
            v40 = *(_DWORD *)(*(_QWORD *)v111 + 16LL);
            if ( v40 == 1 || v40 == 2 )
            {
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v111 + 176LL) + 12LL) = 1 << *(_BYTE *)(*(_QWORD *)v111 + 720LL);
              _InterlockedOr(v90, 0);
              *(_BYTE *)(v18 + 21) |= 0x20u;
            }
          }
          NVMeCompletionDpcRoutine(v18 + 568, v18, v18 + 544, 0LL);
LABEL_15:
          v18 = *(_QWORD *)v111;
          goto LABEL_16;
        }
        if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v111 + 544LL)
                       + 16LL * *(unsigned __int16 *)(*(_QWORD *)v111 + 714LL)
                       + 14) & 1) != *(_WORD *)(*(_QWORD *)v111 + 716LL) )
        {
          NVMeMaskInterrupt(*(__int64 *)v111, *(_WORD *)(*(_QWORD *)v111 + 720LL));
          NVMeCompletionDpcRoutine(v63 + 24, v64, v63, 0LL);
          v18 = *(_QWORD *)v111;
        }
        v58 = *(_QWORD *)(v18 + 944);
        if ( v58 )
        {
          v59 = *(_QWORD *)v111;
          v60 = 0;
          do
          {
            if ( v60 >= *(unsigned __int16 *)(v59 + 332) )
              break;
            v61 = v58 + 392LL * v60;
            if ( (*(_WORD *)(*(_QWORD *)v61 + 16LL * *(unsigned __int16 *)(v61 + 170) + 14) & 1) != *(_WORD *)(v61 + 172) )
            {
              NVMeMaskInterrupt(v59, *(_WORD *)(v61 + 176));
              NVMeCompletionDpcRoutine(v62 + 24, v59, v62, 0LL);
            }
            v58 = *(_QWORD *)(v59 + 944);
            ++v60;
          }
          while ( v58 );
          v7 = v114;
          v14 = -1;
          goto LABEL_15;
        }
      }
LABEL_16:
      if ( *(_DWORD *)(a2 + 12) == 251658240 )
      {
        v50 = 104LL;
        if ( *(_BYTE *)(a2 + 2) != 40 )
          v50 = 56LL;
        v51 = *(_QWORD *)(v50 + a2);
        if ( (v51 & 0xFFF) != 0 )
          v51 = v51 - (v51 & 0xFFF) + 4096;
        v38 = *(_BYTE **)(v51 + 4200);
      }
      else
      {
        v17 = v18 + 1016;
        if ( a2 != v18 + 1016 )
        {
          v19 = *(_QWORD *)(v18 + 1392);
          if ( v19 )
          {
            for ( i = 0; i < *(unsigned __int16 *)(v18 + 1552); ++i )
            {
              if ( a2 == v19 + ((unsigned __int64)i << 7) + 8 )
              {
LABEL_47:
                if ( a2 == v17 )
                  goto LABEL_48;
                v54 = *(_QWORD *)(v18 + 1392);
                if ( v54 )
                {
                  v17 = *(unsigned __int16 *)(v18 + 1552);
                  for ( j = 0; j < (unsigned int)v17; ++j )
                  {
                    v38 = (_BYTE *)(v54 + ((unsigned __int64)j << 7));
                    if ( (_BYTE *)a2 == v38 + 8 )
                      goto LABEL_49;
                  }
                }
                v66 = *(_QWORD *)(v18 + 1400);
                if ( v66 )
                {
                  v17 = *(unsigned __int16 *)(v18 + 1554);
                  for ( k = 0; k < (unsigned int)v17; ++k )
                  {
                    v38 = (_BYTE *)(v66 + ((unsigned __int64)k << 7));
                    if ( (_BYTE *)a2 == v38 + 8 )
                      goto LABEL_49;
                  }
                }
                for ( m = 0; m < 2; ++m )
                {
                  v74 = (unsigned __int64)m << 7;
                  if ( a2 == v18 + v74 + 1144 )
                  {
                    v38 = (_BYTE *)(v74 + v18 + 1136);
                    goto LABEL_49;
                  }
                }
                goto LABEL_70;
              }
            }
          }
          v21 = *(_QWORD *)(v18 + 1400);
          if ( v21 )
          {
            for ( n = 0; n < *(unsigned __int16 *)(v18 + 1554); ++n )
            {
              if ( a2 == v21 + ((unsigned __int64)n << 7) + 8 )
                goto LABEL_47;
            }
          }
          for ( ii = 0; ii < 2; ++ii )
          {
            if ( a2 == v18 + ((unsigned __int64)ii << 7) + 1144 )
              goto LABEL_47;
          }
          v23 = (*(_BYTE *)(v11 + 4225) & 8) == 0;
          goto LABEL_29;
        }
LABEL_48:
        v38 = (_BYTE *)(v18 + 1008);
      }
LABEL_49:
      if ( !v38 || *v38 != 1 )
      {
LABEL_70:
        v23 = 0;
LABEL_29:
        v107 = v23;
        goto LABEL_52;
      }
      v107 = 1;
LABEL_52:
      if ( v10 > v12 )
      {
        v10 += v112;
        v106 = 1;
LABEL_32:
        v24 = 0;
LABEL_33:
        v25 = RequestPendingCompletion(v18, 0LL);
        if ( !v110 && v25 )
        {
          v75 = *(_OWORD *)(v11 + 4096);
          v76 = *(_OWORD *)(v11 + 4128);
          v116 = *(_OWORD *)(v11 + 4112);
          v77 = *(_OWORD *)(v11 + 4144);
          v115 = v75;
          v118 = v77;
          v117 = v76;
          if ( DWORD1(v75) != -1 )
          {
            LODWORD(a4) = DWORD1(v115);
            for ( jj = 0; jj < *(_DWORD *)(*(_QWORD *)v111 + 224LL); ++jj )
            {
              v79 = *(_QWORD *)(*(_QWORD *)v111 + 8LL * jj + 1672);
              if ( v79 && *(_DWORD *)(v79 + 16) == DWORD1(v115) )
                goto LABEL_169;
            }
          }
          v79 = 0LL;
LABEL_169:
          if ( (*(_BYTE *)(*(_QWORD *)v111 + 21LL) & 2) != 0 )
          {
            v80 = (void *)*(unsigned __int16 *)(*(_QWORD *)v111 + 384LL);
            v104 = (void *)*(unsigned int *)(*(_QWORD *)v111 + 720LL);
            v103 = (__int64)L"MessageId";
            v102 = *(void **)(*(_QWORD *)v111 + 552LL);
            v101 = (__int64)L"Admin CQ";
            v100 = *(void **)(*(_QWORD *)v111 + 344LL);
            v99 = (__int64)L"Admin SQ";
            v98 = v80;
            v97 = (__int64)L"Admin QID";
            v96 = (void *)a2;
            v95 = 0;
            v94 = 2;
            v93 = 64LL;
            v92 = L"Timeout on Interrupt Fail";
            LODWORD(Src) = 7;
            StorPortExtendedFunction(86LL, *(_QWORD *)v111, v79, 1LL);
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v111 + 176LL) + 40LL) == -1LL )
        {
          *(_DWORD *)(*(_QWORD *)v111 + 24LL) |= 0x1000000u;
          *(_BYTE *)(a2 + 3) = 8;
        }
        else
        {
          v26 = 9;
          if ( v24 )
            v26 = 5;
          *(_BYTE *)(a2 + 3) = v26;
        }
        v108 = 1;
        goto LABEL_39;
      }
      v10 += v112;
      v112 = v15;
      if ( v106 )
        goto LABEL_32;
      v109 = 0;
      StorPortExtendedFunction(109LL, v18, &v109, v17);
      if ( v109 == 2 )
      {
        v120 = 0;
        v119 = 0LL;
        if ( !(unsigned int)StorPortExtendedFunction(106LL, *(_QWORD *)v111, &v119, v41) )
        {
          v42 = 1;
          if ( DWORD2(v119) )
            v42 = 100 * HIDWORD(v119) >= (unsigned int)(5 * DWORD2(v119));
          if ( (_DWORD)v119 && 100 * DWORD1(v119) < (unsigned int)(5 * v119) || !v42 )
          {
            v18 = *(_QWORD *)v111;
            v24 = 1;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v111 + 4012LL));
            goto LABEL_33;
          }
        }
      }
      a4 = v107;
      v9 = *(_QWORD *)v111;
      v16 = v15;
    }
  }
  *(_DWORD *)(a1 + 24) |= 0x1000000u;
  *(_BYTE *)(a2 + 3) = 8;
  v108 = 1;
LABEL_39:
  v27 = v10 / 0x3E8;
  v28 = v7 / 0x3E8;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v5 = 56LL;
  v29 = *(_QWORD *)(v5 + a2);
  if ( (v29 & 0xFFF) != 0 )
    v29 = v29 - (*(_QWORD *)(v5 + a2) & 0xFFFLL) + 4096;
  v30 = *(_BYTE *)(a2 + 3);
  result = 0LL;
  v32 = 0;
  v33 = 0xFFFFFFFFLL;
  v34 = 0LL;
  v35 = -1;
  LODWORD(v36) = 0;
  if ( v27 >= 0xFA )
  {
    if ( v29 )
    {
      v33 = (unsigned __int8)*(_DWORD *)(v29 + 4096);
      v32 = *(_BYTE *)(v29 + 4225) & 1;
      if ( v32 && ((_DWORD)v33 == 2 || (unsigned int)(v33 - 9) < 2) )
        v34 = (unsigned __int8)*(_DWORD *)(v29 + 4136);
      v114 = *(_DWORD *)(v29 + 4100);
      if ( v114 != -1 )
      {
        v81 = 0;
        v82 = *(_DWORD *)(*(_QWORD *)v111 + 224LL);
        v113 = v82;
        while ( 1 )
        {
          v112 = v81;
          if ( v81 >= v82 )
            break;
          v36 = *(_QWORD *)(*(_QWORD *)v111 + 8LL * v81 + 1672);
          if ( v36 && *(_DWORD *)(v36 + 16) == v114 )
            goto LABEL_179;
          v82 = v113;
          v81 = v112 + 1;
        }
      }
      LODWORD(v36) = 0;
    }
LABEL_179:
    if ( v27 < (unsigned int)v28 )
    {
      if ( v29 )
      {
        v14 = (*(unsigned __int16 *)(v29 + 4218) >> 9) & 7;
        v35 = (unsigned __int8)(*(unsigned __int16 *)(v29 + 4218) >> 1);
      }
    }
    else
    {
      v30 = 9;
    }
    v105 = v34;
    v83 = v36;
    v37 = *(_QWORD *)v111;
    NVMeLogTelemetry(
      v111[0],
      v83,
      0,
      1,
      "WaitForCmdComplete",
      (int)v92,
      v93,
      v94,
      v95,
      "TimeoutInMS",
      v28,
      "TotalWaitTimeInMS",
      v10 / 0x3E8,
      "SrbStatus",
      v30,
      "IsAdminCmd",
      v32,
      "CmdOpCode",
      v33,
      (__int64)"CmdExtra",
      v105,
      (__int64)"StatusCodeType",
      v14,
      (__int64)"StatusCode",
      v35);
    result = 0LL;
  }
  else
  {
    v37 = *(_QWORD *)v111;
  }
  if ( v108 )
  {
    v93 = 0LL;
    v43 = v10 - v15;
    LOBYTE(a4) = 1;
    if ( !v106 )
      v43 = 0;
    NVMeMapError(v37, a2, 0, a4, v43, *(_WORD *)(v11 + 4218), v93);
    if ( *(_WORD *)(v11 + 4212)
      || (*(_BYTE *)(v11 + 4225) & 1) == 0
      || (v44 = *(_QWORD *)(v37 + 368) + 32LL * *(unsigned __int16 *)(v11 + 4214), *(_QWORD *)(v44 + 16) != a2) )
    {
      result = NVMeRequestComplete(v37, a2, 0);
      if ( (*(_BYTE *)(v37 + 21) & 8) != 0 )
      {
        v86 = (void *)*(unsigned __int16 *)(v11 + 4212);
        v87 = (void *)(*(_BYTE *)(v11 + 4225) & 1);
        v88 = *(unsigned __int16 *)(v11 + 4214);
        v89 = *(_QWORD *)(v37 + 368);
        v104 = (void *)a2;
        v103 = (__int64)L"Srb";
        v102 = *(void **)(32 * v88 + v89 + 16);
        v101 = (__int64)L"Srb in slot";
        v100 = v87;
        v99 = (__int64)L"Is AdminCommand";
        v98 = v86;
        v97 = (__int64)L"SubmissionQueue";
        v96 = 0LL;
        v95 = 0;
        v94 = 2;
        v93 = 64LL;
        v92 = L"Not Admin Cmd or Queue";
        LODWORD(Src) = 12;
        return StorPortExtendedFunction(86LL, v37, 0LL, 0LL);
      }
      return result;
    }
    v45 = *(_BYTE *)(a2 + 3);
    if ( v45 == 8 )
    {
      _InterlockedExchange64((volatile __int64 *)(v44 + 16), 0LL);
      v68 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v11 + 4192);
      if ( v68 )
        v68(v37, a2, 0LL);
      result = NVMeRequestComplete(v37, a2, 1);
      ++*(_DWORD *)(v37 + 476);
      _InterlockedDecrement16((volatile signed __int16 *)(v37 + 472));
    }
    else
    {
      if ( v45 == 5 )
      {
        _interlockedbittestandset((volatile signed __int32 *)v44, 2u);
        ++*(_DWORD *)(v37 + 4224);
      }
      else if ( v45 == 9 )
      {
        _interlockedbittestandset((volatile signed __int32 *)v44, 1u);
        ++*(_DWORD *)(v37 + 4228);
      }
      _interlockedbittestandset(
        (volatile signed __int32 *)(*(_QWORD *)(v37 + 368) + 32LL * *(unsigned __int16 *)(v11 + 4214)),
        0);
      if ( *(_DWORD *)(a2 + 12) == 251658240 )
      {
        result = GetSrbExtension(a2);
        v53 = *(_QWORD *)(result + 4200);
      }
      else
      {
        if ( a2 != v37 + 1016 )
        {
          v46 = *(_QWORD *)(v37 + 1392);
          if ( v46 )
          {
            for ( kk = 0; kk < *(unsigned __int16 *)(v37 + 1552); ++kk )
            {
              if ( a2 == v46 + ((unsigned __int64)kk << 7) + 8 )
                goto LABEL_103;
            }
          }
          v48 = *(_QWORD *)(v37 + 1400);
          if ( v48 )
          {
            for ( mm = 0; mm < *(unsigned __int16 *)(v37 + 1554); ++mm )
            {
              if ( a2 == v48 + ((unsigned __int64)mm << 7) + 8 )
                goto LABEL_103;
            }
          }
          for ( nn = 0; nn < 2; ++nn )
          {
            if ( a2 == v37 + ((unsigned __int64)nn << 7) + 1144 )
              goto LABEL_103;
          }
          if ( (*(_DWORD *)(v37 + 4064) & 0x10000) != 0 && *(_DWORD *)(GetSrbExtension(a2) + 4220) )
            StorPortExtendedFunction(127LL, v37, a2, v72);
          result = StorPortNotification(0LL, v37, a2);
          goto LABEL_99;
        }
LABEL_103:
        result = 1392LL;
        if ( a2 != v37 + 1016 )
        {
          v56 = *(_QWORD *)(v37 + 1392);
          if ( v56 )
          {
            for ( i1 = 0; i1 < *(unsigned __int16 *)(v37 + 1552); ++i1 )
            {
              v53 = v56 + ((unsigned __int64)i1 << 7);
              result = v53 + 8;
              if ( a2 == v53 + 8 )
                goto LABEL_105;
            }
          }
          v70 = *(_QWORD *)(v37 + 1400);
          if ( v70 )
          {
            for ( i2 = 0; i2 < *(unsigned __int16 *)(v37 + 1554); ++i2 )
            {
              v53 = v70 + ((unsigned __int64)i2 << 7);
              result = v53 + 8;
              if ( a2 == v53 + 8 )
                goto LABEL_105;
            }
          }
          for ( i3 = 0; i3 < 2; ++i3 )
          {
            v85 = v37 + ((unsigned __int64)i3 << 7);
            result = v85 + 1144;
            if ( a2 == v85 + 1144 )
            {
              v53 = v85 + 1136;
              goto LABEL_105;
            }
          }
          goto LABEL_99;
        }
        v53 = v37 + 1008;
      }
LABEL_105:
      if ( v53 )
      {
        *(_BYTE *)v53 = 0;
        if ( *(_DWORD *)(a2 + 12) == 251658240 )
        {
          if ( (*(_BYTE *)(v53 + 1) & 1) != 0 )
          {
            result = NVMeControllerReclaimLocalCommand(v37, v53);
          }
          else if ( (*(_BYTE *)(v53 + 1) & 2) != 0 )
          {
            LODWORD(v92) = 0;
            LODWORD(Src) = 0;
            result = StorPortExtendedFunction(50LL, v37, 0LL, 0LL);
          }
          else
          {
            NVMeFreeDmaBuffer(v37, 0x2000LL, a2 + 56, *(_QWORD *)(v53 + 104));
            result = NVMeFreePool(v37);
          }
        }
      }
    }
LABEL_99:
    if ( (*(_BYTE *)(v37 + 21) & 2) != 0 )
    {
      v52 = (void *)*(unsigned __int8 *)(a2 + 3);
      v100 = (void *)(unsigned __int8)*(_DWORD *)(v11 + 4096);
      v99 = (__int64)L"Cmd OpCode";
      v98 = v52;
      v97 = (__int64)L"SrbStatus";
      v96 = 0LL;
      v95 = 0;
      v94 = 4;
      v93 = 64LL;
      v92 = L"Admin Cmd Error Handle";
      LODWORD(Src) = 12;
      return StorPortExtendedFunction(85LL, v37, 0LL, 1LL);
    }
  }
  return result;
}
