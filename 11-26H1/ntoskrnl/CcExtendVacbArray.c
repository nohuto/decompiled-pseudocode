/*
 * XREFs of CcExtendVacbArray @ 0x1403C07EC
 * Callers:
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 * Callees:
 *     CcAcquireBcbLockAndVacbLock @ 0x1402C2C60 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402C2CE0 (CcReleaseBcbLockAndVacbLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     CcFreeUnusedVacbLevels @ 0x1403C0D84 (CcFreeUnusedVacbLevels.c)
 *     VacbLevelReference @ 0x1403C15DC (VacbLevelReference.c)
 *     CcCalculateVacbLevelLockCount @ 0x1403C3170 (CcCalculateVacbLevelLockCount.c)
 *     CcAllocateVacbLevel @ 0x1404B0124 (CcAllocateVacbLevel.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcExtendVacbArray(__int64 a1, __int64 a2)
{
  BOOL v2; // r12d
  __int64 v5; // r14
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  char *v13; // r13
  unsigned int v14; // edi
  int v15; // ecx
  unsigned int v16; // r15d
  __int64 v17; // rax
  char *v18; // rcx
  char **i; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  unsigned int j; // eax
  KIRQL v24; // al
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // r14
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _DWORD *v33; // rax
  char *v34; // r15
  char *v35; // r8
  _QWORD *v36; // rdi
  __int64 v37; // r8
  _QWORD *v38; // rax
  __int64 v39; // r8
  char **v40; // rdx
  _QWORD *v41; // [rsp+30h] [rbp-20h] BYREF
  _QWORD **v42; // [rsp+38h] [rbp-18h]
  __int64 v43; // [rsp+40h] [rbp-10h]
  unsigned int v44; // [rsp+48h] [rbp-8h]
  int v45; // [rsp+4Ch] [rbp-4h]
  unsigned int v46; // [rsp+98h] [rbp+48h]
  char *PoolWithTag; // [rsp+A0h] [rbp+50h]
  unsigned int v48; // [rsp+A8h] [rbp+58h]

  v2 = 0;
  v45 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v2 = a2 > 0x200000;
  v5 = *(_QWORD *)(a1 + 32);
  v42 = &v41;
  v41 = &v41;
  v43 = 0LL;
  v44 = 0;
  if ( a2 > v5 )
  {
    if ( v5 < 0x2000000 )
    {
      v5 = a2;
      if ( a2 >= 0x2000000 )
        v5 = 0x2000000LL;
      if ( HIDWORD(v5) )
      {
        v6 = -1;
      }
      else if ( (unsigned int)v5 > 0x100000 )
      {
        v6 = 8 * ((unsigned int)v5 >> 18);
      }
      else
      {
        v6 = 32;
      }
      v46 = v6;
      if ( *(_DWORD *)(a1 + 36) )
      {
        v8 = -1;
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 32);
        if ( v7 > 0x100000 )
          v8 = 8 * (v7 >> 18);
        else
          v8 = 32;
      }
      if ( v6 > v8 )
      {
        if ( v2 )
          v6 += (v6 + 15) & 0xFFFFFFF0;
        v9 = v6 + 8;
        if ( a2 < 0x2000000 )
          v9 = v6;
        v48 = v9;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x70566343u);
        if ( !PoolWithTag )
          return 3221225626LL;
        CcAcquireBcbLockAndVacbLock(v2, a1, v10, v11);
        v13 = *(char **)(a1 + 88);
        if ( v13 )
          memmove(PoolWithTag, *(const void **)(a1 + 88), v8);
        else
          v8 = 0;
        memset_0(&PoolWithTag[v8], 0, v46 - v8);
        if ( a2 >= 0x2000000 )
          *(_QWORD *)&PoolWithTag[v48 - 8] = 0LL;
        if ( v2 )
        {
          v17 = 0LL;
          v18 = &PoolWithTag[v46];
          if ( *(__int64 *)(a1 + 32) <= 0x200000 || !v13 )
          {
            for ( i = *(char ***)(a1 + 24); ; i = (char **)i[1] )
            {
              v20 = a1 + 16;
              if ( i == (char **)(a1 + 16) )
                goto LABEL_47;
              while ( v17 <= (__int64)*(i - 1) )
              {
                v35 = *i;
                if ( *((char ***)*i + 1) != i )
                  goto LABEL_51;
                *(_QWORD *)v18 = v35;
                v17 += 0x80000LL;
                *((_QWORD *)v18 + 1) = i;
                *((_QWORD *)v35 + 1) = v18;
                *i = v18;
                v18 += 16;
              }
            }
          }
          v34 = &v13[v8];
          do
          {
            v39 = *(_QWORD *)v34;
            v40 = (char **)*((_QWORD *)v34 + 1);
            if ( *(char **)(*(_QWORD *)v34 + 8LL) != v34 )
              goto LABEL_51;
            if ( *v40 != v34 )
              goto LABEL_51;
            *v40 = (char *)v39;
            *(_QWORD *)(v39 + 8) = v40;
            if ( *v40 != (char *)v39 )
              goto LABEL_51;
            *(_QWORD *)v18 = v39;
            v17 += 0x80000LL;
            *((_QWORD *)v18 + 1) = v40;
            v34 += 16;
            *v40 = v18;
            *(_QWORD *)(v39 + 8) = v18;
            v18 += 16;
          }
          while ( v17 < *(_QWORD *)(a1 + 32) );
          v20 = a1 + 16;
LABEL_47:
          while ( v17 < v5 )
          {
            v21 = *(_QWORD *)v20;
            if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 )
              goto LABEL_51;
            *(_QWORD *)v18 = v21;
            v17 += 0x80000LL;
            *((_QWORD *)v18 + 1) = v20;
            *(_QWORD *)(v21 + 8) = v18;
            *(_QWORD *)v20 = v18;
            v18 += 16;
          }
        }
        *(_QWORD *)(a1 + 88) = PoolWithTag;
        *(_QWORD *)(a1 + 32) = v5;
        CcReleaseBcbLockAndVacbLock(v2, a1);
        if ( v13 != (char *)(a1 + 56) && v13 )
          ExFreePoolWithTag(v13, 0);
      }
      *(_QWORD *)(a1 + 32) = v5;
    }
    if ( a2 > v5 )
    {
      v14 = 1;
      v15 = 25;
      if ( v5 > 0x2000000 )
      {
        do
        {
          v15 += 7;
          ++v14;
        }
        while ( v5 > 1LL << v15 );
      }
      v16 = v14;
      if ( (a2 - 1) >> v15 )
      {
        do
        {
          v15 += 7;
          ++v16;
        }
        while ( (a2 - 1) >> v15 );
        if ( v16 > v14 )
        {
          v24 = KeAcquireQueuedSpinLock(4uLL);
          if ( v16 >= CcMaxVacbLevelsSeen )
            CcMaxVacbLevelsSeen = v16 + 1;
          KeReleaseQueuedSpinLock(4uLL, v24);
          for ( j = v44; v16 - v14 > j; j = ++v44 )
          {
            v27 = ExAllocateFromNPagedLookasideList(&CcVacbLevelLookasideList);
            if ( !v27 )
            {
              CcFreeUnusedVacbLevels(&v41);
              return 3221225626LL;
            }
            v22 = v42;
            if ( *v42 != &v41 )
              goto LABEL_51;
            v27[1] = v42;
            *v27 = &v41;
            *v22 = v27;
            v42 = (_QWORD **)v27;
          }
          CcAcquireBcbLockAndVacbLock(v2, a1, v25, v26);
          if ( v14 == 1 )
            CcCalculateVacbLevelLockCount(a1, *(_QWORD *)(a1 + 88));
          if ( *(_QWORD *)VacbLevelReference(a1, *(_QWORD *)(a1 + 88), v14 - 1) )
          {
            while ( 1 )
            {
              v30 = v41;
              ++v14;
              if ( v41 == &v41 )
                KeBugCheckEx(0x34u, 0x163BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
              v31 = *v41;
              if ( *(_QWORD **)(*v41 + 8LL) != v41 )
                break;
              v32 = (_QWORD *)v41[1];
              if ( (_QWORD *)*v32 != v41 )
                break;
              *v32 = v31;
              *(_QWORD *)(v31 + 8) = v32;
              --v44;
              memset_0(v30 + 1, 0, 0x400uLL);
              *v30 = 0LL;
              *v30 = *(_QWORD *)(a1 + 88);
              v33 = (_DWORD *)VacbLevelReference(a1, v30, v14);
              ++*v33;
              *(_QWORD *)(a1 + 88) = v30;
              if ( v16 <= v14 )
                goto LABEL_67;
            }
LABEL_51:
            __fastfail(3u);
          }
          if ( v14 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
          {
            v36 = *(_QWORD **)(a1 + 88);
            *(_QWORD *)(a1 + 88) = CcAllocateVacbLevel(&v41, 0LL, v28, v29);
            v37 = v36[128];
            v38 = (_QWORD *)v36[255];
            *(_QWORD *)(v37 + 8) = v38;
            *v38 = v37;
            ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v36);
          }
LABEL_67:
          *(_QWORD *)(a1 + 32) = a2;
          CcReleaseBcbLockAndVacbLock(v2, a1);
        }
      }
      *(_QWORD *)(a1 + 32) = a2;
    }
  }
  CcFreeUnusedVacbLevels(&v41);
  return 0LL;
}
