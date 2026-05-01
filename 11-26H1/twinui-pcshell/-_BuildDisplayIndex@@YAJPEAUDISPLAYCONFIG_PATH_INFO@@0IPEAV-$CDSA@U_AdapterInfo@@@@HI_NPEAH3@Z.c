/*
 * XREFs of ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x180675420
 * Callers:
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BE734 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x1801F27A0 (DSA_GetItemPtr.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?AdapterInfoCompareLUID@@YAHPEBU_AdapterInfo@@0_J@Z @ 0x180675200 (-AdapterInfoCompareLUID@@YAHPEBU_AdapterInfo@@0_J@Z.c)
 *     ?ClearAdapterInfo@@YAXPEAV?$CDSA@U_AdapterInfo@@@@_N@Z @ 0x180675230 (-ClearAdapterInfo@@YAXPEAV-$CDSA@U_AdapterInfo@@@@_N@Z.c)
 *     ?Search@?$CDSA_Base@U_TargetInfo@@@@QEBAHPEBU_TargetInfo@@HP6AH00_J@Z1I@Z @ 0x18067531C (-Search@-$CDSA_Base@U_TargetInfo@@@@QEBAHPEBU_TargetInfo@@HP6AH00_J@Z1I@Z.c)
 *     ?SourceInfoCompareID@@YAHPEBU_SourceInfo@@0_J@Z @ 0x180675388 (-SourceInfoCompareID@@YAHPEBU_SourceInfo@@0_J@Z.c)
 *     DSA_Create @ 0x180684170 (DSA_Create.c)
 *     DSA_InsertItem @ 0x180684330 (DSA_InsertItem.c)
 *     DSA_Sort @ 0x180684490 (DSA_Sort.c)
 */

