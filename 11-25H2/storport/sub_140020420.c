/*
 * XREFs of sub_140020420 @ 0x140020420
 * Callers:
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140076490 @ 0x140076490 (sub_140076490.c)
 */

void __fastcall sub_140020420(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r13
  int v6; // r8d
  __int64 *v7; // r8
  __int64 v8; // rdx
  int v9; // r9d
  unsigned int v10; // r9d
  __int64 *v11; // rdx
  __int64 v12; // rdx
  int v13; // r8d
  void *v14; // rdx
  __int64 v15; // rbp
  char v16; // r12
  char v17; // r14
  char v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdx
  int *v21; // rcx
  int v22; // eax
  __int64 v23; // rbp
  char v24; // r12
  char v25; // r14
  char v26; // r15
  __int64 v27; // rdi
  __int64 v28; // rcx
  int *v29; // rdx
  int v30; // eax
  int v31; // eax
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  int *v34; // rcx
  int v35; // eax
  int v36; // eax
  _DWORD *v37; // rcx
  int v38; // eax
  _DWORD *v39; // rdx
  __int64 v40; // rdx
  int *v41; // rcx
  int v42; // eax
  int v43; // eax
  _DWORD *v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned int v46; // ebp
  int *v47; // rcx
  int v48; // eax
  _DWORD *v49; // rcx
  _DWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  KSPIN_LOCK *v53; // rcx
  __int64 v54; // rcx
  int v55; // eax
  int v56; // eax
  _DWORD v57[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v58; // [rsp+58h] [rbp-50h]
  int v59; // [rsp+60h] [rbp-48h]
  unsigned int v60; // [rsp+64h] [rbp-44h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-40h] BYREF

  v4 = a2;
  if ( (unsigned __int8)sub_140021280(a1) )
  {
    if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
      sub_140076490(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&unk_14014B0B0,
        v6,
        **(_QWORD **)(a1 + 1872),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        v4,
        a3);
    v7 = (__int64 *)(a1 + 1872);
    if ( a3 )
    {
      v8 = *v7;
      *(_QWORD *)(a1 + 2136) = MEMORY[0xFFFFF78000000008];
      v9 = *(_DWORD *)(v8 + 32);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 108LL) & 1) != 0 )
        v10 = v9 | 0x40;
      else
        v10 = v9 & 0xFFFFFFBF;
      *(_DWORD *)(v8 + 32) = v10;
    }
    else
    {
      ++*(_DWORD *)(a1 + 2188);
      if ( *(_QWORD *)(a1 + 2136) )
      {
        if ( (*(_DWORD *)(*v7 + 32) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 108LL) & 1) != 0 )
        {
          v45 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 2136);
          *(_QWORD *)(a1 + 2144) += v45 / 0x2710;
          if ( v45 / 0x2710 >= 0x2710 )
            ++*(_DWORD *)(a1 + 2196);
        }
        *(_QWORD *)(a1 + 2136) = 0LL;
      }
    }
    *(_DWORD *)(*v7 + 16) = a3;
    v11 = (__int64 *)(a1 + 24);
    if ( !*(_DWORD *)(a1 + 1040) || !a3 )
    {
LABEL_12:
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 4) == 0 || !(unsigned __int8)sub_1400215B0(a1, 7LL) )
      {
        v12 = *(_QWORD *)(a1 + 24);
        if ( (*(_BYTE *)(v12 + 110) & 0x40) != 0
          && (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 0x1000) != 0
          && *(_QWORD *)(v12 + 4960) )
        {
          if ( a3 )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3608), 0, 1) == 1 )
              sub_140021110(*(_QWORD *)(a1 + 24), 0LL, 0LL);
          }
          else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3608), 1, 0) )
          {
            sub_1400212C0(*(_QWORD *)(a1 + 24), 0LL, 0LL);
          }
        }
        goto LABEL_14;
      }
      v46 = 1;
      v47 = *(int **)(*(_QWORD *)(a1 + 1872) + 8LL);
      v48 = *v47;
      if ( *v47 == 1 )
      {
        if ( (unsigned int)v4 < v47[2] )
        {
          v49 = v47 + 4;
LABEL_111:
          v50 = &v49[16 * v4];
          if ( v50 && *v50 == 2 )
            v46 = v50[8];
        }
      }
      else if ( v48 == 2 )
      {
        if ( (unsigned int)v4 < v47[2] )
        {
LABEL_143:
          v49 = v47 + 6;
          goto LABEL_111;
        }
      }
      else if ( v48 == 3 && (unsigned int)v4 < v47[2] )
      {
        goto LABEL_143;
      }
      v51 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v51 + 112) & 0x40) != 0 )
        v46 = 1;
      if ( a3 <= v46
        && *(_QWORD *)(v51 + 4960)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3608), 1, 0)
        && !(unsigned __int8)sub_1400212C0(*(_QWORD *)(a1 + 24), 0LL, 0LL) )
      {
        v53 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 24) + 80LL);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock(v53, &LockHandle);
        v54 = *(_QWORD *)(a1 + 24);
        if ( *(int *)(v54 + 348) > 1 )
        {
          *(_BYTE *)(a1 + 2040) = 1;
          *(_DWORD *)(a1 + 2044) = a3;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v54 + 4944), (PSLIST_ENTRY)(a1 + 2064));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( !byte_140168DAA || (byte_1401694F2 & 0x10) == 0 )
            goto LABEL_16;
          v14 = &unk_14014A320;
          goto LABEL_175;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      if ( (unsigned __int8)sub_1400215B0(a1, 7LL) )
      {
        v52 = *(_QWORD *)(a1 + 24) + 376LL;
        v57[0] = 1;
        v57[1] = 24;
        v58 = a1 + 96;
        v59 = v4;
        v60 = a3;
        sub_140021760(v52, 7LL, v57);
      }
      if ( a3 > v46
        && *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4960LL)
        && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3608), 0, 1) == 1 )
      {
        sub_140021110(*(_QWORD *)(a1 + 24), 0LL, 0LL);
      }
