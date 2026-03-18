/*
 * XREFs of sub_140008590 @ 0x140008590
 * Callers:
 *     sub_1400079D0 @ 0x1400079D0 (sub_1400079D0.c)
 *     sub_140008090 @ 0x140008090 (sub_140008090.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_140008450 @ 0x140008450 (sub_140008450.c)
 *     sub_14000EBE0 @ 0x14000EBE0 (sub_14000EBE0.c)
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 *     sub_1400285D0 @ 0x1400285D0 (sub_1400285D0.c)
 *     sub_14002DDDC @ 0x14002DDDC (sub_14002DDDC.c)
 * Callees:
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140008E60 @ 0x140008E60 (sub_140008E60.c)
 *     sub_140009180 @ 0x140009180 (sub_140009180.c)
 *     sub_1400095E0 @ 0x1400095E0 (sub_1400095E0.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_1400130E0 @ 0x1400130E0 (sub_1400130E0.c)
 *     sub_140018968 @ 0x140018968 (sub_140018968.c)
 *     sub_14001A2D4 @ 0x14001A2D4 (sub_14001A2D4.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400327C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140008590(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  bool v5; // zf
  unsigned int v7; // r15d
  __int64 v8; // rbx
  char v9; // r13
  unsigned int v10; // r14d
  unsigned int v11; // edx
  unsigned int v12; // ebp
  char v13; // r8
  __int64 v14; // r9
  __int64 v15; // r11
  unsigned int v16; // r12d
  unsigned int v17; // eax
  __int64 v18; // r9
  _BYTE *v19; // rdx
  __int64 v20; // r11
  char v21; // r14
  char v22; // al
  __int64 m; // rcx
  __int64 v24; // r8
  char v25; // al
  unsigned int v26; // r11d
  const wchar_t *v27; // rdi
  __int64 v28; // rcx
  unsigned __int8 v29; // r10
  __int64 v30; // r14
  unsigned __int8 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 result; // rax
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r8
  bool v38; // r8
  char v39; // dl
  __int64 v40; // rdx
  __int16 v41; // ax
  unsigned int v42; // r15d
  unsigned int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // rdx
  char v46; // al
  __int64 v47; // rax
  unsigned int i; // r8d
  __int64 v49; // rcx
  unsigned int v50; // r12d
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  unsigned int j; // r8d
  void (__fastcall *v55)(__int64, __int64, _QWORD); // rax
  unsigned int k; // edx
  unsigned __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // r14
  __int64 n; // rax
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  signed __int32 v65[8]; // [rsp+0h] [rbp-188h] BYREF
  __int64 v66; // [rsp+20h] [rbp-168h]
  const wchar_t *v67; // [rsp+28h] [rbp-160h]
  __int64 v68; // [rsp+30h] [rbp-158h]
  int v69; // [rsp+38h] [rbp-150h]
  int v70; // [rsp+40h] [rbp-148h]
  __int64 v71; // [rsp+48h] [rbp-140h]
  const wchar_t *v72; // [rsp+50h] [rbp-138h]
  __int64 v73; // [rsp+58h] [rbp-130h]
  const wchar_t *v74; // [rsp+60h] [rbp-128h]
  __int64 v75; // [rsp+68h] [rbp-120h]
  const wchar_t *v76; // [rsp+70h] [rbp-118h]
  __int64 v77; // [rsp+78h] [rbp-110h]
  const wchar_t *v78; // [rsp+80h] [rbp-108h]
  __int64 v79; // [rsp+88h] [rbp-100h]
  char v80; // [rsp+D0h] [rbp-B8h]
  bool v81; // [rsp+D1h] [rbp-B7h]
  char v82; // [rsp+D2h] [rbp-B6h]
  __int64 v83; // [rsp+D8h] [rbp-B0h]
  char v84; // [rsp+E0h] [rbp-A8h] BYREF
  char v85; // [rsp+E1h] [rbp-A7h]
  unsigned int v86; // [rsp+E4h] [rbp-A4h]
  int v87; // [rsp+E8h] [rbp-A0h]
  unsigned int v88; // [rsp+ECh] [rbp-9Ch]
  __int128 v89; // [rsp+F0h] [rbp-98h]
  __int128 v90; // [rsp+130h] [rbp-58h] BYREF
  int v91; // [rsp+140h] [rbp-48h]

  v4 = a4;
  v88 = a4;
  v85 = a3;
  v5 = *(_BYTE *)(a2 + 2) == 40;
  v83 = a1;
  v7 = 0;
  if ( v5 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  v80 = 0;
  v9 = 0;
  LOBYTE(a3) = 1;
  v10 = a4;
  v11 = 10 * (a4 / 0xA);
  if ( a4 != v11 )
    v10 = v11 + 10;
  v12 = v10 / 0xA;
  if ( v10 / 0xA > 0x3E8 )
    v12 = 1000;
  v16 = -1;
  if ( sub_140018968(5 * (a4 / 0xA), *(_QWORD *)(a1 + 176) + 40LL, a3) != -1 )
  {
    if ( v12 > 0x32 )
      v17 = 50;
    else
      v17 = v12;
    v86 = v17;
    while ( 1 )
    {
      if ( !v13 )
        goto LABEL_31;
      StorPortExtendedFunction(81LL, v15, v17, v14);
      if ( v85 )
      {
        if ( (unsigned __int8)sub_140009180(v83, 0LL) )
        {
          v36 = v83;
          if ( (*(_DWORD *)(v83 + 24) & 0x10) == 0 )
          {
            v37 = v83 + 544;
            if ( *(_WORD *)(v83 + 272) <= 1u )
            {
              if ( (*(_WORD *)(*(_QWORD *)(v83 + 544) + 16LL * *(unsigned __int16 *)(v83 + 714) + 14) & 1) != *(_WORD *)(v83 + 716) )
              {
                sub_140006980(v83, *(_WORD *)(v83 + 720));
                sub_1400130E0(v53 + 24, v83, v53, 0LL);
                v36 = v83;
              }
              v49 = *(_QWORD *)(v36 + 944);
              if ( v49 )
              {
                v50 = 0;
                do
                {
                  if ( v50 >= *(unsigned __int16 *)(v36 + 332) )
                    break;
                  v51 = v49 + 392LL * v50;
                  if ( (*(_WORD *)(*(_QWORD *)v51 + 16LL * *(unsigned __int16 *)(v51 + 170) + 14) & 1) != *(_WORD *)(v51 + 172) )
                  {
                    sub_140006980(v83, *(_WORD *)(v51 + 176));
                    sub_1400130E0(v52 + 24, v83, v52, 0LL);
                    v36 = v83;
                  }
                  v49 = *(_QWORD *)(v36 + 944);
                  ++v50;
                }
                while ( v49 );
                v4 = v88;
                v16 = -1;
              }
            }
            else
            {
              if ( (*(_BYTE *)(v83 + 21) & 0x20) == 0 && (unsigned int)(*(_DWORD *)(v83 + 16) - 1) <= 1 )
              {
                *(_DWORD *)(*(_QWORD *)(v83 + 176) + 12LL) = 1 << *(_WORD *)(v83 + 720);
                _InterlockedOr(v65, 0);
                v36 = v83;
                *(_BYTE *)(v83 + 21) |= 0x20u;
              }
              sub_1400130E0(v37 + 24, v36, v37, 0LL);
            }
          }
        }
      }
      if ( !(unsigned __int8)sub_140008E60(v83, a2) )
      {
        v81 = (*(_BYTE *)(v8 + 4225) & 8) == 0;
        goto LABEL_22;
      }
      if ( *(_DWORD *)(a2 + 12) == 251658240 )
        break;
      if ( a2 == v83 + 1016 )
      {
        v19 = (_BYTE *)(v83 + 1008);
        goto LABEL_19;
      }
      v18 = *(_QWORD *)(v83 + 1392);
      if ( v18 )
      {
        for ( i = 0; i < *(unsigned __int16 *)(v83 + 1552); ++i )
        {
          v19 = (_BYTE *)(v18 + ((unsigned __int64)i << 7));
          if ( (_BYTE *)a2 == v19 + 8 )
            goto LABEL_19;
        }
      }
      v18 = *(_QWORD *)(v83 + 1400);
      if ( v18 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(v83 + 1554); ++j )
        {
          v19 = (_BYTE *)(v18 + ((unsigned __int64)j << 7));
          if ( (_BYTE *)a2 == v19 + 8 )
            goto LABEL_19;
        }
      }
      for ( k = 0; k < 2; ++k )
      {
        v57 = (unsigned __int64)k << 7;
        if ( a2 == v57 + v83 + 1144 )
        {
          v19 = (_BYTE *)(v57 + v83 + 1136);
          goto LABEL_19;
        }
      }
LABEL_65:
      v81 = 0;
LABEL_22:
      v82 = v80;
      if ( v7 > v10 )
      {
        v7 += v86;
        v80 = 1;
LABEL_24:
        v20 = v83;
        v21 = 0;
        goto LABEL_25;
      }
      v7 += v86;
      v86 = v12;
      if ( v80 )
        goto LABEL_24;
      v84 = 0;
      StorPortExtendedFunction(109LL, v83, &v84, v18);
      if ( v84 != 2 || (v90 = 0LL, v91 = 0, (unsigned int)StorPortExtendedFunction(106LL, v83, &v90, v14)) )
      {
        v17 = v12;
        v13 = v81;
        v15 = v83;
        v80 = v82;
      }
      else
      {
        v38 = 1;
        if ( DWORD2(v90) )
          v38 = 100 * HIDWORD(v90) >= (unsigned int)(5 * DWORD2(v90));
        if ( (_DWORD)v90 && 100 * DWORD1(v90) < (unsigned int)(5 * v90) )
        {
          v39 = v82;
LABEL_63:
          v20 = v83;
          v21 = 1;
          _InterlockedIncrement((volatile signed __int32 *)(v83 + 4004));
          v80 = v39;
LABEL_25:
          v22 = sub_140009180(v20, 0LL);
          if ( !v85 && v22 )
          {
            v89 = *(_OWORD *)(v8 + 4096);
            if ( DWORD1(v89) != -1 )
            {
              for ( m = 0LL; (unsigned int)m < *(_DWORD *)(v83 + 224); m = (unsigned int)(m + 1) )
              {
                v24 = *(_QWORD *)(v83 + 8LL * (unsigned int)m + 1672);
                if ( v24 && *(_DWORD *)(v24 + 16) == DWORD1(v89) )
                  goto LABEL_125;
              }
            }
            v24 = 0LL;
LABEL_125:
            if ( (*(_BYTE *)(v83 + 21) & 2) != 0 )
            {
              v58 = *(unsigned __int16 *)(v83 + 384);
              v79 = *(unsigned int *)(v83 + 720);
              v78 = L"MessageId";
              v77 = *(_QWORD *)(v83 + 552);
              v76 = L"Admin CQ";
              v75 = *(_QWORD *)(v83 + 344);
              v74 = L"Admin SQ";
              v73 = v58;
              v72 = L"Admin QID";
              v71 = a2;
              v70 = 0;
              v69 = 2;
              v68 = 64LL;
              v67 = L"Timeout on Interrupt Fail";
              LODWORD(v66) = 7;
              StorPortExtendedFunction(86LL, v83, v24, 1LL);
            }
          }
          if ( sub_140018968(m, *(_QWORD *)(v83 + 176) + 40LL, v24) == -1 )
          {
            *(_DWORD *)(v83 + 24) |= 0x1000000u;
            *(_BYTE *)(a2 + 3) = 8;
          }
          else
          {
            v25 = 9;
            if ( v21 )
              v25 = 5;
            *(_BYTE *)(a2 + 3) = v25;
          }
          v9 = 1;
          goto LABEL_31;
        }
        v39 = v82;
        v5 = !v38;
        v13 = v81;
        v17 = v12;
        v15 = v83;
        v80 = v82;
        if ( v5 )
          goto LABEL_63;
      }
    }
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v40 = *(_QWORD *)(a2 + 104);
    else
      v40 = *(_QWORD *)(a2 + 56);
    if ( (v40 & 0xFFF) != 0 )
      v40 = v40 - (v40 & 0xFFF) + 4096;
    v19 = *(_BYTE **)(v40 + 4200);
LABEL_19:
    if ( v19 && *v19 == 1 )
    {
      v81 = 1;
      goto LABEL_22;
    }
    goto LABEL_65;
  }
  *(_DWORD *)(v15 + 24) |= 0x1000000u;
  v9 = v13;
  *(_BYTE *)(a2 + 3) = 8;
LABEL_31:
  v26 = v7 / 0x3E8;
  v27 = (const wchar_t *)(v4 / 0x3E8);
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v28 = *(_QWORD *)(a2 + 104);
  else
    v28 = *(_QWORD *)(a2 + 56);
  if ( (v28 & 0xFFF) != 0 )
    v28 = v28 - (v28 & 0xFFF) + 4096;
  v29 = *(_BYTE *)(a2 + 3);
  LODWORD(v30) = 0;
  v31 = 0;
  v32 = 0xFFFFFFFFLL;
  v33 = 0LL;
  result = 0xFFFFFFFFLL;
  if ( v26 >= 0xFA )
  {
    if ( v28 )
    {
      v32 = (unsigned __int8)*(_DWORD *)(v28 + 4096);
      v31 = *(_BYTE *)(v28 + 4225) & 1;
      if ( v31 && ((_DWORD)v32 == 2 || (unsigned int)(v32 - 9) < 2) )
        v33 = (unsigned __int8)*(_DWORD *)(v28 + 4136);
      v87 = *(_DWORD *)(v28 + 4100);
      if ( v87 != -1 )
      {
        v59 = v83;
        v86 = 0;
        v88 = *(_DWORD *)(v83 + 224);
        for ( n = 0LL; (unsigned int)n < v88; n = ++v86 )
        {
          v30 = *(_QWORD *)(v59 + 8 * n + 1672);
          if ( v30 && *(_DWORD *)(v30 + 16) == v87 )
            goto LABEL_135;
          v59 = v83;
        }
      }
      LODWORD(v30) = 0;
LABEL_135:
      result = 0xFFFFFFFFLL;
    }
    if ( v26 < (unsigned int)v27 )
    {
      if ( v28 )
      {
        v16 = (*(unsigned __int16 *)(v28 + 4218) >> 9) & 7;
        result = (unsigned __int8)(*(unsigned __int16 *)(v28 + 4218) >> 1);
      }
    }
    else
    {
      v29 = 9;
    }
    v74 = (const wchar_t *)(v7 / 0x3E8);
    v72 = v27;
    v35 = v83;
    result = sub_14001A2D4(
               v83,
               v30,
               0,
               1,
               (__int64)"WaitForCmdComplete",
               (_DWORD)v67,
               v68,
               v69,
               v70,
               (__int64)"TimeoutInMS",
               (__int64)v72,
               (__int64)"TotalWaitTimeInMS",
               (__int64)v74,
               (__int64)"SrbStatus",
               v29,
               (__int64)"IsAdminCmd",
               v31,
               (__int64)"CmdOpCode",
               v32,
               (__int64)"CmdExtra",
               v33,
               (__int64)"StatusCodeType",
               v16,
               (__int64)"StatusCode",
               result);
  }
  else
  {
    v35 = v83;
  }
  if ( v9 )
  {
    v41 = *(_WORD *)(v8 + 4218);
    v42 = v7 - v12;
    LOBYTE(v14) = 1;
    v43 = 0;
    v68 = 0LL;
    if ( v80 )
      v43 = v42;
    sub_1400095E0(v35, a2, 0, v14, v43, v41, v68);
    if ( !*(_WORD *)(v8 + 4212)
      && (*(_BYTE *)(v8 + 4225) & 1) != 0
      && (v45 = *(_QWORD *)(v35 + 368) + 32LL * *(unsigned __int16 *)(v8 + 4214), *(_QWORD *)(v45 + 16) == a2) )
    {
      v46 = *(_BYTE *)(a2 + 3);
      if ( v46 == 8 )
      {
        _InterlockedExchange64((volatile __int64 *)(v45 + 16), 0LL);
        v55 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v8 + 4192);
        if ( v55 )
          v55(v35, a2, 0LL);
        LOBYTE(v44) = 1;
        result = sub_14000A8A0(v35, a2, v44);
        ++*(_DWORD *)(v35 + 476);
        _InterlockedDecrement16((volatile signed __int16 *)(v35 + 472));
      }
      else
      {
        if ( v46 == 5 )
        {
          _interlockedbittestandset((volatile signed __int32 *)v45, 2u);
          ++*(_DWORD *)(v35 + 4216);
        }
        else if ( v46 == 9 )
        {
          _interlockedbittestandset((volatile signed __int32 *)v45, 1u);
          ++*(_DWORD *)(v35 + 4220);
        }
        _interlockedbittestandset(
          (volatile signed __int32 *)(*(_QWORD *)(v35 + 368) + 32LL * *(unsigned __int16 *)(v8 + 4214)),
          0);
        result = sub_14000A8A0(v35, a2, 0LL);
      }
      if ( (*(_BYTE *)(v35 + 21) & 2) != 0 )
      {
        v47 = *(unsigned __int8 *)(a2 + 3);
        v75 = (unsigned __int8)*(_DWORD *)(v8 + 4096);
        v74 = L"Cmd OpCode";
        v73 = v47;
        v72 = L"SrbStatus";
        v71 = 0LL;
        v70 = 0;
        v69 = 4;
        v68 = 64LL;
        v67 = L"Admin Cmd Error Handle";
        LODWORD(v66) = 12;
        return StorPortExtendedFunction(85LL, v35, 0LL, 1LL);
      }
    }
    else
    {
      result = sub_14000A8A0(v35, a2, 0LL);
      if ( (*(_BYTE *)(v35 + 21) & 8) != 0 )
      {
        v61 = *(unsigned __int16 *)(v8 + 4212);
        v62 = *(_BYTE *)(v8 + 4225) & 1;
        v63 = *(unsigned __int16 *)(v8 + 4214);
        v64 = *(_QWORD *)(v35 + 368);
        v79 = a2;
        v78 = L"Srb";
        v77 = *(_QWORD *)(32 * v63 + v64 + 16);
        v76 = L"Srb in slot";
        v75 = v62;
        v74 = L"Is AdminCommand";
        v73 = v61;
        v72 = L"SubmissionQueue";
        v71 = 0LL;
        v70 = 0;
        v69 = 2;
        v68 = 64LL;
        v67 = L"Not Admin Cmd or Queue";
        LODWORD(v66) = 12;
        return StorPortExtendedFunction(86LL, v35, 0LL, 0LL);
      }
    }
  }
  return result;
}
