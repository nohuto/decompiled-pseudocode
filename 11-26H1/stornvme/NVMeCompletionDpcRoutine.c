/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x1400096D0
 * Callers:
 *     ProcessCompletionQueues @ 0x140007D70 (ProcessCompletionQueues.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeHwMSIInterrupt @ 0x140009320 (NVMeHwMSIInterrupt.c)
 *     NVMeIoPollingDpcRoutine @ 0x140027530 (NVMeIoPollingDpcRoutine.c)
 * Callees:
 *     CheckDpcWatchdogTimerExpireSoon @ 0x140006AC0 (CheckDpcWatchdogTimerExpireSoon.c)
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 *     NVMeMapError @ 0x14000AD00 (NVMeMapError.c)
 *     IsNVMeControllerOnFatalError @ 0x14000FBB0 (IsNVMeControllerOnFatalError.c)
 *     NVMeControllerAsyncReset @ 0x140010870 (NVMeControllerAsyncReset.c)
 *     RecordCommandTimingHistory @ 0x1400110C0 (RecordCommandTimingHistory.c)
 *     NVMeQueueWorkItem @ 0x14001EC70 (NVMeQueueWorkItem.c)
 *     ProcessPendingIoCommands @ 0x14002C2D0 (ProcessPendingIoCommands.c)
 *     NVMeIceConfigureSrbExclusionAddress @ 0x1400317D4 (NVMeIceConfigureSrbExclusionAddress.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140032570 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NVMeCompletionDpcRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // cl
  unsigned __int16 v6; // bx
  __int64 v7; // r12
  unsigned int *v8; // r15
  __int64 v9; // r8
  __int64 v10; // rsi
  __int16 v11; // r14
  __int64 result; // rax
  __int64 v13; // r13
  unsigned __int16 v14; // ax
  __int64 v15; // r13
  unsigned __int32 v16; // ebx
  signed __int32 v17; // r8d
  __int64 v18; // r9
  char i; // r11
  __int64 v20; // r12
  __int64 v21; // r8
  __int64 *v22; // rax
  __int16 v23; // ax
  unsigned int v24; // eax
  __int16 v25; // ax
  __int64 v26; // r14
  __int64 v27; // rdx
  unsigned __int8 v28; // cl
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int8 v33; // al
  __int64 v34; // rax
  __int64 v35; // r9
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // edx
  unsigned int v40; // r8d
  unsigned int v41; // ecx
  __int64 v42; // r11
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  signed __int64 v47; // rax
  signed __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // r15
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // r8
  __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 v55; // rdx
  unsigned int v56; // eax
  int v57; // r9d
  unsigned int v58; // r8d
  unsigned int v59; // ecx
  __int64 v60; // r11
  __int64 v61; // rsi
  const wchar_t *v62; // r15
  unsigned __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  void (__fastcall *v67)(__int64, __int64, unsigned int *); // rax
  int v68; // edx
  int *v69; // rax
  signed __int32 v70; // eax
  char v71; // al
  int v72; // edx
  int v73; // r8d
  int v74; // eax
  __int64 v75; // r8
  bool v76; // zf
  unsigned __int64 v77; // rdx
  __int64 v78; // rax
  signed __int32 v79[8]; // [rsp+0h] [rbp-150h] BYREF
  const wchar_t *v80; // [rsp+20h] [rbp-130h]
  const wchar_t *v81; // [rsp+28h] [rbp-128h]
  __int64 v82; // [rsp+30h] [rbp-120h]
  __int64 v83; // [rsp+38h] [rbp-118h]
  int v84; // [rsp+40h] [rbp-110h]
  __int64 v85; // [rsp+48h] [rbp-108h]
  const wchar_t *v86; // [rsp+50h] [rbp-100h]
  __int64 v87; // [rsp+58h] [rbp-F8h]
  const wchar_t *v88; // [rsp+60h] [rbp-F0h]
  __int64 v89; // [rsp+68h] [rbp-E8h]
  const wchar_t *v90; // [rsp+70h] [rbp-E0h]
  __int64 v91; // [rsp+78h] [rbp-D8h]
  const wchar_t *v92; // [rsp+80h] [rbp-D0h]
  unsigned __int64 v93; // [rsp+88h] [rbp-C8h]
  const wchar_t *v94; // [rsp+90h] [rbp-C0h]
  __int64 v95; // [rsp+98h] [rbp-B8h]
  const wchar_t *v96; // [rsp+A0h] [rbp-B0h]
  __int64 v97; // [rsp+A8h] [rbp-A8h]
  __int64 v98; // [rsp+B0h] [rbp-A0h]
  __int64 v99; // [rsp+B8h] [rbp-98h]
  __int64 v100; // [rsp+C0h] [rbp-90h]
  __int64 v101; // [rsp+C8h] [rbp-88h]
  char v102; // [rsp+D0h] [rbp-80h]
  char v103; // [rsp+D1h] [rbp-7Fh] BYREF
  char v104; // [rsp+D2h] [rbp-7Eh]
  char v105; // [rsp+D3h] [rbp-7Dh]
  signed __int32 v106; // [rsp+D4h] [rbp-7Ch] BYREF
  unsigned __int16 v107; // [rsp+D8h] [rbp-78h]
  unsigned __int16 v108; // [rsp+DCh] [rbp-74h]
  __int64 v109; // [rsp+E0h] [rbp-70h] BYREF
  __int64 v110; // [rsp+E8h] [rbp-68h]
  unsigned __int64 v111; // [rsp+F0h] [rbp-60h] BYREF
  unsigned __int64 v112; // [rsp+F8h] [rbp-58h]
  unsigned __int64 v113; // [rsp+100h] [rbp-50h] BYREF
  __int64 v114; // [rsp+108h] [rbp-48h] BYREF
  __int64 v115; // [rsp+110h] [rbp-40h]
  __int64 v116; // [rsp+118h] [rbp-38h]
  __int128 *v117; // [rsp+120h] [rbp-30h]
  __int64 v118; // [rsp+128h] [rbp-28h]
  __int128 v119; // [rsp+130h] [rbp-20h]
  __int128 v120; // [rsp+140h] [rbp-10h]
  __int128 v121; // [rsp+150h] [rbp+0h]
  __int128 v122; // [rsp+160h] [rbp+10h] BYREF
  _OWORD v123[2]; // [rsp+170h] [rbp+20h] BYREF

  v4 = 1;
  v6 = 0;
  v7 = a3;
  v8 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 170));
  v116 = a3;
  v107 = 0;
  v113 = 0LL;
  v111 = 0LL;
  v114 = 0LL;
  *(_QWORD *)&v123[0] = v8;
  v102 = 1;
  v104 = 0;
  v105 = 0;
  if ( a4 )
  {
    v104 = a4 & 1;
    v105 = (a4 & 2) != 0;
  }
  if ( (*(_DWORD *)(a2 + 108) & 2) != 0 )
  {
    StorPortExtendedFunction(47LL, a2, &v111, &v114);
    v4 = 1;
  }
  if ( (*((_WORD *)v8 + 7) & 1) == *(_WORD *)(v7 + 172) )
    goto LABEL_164;
  while ( 2 )
  {
    if ( !v4 )
    {
LABEL_164:
      *(_WORD *)(v7 + 356) = *(_WORD *)(v7 + 170);
      *(_DWORD *)(v7 + 376) = *v8;
      *(_DWORD *)(v7 + 380) = v8[1];
      *(_DWORD *)(v7 + 384) = v8[2];
      result = v8[3];
      *(_DWORD *)(v7 + 388) = result;
      *(_WORD *)(v7 + 352) = v6;
      if ( v6 )
      {
        result = *(_QWORD *)(v7 + 16);
        *(_DWORD *)result = *(unsigned __int16 *)(v7 + 170);
        _InterlockedOr(v79, 0);
      }
      break;
    }
    v9 = *((unsigned __int16 *)v8 + 5);
    v10 = *((unsigned __int16 *)v8 + 6);
    v11 = *((_WORD *)v8 + 4);
    if ( !*(_WORD *)(v7 + 168) || (result = *(unsigned int *)(a2 + 24), (result & 1) != 0) )
    {
      if ( (_WORD)v9 )
      {
        result = *(unsigned int *)(a2 + 24);
        if ( (result & 1) == 0 )
          break;
        v15 = *(_QWORD *)(a2 + 936) - 208LL;
        v108 = *(_WORD *)(a2 + 326);
        v13 = 208 * v9 + v15;
        v14 = *(_WORD *)(a2 + 328);
      }
      else
      {
        v13 = a2 + 336;
        v108 = *(_WORD *)(a2 + 324);
        v14 = v108;
      }
      if ( (unsigned __int16)v10 < v14 )
      {
        v16 = *(_DWORD *)(32 * v10 + *(_QWORD *)(v13 + 32));
        result = v16;
        v17 = v16;
        v18 = v16;
        for ( i = v16; ; i = result )
        {
          LODWORD(v109) = v16;
          v106 = 0;
          if ( (result & 8) == 0 )
            goto LABEL_173;
          v106 = v109;
          _interlockedbittestandreset(&v106, 3u);
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)(32 * v10 + *(_QWORD *)(v13 + 32)),
                                   v106,
                                   v17);
          if ( (_DWORD)result == (_DWORD)v18 )
            break;
          v16 = result;
          v17 = result;
          v18 = (unsigned int)result;
        }
        _mm_lfence();
        result = *(_QWORD *)(v13 + 32);
        v20 = *(_QWORD *)(32 * v10 + result + 16);
        if ( !v20 )
        {
          v7 = v116;
          break;
        }
        *(_WORD *)(v13 + 54) = v11;
        if ( (i & 0x40) != 0 )
        {
          v21 = 0LL;
          v110 = 0LL;
        }
        else
        {
          v22 = (__int64 *)(v20 + 104);
          if ( *(_BYTE *)(v20 + 2) != 40 )
            v22 = (__int64 *)(v20 + 56);
          v21 = *v22;
          v23 = *v22;
          v110 = v21;
          v24 = v23 & 0xFFF;
          if ( v24 )
          {
            v21 = v21 - v24 + 4096;
            v110 = v21;
          }
        }
        if ( (v16 & 1) != 0 )
        {
          *(_DWORD *)(32 * v10 + *(_QWORD *)(v13 + 32)) = 0;
          *(_QWORD *)(32 * v10 + *(_QWORD *)(v13 + 32) + 16) = 0LL;
LABEL_151:
          ++*(_DWORD *)(v13 + 140);
          _InterlockedDecrement16((volatile signed __int16 *)(v13 + 136));
LABEL_152:
          if ( *(_QWORD *)(v13 + 144) )
            ProcessPendingIoCommands(a2, v13, 0LL, 0LL);
          v7 = v116;
          if ( *(unsigned __int16 *)(v116 + 170) >= v108 - 1 )
          {
            v76 = *(_WORD *)(v116 + 172) == 1;
            *(_WORD *)(v116 + 170) = 0;
            *(_WORD *)(v7 + 172) = !v76;
          }
          else
          {
            _InterlockedIncrement16((volatile signed __int16 *)(v116 + 170));
          }
          v8 = (unsigned int *)(*(_QWORD *)v7 + 16LL * *(unsigned __int16 *)(v7 + 170));
          v76 = *(_BYTE *)(v7 + 248) == 0;
          ++v107;
          *(_QWORD *)&v123[0] = v8;
          v6 = v107;
          if ( v76 || (unsigned int)v107 < *(_DWORD *)(a2 + 72) )
          {
            if ( CheckDpcWatchdogTimerExpireSoon(a2, v105, v21, v18) )
            {
              _InterlockedIncrement((volatile signed __int32 *)(a2 + 4008));
              v4 = 0;
              v102 = 0;
            }
            else
            {
              v4 = v102;
            }
          }
          else
          {
            v4 = 0;
            v102 = 0;
          }
          if ( (*((_WORD *)v8 + 7) & 1) != *(_WORD *)(v7 + 172) )
            continue;
          goto LABEL_164;
        }
        if ( (v16 & 0x40) == 0 && !v21 )
        {
          *(_QWORD *)(32 * v10 + *(_QWORD *)(v13 + 32) + 16) = 0LL;
          goto LABEL_152;
        }
        v25 = *((_WORD *)v8 + 7);
        v26 = v20;
        *(_QWORD *)&v122 = 0LL;
        v106 = 1;
        v112 = 0LL;
        v115 = 0LL;
        if ( (v16 & 0x20) != 0 )
        {
          v27 = *(_QWORD *)(v13 + 40);
          v112 = *(_QWORD *)(32 * v10 + *(_QWORD *)(v13 + 32) + 8);
          if ( v27 )
          {
            v18 = *(_QWORD *)(v27 + 16 * v10);
            v115 = *(_QWORD *)(v27 + 16 * v10 + 8);
            *(_QWORD *)&v122 = v18;
          }
        }
        *(_QWORD *)(32 * v10 + *(_QWORD *)(v13 + 32) + 16) = 0LL;
        if ( (v16 & 0x40) != 0 )
        {
          v28 = *(_BYTE *)(v20 + 3);
        }
        else
        {
          if ( *(_BYTE *)(v20 + 2) != 40 )
            goto LABEL_41;
          if ( *(_DWORD *)(v20 + 20) == 10 )
          {
            v29 = v20 + *(unsigned int *)(v20 + 120);
            if ( v29 )
            {
              *(_DWORD *)(v29 + 96) = *v8;
              *(_WORD *)(v29 + 86) = v25;
            }
          }
          if ( *(_BYTE *)(v20 + 2) == 40 )
            v28 = *(_BYTE *)(*(unsigned int *)(v20 + 52) + v20 + 10);
          else
LABEL_41:
            v28 = *(_BYTE *)(v20 + 7);
          *(_WORD *)(v21 + 4218) = v25;
        }
        v30 = v28;
        if ( (v25 & 0xFFE) != 0 )
        {
          if ( (v16 & 0x40) != 0 )
          {
            v103 = 0;
            if ( (v16 & 0x80u) == 0 )
              LODWORD(v32) = v20;
            else
              v32 = *(_QWORD *)(v20 + 16);
            v33 = NVMeMapError(a2, 0, v32, 0, 0, v25, (__int64)&v103);
            v18 = v33;
            v106 = v33;
            if ( v103 )
            {
              LODWORD(v18) = v33 | 0x10000;
              v106 = v18;
            }
            if ( (*(_DWORD *)(a2 + 4064) & 0x100) != 0 )
              v106 = 56;
          }
          else
          {
            NVMeMapError(a2, v20, 0, 0, 0, v25, 0LL);
          }
          if ( *(_DWORD *)(a2 + 224) > (unsigned int)v30 && *(_QWORD *)(a2 + 8 * v30 + 1672) )
          {
            _mm_lfence();
            ++*(_QWORD *)(*(_QWORD *)(a2 + 8 * v30 + 1672) + 32LL);
          }
          v34 = *(_QWORD *)(a2 + 176);
          LODWORD(v109) = 0;
          LODWORD(v109) = *(_DWORD *)(v34 + 28);
          if ( (v109 & 2) != 0 )
          {
            v82 = (__int64)&v109;
            LODWORD(v81) = 4;
            v80 = L"Controller Fatal Status is set";
            StorPortExtendedFunction(98LL, a2, 0LL, 7LL);
            if ( *(_QWORD *)(a2 + 3936) )
            {
              v109 = 0LL;
              if ( !(unsigned int)StorPortExtendedFunction(29LL, a2, &v109, v35) )
              {
                v80 = 0LL;
                StorPortExtendedFunction(30LL, a2, NVMeControllerPanicResetActionWorkItem, v109);
              }
            }
            else
            {
              NVMeControllerAsyncReset(
                a2,
                0LL,
                0LL,
                0LL,
                v80,
                v81,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87,
                v88,
                v89,
                v90,
                v91,
                v92,
                v93,
                v94,
                v95,
                v96,
                v97,
                v98,
                v99,
                v100,
                v101);
            }
          }
        }
        else
        {
          if ( (v16 & 0x40) == 0 )
            *(_BYTE *)(v20 + 3) = 1;
          if ( *(_DWORD *)(a2 + 224) > (unsigned int)v28 )
          {
            v31 = *(_QWORD *)(a2 + 8LL * v28 + 1672);
            if ( v31 )
              _InterlockedIncrement64((volatile signed __int64 *)(v31 + 24));
          }
        }
        v36 = *(_BYTE *)(a2 + 21) & 8;
        if ( (v16 & 0x40) == 0 )
        {
          if ( v36 )
          {
            v54 = (__int64 *)(v20 + 104);
            if ( *(_BYTE *)(v20 + 2) != 40 )
              v54 = (__int64 *)(v20 + 56);
            v55 = *v54;
            v56 = *v54 & 0xFFF;
            if ( v56 )
              v55 = v55 - v56 + 4096;
            v57 = *(_DWORD *)(v55 + 4100);
            if ( v57 == -1 || (v58 = *(_DWORD *)(a2 + 224), v59 = 0, !v58) )
            {
LABEL_110:
              v60 = 0LL;
            }
            else
            {
              while ( 1 )
              {
                v60 = *(_QWORD *)(a2 + 8LL * v59 + 1672);
                if ( v60 )
                {
                  if ( *(_DWORD *)(v60 + 16) == v57 )
                    break;
                }
                if ( ++v59 >= v58 )
                  goto LABEL_110;
              }
            }
            if ( (*(_BYTE *)(v55 + 4225) & 1) != 0 )
            {
              v61 = 272LL;
              v62 = L"Admin Command Completion";
            }
            else
            {
              v61 = 144LL;
              v62 = L"NVM Command Completion";
            }
            v101 = 0LL;
            v100 = 0LL;
            v99 = 0LL;
            v63 = *(unsigned __int16 *)(*(_QWORD *)&v123[0] + 14LL);
            v64 = *(unsigned int *)(*(_QWORD *)&v123[0] + 8LL);
            v65 = (unsigned int)**(_DWORD **)&v123[0];
            v98 = 0LL;
            v97 = v64;
            v96 = L"DW2";
            v95 = v65;
            v94 = L"DW0";
            v93 = v63;
            v92 = L"Complete Status";
            v91 = (v63 >> 9) & 7;
            v66 = *(unsigned __int16 *)(*(_QWORD *)&v123[0] + 12LL);
            v90 = L"Status.SCT";
            v89 = (unsigned __int8)(v63 >> 1);
            v88 = L"Status.SC";
            v87 = v66;
            v86 = L"CID";
            v85 = v20;
            v84 = 0;
            LODWORD(v83) = 4;
            v82 = v61;
            v81 = v62;
            LODWORD(v80) = 4;
            StorPortExtendedFunction(87LL, a2, v60, 0LL);
            v8 = *(unsigned int **)&v123[0];
          }
          v67 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v110 + 4192);
          if ( !v67 )
          {
            v50 = v110;
            *(_BYTE *)(v110 + 4225) |= 8u;
            goto LABEL_90;
          }
          v67(a2, v20, v8);
LABEL_89:
          v50 = v110;
LABEL_90:
          if ( v112 )
          {
            v51 = 0LL;
            StorPortExtendedFunction(47LL, a2, &v111, &v113);
            if ( (*(_BYTE *)(a2 + 21) & 0x10) != 0 )
            {
              if ( v113 >= v112 && v111 )
                v51 = 10000 * (1000 * ((v113 - v112) % v111) % v111) / v111
                    + 10000 * (1000 * ((v113 - v112) / v111) + 1000 * ((v113 - v112) % v111) / v111);
              if ( (v16 & 0x40) != 0 )
              {
                v52 = v26;
                v53 = 8194LL;
              }
              else
              {
                v52 = v51;
                v53 = 4102LL;
              }
              StorPortNotification(v53, a2, v52);
            }
            if ( (*(_DWORD *)(a2 + 108) & 2) != 0 )
            {
              if ( (v16 & 0x40) != 0 )
              {
                v118 = 0LL;
                v123[0] = 0LL;
                v120 = 0LL;
                LOWORD(v123[0]) = 1;
                BYTE10(v123[0]) = *(_BYTE *)(v26 + 3);
                v117 = v123;
                v119 = 0LL;
                v121 = 0LL;
                DWORD1(v123[0]) = 4;
                StorPortNotification(8193LL, a2, v26);
                v68 = v119;
              }
              else
              {
                v69 = (int *)(v20 + 60);
                if ( *(_BYTE *)(v20 + 2) != 40 )
                  v69 = (int *)(v20 + 16);
                v68 = *v69;
              }
              RecordCommandTimingHistory(a2, v68, v112, v122, v115, v114, v113, v111);
            }
          }
          if ( (*(_DWORD *)(a2 + 4344) & 4) != 0 && v50 && (*(_BYTE *)(v50 + 4225) & 0x40) != 0 )
            NVMeIceConfigureSrbExclusionAddress(a2, v20, 0LL);
          if ( (v16 & 0x40) != 0 )
          {
            v70 = v106;
            if ( v106 == 1 && (v70 = *(_DWORD *)(v26 + 16), v70 == 1) && *(_DWORD *)(v26 + 4) )
            {
              *(_WORD *)v26 = 1;
              *(_BYTE *)(v26 + 2) = 0;
              ProcessPendingIoCommands(a2, v13, v26, 0LL);
            }
            else if ( (v70 & 0x10000) != 0 && *(_BYTE *)(v26 + 2) < 4u )
            {
              v71 = *(_BYTE *)(v26 + 3);
              v122 = 0LL;
              BYTE10(v122) = v71;
              v118 = 0LL;
              v117 = &v122;
              v119 = 0LL;
              v120 = 0LL;
              v121 = 0LL;
              memset(v123, 0, sizeof(v123));
              LOWORD(v122) = 1;
              DWORD1(v122) = 4;
              StorPortNotification(8193LL, a2, v26);
              ++*(_BYTE *)(v26 + 2);
              v72 = v119;
              *(_DWORD *)(v26 + 4) = v119;
              *(_WORD *)v26 = 1;
              *(_DWORD *)(v26 + 16) = 1;
              v73 = *(_DWORD *)(a2 + 120);
              if ( v73 && v118 )
              {
                v74 = *(_DWORD *)(*(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(v26 + 3) + 1672) + 52LL);
                *(_DWORD *)(v26 + 4) = v72 - (-v74 & (v74 + v73 - 1));
              }
              v80 = (const wchar_t *)v123;
              StorPortExtendedFunction(93LL, a2, 1LL, v13 + 64);
              *(_DWORD *)(v26 + 16) = *(_DWORD *)(a2 + 4284);
              if ( *(_QWORD *)(v13 + 160) )
                *(_QWORD *)(*(_QWORD *)(v13 + 168) + 8LL) = v26;
              else
                *(_QWORD *)(v13 + 160) = v26;
              *(_QWORD *)(v13 + 168) = v26;
              StorPortNotification(4100LL, a2, v123);
              if ( *(_QWORD *)(a2 + 4272)
                && !*(_DWORD *)(a2 + 4280)
                && !_InterlockedExchange((volatile __int32 *)(a2 + 4280), 1) )
              {
                v75 = *(_QWORD *)(a2 + 4272);
                v82 = 250000LL;
                v81 = (const wchar_t *)1000000;
                v80 = 0LL;
                StorPortExtendedFunction(33LL, a2, v75, IoTimeoutCallback);
              }
            }
            else
            {
              StorPortNotification(0x2000LL, a2, v26);
            }
          }
          else if ( (*(_BYTE *)(v50 + 4225) & 8) != 0 )
          {
            NVMeRequestComplete(a2, v20, v104);
          }
          goto LABEL_151;
        }
        if ( !v36 )
        {
LABEL_79:
          if ( *(_QWORD *)(v20 + 8) )
          {
            v47 = *(_QWORD *)(v13 + 200);
            do
            {
              v48 = v47;
              *(_QWORD *)(*(_QWORD *)(v20 + 8) + 24LL) = v47;
              v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 200), *(_QWORD *)(v20 + 8), v47);
            }
            while ( v47 != v48 );
            *(_QWORD *)(v20 + 8) = 0LL;
          }
          if ( (v16 & 0x80u) == 0 )
          {
            if ( *(_WORD *)v20 != 1 && _InterlockedExchangeAdd16((volatile signed __int16 *)v20, 0xFFFFu) != 1 )
              goto LABEL_151;
          }
          else
          {
            v49 = *(_QWORD *)(v20 + 16);
            if ( v106 != 1 && *(_DWORD *)(v49 + 16) == 1 )
              _InterlockedCompareExchange((volatile signed __int32 *)(v49 + 16), v106, 1);
            StorPortExtendedFunction(1LL, a2, v20, v18);
            if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v49, 0xFFFFu) != 1 )
              goto LABEL_151;
            v26 = v49;
          }
          goto LABEL_89;
        }
        v37 = *(unsigned __int8 *)(v20 + 3);
        if ( (unsigned int)v37 < *(_DWORD *)(a2 + 224) && (_mm_lfence(), (v38 = *(_QWORD *)(a2 + 8 * v37 + 1672)) != 0) )
        {
          v39 = *(_DWORD *)(v38 + 16);
          if ( v39 == -1 )
            goto LABEL_77;
        }
        else
        {
          v39 = 0;
        }
        v40 = *(_DWORD *)(a2 + 224);
        v41 = 0;
        if ( v40 )
        {
          do
          {
            v42 = *(_QWORD *)(a2 + 8LL * v41 + 1672);
            if ( v42 )
            {
              if ( *(_DWORD *)(v42 + 16) == v39 )
                goto LABEL_78;
            }
          }
          while ( ++v41 < v40 );
        }
