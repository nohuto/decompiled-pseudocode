/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403F1014
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1403F460C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14027F130 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14038FB60 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14038FF90 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140390550 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403F04C8 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmArrayGrow @ 0x1403F2248 (SmArrayGrow.c)
 *     MmOutSwapVirtualAddresses @ 0x140405328 (MmOutSwapVirtualAddresses.c)
 *     ExAllocatePool3 @ 0x140C10010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int *Pool3; // r13
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  _QWORD *v8; // r15
  __int64 v9; // r12
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  int v14; // eax
  struct _KTHREAD *v15; // r15
  struct _KTHREAD *v16; // rdi
  __int64 v18; // r9
  int v19; // r10d
  unsigned __int64 v20; // r11
  int *v21; // rdx
  _DWORD *v22; // rax
  int i; // r8d
  unsigned int v24; // r8d
  __int64 v25; // rcx
  unsigned __int64 j; // rax
  unsigned int *v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int *v35; // rdi
  int v36; // [rsp+20h] [rbp-48h]
  PVOID v37; // [rsp+30h] [rbp-38h] BYREF
  __int64 v38; // [rsp+38h] [rbp-30h]
  __int128 v39; // [rsp+40h] [rbp-28h]
  __int64 v40; // [rsp+50h] [rbp-18h]
  int v41; // [rsp+B0h] [rbp+48h]
  int v42; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v43; // [rsp+C0h] [rbp+58h]
  PVOID P; // [rsp+C8h] [rbp+60h]

  LODWORD(v1) = 0;
  P = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  Pool3 = 0LL;
  v37 = 0LL;
  v4 = 0LL;
  ST_STORE<SM_TRAITS>::StDrainReadContextList((union _SLIST_HEADER *)a1);
  v8 = *(_QWORD **)(a1 + 3040);
  if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v8 != (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 3040), -1LL, (signed __int64)v8) )
      return (unsigned int)-1073700861;
    if ( *v8 )
    {
      v9 = (__int64)v8;
      v10 = -1073741791;
      goto LABEL_5;
    }
    v16 = (struct _KTHREAD *)(a1 + 2472);
    P = v8;
    v41 = 1;
    v9 = 0LL;
    StLockAcquireShared((struct VLOCK *)(a1 + 2472), v5, v6, v7);
    Pool3 = (unsigned int *)ExAllocatePool3(
                              64LL,
                              (unsigned int)(4 * *(_DWORD *)(a1 + 2644)),
                              2001956211LL,
                              &stru_140E27B08.Header.WaitListHead.Blink,
                              1);
    if ( !Pool3 )
    {
      v10 = -1073741670;
LABEL_49:
      StLockReleaseShared(v16);
LABEL_10:
      if ( v9 == -1 )
      {
LABEL_11:
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_13;
      }
LABEL_5:
      _InterlockedExchange64((volatile __int64 *)(a1 + 3040), v9);
      goto LABEL_11;
    }
    v42 = 0;
    while ( 1 )
    {
      v18 = *((unsigned int *)v8 + 2);
      LODWORD(v43) = 0;
      if ( (unsigned int)v18 <= (unsigned int)v1 )
        break;
      v19 = 0;
      v43 = v8[2];
      v20 = v43 + 4 * ((unsigned __int64)(unsigned int)(v18 - 1) >> 5);
      v21 = (int *)(v43 + 4 * ((unsigned __int64)(unsigned int)v1 >> 5));
      v22 = v21 + 1;
      for ( i = *v21 | ((1 << (v1 & 0x1F)) - 1); ; i = *v21 )
      {
        v24 = ~i;
        if ( v24 )
          break;
        if ( (unsigned __int64)v22 > v20 )
          goto LABEL_6;
        ++v21;
        ++v22;
      }
      _BitScanForward64((unsigned __int64 *)&v25, v24);
      v1 = (unsigned int)v25 + 32 * (unsigned int)(((__int64)v21 - v43) >> 2);
      if ( (unsigned int)v1 > (unsigned int)v18 )
        break;
      for ( j = ~(v24 | ((1 << v25) - 1)); ; j = *v27 )
      {
        if ( (_DWORD)j )
        {
          _BitScanForward64(&j, j);
          goto LABEL_31;
        }
        v19 += 32;
        v27 = (unsigned int *)(v21 + 1);
        if ( (unsigned __int64)(v21 + 1) > v20 )
          break;
        ++v21;
      }
      LODWORD(j) = 32;
LABEL_31:
      v28 = 32 * (((__int64)v21 - v43) >> 2) + j;
      if ( v28 > (unsigned int)v18 )
        v28 = v18;
      LODWORD(v43) = v28;
      if ( v28 == (_DWORD)v1 )
        break;
      while ( (unsigned int)v1 < v28 )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 2648) + 8 * v1);
        if ( (v29 & 0x7FFFFFFFFFFF0000LL) != 0 && v29 >= 0 )
        {
          v38 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v1, 0, v18, 4);
          if ( !(unsigned int)SmArrayGrow((unsigned int)v4, v30, &v42, &v37) )
          {
            SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v1, v31, (struct _KLOCK_ENTRIES *)v18, v36, 2u);
            v10 = -1073741670;
            goto LABEL_8;
          }
          v32 = v37;
          v33 = v38;
          Pool3[v4] = v1;
          v34 = 2LL * (unsigned int)v4;
          v4 = (unsigned int)(v4 + 1);
          v32[v34] = v33;
          v32[v34 + 1] = *(unsigned int *)(a1 + 2640);
        }
        v28 = v43;
        v1 = (unsigned int)(v1 + 1);
      }
    }
LABEL_6:
    StLockReleaseShared((struct _KTHREAD *)(a1 + 2472));
    v41 = 0;
    if ( !(_DWORD)v4 )
    {
      v10 = -1073741607;
      goto LABEL_5;
    }
    *((_QWORD *)&v39 + 1) = v37;
    LODWORD(v40) = v4;
    v10 = MmOutSwapVirtualAddresses(KeGetCurrentThread()->ApcState.Process);
    if ( v10 >= 0 )
    {
      v9 = (__int64)v8;
      *v8 = v39;
      P = 0LL;
      v10 = 0;
      v15 = (struct _KTHREAD *)(a1 + 2472);
    }
    else
    {
LABEL_8:
      v14 = v41;
      v15 = (struct _KTHREAD *)(a1 + 2472);
      if ( !(_DWORD)v4 )
        goto LABEL_9;
      if ( v41 )
      {
LABEL_43:
        v35 = Pool3;
        do
        {
          SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *v35++, v12, v13, v36, 2u);
          --v4;
        }
        while ( v4 );
        v14 = v41;
LABEL_9:
        v16 = v15;
        if ( !v14 )
          goto LABEL_10;
        goto LABEL_49;
      }
    }
    v41 = 1;
    StLockAcquireShared((struct VLOCK *)(a1 + 2472), v11, v12, v13);
    goto LABEL_43;
  }
  v10 = -1073700861;
LABEL_13:
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  if ( Pool3 )
    ExFreePoolWithTag(Pool3, 0);
  return (unsigned int)v10;
}