LABEL_14:
      if ( !*(_DWORD *)(a1 + 1040) || a3 )
      {
LABEL_15:
        PoFxCompleteIdleState(**(_QWORD **)(a1 + 1872), (unsigned int)v4);
        if ( !byte_140168DAA || (byte_1401694F2 & 0x10) == 0 )
          goto LABEL_16;
        v14 = &unk_14014AA10;
LABEL_175:
        sub_140076490(
          *(_QWORD *)(a1 + 24),
          (_DWORD)v14,
          v13,
          **(_QWORD **)(a1 + 1872),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 104),
          *(_BYTE *)(a1 + 105),
          *(_BYTE *)(a1 + 106),
          v4,
          a3);
LABEL_16:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
        return;
      }
      v15 = *(_QWORD *)(a1 + 24);
      v16 = 1;
      v17 = 1;
      v18 = 1;
      v19 = *(_QWORD *)(v15 + 5016);
      if ( *(char *)(v15 + 108) < 0 )
        goto LABEL_34;
      if ( *(_DWORD *)(v15 + 348) == 4 && !*(_DWORD *)(v15 + 100) )
      {
        v55 = *(_DWORD *)(v15 + 392);
        if ( v55 == 5 || v55 == 17 )
          goto LABEL_34;
        if ( (*(_BYTE *)(v15 + 107) & 0x50) == 0x50 )
        {
          v16 = 0;
          goto LABEL_35;
        }
      }
      v20 = *(_QWORD *)(v15 + 4960);
      if ( !v20 )
        goto LABEL_50;
      v21 = *(int **)(v20 + 8);
      v22 = *v21;
      if ( *v21 == 1 )
      {
        v31 = v21[2];
        v32 = v21 + 4;
        if ( !v31 )
          v32 = 0LL;
      }
      else
      {
        if ( v22 == 2 )
        {
          if ( !v21[2] )
            goto LABEL_34;
        }
        else if ( v22 != 3 || !v21[2] )
        {
          goto LABEL_34;
        }
        v32 = v21 + 6;
      }
      if ( v32 )
      {
        if ( *v32 < 2u )
        {
          if ( *v32 == 1 && (*(_BYTE *)(v15 + 107) & 0x40) != 0 && *(_DWORD *)(v20 + 16) )
          {
            v16 = 0;
            goto LABEL_35;
          }
        }
        else if ( *(_DWORD *)(v20 + 16) > v32[9] )
        {
          v16 = 0;
          goto LABEL_35;
        }
LABEL_50:
        if ( !v19
          || (*(_BYTE *)(v19 + 506) & 4) != 0
          || *(_DWORD *)(v19 + 548) == 4 && !*(_DWORD *)(v19 + 1044) && (*(_BYTE *)(v19 + 505) & 0x44) == 0x44 )
        {
          v17 = 0;
          goto LABEL_35;
        }
        if ( !(unsigned __int8)sub_140021280(*(_QWORD *)(v15 + 5016)) )
        {
LABEL_65:
          *(_BYTE *)(v15 + 4893) = v16;
          if ( v19 )
          {
            *(_BYTE *)(v19 + 1862) = v17;
            *(_BYTE *)(v19 + 1863) = v18;
          }
          goto LABEL_15;
        }
        v33 = *(_QWORD *)(v19 + 1872);
        v34 = *(int **)(v33 + 8);
        v35 = *v34;
        if ( *v34 == 1 )
        {
          v36 = v34[2];
          v37 = v34 + 4;
          if ( !v36 )
            v37 = 0LL;
        }
        else
        {
          if ( v35 == 2 )
          {
            if ( !v34[2] )
              goto LABEL_57;
          }
          else if ( v35 != 3 || !v34[2] )
          {
            goto LABEL_57;
          }
          v37 = v34 + 6;
        }
        if ( v37 )
        {
          if ( *v37 >= 2u )
          {
            if ( *(_DWORD *)(v33 + 16) > v37[9] )
              v17 = 0;
          }
          else if ( *v37 == 1 && (*(_BYTE *)(v19 + 505) & 0x40) != 0 && *(_DWORD *)(v33 + 16) )
          {
            goto LABEL_57;
          }
LABEL_64:
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v19 + 1864));
          if ( v17 )
            goto LABEL_65;
