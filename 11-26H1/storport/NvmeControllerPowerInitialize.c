/*
 * XREFs of NvmeControllerPowerInitialize @ 0x1400F81E4
 * Callers:
 *     NvmeControllerAdvancedInitialize @ 0x1400F057C (NvmeControllerAdvancedInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerGetPowerState @ 0x1400443D0 (NvmeControllerGetPowerState.c)
 *     NvmeGetAutoPowerStateTransition @ 0x1400D0F40 (NvmeGetAutoPowerStateTransition.c)
 *     NvmeSetAutoPowerStateTransition @ 0x1400D1374 (NvmeSetAutoPowerStateTransition.c)
 *     NvmeAdapterCacheOperationalPowerRange @ 0x1400E4EF0 (NvmeAdapterCacheOperationalPowerRange.c)
 *     NvmeAdapterInitializePoFx @ 0x140123A1C (NvmeAdapterInitializePoFx.c)
 *     NvmeControllerPowerStateGetMaxPower @ 0x1401273E0 (NvmeControllerPowerStateGetMaxPower.c)
 *     NvmeControllerRegisterPowerSettingChangeNotification @ 0x140127410 (NvmeControllerRegisterPowerSettingChangeNotification.c)
 *     NvmeControllerValidatePowerStates @ 0x140127640 (NvmeControllerValidatePowerStates.c)
 *     NvmeRegisterPerfStates @ 0x14012AEB0 (NvmeRegisterPerfStates.c)
 */

