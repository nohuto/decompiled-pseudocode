/*
 * XREFs of WaitForNVMeCommandCompleteWithCustomTimeout @ 0x140031CB4
 * Callers:
 *     WaitForNVMeCommandComplete @ 0x1400C6F10 (WaitForNVMeCommandComplete.c)
 * Callees:
 *     IsNvmeExtendedCommandCompleted @ 0x140032758 (IsNvmeExtendedCommandCompleted.c)
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 *     StorCheckDpcWatchdogTimerExpire @ 0x140032890 (StorCheckDpcWatchdogTimerExpire.c)
 *     IsNvmeControllerGone @ 0x140032940 (IsNvmeControllerGone.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     IsRequestPendingCompletion @ 0x140049640 (IsRequestPendingCompletion.c)
 *     StorPushRequestToDeviceQueue @ 0x140057990 (StorPushRequestToDeviceQueue.c)
 *     ProcessNVMeCompletionQueues @ 0x140122CC0 (ProcessNVMeCompletionQueues.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WaitForNVMeCommandCompleteWithCustomTimeout(
        volatile signed __int32 *SystemArgument2,
        __int64 a2,
        char a3)
{
  __int16 v3; // bx
  unsigned int v6; // r15d
  bool v7; // r13
  __int64 v9; // rcx
  int v10; // r9d
  signed int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // rcx
  unsigned int *v16; // rax
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // r8
  int v20; // ecx
  ULONG v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r10d
  int v29; // ecx
  bool v30; // al
  unsigned int *v31; // r8
  __int64 v32; // r15
  __int64 v33; // rax
  int v34; // edi
  unsigned int v35; // edi
  ULONG v36; // r15d
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned int v40; // r10d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int16 v44; // r9
  int v45; // ecx
  char v46; // r8
  int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // edx
  int v50; // ecx
  unsigned int v51; // edx
  bool v52; // zf
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  __int16 v56; // r12
  __int64 v57; // r9
  __int64 v58; // rdx
  unsigned int v59; // ecx
  __int64 v60; // r15
  unsigned int v61; // edx
  unsigned __int64 v62; // r14
  signed __int32 v63; // ecx
  _QWORD *v64; // rcx
  bool v65; // zf
  int v66; // ecx
  unsigned int v67; // edx
  bool v68; // zf
  unsigned int *v69; // rax
  __int128 v70; // xmm1
  void (__fastcall *v71)(volatile signed __int32 *, _QWORD, _QWORD); // rax
  __int64 v72; // rax
  unsigned int *v73; // r9
  __int64 v74; // rax
  const wchar_t *v75; // rdx
  signed __int32 v76[8]; // [rsp+0h] [rbp-C9h] BYREF
  bool v77; // [rsp+A0h] [rbp-29h]
  char v78; // [rsp+A1h] [rbp-28h]
  int v79; // [rsp+A4h] [rbp-25h] BYREF
  unsigned int v80; // [rsp+A8h] [rbp-21h]
  __int64 v81; // [rsp+B0h] [rbp-19h]
  ULONG MicroSeconds; // [rsp+B8h] [rbp-11h]
  ULONG v83; // [rsp+BCh] [rbp-Dh]
  __int64 v84; // [rsp+C0h] [rbp-9h]
  __int128 v85; // [rsp+C8h] [rbp-1h]
  __int128 v86; // [rsp+D8h] [rbp+Fh]
  char v87; // [rsp+130h] [rbp+67h]

  HIBYTE(v3) = 0;
  v79 = 0;
  v6 = 0;
  v7 = 0;
  v77 = 0;
  v87 = 0;
  v78 = 0;
  if ( !*((_QWORD *)SystemArgument2 + 161) )
    return 3221225473LL;
  if ( (unsigned __int8)IsNvmeControllerGone() )
  {
    v11 = -1073741436;
    goto LABEL_178;
  }
  v12 = *(unsigned __int16 *)(a2 + 4252);
  if ( !(_WORD)v12 )
  {
    v13 = *(_QWORD *)(v9 + 712);
    v14 = *(_QWORD *)(v9 + 856);
    LOWORD(v81) = 0;
    goto LABEL_9;
  }
  if ( (unsigned __int16)v12 <= *(_WORD *)(v9 + 22) )
  {
    v15 = 3 * v12;
    v16 = (unsigned int *)*((_QWORD *)SystemArgument2 + 91);
    v17 = *((_QWORD *)SystemArgument2 + 108) - 128LL;
    v15 <<= 6;
    v18 = *(unsigned __int16 *)((char *)v16 + v15 - 54);
    v13 = (__int64)v16 + v15 - 192;
    v81 = v18;
    v14 = ((unsigned __int64)(unsigned int)v18 << 7) + v17;
LABEL_9:
    v84 = v13;
    v19 = 3435973837LL;
    v20 = 10000000;
    if ( v10 )
      v20 = v10;
    v21 = 50;
    MicroSeconds = 50;
    v80 = 10 * ((v20 + 9) / 0xAu);
    v22 = v80 / 0xA;
    v83 = 1000;
    if ( (unsigned int)v22 <= 0x3E8 )
    {
      v83 = v80 / 0xA;
      if ( (unsigned int)v22 <= 0x32 )
      {
        v21 = v80 / 0xA;
        MicroSeconds = v80 / 0xA;
      }
    }
    _InterlockedAdd((volatile signed __int32 *)(v14 + 56), 1u);
    while ( 1 )
    {
      if ( **((_DWORD **)SystemArgument2 + 161) == 1
        && !*(_DWORD *)(*((_QWORD *)SystemArgument2 + 161) + 4LL)
        && (SystemArgument2[268] & 0x10) != 0 )
      {
        if ( (unsigned __int8)IsNvmeExtendedCommandCompleted(*(_QWORD *)(a2 + 4240), v22, v19) )
        {
          v29 = *(_DWORD *)(a2 + 4256) & 0x80;
          v11 = v29 != 0 ? 0xC000042B : 0;
          v77 = v29 != 0;
          v30 = v29 == 0;
          LOBYTE(v6) = v29 != 0;
          goto LABEL_58;
        }
        if ( ((*(_DWORD *)(a2 + 4256) & 0x40) != 0 || (*(_DWORD *)(a2 + 4256) & 0x2000) != 0)
          && (*(_DWORD *)(**(_QWORD **)(a2 + 4240) + 4256LL) & 0x4000) != 0 )
        {
          v31 = *(unsigned int **)(a2 + 4240);
          v78 = v28;
          v32 = v31[16];
          if ( *(_QWORD *)v31 )
          {
            v33 = *(_QWORD *)(*(_QWORD *)v31 + 4184LL);
            if ( v33 )
              *(_BYTE *)(*(_QWORD *)(v33 + 184) + 3LL) |= v28;
          }
          v34 = v28 & *(_DWORD *)(*(_QWORD *)v31 + 4256LL);
          StorPushRequestToDeviceQueue(*((_QWORD *)SystemArgument2 + 128), (unsigned int)v32, v31);
          _InterlockedOr(v76, 0);
          if ( !_InterlockedCompareExchange(
                  *(volatile signed __int32 **)(*((_QWORD *)SystemArgument2 + 128) + 8 * v32 + 24),
                  1,
                  0) )
            _InterlockedAdd(SystemArgument2 + 239, 1u);
          if ( !(_BYTE)v34 )
            _InterlockedAdd(SystemArgument2 + 240, 1u);
        }
        v35 = 0;
        _InterlockedDecrement((volatile signed __int32 *)(v14 + 56));
        v36 = MicroSeconds;
        while ( 1 )
        {
          while ( 1 )
          {
            StorDelayExecution(v36);
            v39 = **((unsigned int **)SystemArgument2 + 161);
            if ( !(_DWORD)v39 )
              break;
            LOBYTE(v37) = 10;
            LOBYTE(v39) = 20;
            if ( (unsigned __int8)StorCheckDpcWatchdogTimerExpire(v39, v37, v38) )
            {
              LOBYTE(v6) = 5;
LABEL_41:
              v40 = 1;
              v11 = -1073741595;
              v87 = 1;
              v7 = 0;
LABEL_51:
              v44 = v81;
              goto LABEL_172;
            }
          }
          _InterlockedOr(v76, 0);
          if ( (*((_QWORD *)SystemArgument2 + 121) & 1) == 0 )
            break;
          if ( a3 && (unsigned __int8)IsRequestPendingCompletion(SystemArgument2, (unsigned __int16)v81, &v79) )
            ProcessNVMeCompletionQueues((PVOID)SystemArgument2);
          if ( (unsigned __int8)IsNvmeExtendedCommandCompleted(*(_QWORD *)(a2 + 4240), v37, v38) )
          {
            v45 = *(_DWORD *)(a2 + 4256) & 0x80;
            v11 = v45 != 0 ? 0xC000042B : 0;
            v7 = v45 != 0;
            v30 = v45 == 0;
            v6 = v45 != 0 ? 6 : 0;
            goto LABEL_59;
          }
          if ( v35 > v80 )
          {
            v7 = v40;
            v11 = -1073741643;
            LOBYTE(v6) = 7;
            goto LABEL_51;
          }
          v35 += v36;
          LOBYTE(v41) = 5;
          v36 = v83;
          LOBYTE(v42) = 10;
          if ( (unsigned __int8)StorCheckDpcWatchdogTimerExpire(v42, v41, v43) )
          {
            LOBYTE(v6) = 8;
            goto LABEL_41;
          }
        }
        v46 = v78;
        v11 = -1073741436;
        LOBYTE(v6) = 0;
        v7 = 0;
        goto LABEL_169;
      }
      StorDelayExecution(v21);
      if ( a3 && (unsigned __int8)IsRequestPendingCompletion(SystemArgument2, (unsigned __int16)v81, &v79) )
        ProcessNVMeCompletionQueues((PVOID)SystemArgument2);
      if ( (unsigned __int8)IsNvmeExtendedCommandCompleted(*(_QWORD *)(a2 + 4240), v23, v24) )
      {
        v47 = *(_DWORD *)(a2 + 4256) & 0x80;
        v11 = v47 != 0 ? 0xC000042B : 0;
        v77 = v47 != 0;
        v30 = v47 == 0;
        v6 = v47 != 0 ? 2 : 0;
        goto LABEL_58;
      }
      if ( v6 > v80 )
        break;
      v6 += v21;
      LOBYTE(v25) = 5;
      v21 = v83;
      LOBYTE(v26) = 10;
      MicroSeconds = v83;
      if ( (unsigned __int8)StorCheckDpcWatchdogTimerExpire(v26, v25, v27) )
      {
        v87 = 1;
        v11 = -1073741595;
        LOBYTE(v6) = 4;
        goto LABEL_56;
      }
    }
    v77 = 1;
    v11 = -1073741643;
    LOBYTE(v6) = 3;
LABEL_56:
    v30 = 0;
LABEL_58:
    _InterlockedDecrement((volatile signed __int32 *)(v14 + 56));
    v7 = v77;
LABEL_59:
    v46 = v78;
    if ( v30 )
    {
      v48 = *(unsigned __int16 *)(a2 + 4260);
      if ( ((v48 >> 9) & 7) != 0 )
      {
        if ( ((*(unsigned __int16 *)(a2 + 4260) >> 9) & 7) != 1 )
        {
          if ( ((*(unsigned __int16 *)(a2 + 4260) >> 9) & 7) != 2 )
            goto LABEL_161;
          v49 = v48 >> 1;
          switch ( (unsigned __int8)v49 )
          {
            case 0x80u:
              goto LABEL_161;
            case 0x81u:
              goto LABEL_161;
            case 0x82u:
              goto LABEL_161;
            case 0x83u:
              goto LABEL_161;
            case 0x84u:
              goto LABEL_161;
          }
          v50 = (unsigned __int8)v49 - 133;
          if ( (unsigned __int8)v49 == 133 )
            goto LABEL_161;
LABEL_152:
          if ( v50 != 1 )
            goto LABEL_161;
LABEL_153:
          v11 = -1073741790;
LABEL_85:
          if ( v11 < 0 )
            goto LABEL_189;
          v56 = v81;
          v57 = v84;
LABEL_87:
          if ( (SystemArgument2[340] & 8) != 0 )
          {
            v52 = *SystemArgument2 == 1314276178;
            LOWORD(v85) = *(_WORD *)(v57 + 136);
            *((_QWORD *)&v85 + 1) = *(_QWORD *)(a2 + 4184);
            DWORD1(v85) = *(_DWORD *)(a2 + 4096);
            WORD4(v86) = *(_WORD *)(a2 + 4260);
            *(_DWORD *)((char *)&v86 + 10) = 0;
            HIWORD(v86) = 0;
            WORD1(v85) = v56;
            *(_QWORD *)&v86 = 0LL;
            if ( v52 )
            {
              v58 = *(_QWORD *)(*((_QWORD *)SystemArgument2 + 171) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
              v59 = *(_DWORD *)(v58 + 12);
              v60 = v58 + 64;
              _InterlockedOr(v76, 0);
              if ( v59 )
              {
                if ( v58 != -64 )
                {
                  v61 = _InterlockedIncrement((volatile signed __int32 *)v58) % v59;
                  v62 = (unsigned __int64)v61 << 6;
                  v63 = v61;
                  if ( (SystemArgument2[334] & 1) != 0 )
                    v63 = _InterlockedIncrement(SystemArgument2 + 352);
                  *(_DWORD *)(v62 + v60 + 4) = v63;
                  *(_WORD *)(v62 + v60) = 1;
                  LOBYTE(v3) = v56 != 0;
                  v64 = (_QWORD *)(v62 + v60 + 8);
                  *(_WORD *)(v62 + v60 + 2) = v3;
                  if ( (SystemArgument2[334] & 2) != 0 )
                    KeQuerySystemTimePrecise(v64);
                  else
                    *v64 = MEMORY[0xFFFFF78000000014];
                  v70 = v86;
                  *(_OWORD *)(v62 + v60 + 16) = v85;
                  *(_OWORD *)(v62 + v60 + 32) = v70;
                }
              }
            }
          }
          return (unsigned int)v11;
        }
        v51 = v48 >> 1;
        if ( (unsigned __int8)v51 > 0x80u )
        {
          if ( (unsigned __int8)v51 == 129 )
            goto LABEL_84;
          v55 = (unsigned __int8)v51 - 130;
          if ( (unsigned __int8)v51 == 130 )
            goto LABEL_153;
        }
        else
        {
          if ( (unsigned __int8)v51 == 128 )
            goto LABEL_84;
          if ( (unsigned __int8)v51 <= 0x11u )
          {
            if ( (unsigned __int8)v51 != 17 )
            {
              if ( (unsigned __int8)v51 <= 9u )
              {
                if ( (unsigned __int8)v51 != 9
                  && (_BYTE)v51
                  && (unsigned __int8)v51 != 1
                  && (unsigned __int8)v51 != 2
                  && (unsigned __int8)v51 != 3 )
                {
                  v53 = (unsigned __int8)v51 - 5;
                  v52 = (unsigned __int8)v51 == 5;
                  goto LABEL_81;
                }
                goto LABEL_84;
              }
              if ( (unsigned __int8)v51 == 10 )
                goto LABEL_84;
              if ( (unsigned __int8)v51 != 11 )
              {
                if ( (unsigned __int8)v51 == 12
                  || (unsigned __int8)v51 == 13
                  || (unsigned __int8)v51 == 14
                  || (unsigned __int8)v51 == 15 )
                {
                  goto LABEL_84;
                }
                if ( (unsigned __int8)v51 != 16 )
                  goto LABEL_161;
              }
            }
            v11 = -2147483210;
            goto LABEL_85;
          }
          if ( (unsigned __int8)v51 <= 0x1Au )
          {
            switch ( (unsigned __int8)v51 )
            {
              case 0x1Au:
              case 0x12u:
              case 0x13u:
                goto LABEL_113;
              case 0x14u:
                v11 = -1073741800;
                goto LABEL_85;
              case 0x15u:
                goto LABEL_161;
              case 0x16u:
                goto LABEL_113;
            }
            v66 = (unsigned __int8)v51 - 24;
            v65 = (unsigned __int8)v51 == 24;
LABEL_111:
            if ( v65 || v66 == 1 )
            {
LABEL_113:
              v11 = -1073741436;
              goto LABEL_85;
            }
LABEL_161:
            v11 = -1073741435;
            goto LABEL_85;
          }
          switch ( (unsigned __int8)v51 )
          {
            case 0x1Bu:
              v11 = -1073741637;
              goto LABEL_85;
            case 0x1Cu:
              goto LABEL_84;
            case 0x1Eu:
              goto LABEL_153;
          }
          v53 = (unsigned __int8)v51 - 31;
          v52 = (unsigned __int8)v51 == 31;
LABEL_81:
          if ( v52 || (v54 = v53 - 1) == 0 || (v55 = v54 - 1) == 0 )
          {
LABEL_84:
            v11 = -1073741808;
            goto LABEL_85;
          }
        }
LABEL_141:
        v68 = v55 == 1;
LABEL_160:
        if ( !v68 )
          goto LABEL_161;
        goto LABEL_84;
      }
      v67 = v48 >> 1;
      if ( (unsigned __int8)v67 > 0x80u )
      {
        if ( (unsigned __int8)v67 == 129 )
          goto LABEL_84;
        v55 = (unsigned __int8)v67 - 130;
        if ( (unsigned __int8)v67 == 130 )
        {
          v11 = -1073741661;
          goto LABEL_85;
        }
        goto LABEL_141;
      }
      if ( (unsigned __int8)v67 == 128 )
        goto LABEL_84;
      if ( (unsigned __int8)v67 > 0xEu )
      {
        if ( (unsigned __int8)v67 <= 0x16u )
        {
          if ( (unsigned __int8)v67 == 22
            || (unsigned __int8)v67 == 15
            || (unsigned __int8)v67 == 16
            || (unsigned __int8)v67 == 17
            || (unsigned __int8)v67 == 18
            || (unsigned __int8)v67 == 19 )
          {
            goto LABEL_84;
          }
          v50 = (unsigned __int8)v67 - 20;
          if ( (unsigned __int8)v67 != 20 )
            goto LABEL_152;
          goto LABEL_113;
        }
        if ( (unsigned __int8)v67 == 24 )
          goto LABEL_84;
        if ( (unsigned __int8)v67 == 25 || (unsigned __int8)v67 == 26 )
        {
          v11 = -1073741643;
          goto LABEL_85;
        }
        if ( (unsigned __int8)v67 != 27 )
        {
          if ( (unsigned __int8)v67 == 28 )
            goto LABEL_161;
          v68 = (unsigned __int8)v67 == 30;
          goto LABEL_160;
        }
      }
      else
      {
        if ( (unsigned __int8)v67 == 14 )
          goto LABEL_84;
        if ( (unsigned __int8)v67 > 7u )
        {
          if ( (unsigned __int8)v67 != 8 && (unsigned __int8)v67 != 9 && (unsigned __int8)v67 != 10 )
          {
            if ( (unsigned __int8)v67 == 11 )
              goto LABEL_84;
            v55 = (unsigned __int8)v67 - 12;
            if ( (unsigned __int8)v67 == 12 )
            {
              v11 = -1073740758;
              goto LABEL_85;
            }
            goto LABEL_141;
          }
        }
        else if ( (unsigned __int8)v67 != 7 )
        {
          if ( !(_BYTE)v67 )
          {
            v11 = 0;
            goto LABEL_85;
          }
          if ( (unsigned __int8)v67 == 1 || (unsigned __int8)v67 == 2 )
            goto LABEL_84;
          if ( (unsigned __int8)v67 != 3 && (unsigned __int8)v67 != 4 )
          {
            v66 = (unsigned __int8)v67 - 5;
            v65 = (unsigned __int8)v67 == 5;
            goto LABEL_111;
          }
          goto LABEL_161;
        }
      }
      v11 = -1073741248;
      goto LABEL_85;
    }
    v56 = v81;
    v57 = v84;
    if ( v11 >= 0 )
      goto LABEL_87;
    v44 = v81;
    if ( v7 || v87 )
    {
      v40 = 1;
LABEL_172:
      v69 = (unsigned int *)*((_QWORD *)SystemArgument2 + 161);
      if ( v44 )
        _InterlockedAdd((volatile signed __int32 *)v69 + 14, v40);
      else
        _InterlockedAdd((volatile signed __int32 *)v69 + 13, v40);
      goto LABEL_181;
    }
LABEL_169:
    if ( !v46 )
      goto LABEL_178;
    goto LABEL_181;
  }
  v11 = -1073741595;
LABEL_178:
  v71 = *(void (__fastcall **)(volatile signed __int32 *, _QWORD, _QWORD))(a2 + 4192);
  if ( v71 )
    v71(SystemArgument2, *(_QWORD *)(a2 + 4200), 0LL);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(**(_QWORD **)(a2 + 4240) + 4256LL), 3u);
LABEL_181:
  if ( (*(_DWORD *)(a2 + 4256) & 0x800) == 0
    && **(_BYTE **)(*((_QWORD *)SystemArgument2 + 16) + 160LL) == 1
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 4268), 1, 0) )
  {
    v72 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)SystemArgument2 + 16) + 160LL) + 24LL);
    if ( v72 )
      ++*(_QWORD *)(v72 + 56);
    v73 = (unsigned int *)*((_QWORD *)SystemArgument2 + 16);
    v74 = *((_QWORD *)v73 + 20);
    if ( *(_BYTE *)v74 == 1
      && _InterlockedExchangeAdd(
           *(volatile signed __int32 **)(*(_QWORD *)(v74 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 4240) + 64LL)),
           0xFFFFFFFF) == 1 )
    {
      PoFxIdleComponent(**(_QWORD **)(*((_QWORD *)v73 + 20) + 8LL), 0LL, 2LL);
    }
  }
LABEL_189:
  if ( v7 || v87 )
  {
    v75 = L"Timeout";
  }
  else
  {
    LOWORD(v6) = *(_WORD *)(a2 + 4260);
    v75 = L"Command status";
  }
  StorEtwNvmeControllerEvent(
    (_DWORD)SystemArgument2,
    1,
    3,
    (unsigned int)L"NVMe command failed (polling)",
    (__int64)L"CDW0",
    *(_DWORD *)(a2 + 4096),
    (__int64)L"NSID",
    *(_DWORD *)(a2 + 4100),
    (__int64)L"CDW10|CDW11",
    *(_QWORD *)(a2 + 4136),
    (__int64)L"CDW12|CDW13",
    *(_QWORD *)(a2 + 4144),
    (__int64)L"CDW14|CDW15",
    *(_QWORD *)(a2 + 4152),
    (__int64)v75,
    v6,
    (__int64)L"Controller state",
    *((_QWORD *)SystemArgument2 + 121),
    (__int64)L"NTStatus",
    v11);
  return (unsigned int)v11;
}
