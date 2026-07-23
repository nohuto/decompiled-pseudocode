/*
 * XREFs of ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1403EE368
 * Callers:
 *     SmProcessCreateRequest @ 0x140ADC4D4 (SmProcessCreateRequest.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     SmFpPreAllocate @ 0x1403E9990 (SmFpPreAllocate.c)
 *     SmFpCleanup @ 0x1403E9CB0 (SmFpCleanup.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403ED790 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmKmStoreHelperStart @ 0x1403EE250 (SmKmStoreHelperStart.c)
 *     SmKmStoreHelperInitialize @ 0x1403EE308 (SmKmStoreHelperInitialize.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403EED28 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmGetIdealProcessorFromNumaNode @ 0x1403EEE6C (SmGetIdealProcessorFromNumaNode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStStart(__int64 a1, __int64 *a2)
{
  unsigned int *v2; // r12
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  int v8; // r8d
  int v9; // ecx
  int v11; // eax
  char v12; // dl
  char v13; // cl
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edx
  int *p_IdealProcessorFromNumaNode; // rdi
  void *Pool3; // rax
  unsigned int v20; // eax
  __int64 v21; // rdi
  void *v22; // rax
  int v23; // eax
  __int128 v24; // xmm0
  int started; // eax
  int IdealProcessorFromNumaNode; // [rsp+30h] [rbp-30h] BYREF
  __int128 v27; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h]
  int v29; // [rsp+50h] [rbp-10h]
  int v30; // [rsp+54h] [rbp-Ch]

  v2 = (unsigned int *)*a2;
  IdealProcessorFromNumaNode = 0;
  v5 = *v2;
  if ( (unsigned __int8)*v2 >= 2u || v2[5] )
    return (unsigned int)-1073741811;
  if ( (_BYTE)v5 )
    return (unsigned int)-1073741637;
  if ( (v6 = v2[3]) == 0 )
    return (unsigned int)-1073741811;
  if ( v6 > 0x40000 )
    return (unsigned int)-1073741811;
  if ( (v7 = v2[2]) == 0 )
    return (unsigned int)-1073741811;
  if ( ((v7 - 1) & v7) != 0 )
    return (unsigned int)-1073741811;
  if ( v7 - 4096 > 0x1F000 )
    return (unsigned int)-1073741811;
  v8 = v5 & 0x20000;
  if ( (v5 & 0x20000) == 0 && (v5 & 0x50000) != 0 )
    return (unsigned int)-1073741811;
  if ( (v5 & 0x40000) != 0 && (v5 & 0x10000) != 0
    || (v5 & 0x80000) != 0 && !v8
    || (v5 & 0x300000) == 0x100000
    || (v5 & 0x800000) != 0 && (v5 & 0x200000) == 0
    || (v5 & 0x400000) != 0 && !v8 )
  {
    return (unsigned int)-1073741811;
  }
  *(_QWORD *)(a1 + 3200) = a2[1];
  v11 = *((_DWORD *)a2 + 8);
  *(_DWORD *)(a1 + 3208) = v11;
  if ( !v11 )
    *(_DWORD *)(a1 + 3208) = 7;
  *(_BYTE *)(a1 + 2468) = *(_BYTE *)v2;
  v12 = *(_BYTE *)(a1 + 2469) ^ (*(_BYTE *)(a1 + 2469) ^ (4 * (*v2 >> 17))) & 4;
  *(_BYTE *)(a1 + 2469) = v12;
  v13 = v12 ^ (v12 ^ (8 * *((_BYTE *)v2 + 2))) & 8;
  *(_BYTE *)(a1 + 2469) = v13;
  *(_BYTE *)(a1 + 2469) = v13 ^ (v13 ^ (32 * (*v2 >> 18))) & 0x20;
  *(_DWORD *)(a1 + 2640) = v2[2];
  SmFpCleanup(a1 + 3080);
  v14 = *(_QWORD *)(a1 + 3200);
  memset_0((void *)(a1 + 3080), 0, 0x78uLL);
  *(_BYTE *)(a1 + 3088) = 1;
  *(_BYTE *)(a1 + 3090) = 6;
  *(_QWORD *)(a1 + 3104) = a1 + 3096;
  *(_QWORD *)(a1 + 3096) = a1 + 3096;
  *(_QWORD *)(a1 + 3112) = v14;
  if ( (*(_BYTE *)(a1 + 2469) & 4) == 0 )
    goto LABEL_30;
  SmKmStoreHelperInitialize(a1 + 2664, *((_BYTE *)a2 + 36));
  SmKmStoreHelperInitialize(a1 + 2808, *((_BYTE *)a2 + 36));
  memset_0((void *)(a1 + 2952), 0, 0x58uLL);
  *(_BYTE *)(a1 + 2962) = 6;
  *(_QWORD *)(a1 + 2976) = a1 + 2968;
  *(_QWORD *)(a1 + 2968) = a1 + 2968;
  *(_WORD *)(a1 + 2984) = 0;
  *(_BYTE *)(a1 + 2986) = 6;
  *(_DWORD *)(a1 + 2988) = 0;
  *(_QWORD *)(a1 + 3000) = a1 + 2992;
  *(_QWORD *)(a1 + 2992) = a1 + 2992;
  *(_QWORD *)(a1 + 3016) = a1 + 3008;
  *(_QWORD *)(a1 + 3008) = 0LL;
  *(_QWORD *)(a1 + 3024) = 0LL;
  v15 = a2[2];
  *(_BYTE *)(a1 + 2469) |= 0x80u;
  *(_QWORD *)(a1 + 3056) = v15;
  v16 = *((unsigned __int8 *)a2 + 36);
  *(_BYTE *)(a1 + 3220) = v16;
  if ( (_BYTE)v16 != 0xFF
    && _InterlockedIncrement64((volatile signed __int64 *)(**(_QWORD **)(*(_QWORD *)(a1 + 3200) + 2208LL)
                                                         + 8 * v16
                                                         + 21528)) <= 1 )
  {
    __fastfail(0xEu);
  }
  v17 = *((_DWORD *)a2 + 10);
  *(_DWORD *)(a1 + 3212) = v17;
  if ( v17 )
  {
    IdealProcessorFromNumaNode = SmGetIdealProcessorFromNumaNode(*(_QWORD *)(a1 + 3200), (unsigned int)(v17 - 1));
    p_IdealProcessorFromNumaNode = &IdealProcessorFromNumaNode;
  }
  else
  {
    p_IdealProcessorFromNumaNode = 0LL;
  }
  v9 = SmKmStoreHelperStart((PVOID *)(a1 + 2664), a2[3], (__int64)p_IdealProcessorFromNumaNode);
  if ( v9 >= 0 )
  {
    v9 = SmKmStoreHelperStart((PVOID *)(a1 + 2808), a2[3], (__int64)p_IdealProcessorFromNumaNode);
    if ( v9 >= 0 )
    {
      if ( (*(_BYTE *)(a1 + 2469) & 8) != 0 )
        *(_QWORD *)(a1 + 2784) = *(_QWORD *)(a1 + 3200) + 2408LL;
      *(_QWORD *)(a1 + 2936) = *(_QWORD *)(a1 + 3200) + 2432LL;
      Pool3 = (void *)ExAllocatePool3(64LL, 80LL, 1817341299LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
      *(_QWORD *)(a1 + 2656) = Pool3;
      if ( !Pool3 )
        return (unsigned int)-1073741670;
      memset_0(Pool3, 0, 0x50uLL);
      if ( !(unsigned int)SmAcquireReleaseCharges(*(_QWORD *)(a1 + 3200), *(unsigned int *)(a1 + 2640), 1, 0) )
        return (unsigned int)-1073741670;
      *(_BYTE *)(a1 + 2469) |= 0x10u;
LABEL_30:
      v20 = v2[3];
      *(_DWORD *)(a1 + 2644) = v20;
      v21 = 8 * v20;
      v22 = (void *)ExAllocatePool3(64LL, v21, 1733455219LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
      if ( v22 )
      {
        *(_QWORD *)(a1 + 2648) = v22;
        memset_0(v22, 0, (unsigned int)v21);
        if ( (*(_BYTE *)(a1 + 2469) & 4) != 0
          || (IdealProcessorFromNumaNode = ((*(_DWORD *)(a1 + 2640) >> 8) ^ 0x100005) & 0xFFFF0 ^ 0x100005,
              v9 = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 3080), &IdealProcessorFromNumaNode, 1u),
              v9 >= 0) )
        {
          v23 = *(_DWORD *)(a1 + 2644);
          v24 = *(_OWORD *)v2;
          v30 = 0;
          v28 = a1;
          v27 = v24;
          LODWORD(v27) = v24 | 0x800;
          HIDWORD(v27) = v23;
          v29 = *((_DWORD *)a2 + 11);
          v9 = ST_STORE<SM_TRAITS>::StStart(a1, (int *)&v27);
          if ( v9 >= 0 )
          {
            if ( (*(_BYTE *)(a1 + 2469) & 4) == 0 )
              goto LABEL_37;
            started = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                        a1,
                        a2[3],
                        SMKM_STORE<SM_TRAITS>::SmStReadThread,
                        a1 + 2952);
            v9 = 0;
            if ( started < 0 )
              v9 = started;
            if ( v9 >= 0 )
            {
LABEL_37:
              v9 = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                     a1,
                     a2[3],
                     SMKM_STORE<SM_TRAITS>::SmStWorkerThread,
                     a1 + 2632);
              if ( v9 >= 0 )
                return 0;
            }
          }
        }
        return (unsigned int)v9;
      }
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v9;
}
