/*
 * XREFs of CcSetVacbLargeOffset @ 0x1402E1620
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140260530 (CcAllocateInitializeBcb.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     SetVacb @ 0x1402E1E10 (SetVacb.c)
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14039AEF0 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 *     CcAdjustVacbLevelLockCount @ 0x140476740 (CcAdjustVacbLevelLockCount.c)
 *     CcDereferenceFileOffset @ 0x1404F3290 (CcDereferenceFileOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     CcDeallocateVacbLevel @ 0x1403B60A8 (CcDeallocateVacbLevel.c)
 *     CcAllocateVacbLevels @ 0x1403B6DDC (CcAllocateVacbLevels.c)
 *     VacbLevelReference @ 0x1403B76DC (VacbLevelReference.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14044FE20 (CcGetBcbListHeadLargeOffset.c)
 *     CcAllocateVacbLevel @ 0x1404B6CD4 (CcAllocateVacbLevel.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, __int128 *a4)
{
  __int64 v5; // r8
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // r13
  __int128 *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // edi
  int v12; // ecx
  char v13; // bp
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 VacbLevel; // r14
  __int64 v17; // rax
  int v18; // r10d
  __int64 v19; // rbx
  _QWORD *v20; // rdx
  void *v21; // rdx
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  int v31; // eax
  BOOL v32; // r14d
  _DWORD *v33; // rax
  __int64 BcbListHeadLargeOffset; // rcx
  __int64 i; // rdx
  __int64 *v36; // r11
  __int64 v37; // r8
  __int64 *v38; // rdx
  __int64 v39; // r10
  _QWORD *v40; // r9
  _QWORD *v41; // rax
  int v42; // [rsp+20h] [rbp-E8h]
  BOOL v43; // [rsp+24h] [rbp-E4h]
  unsigned int v45; // [rsp+30h] [rbp-D8h]
  __int128 *v46; // [rsp+38h] [rbp-D0h]
  __int128 v47; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v48; // [rsp+50h] [rbp-B8h]
  __int64 v49; // [rsp+60h] [rbp-A8h]
  __int64 v50; // [rsp+68h] [rbp-A0h]
  _OWORD v51[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-68h]
  _DWORD v53[8]; // [rsp+A8h] [rbp-60h]

  v49 = a2;
  v46 = a4;
  memset(v51, 0, sizeof(v51));
  v5 = a1;
  v6 = 0LL;
  v52 = 0LL;
  v7 = a2;
  v42 = 0;
  v8 = *(_QWORD **)(a1 + 88);
  v9 = a4;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = 0;
  v12 = 25;
  v47 = 0LL;
  v48 = 0LL;
  do
  {
    v13 = v12;
    v12 += 7;
    ++v11;
  }
  while ( v10 > 1LL << v12 );
  do
  {
    v45 = v11;
    v14 = v11;
    v15 = v7 >> v13;
    --v11;
    if ( (unsigned int)v6 >= 7 )
      return 0;
    v53[v6] = v15;
    *((_QWORD *)v51 + v6) = v8;
    v6 = (unsigned int)(v6 + 1);
    v50 = (unsigned int)v15;
    VacbLevel = v8[(unsigned int)v15];
    if ( !VacbLevel )
    {
      v31 = *(_DWORD *)(v5 + 152) & 0x200;
      v32 = v31 && !v11;
      v43 = v32;
      if ( !v9 )
      {
        *(_QWORD *)&v48 = 0LL;
        *((_QWORD *)&v47 + 1) = &v47;
        DWORD2(v48) = 0;
        *(_QWORD *)&v47 = &v47;
        LOBYTE(v15) = v31 != 0;
        if ( !(unsigned __int8)CcAllocateVacbLevels((unsigned int)v14, v15, &v47) )
          return 0;
        v9 = &v47;
        v46 = &v47;
      }
      VacbLevel = CcAllocateVacbLevel(v9, v32, v5, v14);
      if ( v43 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v49, 0LL);
        for ( i = *(_QWORD *)(BcbListHeadLargeOffset + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          BcbListHeadLargeOffset = i;
        v36 = *(__int64 **)(BcbListHeadLargeOffset + 8);
        v37 = VacbLevel + 1024;
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 1024;
        v38 = (__int64 *)(VacbLevel + 1040);
        *(_QWORD *)(VacbLevel + 1024) = BcbListHeadLargeOffset;
        v39 = 3LL;
        do
        {
          *v38 = v37;
          *(v38 - 1) = (__int64)v38;
          v38[1] = (__int64)(v38 + 2);
          v40 = v38 + 38;
          v38[2] = (__int64)v38;
          v37 += 336LL;
          v38[3] = (__int64)(v38 + 4);
          v38[4] = (__int64)(v38 + 2);
          v38[5] = (__int64)(v38 + 6);
          v38[6] = (__int64)(v38 + 4);
          v38[7] = (__int64)(v38 + 8);
          v38[8] = (__int64)(v38 + 6);
          v38[9] = (__int64)(v38 + 10);
          v38[10] = (__int64)(v38 + 8);
          v38[11] = (__int64)(v38 + 12);
          v38[12] = (__int64)(v38 + 10);
          v38[13] = (__int64)(v38 + 14);
          v38[14] = (__int64)(v38 + 12);
          v38[15] = (__int64)(v38 + 16);
          v38[16] = (__int64)(v38 + 14);
          v38[17] = (__int64)(v38 + 18);
          v38[18] = (__int64)(v38 + 16);
          v38[19] = (__int64)(v38 + 20);
          v38[20] = (__int64)(v38 + 18);
          v38[21] = (__int64)(v38 + 22);
          v38[22] = (__int64)(v38 + 20);
          v38[23] = (__int64)(v38 + 24);
          v38[24] = (__int64)(v38 + 22);
          v38[25] = (__int64)(v38 + 26);
          v38[26] = (__int64)(v38 + 24);
          v38[27] = (__int64)(v38 + 28);
          v38[28] = (__int64)(v38 + 26);
          v38[29] = (__int64)(v38 + 30);
          v38[30] = (__int64)(v38 + 28);
          v38[31] = (__int64)(v38 + 32);
          v38[32] = (__int64)(v38 + 30);
          v38[33] = (__int64)(v38 + 34);
          v38[34] = (__int64)(v38 + 32);
          v38[35] = (__int64)(v38 + 36);
          v38[36] = (__int64)(v38 + 34);
          v41 = v38 + 40;
          v38[37] = (__int64)(v38 + 38);
          v38[38] = (__int64)(v38 + 36);
          v38[39] = (__int64)(v38 + 40);
          v38 += 42;
          *v41 = v40;
          --v39;
        }
        while ( v39 );
        *(_QWORD *)(v37 + 8) = v36;
        *v36 = v37;
      }
      v8[v50] = VacbLevel;
      v33 = (_DWORD *)VacbLevelReference(a1, v8, v45);
      v5 = a1;
      ++*v33;
    }
    v17 = 1LL << v13;
    v13 -= 7;
    v8 = (_QWORD *)VacbLevel;
    v7 &= v17 - 1;
  }
  while ( v11 );
  if ( a3 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v18 = 1;
    v42 = 1;
    if ( a3 == -2LL )
    {
LABEL_22:
      v24 = v42;
      while ( 1 )
      {
        if ( v11 )
        {
          v25 = 128LL;
        }
        else
        {
          v25 = 128LL;
          if ( (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
            v25 = 256LL;
        }
        if ( v24 )
          --HIDWORD(v8[v25]);
        else
          --LODWORD(v8[v25]);
        v24 = 0;
        if ( !v11 && (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
        {
          v27 = 2052LL;
          v26 = 256LL;
        }
        else
        {
          v26 = 128LL;
          v27 = 1028LL;
        }
        if ( *(_DWORD *)((char *)v8 + v27) | LODWORD(v8[v26]) || !(_DWORD)v6 )
          break;
        v28 = v11;
        v6 = (unsigned int)(v6 - 1);
        ++v11;
        if ( !v28 && (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
        {
          v29 = v8[128];
          v30 = (_QWORD *)v8[255];
          *(_QWORD *)(v29 + 8) = v30;
          *v30 = v29;
        }
        CcDeallocateVacbLevel(v8);
        v8 = (_QWORD *)*((_QWORD *)v51 + v6);
        v5 = a1;
        v8[v53[v6]] = 0LL;
      }
      v9 = v46;
      goto LABEL_13;
    }
  }
  else
  {
    v18 = 0;
    *(_QWORD *)(VacbLevel + 8LL * (unsigned int)(v7 >> v13)) = a3;
  }
  if ( !a3 )
    goto LABEL_22;
  v19 = 2048LL;
  if ( (*(_DWORD *)(v5 + 152) & 0x200) == 0 )
    v19 = 1024LL;
  if ( v18 )
    ++*(_DWORD *)(v19 + VacbLevel + 4);
  else
    ++*(_DWORD *)(v19 + VacbLevel);
LABEL_13:
  if ( v9 == &v47 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD **)v9;
      if ( *(__int128 **)v9 == v9 )
        break;
      if ( (__int128 *)v20[1] != v9 || (v23 = *v20, *(_QWORD **)(*v20 + 8LL) != v20) )
        __fastfail(3u);
      *(_QWORD *)v9 = v23;
      *(_QWORD *)(v23 + 8) = v9;
      ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v20);
      --*((_DWORD *)v9 + 6);
    }
    v21 = (void *)*((_QWORD *)v9 + 2);
    if ( v21 )
    {
      ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v21);
      *((_QWORD *)v9 + 2) = 0LL;
    }
  }
  return 1;
}