__int64 __fastcall _BuildDisplayIndex(__int64 a1, __int64 a2, int a3, struct _DSA **a4)
{
  HDSA *v5; // r15
  int v6; // r12d
  int v7; // ebx
  int v8; // r13d
  __int64 v9; // rsi
  HDSA v10; // r14
  int v11; // r14d
  int v12; // edi
  const struct _LUID *ItemPtr; // rax
  char *v14; // r15
  int v15; // r12d
  int *v16; // r14
  int v17; // r14d
  int inserted; // edi
  const struct _SourceInfo *v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  HDSA *v24; // rdi
  __int64 v25; // rax
  int v26; // eax
  bool v27; // zf
  bool v28; // cl
  bool v29; // al
  __int64 v30; // r10
  __int64 v31; // r8
  _DWORD *v32; // rcx
  _QWORD *v33; // rdx
  _BYTE *v34; // rax
  _BYTE *v35; // rcx
  int v36; // eax
  int i; // edi
  struct _DSA *v39; // rcx
  int v40; // eax
  PVOID v41; // rax
  struct _DSA *v42; // rcx
  int v43; // r14d
  int j; // edi
  struct _DSA *v45; // rcx
  int v46; // eax
  PVOID v47; // r13
  int k; // esi
  struct _DSA *v49; // rcx
  int v50; // eax
  _DWORD *v51; // rax
  _DWORD *v52; // rcx
  int v53; // eax
  struct _LUID pitem; // [rsp+40h] [rbp-99h] BYREF
  __int128 v57; // [rsp+48h] [rbp-91h]
  __int64 v58; // [rsp+58h] [rbp-81h]
  __int64 v59; // [rsp+60h] [rbp-79h]
  __int128 v60; // [rsp+68h] [rbp-71h] BYREF
  __int64 v61; // [rsp+78h] [rbp-61h]
  _DWORD v62[20]; // [rsp+80h] [rbp-59h] BYREF

  v59 = a1;
  v5 = a4;
  v6 = a3;
  v7 = 0;
  ClearAdapterInfo(a4);
  v8 = 0;
  v9 = a1 + 36;
  while ( v8 < v6 )
  {
    v10 = *v5;
    v58 = 0LL;
    pitem = *(struct _LUID *)(v9 - 36);
    v57 = 0LL;
    if ( v10 )
    {
      v11 = *(_DWORD *)v10;
      v12 = 0;
      if ( v11 > 0 )
      {
        while ( 1 )
        {
          ItemPtr = (const struct _LUID *)g_pfn_DSA_GetItemPtr(*v5, v12);
          if ( !(unsigned int)AdapterInfoCompareLUID(&pitem, ItemPtr) )
            break;
          if ( ++v12 >= v11 )
            goto LABEL_7;
        }
LABEL_11:
        v14 = (char *)g_pfn_DSA_GetItemPtr(*v5, v12);
        memset_0(v62, 0, 0x48uLL);
        v62[0] = *(_DWORD *)(v9 - 28);
        v15 = v62[0];
        v16 = (int *)*((_QWORD *)v14 + 1);
        if ( v16 )
        {
          v17 = *v16;
          inserted = 0;
          if ( v17 > 0 )
          {
            while ( 1 )
            {
              v19 = (const struct _SourceInfo *)g_pfn_DSA_GetItemPtr(*((HDSA *)v14 + 1), inserted);
              if ( !(unsigned int)SourceInfoCompareID(0LL, v19, v15) )
                break;
              if ( ++inserted >= v17 )
                goto LABEL_15;
            }
LABEL_18:
            if ( v7 >= 0 )
              goto LABEL_19;
            v6 = a3;
LABEL_46:
            v5 = a4;
            goto LABEL_47;
          }
        }
LABEL_15:
        inserted = DSA_InsertItem(*((HDSA *)v14 + 1), 0x7FFFFFFF, v62);
        if ( inserted == -1 )
        {
          v7 = -2147024882;
          goto LABEL_18;
        }
        v7 = 0;
LABEL_19:
        v20 = g_pfn_DSA_GetItemPtr(*((HDSA *)v14 + 1), inserted);
        if ( (*(_BYTE *)(v9 + 32) & 1) != 0 )
          v20[v20[1]++ + 2] = v8;
        v24 = (HDSA *)(v14 + 16);
        v61 = 0LL;
        v25 = *(unsigned int *)(v9 - 8);
        v60 = 0LL;
        LODWORD(v60) = v25;
        v26 = CDSA_Base<_TargetInfo>::Search((HDSA *)v14 + 2, v21, v22, v23, v25);
        if ( v26 < 0 )
        {
          v27 = *(_DWORD *)(v9 + 24) == 0;
          HIDWORD(v61) = *(_DWORD *)v9;
          v28 = !v27;
          v29 = (*(_BYTE *)(v9 + 28) & 2) != 0;
          LOBYTE(v61) = !v27;
          v27 = (*(_BYTE *)(v9 + 32) & 1) == 0;
          BYTE1(v61) = v29;
          if ( v27 || v28 )
          {
            v6 = a3;
          }
          else
          {
            v6 = a3;
            if ( a3 > 0 )
            {
              v30 = v59;
              v31 = (unsigned int)a3;
              v32 = (_DWORD *)(v59 + 60);
              v33 = (_QWORD *)(v59 + 20);
              do
              {
                if ( *v33 == *(_QWORD *)(v30 + 72LL * v8 + 20) && *(v32 - 8) == *(_DWORD *)(v9 - 8) )
                  *v32 = 1;
                v33 += 9;
                v32 += 18;
                --v31;
              }
              while ( v31 );
            }
            LOBYTE(v61) = 1;
          }
          v26 = DSA_InsertItem(*v24, 0x7FFFFFFF, &v60);
          if ( v26 == -1 )
          {
            v7 = -2147024882;
            goto LABEL_46;
          }
          v7 = 0;
          if ( *(_DWORD *)(v9 + 24) )
            ++*((_DWORD *)v14 + 6);
        }
        v34 = g_pfn_DSA_GetItemPtr(*v24, v26);
        v35 = v34;
        if ( !v34[8] && (*(_BYTE *)(v9 + 32) & 1) != 0 )
        {
          v34[8] = 1;
          *((_DWORD *)v34 + 3) = v8;
        }
        v36 = *((_DWORD *)v34 + 5);
        if ( v36 == 0x80000000 || ((v36 - 11) & 0xFFFFFFFD) == 0 )
          v14[28] = 1;
        v6 = a3;
        if ( (*(_BYTE *)(v9 + 32) & 8) != 0 )
          v35[18] = 1;
        goto LABEL_46;
      }
    }
LABEL_7:
    *(_QWORD *)&v57 = g_pfn_DSA_Create(72, 2);
    if ( (_QWORD)v57 )
    {
      *((_QWORD *)&v57 + 1) = g_pfn_DSA_Create(24, 4);
      if ( *((_QWORD *)&v57 + 1) )
      {
        v12 = DSA_InsertItem(*v5, 0x7FFFFFFF, &pitem);
        if ( v12 != -1 )
        {
          v7 = 0;
          v57 = 0LL;
          goto LABEL_11;
        }
      }
    }
    v7 = -2147024882;
LABEL_47:
    ++v8;
    v9 += 72LL;
    if ( v7 < 0 )
      return (unsigned int)v7;
  }
  for ( i = 0; ; ++i )
  {
    v39 = *v5;
    v40 = *v5 ? *(_DWORD *)v39 : 0;
    if ( i >= v40 )
      break;
    v41 = g_pfn_DSA_GetItemPtr(v39, i);
    if ( v41 )
    {
      v42 = (struct _DSA *)*((_QWORD *)v41 + 2);
      if ( v42 )
        g_pfn_DSA_Sort(v42, (PFNDACOMPARE)TargetInfoSort, 0LL);
    }
  }
  if ( v39 )
    g_pfn_DSA_Sort(v39, (PFNDACOMPARE)AdapterInfoSort, 0LL);
  v43 = 0;
  for ( j = 0; ; ++j )
  {
    v45 = *v5;
    v46 = *v5 ? *(_DWORD *)v45 : 0;
    if ( j >= v46 )
      break;
    v47 = g_pfn_DSA_GetItemPtr(v45, j);
    if ( v47 )
    {
      for ( k = 0; ; ++k )
      {
        v49 = (struct _DSA *)*((_QWORD *)v47 + 2);
        v50 = v49 ? *(_DWORD *)v49 : 0;
        if ( k >= v50 )
          break;
        v51 = g_pfn_DSA_GetItemPtr(v49, k);
        v52 = v51;
        if ( v51 )
        {
          if ( *((_BYTE *)v51 + 16) )
          {
            v53 = v43++;
            v52[1] = v53;
          }
          else
          {
            v51[1] = -1;
          }
        }
      }
    }
    v5 = a4;
  }
  return (unsigned int)v7;
}
