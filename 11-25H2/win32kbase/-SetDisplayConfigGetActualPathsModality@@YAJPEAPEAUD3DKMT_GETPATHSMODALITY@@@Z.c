/*
 * XREFs of ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017C3B8
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     DrvSetActualPathModalityToDisplayJournal @ 0x1401CE840 (DrvSetActualPathModalityToDisplayJournal.c)
 * Callees:
 *     GetPathsModality @ 0x140112DA4 (GetPathsModality.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401ABE78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall SetDisplayConfigGetActualPathsModality(struct D3DKMT_GETPATHSMODALITY **a1)
{
  unsigned int v1; // ebx
  __int64 DxgkWin32kInterface; // rax
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // r8
  int *v12; // rdx
  int v13; // eax
  unsigned int v14; // r12d
  char *v15; // rdi
  unsigned int v16; // r8d
  unsigned int v17; // esi
  unsigned int v18; // r14d
  _DWORD *v19; // rbx
  int v20; // edx
  _DWORD *v21; // rcx
  char *v22; // r13
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
  PVOID P[2]; // [rsp+30h] [rbp-D0h]
  _BYTE v47[304]; // [rsp+40h] [rbp-C0h] BYREF
  int PathsModality; // [rsp+1A8h] [rbp+A8h]

  v1 = 0;
  v45 = 0LL;
  *(_OWORD *)P = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  v4 = (*(__int64 (__fastcall **)(__int128 *, _QWORD))(DxgkWin32kInterface + 696))(&v45, 0LL);
  IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline(v6, v5);
  v8 = LODWORD(P[0]);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v4 != -1073741789 )
      goto LABEL_16;
    v9 = LODWORD(P[0]) == 0;
  }
  else
  {
    v9 = v4 != -1073741789;
  }
  if ( !v9 )
  {
    P[1] = (PVOID)ExAllocatePool2(258LL, 1088LL * LODWORD(P[0]), 2004116844LL);
    if ( P[1] )
    {
      HIDWORD(P[0]) = P[0];
      v10 = DxDdGetDxgkWin32kInterface(v8);
      if ( (*(unsigned int (__fastcall **)(__int128 *, _QWORD))(v10 + 696))(&v45, 0LL) == -1073741789
        && (v8 = LODWORD(P[0]), LODWORD(P[0]) <= HIDWORD(P[0])) )
      {
        if ( LODWORD(P[0]) )
        {
          v11 = LODWORD(P[0]);
          v12 = (int *)((char *)P[1] + 1084);
          do
          {
            v13 = *v12;
            v8 = v1++;
            v12 += 272;
            if ( (v13 & 1) == 0 )
              v1 = v8;
            --v11;
          }
          while ( v11 );
        }
      }
      else
      {
        P[0] = 0LL;
      }
    }
  }
LABEL_16:
  PathsModality = GetPathsModality(v8, (char **)a1, 0x1000040u, v1);
  v14 = PathsModality;
  if ( PathsModality >= 0 )
  {
    v15 = (char *)*a1;
    if ( v1 )
    {
      v16 = (unsigned int)P[0];
      v17 = 0;
      v18 = *((unsigned __int16 *)v15 + 10);
      if ( LODWORD(P[0]) )
      {
        do
        {
          if ( v18 >= *((unsigned __int16 *)v15 + 11) )
            break;
          v19 = (char *)P[1] + 1088 * v17;
          if ( (v19[271] & 1) != 0 )
          {
            v20 = 0;
            if ( *((_WORD *)v15 + 10) )
            {
              v21 = v15 + 76;
              while ( *(v21 - 1) != *v19 || *v21 != v19[1] || v21[2] != v19[2] )
              {
                ++v20;
                v21 += 74;
                if ( v20 >= *((unsigned __int16 *)v15 + 10) )
                  goto LABEL_27;
              }
            }
            else
            {
LABEL_27:
              v22 = &v15[296 * v18];
              memset(v47, 0, 0x128uLL);
              v23 = 2LL;
              v24 = v22 + 56;
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
              *((_DWORD *)v22 + 21) = v19[2];
              *((_QWORD *)v22 + 9) = *(_QWORD *)v19;
              v36 = 0x1000000000000000LL;
              v22[185] = v19[271] & 2 | ((v19[271] & 4) != 0) | (v19[271] >> 3) & 4;
              v37 = v19[264];
              if ( v37 != 5 )
                v36 = 0LL;
              v38 = v36 | ((unsigned __int64)(v19[271] & 0x10) << 53);
              v39 = 0x1000000000000000LL;
              if ( v37 != 3 )
                v39 = 0LL;
              v40 = v39 | v38;
              v41 = 0x800000000000000LL;
              if ( v37 != 4 )
                v41 = 0LL;
              v42 = v41 | v40;
              v43 = 0x508700000000000LL;
              if ( v37 != 2 )
                v43 = 0x108700000000000LL;
              *((_QWORD *)v22 + 7) |= v43 | v42;
              v16 = (unsigned int)P[0];
              ++v18;
            }
          }
          ++v17;
        }
        while ( v17 < v16 );
        v14 = PathsModality;
      }
      *((_WORD *)v15 + 10) = v18;
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x7774656Cu);
  return v14;
}