LABEL_77:
        v42 = 0LL;
LABEL_78:
        v43 = *((unsigned __int16 *)v8 + 7);
        v44 = v8[2];
        v45 = *v8;
        v101 = 0LL;
        v100 = 0LL;
        v99 = 0LL;
        v98 = 0LL;
        v97 = v44;
        v96 = L"DW2";
        v95 = v45;
        v94 = L"DW0";
        v93 = v43;
        v92 = L"Complete Status";
        v46 = *((unsigned __int16 *)v8 + 6);
        v91 = (v43 >> 9) & 7;
        v90 = L"Status.SCT";
        v89 = (unsigned __int8)(v43 >> 1);
        v88 = L"Status.SC";
        v87 = v46;
        v86 = L"CID";
        v85 = 0LL;
        v84 = 0;
        LODWORD(v83) = 4;
        v82 = 144LL;
        v81 = L"NVM Command Completion";
        LODWORD(v80) = 4;
        StorPortExtendedFunction(87LL, a2, v42, 0LL);
        goto LABEL_79;
      }
      if ( (*(_BYTE *)(a2 + 21) & 2) != 0 )
      {
        v77 = *((unsigned __int16 *)v8 + 7);
        v101 = 0LL;
        v100 = 0LL;
        v99 = 0LL;
        v98 = 0LL;
        v97 = 0LL;
        v96 = 0LL;
        v78 = *(unsigned __int16 *)(v7 + 168);
        v95 = (v77 >> 9) & 7;
        v94 = L"Status.SCT";
        v93 = (unsigned __int8)(v77 >> 1);
        v92 = L"Status.SC";
        v91 = v78;
        v90 = L"CQId";
        v89 = v9;
        v88 = L"SQId";
        v87 = v10;
        v86 = L"CID";
        v85 = 0LL;
        v84 = 0;
        LODWORD(v83) = 2;
        v82 = 1LL;
        v81 = L"NVMe Invalid Command Id";
        LODWORD(v80) = 6;
        StorPortExtendedFunction(87LL, a2, 0LL, 1LL);
      }
      result = IsNVMeControllerOnFatalError(a2);
      if ( (_BYTE)result )
      {
        if ( *(_QWORD *)(a2 + 3936) )
          result = NVMeQueueWorkItem(a2, NVMeControllerPanicResetActionWorkItem, 0LL);
        else
          result = NVMeControllerAsyncReset(
                     a2,
                     0LL,
                     0LL,
                     0LL,
                     v80,
                     v81,
                     v82,
                     v83,
                     v84,
                     v85,
                     v86,
                     v87,
                     v88,
                     v89,
                     v90,
                     v91,
                     v92,
                     v93,
                     v94,
                     v95,
                     v96,
                     v97,
                     v98,
                     v99,
                     v100,
                     v101);
      }
    }
    break;
  }
LABEL_173:
  if ( (*(_BYTE *)(a2 + 21) & 0x20) != 0 )
  {
    result = *(unsigned int *)(a2 + 16);
    if ( (_DWORD)result == 1 || (_DWORD)result == 2 )
    {
      result = *(_QWORD *)(a2 + 176);
      *(_DWORD *)(result + 16) = 1 << *(_WORD *)(v7 + 176);
      _InterlockedOr(v79, 0);
      *(_BYTE *)(a2 + 21) &= ~0x20u;
    }
  }
  return result;
}
