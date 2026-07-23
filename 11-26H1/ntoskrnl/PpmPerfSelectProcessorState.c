/*
 * XREFs of PpmPerfSelectProcessorState @ 0x140448420
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x140448390 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall PpmPerfSelectProcessorState(__int64 *a1)
{
  __int64 v1; // r14
  int v2; // esi
  __int64 v3; // r8
  __int64 v5; // r11
  unsigned __int8 v6; // dl
  __int64 v7; // rcx
  char *v8; // r10
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // r13d
  char v13; // di
  char v14; // r12
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // r9d
  unsigned int v19; // edi
  int v20; // eax
  bool v21; // zf
  const EVENT_DESCRIPTOR *v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 Keyword; // rcx
  unsigned __int8 v26; // r10
  unsigned int v27; // r12d
  unsigned int v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  char v38; // di
  unsigned int v39; // r12d
  unsigned __int8 v40; // al
  char v41; // al
  char v42; // al
  unsigned __int8 v43; // al
  char v45; // [rsp+40h] [rbp-69h]
  char v46; // [rsp+41h] [rbp-68h]
  char v47; // [rsp+42h] [rbp-67h]
  unsigned int v48; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-59h] BYREF
  int v50; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-41h] BYREF
  __int64 v53; // [rsp+70h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-29h] BYREF
  unsigned int *v55; // [rsp+90h] [rbp-19h]
  __int64 v56; // [rsp+98h] [rbp-11h]
  unsigned int *v57; // [rsp+A0h] [rbp-9h]
  __int64 v58; // [rsp+A8h] [rbp-1h]
  int *v59; // [rsp+B0h] [rbp+7h]
  __int64 v60; // [rsp+B8h] [rbp+Fh]
  unsigned int *v61; // [rsp+C0h] [rbp+17h]
  __int64 v62; // [rsp+C8h] [rbp+1Fh]

  v1 = a1[1];
  v2 = 0;
  v3 = *a1;
  v49 = 0;
  v53 = *(_QWORD *)(v1 + 8);
  v5 = a1[2];
  v6 = PpmMfBufferingThreshold;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v6 = 100;
  v50 = 1;
  v7 = 712LL * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v8 = (char *)PpmCurrentProfile + v7 + 40;
  if ( v5
    && PpmCurrentProfile == (_UNKNOWN *)PopDirectedDripsDiagLock.OtherOperationCount
    && *((_BYTE *)&PpmIdlePolicyLock.ForegroundLossTime + 4)
    && *(_BYTE *)(v5 + 233) < v6 )
  {
    v2 = 4096;
    v8 = (char *)&PopDirectedDripsDiagLock.SchedulerAssistPriorityFloor + v7;
  }
  LOBYTE(v9) = 0;
  if ( *((_BYTE *)a1 + 68) )
  {
    if ( (unsigned __int8)PpmMaxCoreClasses > 1u )
    {
      LOBYTE(v9) = *((_BYTE *)a1 + 88);
    }
    else
    {
      if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses <= 1u )
        goto LABEL_8;
      v9 = *a1;
      if ( !*a1 )
        goto LABEL_8;
      LOBYTE(v9) = *(_BYTE *)(v9 + 301);
      if ( (_BYTE)v9 )
      {
        LOBYTE(v9) = 1;
        goto LABEL_8;
      }
    }
    if ( (unsigned __int8)v9 >= 2u )
      LOBYTE(v9) = 2;
  }
LABEL_8:
  v10 = *((_DWORD *)v8 + 28);
  v11 = (unsigned __int8)v9;
  v12 = (unsigned __int8)v8[(unsigned __int8)v9 + 80];
  v13 = v8[(unsigned __int8)v9 + 74];
  v14 = v8[(unsigned __int8)v9 + 217];
  v52 = (unsigned __int8)v8[(unsigned __int8)v9 + 65];
  v51 = (unsigned __int8)v8[(unsigned __int8)v9 + 68];
  v46 = v8[(unsigned __int8)v9 + 71];
  v45 = v13;
  v47 = v14;
  v48 = (unsigned __int8)v8[(unsigned __int8)v9 + 77];
  v15 = (v48 + v12) >> 1;
  if ( !v5 )
    goto LABEL_11;
  v16 = *(_DWORD *)&v8[4 * (unsigned __int8)v9 + 172];
  v17 = *(_DWORD *)&v8[4 * v11 + 160];
  if ( v16 == v17 )
  {
    *(_BYTE *)(v1 + 60) = 0;
    goto LABEL_11;
  }
  v38 = *(_BYTE *)(v1 + 60);
  v39 = *(_DWORD *)(v5 + 240);
  if ( !v38 )
  {
    if ( v39 < v16 )
    {
      *(_BYTE *)(v1 + 61) = 0;
    }
    else
    {
      v2 |= 0x100000u;
      v40 = *(_BYTE *)(v1 + 61) + 1;
      *(_BYTE *)(v1 + 61) = v40;
      if ( v40 >= (unsigned __int8)v8[v11 + 187] )
      {
        *(_WORD *)(v1 + 60) = 1;
        v38 = 1;
      }
    }
    goto LABEL_120;
  }
  if ( v39 <= v17 )
  {
    v2 |= 0x80000u;
    v43 = *(_BYTE *)(v1 + 61) + 1;
    *(_BYTE *)(v1 + 61) = v43;
    if ( v43 >= (unsigned __int8)v8[v11 + 184] )
    {
      *(_WORD *)(v1 + 60) = 0;
      v38 = 0;
    }
LABEL_120:
    if ( !v38 )
      goto LABEL_124;
    goto LABEL_123;
  }
  *(_BYTE *)(v1 + 61) = 0;
LABEL_123:
  v2 |= 0x200000u;
LABEL_124:
  v13 = v45;
  v14 = v47;
LABEL_11:
  if ( ((v10 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( PpmPerfBoostAtGuaranteed || (unsigned int)(v10 - 5) <= 1 )
      v18 = *(_DWORD *)(v1 + 24);
    else
      v18 = 100;
  }
  else
  {
    v18 = *(_DWORD *)(v3 + 460);
  }
  if ( !*(_BYTE *)(v3 + 530) )
  {
    v2 |= 0x40000u;
    v19 = v18;
    goto LABEL_15;
  }
  if ( *((_BYTE *)a1 + 68) && *((_BYTE *)a1 + 92) && v14 )
  {
    v2 |= 1u;
    v19 = v18;
    if ( v14 == 1 )
      v19 = 1;
    goto LABEL_15;
  }
  v26 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v26 = 100;
  if ( !(_BYTE)v15 )
  {
    v41 = v13;
    if ( !v13 )
      v41 = 2;
    v45 = v41;
    v42 = v46;
    if ( !v46 )
      v42 = 2;
    v46 = v42;
  }
  v27 = *((_DWORD *)a1 + 10);
  v19 = *(_DWORD *)(v1 + 56);
  if ( PpmPerfCalculateActualUtilization )
    v28 = v27 / *((unsigned __int16 *)a1 + 31);
  else
    v28 = v27 / v19;
  v49 = v28;
  v29 = v28;
  if ( v28 <= v12 )
  {
    *(_DWORD *)(v1 + 1216) = 0;
LABEL_41:
    v30 = v48;
    goto LABEL_42;
  }
  v36 = *(_DWORD *)(v1 + 1216) + 1;
  *(_DWORD *)(v1 + 1216) = v36;
  if ( v19 >= v18 || v36 < v51 )
    goto LABEL_41;
  *(_DWORD *)(v1 + 1216) = 0;
  if ( !v45 )
  {
    v37 = v27 / (unsigned __int8)v15;
    v30 = v48;
    v2 |= 0x10u;
LABEL_75:
    v29 = v49;
    v19 = v37;
    goto LABEL_76;
  }
  if ( v45 != 1 )
  {
    if ( v45 == 2 )
    {
      v30 = v48;
      v2 |= 0x40u;
LABEL_68:
      v19 = v18;
      goto LABEL_42;
    }
    if ( v45 != 3 )
      goto LABEL_41;
    if ( v29 < v26 )
    {
      v37 = v27 / (unsigned __int8)v15;
      v30 = v48;
    }
    else
    {
      v30 = v48;
      v37 = v27 / v48;
    }
    v2 |= 0x80u;
    goto LABEL_75;
  }
  v19 += PpmPerfSingleStepSize;
  v30 = v48;
  v2 |= 0x20u;
LABEL_76:
  if ( v19 >= v18 )
    goto LABEL_68;
LABEL_42:
  if ( v29 >= v30 )
  {
    *(_DWORD *)(v1 + 1220) = 0;
    goto LABEL_44;
  }
  v35 = *(_DWORD *)(v1 + 1220) + 1;
  *(_DWORD *)(v1 + 1220) = v35;
  if ( v19 > 1 && v35 >= v52 )
  {
    *(_DWORD *)(v1 + 1220) = 0;
    switch ( v46 )
    {
      case 0:
        v2 |= 0x100u;
        v19 = v27 / (unsigned __int8)v15;
        goto LABEL_44;
      case 1:
        v2 |= 0x200u;
        if ( v19 > PpmPerfSingleStepSize )
        {
          v19 -= PpmPerfSingleStepSize;
          goto LABEL_44;
        }
        break;
      case 2:
        break;
      default:
        goto LABEL_44;
    }
    v19 = 1;
    v2 |= 0x400u;
  }
LABEL_44:
  if ( v5 )
  {
    v31 = *(unsigned __int8 *)(v5 + 238);
    if ( (_BYTE)v31 )
    {
      *(_BYTE *)(v5 + 238) = 0;
      if ( v19 <= v31 )
        v19 = v31;
      v2 |= 0x10000u;
    }
    v32 = *(unsigned __int8 *)(v5 + 239);
    if ( (_BYTE)v32 )
    {
      v2 |= 0x20000u;
      *(_BYTE *)(v5 + 239) = 0;
      if ( v19 > v32 )
        v32 = v19;
      v19 = v32;
    }
  }
LABEL_15:
  v20 = guard_dispatch_icall_no_overrides(v53, v19);
  *(_DWORD *)(v1 + 56) = v20;
  v21 = *((_BYTE *)a1 + 68) == 0;
  v50 = v20;
  v52 = v49;
  v49 = 0;
  v48 = v2;
  v51 = v19;
  if ( v21 )
  {
    v22 = (const EVENT_DESCRIPTOR *)PPM_ETW_PERF_SELECT_PROCESSOR_STATE_HV;
    v49 = *(_DWORD *)(a1[1] + 20);
    *(_QWORD *)&UserData.Size = 4LL;
  }
  else
  {
    v22 = &PPM_ETW_PERF_SELECT_PROCESSOR_STATE;
    LOWORD(v49) = *((unsigned __int8 *)a1 - 35056);
    BYTE2(v49) = *((_BYTE *)a1 - 35055);
    *(_QWORD *)&UserData.Size = 3LL;
  }
  v23 = (unsigned __int64)&v49;
  UserData.Ptr = (ULONGLONG)&v49;
  if ( PpmEtwRegistered && PpmEtwHandle )
  {
    v24 = *(_QWORD *)(PpmEtwHandle + 32);
    Keyword = v22->Keyword;
    if ( *(_DWORD *)(v24 + 96) )
    {
      LODWORD(v23) = *(unsigned __int8 *)(v24 + 100);
      if ( v22->Level <= (unsigned __int8)v23 || !(_BYTE)v23 )
      {
        LODWORD(v23) = *(_DWORD *)(v24 + 104);
        if ( (v23 & 0x40) != 0 && !Keyword )
          goto LABEL_32;
        if ( (Keyword & *(_QWORD *)(v24 + 112)) != 0 )
        {
          v23 = *(_QWORD *)(v24 + 120);
          if ( (v23 & Keyword) == v23 )
            goto LABEL_32;
        }
      }
    }
    if ( *(_WORD *)(PpmEtwHandle + 102) )
    {
      v33 = *(_QWORD *)(PpmEtwHandle + 40);
      v34 = v22->Keyword;
      if ( *(_DWORD *)(v33 + 96) )
      {
        LODWORD(v23) = *(unsigned __int8 *)(v33 + 100);
        if ( v22->Level <= (unsigned __int8)v23 || !(_BYTE)v23 )
        {
          if ( (LODWORD(v23) = *(_DWORD *)(v33 + 104), (v23 & 0x40) != 0) && !v34
            || (v34 & *(_QWORD *)(v33 + 112)) != 0 && (v23 = *(_QWORD *)(v33 + 120), (v23 & v34) == v23) )
          {
LABEL_32:
            v55 = &v52;
            v56 = 4LL;
            v57 = &v51;
            v58 = 4LL;
            v59 = &v50;
            v61 = &v48;
            v60 = 4LL;
            v62 = 4LL;
            LODWORD(v23) = EtwWriteEx(PpmEtwHandle, v22, 0LL, 0, 0LL, 0LL, 5u, &UserData);
          }
        }
      }
    }
  }
  return v23;
}
