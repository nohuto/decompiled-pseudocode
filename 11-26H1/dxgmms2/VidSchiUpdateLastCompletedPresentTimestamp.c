/*
 * XREFs of VidSchiUpdateLastCompletedPresentTimestamp @ 0x14000B434
 * Callers:
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x14000BB50 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1400268DC (VidSchiNeedToForcePreemptNode.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x140030924 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     VidSchiStartNodeYield @ 0x140030A00 (VidSchiStartNodeYield.c)
 *     McTemplateK0pqxxxx_EtwWriteTransfer @ 0x140030B84 (McTemplateK0pqxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiUpdateLastCompletedPresentTimestamp(__int64 a1, __int64 a2, char a3)
{
  unsigned __int128 v3; // rax
  char v5; // bl
  LARGE_INTEGER *v6; // r15
  LARGE_INTEGER v7; // rdi
  __int64 v8; // rsi
  char v9; // r13
  LARGE_INTEGER v10; // rax
  LARGE_INTEGER v11; // rdx
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER v13; // r8
  LARGE_INTEGER v14; // r10
  LARGE_INTEGER v15; // r12
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r9
  int v22; // ecx
  unsigned int v23; // r12d
  __int64 *v24; // r9
  __int64 v25; // r9
  char v26; // r10
  unsigned int v27; // esi
  int v28; // r14d
  __int64 *v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // r9
  __int64 v33; // r11
  unsigned int v34; // eax
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rcx
  __int16 v37; // r11
  __int64 v38; // rdx
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // r11
  __int64 v42; // rdx
  unsigned __int64 v43; // r8
  int v44; // ecx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-19h] BYREF
  __int64 v47; // [rsp+58h] [rbp-11h]
  unsigned __int64 v48; // [rsp+60h] [rbp-9h]
  unsigned int v49; // [rsp+68h] [rbp-1h]
  int v50; // [rsp+6Ch] [rbp+3h]
  __int64 v51; // [rsp+70h] [rbp+7h]
  LARGE_INTEGER v52; // [rsp+78h] [rbp+Fh]
  LARGE_INTEGER *v53; // [rsp+80h] [rbp+17h]
  char v54; // [rsp+D0h] [rbp+67h]
  unsigned int v55; // [rsp+E8h] [rbp+7Fh]

  *((_QWORD *)&v3 + 1) = a2;
  v5 = BYTE8(v3);
  v54 = 0;
  v6 = *(LARGE_INTEGER **)(a1 + 104);
  *(_QWORD *)&v3 = *(unsigned int *)(a1 + 412);
  v53 = v6;
  v7 = v6[5];
  v8 = gulPriorityToYieldPriorityBand[(_QWORD)v3];
  PerformanceFrequency.QuadPart = 0LL;
  v50 = v8;
  if ( !(_DWORD)v8 || (_DWORD)v8 == 3 )
    return v3;
  v9 = 0;
  if ( !*(_BYTE *)(v7.QuadPart + 7077) )
    v9 = a3;
  v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v14 = v6[24];
  v52 = v10;
  v15 = v10;
  v47 = v8;
  v16 = v8;
  if ( !v14.QuadPart && !v9 )
  {
    if ( (byte_14008A201 & 1) != 0 )
    {
      McTemplateK0pqxxxx_EtwWriteTransfer(
        v12.LowPart,
        v11.LowPart,
        v13.LowPart,
        *(_QWORD *)(v7.QuadPart + 16),
        1,
        *(_DWORD *)(a1 + 412),
        v10.QuadPart,
        0,
        0);
      goto LABEL_67;
    }
    goto LABEL_42;
  }
  v13 = PerformanceFrequency;
  v17 = v10.QuadPart - v14.QuadPart;
  if ( !v5 && !v9 )
  {
    if ( is_mul_ok(v17, 0x989680uLL) )
    {
      *(_QWORD *)&v3 = v17 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      v32 = v3;
    }
    else
    {
      *(_QWORD *)&v3 = v17 / PerformanceFrequency.QuadPart;
      v12.QuadPart = 10000000 * (v17 / PerformanceFrequency.QuadPart);
      v32 = v12.QuadPart + 10000000 * (v17 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    }
    if ( v32 < *(_QWORD *)(v7.QuadPart + 3120) )
      return v3;
  }
  v49 = *(_DWORD *)(v7.QuadPart + 4 * v16 + 228);
  v18 = v17 * v49;
  v3 = v18 * (unsigned __int128)0x47AE147AE147AE15uLL;
  v19 = v18 / 0x64;
  if ( !v19 && !v9 )
  {
    if ( (byte_14008A201 & 1) != 0 )
      *(_QWORD *)&v3 = McTemplateK0pqxxxx_EtwWriteTransfer(
                         v12.LowPart,
                         DWORD2(v3),
                         PerformanceFrequency.LowPart,
                         *(_QWORD *)(v7.QuadPart + 16),
                         2,
                         *(_DWORD *)(a1 + 412),
                         LOBYTE(v15.LowPart) - LOBYTE(v14.LowPart),
                         0,
                         0);
    return v3;
  }
  if ( is_mul_ok(v19, 0x989680uLL) )
  {
    v11.QuadPart = v19 * (unsigned __int128)0x989680uLL % (unsigned __int64)PerformanceFrequency.QuadPart;
    v20 = v19 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
  }
  else
  {
    v11.QuadPart = v19 % PerformanceFrequency.QuadPart;
    v12.QuadPart = 10000000 * (v19 / PerformanceFrequency.QuadPart);
    v20 = v12.QuadPart + 10000000 * (v19 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  }
  v21 = *(_QWORD *)(v7.QuadPart + 3104);
  if ( v20 > v21 )
  {
    if ( !v9 )
    {
      if ( (byte_14008A201 & 1) != 0 )
      {
        McTemplateK0pqxxxx_EtwWriteTransfer(
          v12.LowPart,
          v11.LowPart,
          PerformanceFrequency.LowPart,
          *(_QWORD *)(v7.QuadPart + 16),
          1,
          *(_DWORD *)(a1 + 412),
          v15.QuadPart,
          v14.QuadPart,
          0);
        goto LABEL_66;
      }
      goto LABEL_49;
    }
  }
  else
  {
    v21 = *(_QWORD *)(v7.QuadPart + 3112);
    if ( v20 >= v21 )
      goto LABEL_15;
  }
  v20 = v21;
  if ( is_mul_ok(v21, PerformanceFrequency.QuadPart) )
    v19 = v21 * PerformanceFrequency.QuadPart / 0x989680;
  else
    v19 = PerformanceFrequency.QuadPart * (v21 / 0x989680) + PerformanceFrequency.QuadPart * (v21 % 0x989680) / 0x989680;
LABEL_15:
  v22 = *(_DWORD *)(a1 + 412);
  v11.QuadPart = (unsigned int)((1 << v22) - 1);
  v55 = (1 << v22) - 1;
  if ( !*(_DWORD *)(v7.QuadPart + 88) )
  {
LABEL_49:
    v16 = v47;
LABEL_42:
    v26 = 0;
    goto LABEL_25;
  }
  v23 = 0;
  do
  {
    v24 = *(__int64 **)(v7.QuadPart + 696);
    if ( v23 < *(_DWORD *)(v7.QuadPart + 768) )
      v24 += v23;
    v25 = *v24;
    if ( (v11.LowPart & *(_DWORD *)(v25 + 1888)) == 0 && (v11.LowPart & *(_DWORD *)(v25 + 1892)) == 0 )
      goto LABEL_21;
    v33 = v47;
    v48 = *(_QWORD *)(v25 + 8 * v47 + 2088);
    if ( v48 <= v17 * (100 - v49) / 0x64 && !v9 )
    {
      if ( (byte_14008A201 & 1) == 0 )
      {
LABEL_53:
        v11.QuadPart = v55;
LABEL_21:
        v26 = v54;
        goto LABEL_22;
      }
      v51 = 0LL;
      if ( is_mul_ok(v17, 0x989680uLL) )
        v35 = v17 * (unsigned __int128)0x989680uLL / (unsigned __int64)v13.QuadPart;
      else
        v35 = 10000000 * (v17 / v13.QuadPart) + 10000000 * (v17 % v13.QuadPart) / v13.QuadPart;
      LODWORD(v36) = v48;
      v37 = *(_WORD *)(v25 + 4);
      v51 = 0LL;
      if ( is_mul_ok(v48, 0x989680uLL) )
      {
        v38 = v48 * (unsigned __int128)0x989680uLL % (unsigned __int64)v13.QuadPart;
        v39 = v48 * (unsigned __int128)0x989680uLL / (unsigned __int64)v13.QuadPart;
      }
      else
      {
        v38 = v48 % v13.QuadPart;
        v36 = 10000000 * (v48 / v13.QuadPart);
        v39 = v36 + 10000000 * (v48 % v13.QuadPart) / v13.QuadPart;
      }
      McTemplateK0pqxxxx_EtwWriteTransfer(
        v36,
        v38,
        v13.LowPart,
        *(_QWORD *)(v7.QuadPart + 16),
        5,
        *(_DWORD *)(a1 + 412),
        v39,
        v37,
        v35);
LABEL_64:
      v13 = PerformanceFrequency;
      goto LABEL_53;
    }
    v26 = 1;
    *(_QWORD *)(v25 + 2128) = v19;
    *(_BYTE *)(v25 + 2144) = 1;
    *(_QWORD *)(v25 + 2120) = 0LL;
    *(_QWORD *)(v25 + 2136) = v20;
    v54 = 1;
    if ( (byte_14008A201 & 1) != 0 )
    {
      v51 = 0LL;
      if ( is_mul_ok(v17, 0x989680uLL) )
        v40 = v17 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      else
        v40 = 10000000 * (v17 / PerformanceFrequency.QuadPart)
            + 10000000 * (v17 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      v41 = *(_QWORD *)(v25 + 8 * v33 + 2088);
      v48 = *(unsigned __int16 *)(v25 + 4);
      v51 = 0LL;
      if ( is_mul_ok(v41, 0x989680uLL) )
      {
        v42 = v41 * (unsigned __int128)0x989680uLL % (unsigned __int64)PerformanceFrequency.QuadPart;
        v43 = v41 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      }
      else
      {
        v42 = v41 % PerformanceFrequency.QuadPart;
        v43 = 10000000 * (v41 / PerformanceFrequency.QuadPart)
            + 10000000 * (v41 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      }
      McTemplateK0pqxxxx_EtwWriteTransfer(
        v48,
        v42,
        v43,
        *(_QWORD *)(v7.QuadPart + 16),
        0,
        *(_DWORD *)(a1 + 412),
        v43,
        v48,
        v40);
      goto LABEL_64;
    }
    v13 = PerformanceFrequency;
    v11.QuadPart = v55;
LABEL_22:
    ++v23;
  }
  while ( v23 < *(_DWORD *)(v7.QuadPart + 88) );
  v15 = v52;
  if ( v26 && (v44 = *(_DWORD *)(a1 + 412) - 1, *(_DWORD *)(v7.QuadPart + 224) = v44, (byte_14008A201 & 1) != 0) )
  {
    McTemplateK0pqx_EtwWriteTransfer(
      v44,
      (unsigned int)&EventYieldStartAdapter,
      v13.LowPart,
      *(_QWORD *)(v7.QuadPart + 16),
      v44,
      v20);
LABEL_66:
    v16 = v47;
LABEL_67:
    v26 = v54;
  }
  else
  {
    v16 = v47;
  }
LABEL_25:
  v27 = 0;
  if ( *(_DWORD *)(v7.QuadPart + 88) )
  {
    v28 = v50;
    do
    {
      v29 = *(__int64 **)(v7.QuadPart + 696);
      if ( v27 < *(_DWORD *)(v7.QuadPart + 768) )
        v29 += v27;
      v30 = *v29;
      *(_QWORD *)(v30 + 8 * v16 + 2056) = 0LL;
      *(_QWORD *)(v30 + 8 * v16 + 2088) = 0LL;
      *(LARGE_INTEGER *)(v30 + 8 * v16 + 2024) = v15;
      v31 = *(_QWORD *)(v30 + 8LL * *(unsigned int *)(v30 + 1576) + 1584);
      if ( v31 && gulPriorityToYieldPriorityBand[*(unsigned int *)(v31 + 412)] >= v28 && v15.QuadPart )
        *(LARGE_INTEGER *)(v30 + 8 * v16 + 2056) = v15;
      if ( v26
        && *(_BYTE *)(v30 + 2144)
        && !*(_QWORD *)(v30 + 2120)
        && v31
        && *(_DWORD *)(v31 + 412) <= *(_DWORD *)(v7.QuadPart + 224) )
      {
        v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiMonitorRefreshPeriodFromNode)(
                v30,
                (LARGE_INTEGER)v11.QuadPart,
                (LARGE_INTEGER)v13.QuadPart);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
          v30,
          (LARGE_INTEGER)v15.QuadPart,
          (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
          v34);
        v26 = v54;
      }
      ++v27;
    }
    while ( v27 < *(_DWORD *)(v7.QuadPart + 88) );
  }
  *(_QWORD *)&v3 = v53;
  v53[24] = v15;
  return v3;
}
