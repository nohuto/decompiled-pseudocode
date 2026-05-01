/*
 * XREFs of ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002409C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180046FB4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800058E0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?HampHostComputeDesiredHamState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180024350 (-HampHostComputeDesiredHamState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006C548 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall RmpPolicyComputeDesiredState(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v5; // ebp
  int v6; // eax
  __int64 v7; // r15
  int v8; // edi
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int8 v15; // r11
  int v16; // eax
  int v17; // r11d
  int v18; // r9d
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  unsigned __int64 v22[10]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v23[72]; // [rsp+80h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+E8h] [rbp-30h]

  v2 = HampHostComputeDesiredHamState(a1 + 56);
  if ( *(_QWORD *)(a1 + 656) )
  {
    v3 = *(_DWORD *)(a1 + 616);
    if ( v3 != 8 )
    {
      if ( v3 == 4 )
      {
        if ( (*(_BYTE *)(a1 + 1248) & 1) != 0 )
          v2 |= 0x40u;
      }
      else if ( v3 != 2 )
      {
        return v2;
      }
    }
    if ( (v2 & 8) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 1252);
      v6 = *(_DWORD *)(a1 + 1440);
      v7 = *(_QWORD *)(a1 + 48);
      v8 = 0;
      if ( (v5 & 0x10) == 0 && (v6 & 0x200) == 0 )
      {
        v8 = 2 * (*(_DWORD *)(v7 + 616) & 1);
        if ( (v6 & 0x100) == 0 )
          v8 = (2 * (*(_DWORD *)(v7 + 616) & 1)) | (2 * (*(_DWORD *)(v7 + 616) & 2));
      }
      if ( (v5 & 0x10) != 0 )
      {
        v2 |= v8 | *(_DWORD *)(a1 + 1252) & 0x27;
      }
      else
      {
        memset_0(v23, 0, 0x80uLL);
        memset_0(v22, 0, sizeof(v22));
        RmpSystemMemoryMetricsQuery((struct _RM_SYSTEM_MEMORY_METRICS *)v22);
        RmpPolicyComputeUsageLimits(
          (struct _RM_USAGE_LIMIT_SETTINGS *)(v7 + 512),
          (struct _RM_REMEDIATION_ACTIONS *)(v7 + 568),
          (struct _RM_SYSTEM_MEMORY_METRICS *)v22,
          v22[0],
          (struct _RM_RESOURCE_USAGE_LIMITS *)v23);
        v9 = v22[7];
        *(_WORD *)(v7 + 476) = 0;
        if ( *(_DWORD *)(v7 + 612) && v9 > v25 || v9 > v24 )
        {
          v10 = 0;
          if ( (*(_BYTE *)(v7 + 616) & 4) == 0 )
          {
            v11 = *(_DWORD *)(a1 + 1440);
            v12 = 0;
            if ( (*(_DWORD *)(a1 + 1252) & 0x10) == 0 && (v11 & 0x200) == 0 )
            {
              v13 = 2 * (*(_DWORD *)(v7 + 616) & 1);
              if ( (v11 & 0x100) == 0 )
                v13 = (2 * (*(_DWORD *)(v7 + 616) & 1)) | (2 * (*(_DWORD *)(v7 + 616) & 2));
              v12 = v13 | 2;
            }
            v10 = v12 | *(_DWORD *)(a1 + 1252) & 0x27;
          }
        }
        else
        {
          v10 = 0;
        }
        v2 |= v8 | v10 | (*(_DWORD *)(a1 + 1444) | v5) & 0x27;
      }
      v14 = *(unsigned __int16 *)(a1 + 1440);
      v15 = 0;
      LOWORD(v14) = ~(_WORD)v14;
      v16 = (v14 >> 9) & 1;
      if ( (*(_BYTE *)(a1 + 1168) & 8) == 0 )
        v15 = v16;
      v17 = (unsigned __int8)~(*(_DWORD *)(a1 + 1248) >> 1) & v15 & 1;
      if ( v17 )
      {
        v18 = *(_DWORD *)(a1 + 1440);
        v19 = 0;
        if ( (*(_DWORD *)(a1 + 1252) & 0x10) == 0 && (v18 & 0x200) == 0 )
        {
          v20 = 2 * (*(_DWORD *)(v7 + 616) & 1);
          if ( (v18 & 0x100) == 0 )
            v20 |= 2 * (*(_DWORD *)(v7 + 616) & 2);
          if ( (*(_DWORD *)(v7 + 616) & 4) != 0 )
            v19 = v20;
          else
            v19 = v20 | 0x22;
        }
        v21 = 0;
        if ( (*(_DWORD *)(a1 + 1252) & (v19 | *(_DWORD *)(a1 + 1252) & 0x27)) == (v19 | *(_DWORD *)(a1 + 1252) & 0x27) )
          v21 = v17;
        v17 = v21;
      }
      if ( v17 )
        v2 ^= ((unsigned __int8)v2 ^ (unsigned __int8)(8 * *(_DWORD *)(v7 + 620))) & 0x10;
    }
  }
  return v2;
}
