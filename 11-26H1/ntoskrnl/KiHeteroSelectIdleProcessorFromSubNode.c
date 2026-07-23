/*
 * XREFs of KiHeteroSelectIdleProcessorFromSubNode @ 0x14040C320
 * Callers:
 *     KiHeteroSelectIdleProcessorFromNode @ 0x140236710 (KiHeteroSelectIdleProcessorFromNode.c)
 * Callees:
 *     KiFindBiasedProcessorIndex @ 0x140201890 (KiFindBiasedProcessorIndex.c)
 *     KiHeteroIdleSetReduction @ 0x14040C5E0 (KiHeteroIdleSetReduction.c)
 */

__int64 __fastcall KiHeteroSelectIdleProcessorFromSubNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rax
  __int64 v10; // r11
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  int v18; // edx
  __int64 v19; // r10
  int v20; // ecx
  __int64 v21; // r10
  unsigned __int64 v22; // r10
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  int v26; // edx
  int v27; // r11d
  int i; // edx
  unsigned __int64 v29; // rax
  __int128 v30; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-38h]
  __int128 v32; // [rsp+48h] [rbp-30h]
  unsigned __int64 v33; // [rsp+58h] [rbp-20h]

  v6 = *(unsigned __int16 *)(a2 + 136);
  if ( (unsigned __int16)v6 >= *a4 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&a4[4 * v6 + 4];
  if ( (v10 & *(_QWORD *)(a2 + 128)) == 0 )
    return 0LL;
  v11 = *(_QWORD *)(a2 + 192);
  v12 = *(_QWORD *)(v11
                  + 24LL
                  * (*(unsigned __int8 *)(a5 + 16)
                   + (unsigned int)*(unsigned __int8 *)(a2 + 185) * (*(_DWORD *)(a5 + 8) + 2 * *(_DWORD *)(a5 + 4)))
                  + 16);
  v13 = v12 & *(_QWORD *)(v11
                        + 24LL
                        * (*(unsigned __int8 *)(a5 + 16)
                         + (unsigned int)*(unsigned __int8 *)(a2 + 185)
                         * (*(_DWORD *)(a5 + 8) + 2 * *(_DWORD *)(a5 + 4)))
                        + 8);
  v14 = v13 & *(_QWORD *)(v11
                        + 24LL
                        * (*(unsigned __int8 *)(a5 + 16)
                         + (unsigned int)*(unsigned __int8 *)(a2 + 185)
                         * (*(_DWORD *)(a5 + 8) + 2 * *(_DWORD *)(a5 + 4))));
  *((_QWORD *)&v32 + 1) = v12 & *(_QWORD *)(v11
                                          + 24LL
                                          * (*(unsigned __int8 *)(a5 + 16)
                                           + (unsigned int)*(unsigned __int8 *)(a2 + 185)
                                           * (*(_DWORD *)(a5 + 8) + 2 * *(_DWORD *)(a5 + 4)))
                                          + 8);
  *(_QWORD *)&v32 = v14;
  v15 = v13 & v10;
  v33 = v12;
  v16 = v14 & v10;
  v31 = v12;
  v30 = v32;
  v17 = v12 & v10;
  if ( (v12 & v10) != 0 )
  {
    v18 = 0;
    if ( v15 )
    {
      if ( !v16 )
        v16 = v15;
    }
    else
    {
      v15 = v12 & v10;
      v16 = v12 & v10;
    }
  }
  else
  {
    v18 = 1;
    v15 = *(_QWORD *)(a2 + 128) & v10;
    v17 = v15;
    v16 = v15;
  }
  v19 = *(_QWORD *)(a2 + 8);
  *((_QWORD *)&v30 + 1) = v15;
  v20 = *(_DWORD *)(a5 + 20);
  *(_QWORD *)&v30 = v16;
  if ( a6 > v20 )
    v20 = a6;
  v31 = v17;
  v21 = *(_QWORD *)(a2 + 8LL * v20 + 16) & v19;
  if ( (v21 & v17) == 0 && !v18 && (v17 & *(_QWORD *)(a2 + 80)) == 0 )
  {
    v17 = *(_QWORD *)(a2 + 128) & v10;
    v31 = v17;
    *((_QWORD *)&v30 + 1) = v17;
    *(_QWORD *)&v30 = v17;
  }
  v22 = v17 & v21;
  if ( !v22 )
    return 0LL;
  if ( *(_QWORD *)(a3 + 192) != a2 )
    a3 = KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                          *(unsigned __int16 *)(a2 + 136),
                                          *(unsigned __int8 *)(a3 + 209),
                                          v17)];
  v24 = KiHeteroIdleSetReduction(a2, a3, v22, a5, (__int64)&v30);
  if ( (KiHeteroSchedulerOptionsMask & 4) != 0 )
  {
    if ( (KiHeteroSchedulerOptions & 4) == 0 )
      goto LABEL_20;
LABEL_22:
    v27 = 0;
    for ( i = ((unsigned __int64)*(unsigned __int8 *)(a3 + 209) + (*(_QWORD *)(a1 + 72) >> KiFavoredCoreCycleTimeBits))
            % (unsigned int)__popcnt(v24)
            + 1; i; --i )
    {
      _BitScanForward64(&v29, v24);
      v27 += v29 + 1;
      v24 >>= (unsigned __int8)v29 + 1;
    }
    v26 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16
                                                                                    * *(unsigned __int8 *)(a3 + 208)
                                                                                    - 1].Blink
          + v27
          + 1);
    return KiProcessorBlock[v26];
  }
  if ( (KiDynamicHeteroCpuPolicyMask & 0x10) != 0 )
    goto LABEL_22;
LABEL_20:
  _BitScanForward64(&v25, __ROR8__(v24, *(_BYTE *)(a3 + 209)));
  v26 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * *(unsigned __int8 *)(a3 + 208)].Flink
        + (((_BYTE)v25 + *(_BYTE *)(a3 + 209)) & 0x3F));
  return KiProcessorBlock[v26];
}
