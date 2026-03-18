/*
 * XREFs of ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002D2B4
 * Callers:
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     DrvSetActualPathModalityToDisplayJournal @ 0x1401F8180 (DrvSetActualPathModalityToDisplayJournal.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     GetPathsModality @ 0x14002D62C (GetPathsModality.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14007EC3C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall SetDisplayConfigGetActualPathsModality(struct D3DKMT_GETPATHSMODALITY **a1, __int64 a2)
{
  int v2; // ebx
  __int64 DxgkWin32kInterface; // rax
  int v5; // esi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  _DWORD *v11; // rdx
  int v12; // eax
  int PathsModality; // r12d
  struct D3DKMT_GETPATHSMODALITY *v14; // rdi
  unsigned int v15; // r8d
  unsigned int v16; // ebx
  unsigned int i; // r15d
  char *v18; // r14
  __int64 v19; // rsi
  _DWORD *v20; // rcx
  int j; // edx
  __int64 v22; // r13
  __int64 v23; // rdx
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // ecx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int128 v45; // [rsp+20h] [rbp-E0h] BYREF
  PVOID Buffer[2]; // [rsp+30h] [rbp-D0h]
  _BYTE v47[304]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = 0;
  v45 = 0LL;
  *(_OWORD *)Buffer = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  v5 = (*(__int64 (__fastcall **)(__int128 *, _QWORD))(DxgkWin32kInterface + 696))(&v45, 0LL);
  IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
  v7 = LODWORD(Buffer[0]);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v5 != -1073741789 || !LODWORD(Buffer[0]) )
      goto LABEL_16;
  }
  else if ( v5 != -1073741789 )
  {
    goto LABEL_16;
  }
  Buffer[1] = (PVOID)PALLOCNOZ(1088 * LODWORD(Buffer[0]), 0x7774656Cu);
  if ( Buffer[1] )
  {
    HIDWORD(Buffer[0]) = Buffer[0];
    v9 = DxDdGetDxgkWin32kInterface(v7, v8);
    if ( (*(unsigned int (__fastcall **)(__int128 *, _QWORD))(v9 + 696))(&v45, 0LL) == -1073741789
      && (v7 = LODWORD(Buffer[0]), LODWORD(Buffer[0]) <= HIDWORD(Buffer[0])) )
    {
      if ( LODWORD(Buffer[0]) )
      {
        v10 = LODWORD(Buffer[0]);
        v11 = (char *)Buffer[1] + 1084;
        do
        {
          v12 = v2 + 1;
          if ( (*v11 & 1) == 0 )
            v12 = v2;
          v11 += 272;
          v2 = v12;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      Buffer[0] = 0LL;
    }
  }
LABEL_16:
  PathsModality = GetPathsModality(v7, a1, 16777280LL);
  if ( PathsModality >= 0 )
  {
    v14 = *a1;
    if ( v2 )
    {
      v15 = (unsigned int)Buffer[0];
      v16 = 0;
      for ( i = *((unsigned __int16 *)v14 + 10); v16 < v15; ++v16 )
      {
        if ( i >= *((unsigned __int16 *)v14 + 11) )
          break;
        v18 = (char *)Buffer[1];
        v19 = 1088LL * v16;
        if ( (*(_DWORD *)((_BYTE *)Buffer[1] + v19 + 1084) & 1) != 0 )
        {
          v20 = (_DWORD *)((char *)v14 + 76);
          for ( j = 0; j < *((unsigned __int16 *)v14 + 10); ++j )
          {
            if ( *(v20 - 1) == *(_DWORD *)((char *)Buffer[1] + v19)
              && *v20 == *(_DWORD *)((char *)Buffer[1] + v19 + 4)
              && v20[2] == *(_DWORD *)((char *)Buffer[1] + v19 + 8) )
            {
              goto LABEL_38;
            }
            v20 += 74;
          }
          v22 = (__int64)v14 + 296 * i;
          memset(v47, 0, 0x128uLL);
          v23 = 2LL;
          v24 = (_OWORD *)(v22 + 56);
          v25 = v47;
          do
          {
            v26 = v25[1];
            *v24 = *v25;
            v27 = v25[2];
            v24[1] = v26;
            v28 = v25[3];
            v24[2] = v27;
            v29 = v25[4];
            v24[3] = v28;
            v30 = v25[5];
            v24[4] = v29;
            v31 = v25[6];
            v24[5] = v30;
            v32 = v25[7];
            v25 += 8;
            v24[6] = v31;
            v24 += 8;
            *(v24 - 1) = v32;
            --v23;
          }
          while ( v23 );
          v33 = *v25;
          v34 = v25[1];
          v35 = *((_QWORD *)v25 + 4);
          *v24 = v33;
          v24[1] = v34;
          *((_QWORD *)v24 + 4) = v35;
          *(_DWORD *)(v22 + 84) = *(_DWORD *)&v18[v19 + 8];
          *(_QWORD *)(v22 + 72) = *(_QWORD *)&v18[v19];
          v36 = 0x1000000000000000LL;
          *(_BYTE *)(v22 + 185) = *(_DWORD *)&v18[v19 + 1084] & 2 | ((*(_DWORD *)&v18[v19 + 1084] & 4) != 0) | (*(_DWORD *)&v18[v19 + 1084] >> 3) & 4;
          v37 = *(_DWORD *)&v18[v19 + 1056];
          if ( v37 != 5 )
            v36 = 0LL;
          v38 = v36 | ((unsigned __int64)(*(_DWORD *)&v18[v19 + 1084] & 0x10) << 53);
          v39 = 0x1000000000000000LL;
          if ( v37 != 3 )
            v39 = 0LL;
          v40 = v39 | v38;
          v41 = 0x800000000000000LL;
          if ( v37 != 4 )
            v41 = 0LL;
          v42 = v41 | v40;
          v43 = 0x400000000000000LL;
          if ( v37 != 2 )
            v43 = 0LL;
          ++i;
          *(_QWORD *)(v22 + 56) |= v43 | v42 | 0x108700000000000LL;
          v15 = (unsigned int)Buffer[0];
        }
LABEL_38:
        ;
      }
      *((_WORD *)v14 + 10) = i;
    }
  }
  if ( Buffer[1] )
    GreDeleteFastMutex(Buffer[1]);
  return (unsigned int)PathsModality;
}