LABEL_35:
          v18 = 0;
          goto LABEL_65;
        }
LABEL_57:
        v17 = 0;
        goto LABEL_64;
      }
LABEL_34:
      v16 = 0;
      goto LABEL_35;
    }
    v23 = *v11;
    v24 = 1;
    v25 = 1;
    v26 = 1;
    v27 = *(_QWORD *)(*v11 + 5016);
    if ( *(char *)(*v11 + 108) < 0 )
      goto LABEL_43;
    if ( *(_DWORD *)(v23 + 348) == 4 && !*(_DWORD *)(v23 + 100) )
    {
      v56 = *(_DWORD *)(v23 + 392);
      if ( v56 == 5 || v56 == 17 )
        goto LABEL_43;
      if ( (*(_BYTE *)(v23 + 107) & 0x50) == 0x50 )
      {
        v24 = 0;
        goto LABEL_44;
      }
    }
    v28 = *(_QWORD *)(v23 + 4960);
    if ( !v28 )
      goto LABEL_72;
    v29 = *(int **)(v28 + 8);
    v30 = *v29;
    if ( *v29 == 1 )
    {
      v38 = v29[2];
      v39 = v29 + 4;
      if ( !v38 )
        v39 = 0LL;
    }
    else
    {
      if ( v30 == 2 )
      {
        if ( !v29[2] )
          goto LABEL_43;
      }
      else if ( v30 != 3 || !v29[2] )
      {
        goto LABEL_43;
      }
      v39 = v29 + 6;
    }
    if ( v39 )
    {
      if ( *v39 < 2u )
      {
        if ( *v39 == 1 && (*(_BYTE *)(v23 + 107) & 0x40) != 0 && *(_DWORD *)(v28 + 16) )
        {
          v24 = 0;
          goto LABEL_44;
        }
      }
      else if ( *(_DWORD *)(v28 + 16) > v39[9] )
      {
        v24 = 0;
        goto LABEL_44;
      }
LABEL_72:
      if ( !v27
        || (*(_BYTE *)(v27 + 506) & 4) != 0
        || *(_DWORD *)(v27 + 548) == 4 && !*(_DWORD *)(v27 + 1044) && (*(_BYTE *)(v27 + 505) & 0x44) == 0x44 )
      {
        v25 = 0;
        goto LABEL_44;
      }
      if ( !(unsigned __int8)sub_140021280(v27) )
      {
LABEL_87:
        *(_BYTE *)(v23 + 4893) = v24;
        if ( v27 )
        {
          *(_BYTE *)(v27 + 1862) = v25;
          *(_BYTE *)(v27 + 1863) = v26;
        }
        goto LABEL_12;
      }
      v40 = *(_QWORD *)(v27 + 1872);
      v41 = *(int **)(v40 + 8);
      v42 = *v41;
      if ( *v41 == 1 )
      {
        v43 = v41[2];
        v44 = v41 + 4;
        if ( !v43 )
          v44 = 0LL;
      }
      else
      {
        if ( v42 == 2 )
        {
          if ( !v41[2] )
            goto LABEL_79;
        }
        else if ( v42 != 3 || !v41[2] )
        {
          goto LABEL_79;
        }
        v44 = v41 + 6;
      }
      if ( v44 )
      {
        if ( *v44 >= 2u )
        {
          if ( *(_DWORD *)(v40 + 16) > v44[9] )
            v25 = 0;
        }
        else if ( *v44 == 1 && (*(_BYTE *)(v27 + 505) & 0x40) != 0 && *(_DWORD *)(v40 + 16) )
        {
          goto LABEL_79;
        }
LABEL_86:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v27 + 1864));
        if ( v25 )
          goto LABEL_87;
LABEL_44:
        v26 = 0;
        goto LABEL_87;
      }
LABEL_79:
      v25 = 0;
      goto LABEL_86;
    }
LABEL_43:
    v24 = 0;
    goto LABEL_44;
  }
}