__int64 __fastcall NvmeControllerPowerInitialize(__int64 a1)
{
  unsigned int *v2; // r15
  void *v3; // r12
  char v4; // bl
  int v5; // r14d
  int v6; // r13d
  __int64 v7; // rsi
  int v9; // ecx
  __int64 v10; // rsi
  int v11; // ebx
  unsigned int v12; // r9d
  __int64 PowerState; // rax
  int MaxPower; // eax
  int v15; // r9d
  __int64 v16; // r10
  char v17; // r11
  char *Pool; // r14
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  int v22; // ecx
  __int64 v23; // r9
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r11d
  int v30; // r10d
  __int64 v31; // rcx
  __int64 v32; // rbx
  unsigned __int8 v33; // cl
  __int64 v34; // rax
  __int64 v35; // r9
  char v36; // al
  unsigned int v37; // ecx
  int v38; // ecx
  PVOID v39; // rcx
  unsigned int v40; // r13d
  __int64 v41; // rax
  unsigned int v42; // edx
  unsigned int v43; // r8d
  unsigned int v44; // r10d
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // r11
  int v49; // r10d
  __int64 *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // r13
  int v54; // [rsp+28h] [rbp-C0h]
  unsigned int v55; // [rsp+A0h] [rbp-48h]
  PVOID P; // [rsp+A8h] [rbp-40h]
  unsigned int v57; // [rsp+F8h] [rbp+10h] BYREF
  int v58; // [rsp+100h] [rbp+18h]
  int v59; // [rsp+108h] [rbp+20h]

  v2 = 0LL;
  LOBYTE(v57) = 0;
  v3 = 0LL;
  P = 0LL;
  v4 = 0;
  v58 = 0;
  v5 = 0;
  v59 = 0;
  v6 = 0;
  if ( RuntimePowerDisabled )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 128);
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 400) + 184LL) & 0x40000000) == 0 )
    return 3221225659LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 48LL);
  if ( v9 == 4 )
    return 0LL;
  v10 = *(_QWORD *)(v7 + 160);
  if ( v9 == 3 )
  {
    NvmeGetAutoPowerStateTransition((union _SLIST_HEADER *)a1);
    if ( (*(_DWORD *)(v10 + 176) & 0x800) == 0 )
    {
      NvmeSetAutoPowerStateTransition((union _SLIST_HEADER *)a1, 1u);
      NvmeGetAutoPowerStateTransition((union _SLIST_HEADER *)a1);
    }
    return 0LL;
  }
  if ( *(_BYTE *)v10 == 1 )
    return 0LL;
  NvmeGetAutoPowerStateTransition((union _SLIST_HEADER *)a1);
  if ( (*(_DWORD *)(v10 + 176) & 0x800) != 0 )
  {
    NvmeSetAutoPowerStateTransition((union _SLIST_HEADER *)a1, 0);
    NvmeGetAutoPowerStateTransition((union _SLIST_HEADER *)a1);
  }
  if ( (unsigned __int8)NvmeControllerValidatePowerStates(a1) )
  {
    LOBYTE(v12) = 0;
    v55 = 0;
    if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 592) + 263LL) != -1 )
    {
      do
      {
        PowerState = NvmeControllerGetPowerState(a1, v12);
        MaxPower = NvmeControllerPowerStateGetMaxPower(PowerState);
        v17 = *(_BYTE *)(v16 + 3);
        v59 = MaxPower;
        if ( (v17 & 2) != 0 )
        {
          ++v6;
        }
        else
        {
          ++v5;
          v58 = v15;
        }
        StorEtwNvmeControllerEvent(
          a1,
          1,
          4LL,
          (__int64)L"NVMe Power State",
          L"Max Power (uW)",
          v59,
          L"Non-Operational",
          (v17 & 2) != 0LL,
          L"Entry Latency (us)",
          *(_DWORD *)(v16 + 4),
          L"Exit Latency (us)",
          *(_DWORD *)(v16 + 8),
          L"Relative Read Throughput",
          *(_BYTE *)(v16 + 12) & 0x1F,
          L"Relative Read Latency",
          *(_BYTE *)(v16 + 13) & 0x1F,
          L"Relative Write Throughput",
          *(_BYTE *)(v16 + 14) & 0x1F,
          L"Relative Write Latency",
          *(_BYTE *)(v16 + 15) & 0x1F);
        v12 = v55 + 1;
        v55 = v12;
      }
      while ( v12 < (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 592) + 263LL) + 1 );
      v4 = v58;
      v59 = v5;
    }
    Pool = (char *)RaidAllocatePool(
                     64LL,
                     (unsigned int)(32 * (v6 + 3)),
                     1330667858LL,
                     *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
    if ( !Pool )
      return (unsigned int)-1073741670;
    if ( v6 )
    {
      v3 = (void *)RaidAllocatePool(72LL, 64LL, 1414095186LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
      if ( !v3 )
        goto LABEL_24;
      P = (PVOID)RaidAllocatePool(72LL, 64LL, 1414095186LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
      if ( !P )
        goto LABEL_24;
    }
    *((_DWORD *)Pool + 3) |= 0x40u;
    *(_DWORD *)Pool = 3;
    *((_DWORD *)Pool + 1) = 24;
    *((_DWORD *)Pool + 2) = 1;
    *((_DWORD *)Pool + 6) = 2;
    *((_DWORD *)Pool + 7) = 40;
    *(_OWORD *)(Pool + 40) = xmmword_14015A2F0;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 48LL) == 5 )
    {
      *((_DWORD *)Pool + 8) = 1;
    }
    else
    {
      *((_DWORD *)Pool + 8) = v6 + 1;
      if ( (unsigned int)(v6 + 1) > 1 )
        *((_DWORD *)Pool + 3) |= 0x100u;
    }
    if ( *((_DWORD *)Pool + 8) > 8u )
      *((_DWORD *)Pool + 8) = 8;
    v19 = *((_DWORD *)Pool + 3);
    *((_DWORD *)Pool + 4) = -1;
    v20 = v19 | 0x10;
    *((_DWORD *)Pool + 3) = v19 | 0x10;
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 48LL);
    if ( v21 == 2 )
    {
      *((_DWORD *)Pool + 3) = v19 | 0x14;
      *(_DWORD *)(v10 + 176) |= 2u;
      v20 = *((_DWORD *)Pool + 3);
    }
    else if ( v21 == 5 )
    {
      v20 = v19 | 0x14;
      *((_DWORD *)Pool + 3) = v19 | 0x14;
      *((_DWORD *)Pool + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 60LL);
    }
    v22 = *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 48LL);
    if ( v22 == 1 || (unsigned int)(v22 - 3) <= 1 || !v22 )
      v20 |= 2u;
    *((_DWORD *)Pool + 3) = v20 | 8;
    v23 = 1LL;
    v24 = *((_DWORD *)Pool + 8);
    *((_DWORD *)Pool + 16) = 1;
    *((_DWORD *)Pool + 17) = 32;
    *((_QWORD *)Pool + 9) = 0LL;
    *((_QWORD *)Pool + 10) = 0LL;
    *((_DWORD *)Pool + 15) = v24 - 1;
    *((_DWORD *)Pool + 22) = -1;
    if ( v24 > 1 )
    {
      do
      {
        v25 = NvmeControllerGetPowerState(a1, (unsigned __int8)v23 + v4);
        v27 = v26;
        v28 = 32 * (v26 + 2LL);
        v23 = v26 + 1;
        v27 *= 32LL;
        *(_DWORD *)&Pool[v28 + 24] = v29;
        *(_DWORD *)&Pool[v27 + 64] = 1;
        *(_DWORD *)&Pool[v27 + 68] = v30;
        v31 = (unsigned int)(*(_DWORD *)(v25 + 4) + *(_DWORD *)(v25 + 8));
        *(_QWORD *)&Pool[v27 + 80] = 0LL;
        *(_QWORD *)&Pool[v27 + 72] = 10 * v31;
      }
      while ( (unsigned int)v23 < *((_DWORD *)Pool + 8) );
    }
    v11 = NvmeAdapterInitializePoFx(*(_QWORD *)(a1 + 128), Pool, &v57, v23);
    if ( v11 < 0 )
      goto LABEL_59;
    v32 = 0LL;
    v33 = 8 * v57;
    *(_BYTE *)(*(_QWORD *)(v10 + 8) + 64LL) = 1;
    v34 = *(_QWORD *)(v10 + 8);
    *(_DWORD *)(v10 + 176) ^= ((unsigned __int8)*(_DWORD *)(v10 + 176) ^ v33) & 8;
    *(_DWORD *)(v34 + 16) = (unsigned __int8)Pool[32];
    *(_DWORD *)(*(_QWORD *)(v10 + 8) + 68LL) = 0;
    v35 = *(_QWORD *)(v10 + 8);
    v36 = v58;
    *(_WORD *)(v10 + 181) = 0;
    *(_BYTE *)(v10 + 1) = v36;
    *(_DWORD *)(v10 + 200) = 200;
    *(_DWORD *)(v10 + 196) = 15;
    *(_DWORD *)(v10 + 208) = 2000;
    *(_DWORD *)(v10 + 204) = 100;
    *(_DWORD *)(v10 + 188) = 15;
    v37 = *(_DWORD *)(v35 + 16);
    if ( v37 > 1 && NvmeControllerGetPowerState(a1, (unsigned __int8)v37 + v36 - 1) )
      *(_DWORD *)(v10 + 4) = 64;
    v38 = *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 68LL);
    if ( v38 != -1 )
      *(_DWORD *)(v10 + 188) = v38;
    if ( v6 )
    {
      *(_QWORD *)(v35 + 120) = v3;
      v3 = 0LL;
      KeInitializeTimer(*(PKTIMER *)(*(_QWORD *)(v10 + 8) + 120LL));
      v39 = P;
      P = 0LL;
      *(_QWORD *)(*(_QWORD *)(v10 + 8) + 112LL) = v39;
      KeInitializeDpc(
        *(PRKDPC *)(*(_QWORD *)(v10 + 8) + 112LL),
        (PKDEFERRED_ROUTINE)NvmeFStateTimerDpcRoutine,
        *(PVOID *)(a1 + 128));
      PoFxSetComponentLatency(**(_QWORD **)(v10 + 8), 0LL, 0LL);
      PoFxSetComponentResidency(**(_QWORD **)(v10 + 8), 0LL, 0LL);
    }
    v40 = v59;
    v41 = RaidAllocatePool(64LL, (unsigned int)(24 * v59 + 40), 1330667858LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
    v2 = (unsigned int *)v41;
    if ( v41 )
    {
      *(_DWORD *)v41 = 1;
      *(_DWORD *)(v41 + 4) = 40;
      LOBYTE(v44) = 0;
      *(_DWORD *)(v41 + 28) = 40;
      *(_QWORD *)(v41 + 16) = 3LL;
      *(_DWORD *)(v41 + 24) = v40;
      if ( v40 )
      {
        do
        {
          v45 = v32 + v2[7];
          *(unsigned int *)((char *)v2 + v45) = 1;
          *(unsigned int *)((char *)v2 + v45 + 4) = 24;
          v46 = NvmeControllerGetPowerState(a1, v44);
          v43 = NvmeControllerPowerStateGetMaxPower(v46);
          *(_QWORD *)((char *)v2 + v47 + 16) = v48;
          v44 = v49 + 1;
          v32 += 24LL;
          v42 = v43 / 0x3E8;
          *(_QWORD *)((char *)v2 + v47 + 8) = v43 / 0x3E8;
        }
        while ( v44 < v40 );
      }
      v50 = *(__int64 **)(v10 + 8);
      v51 = *(_QWORD *)(a1 + 128);
      v57 = 1;
      v11 = NvmeRegisterPerfStates(*(_QWORD *)(v51 + 8), v42, v43, (unsigned int)&v57, (__int64)v2, v54, *v50);
      if ( v11 >= 0 )
      {
        if ( NvmeAdapterCacheOperationalPowerRange(*(_QWORD *)(v10 + 8), v57, (__int64)v2) )
        {
          v52 = 40LL;
          v53 = 3LL;
          do
          {
            *(_QWORD *)(v52 + *(_QWORD *)(v10 + 8)) = -1LL;
            v52 += 8LL;
            --v53;
          }
          while ( v53 );
          LOBYTE(v40) = v59;
        }
        *(_DWORD *)(v10 + 176) |= 4u;
        *(_QWORD *)(v10 + 48) = v2;
        *(_BYTE *)(v10 + 181) = v40;
        *(_BYTE *)(v10 + 182) = 0;
        NvmeControllerRegisterPowerSettingChangeNotification(a1);
      }
    }
    else
    {
LABEL_24:
      v11 = -1073741670;
    }
LABEL_59:
    ExFreePoolWithTag(Pool, 0x4F506152u);
    if ( P )
      ExFreePoolWithTag(P, 0x4F506152u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x4F506152u);
    if ( v11 < 0 && v2 )
      ExFreePoolWithTag(v2, 0x4F506152u);
    return (unsigned int)v11;
  }
  return (unsigned int)-1073741436;
}
