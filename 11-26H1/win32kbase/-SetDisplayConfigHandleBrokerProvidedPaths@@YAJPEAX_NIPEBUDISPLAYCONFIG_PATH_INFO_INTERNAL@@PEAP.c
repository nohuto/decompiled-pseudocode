/*
 * XREFs of ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14002D7BC
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x14002E708 (DrvFunctionalizeDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x14002D62C (GetPathsModality.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002DDE8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N11PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x14002DE28 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x14002E698 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410 @ 0x1401F46C0 (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualMod.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410 @ 0x1401F470C (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyBut_ea_1401F470C.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetDisplayConfigHandleBrokerProvidedPaths(
        __int64 a1,
        char a2,
        unsigned int a3,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        struct D3DKMT_GETPATHSMODALITY **a5,
        bool *a6,
        enum _DXGK_DIAG_SDC_STAGE *a7)
{
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v7; // r13
  __int64 v10; // rsi
  int PathsModality; // ebx
  struct D3DKMT_GETPATHSMODALITY *v12; // rax
  unsigned __int16 *v13; // rbx
  char *v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rcx
  char *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r11d
  unsigned int v22; // esi
  __int64 v23; // rdi
  __int64 DxgkWin32kInterface; // rax
  int v25; // edi
  unsigned int v26; // r9d
  unsigned int i; // r8d
  __int64 v28; // rcx
  int v29; // r10d
  unsigned int j; // edx
  unsigned int v31; // ecx
  unsigned int v32; // r10d
  __int64 v34; // r9
  int v35; // eax
  struct D3DKMT_GETPATHSMODALITY *v36; // rax
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r11
  unsigned int k; // edx
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int16 *v43; // rsi
  _OWORD *v44; // rcx
  __int128 v45; // xmm1
  __int64 v46; // rcx
  __int64 v47; // r9
  PVOID Buffer; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v49[24]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v51; // [rsp+A8h] [rbp+48h]

  v7 = a4;
  Buffer = 0LL;
  v10 = a1;
  if ( a2 )
  {
    v36 = AllocPathsModality(a3);
    v13 = (unsigned __int16 *)v36;
    if ( !v36 )
    {
      *(_DWORD *)a7 = 45;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 14401;
      v25 = -1073741801;
LABEL_44:
      FreePathsModality(Buffer);
      FreePathsModality(v13);
      return (unsigned int)v25;
    }
    *((_WORD *)v36 + 10) = 0;
LABEL_10:
    SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410(
      v49,
      v13);
    v22 = 0;
    v51 = v13[10];
    while ( 1 )
    {
      if ( v22 >= a3 )
      {
        v26 = v51;
        for ( i = v51; ; i += v21 )
        {
          if ( i >= v13[10] )
          {
            *a5 = (struct D3DKMT_GETPATHSMODALITY *)v13;
            SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410(v49);
            FreePathsModality(Buffer);
            FreePathsModality(0LL);
            return 0LL;
          }
          v28 = 148LL * i;
          v29 = *(_DWORD *)&v13[v28 + 40];
          if ( v29 != -2 )
            break;
          *(_DWORD *)&v13[v28 + 40] = 0;
LABEL_22:
          for ( j = 0; j < v13[10]; j += v21 )
          {
            if ( j != i )
            {
              v34 = 148LL * j;
              if ( *(_DWORD *)&v13[v34 + 36] == *(_DWORD *)&v13[v28 + 36]
                && *(_DWORD *)&v13[v34 + 38] == *(_DWORD *)&v13[v28 + 38] )
              {
                v35 = *(_DWORD *)&v13[v28 + 40];
                if ( *(_DWORD *)&v13[v34 + 40] == v35 )
                {
                  *(_DWORD *)&v13[v28 + 40] = v35 + 1;
                  goto LABEL_22;
                }
              }
            }
          }
          v26 = v51;
LABEL_25:
          if ( (*(_QWORD *)&v13[148 * i + 28] & 0x4000000000000LL) == 0 )
          {
            v31 = i + 1;
            v32 = i | 0xFE500000;
            if ( i + 1 < v13[10] )
            {
              v37 = 148LL * i;
              do
              {
                v38 = 148LL * v31;
                v39 = *(_QWORD *)&v13[v38 + 28];
                if ( (v39 & 0x4000000000000LL) == 0 && *(_DWORD *)&v13[v38 + 120] == *(_DWORD *)&v13[v37 + 120] )
                {
                  *(_DWORD *)&v13[v38 + 120] = v32;
                  *(_QWORD *)&v13[v38 + 28] = v39 | 0x4000000000000LL;
                  if ( !HIBYTE(v13[v37 + 92]) || LOBYTE(v13[v37 + 172]) )
                    *(_DWORD *)&v13[v38 + 40] = *(_DWORD *)&v13[v37 + 40];
                }
                v21 = 1;
                ++v31;
              }
              while ( v31 < v13[10] );
              v26 = v51;
            }
            *(_DWORD *)&v13[148 * i + 120] = v32;
            *(_QWORD *)&v13[148 * i + 28] |= 0x4000000000000uLL;
          }
        }
        for ( k = 0; ; k += v21 )
        {
          if ( k >= v26 )
          {
            *(_QWORD *)&v13[v28 + 32] |= 0x200000000000uLL;
            goto LABEL_25;
          }
          v47 = 148LL * k;
          if ( *(_DWORD *)&v13[v47 + 36] == *(_DWORD *)&v13[v28 + 36]
            && *(_DWORD *)&v13[v47 + 38] == *(_DWORD *)&v13[v28 + 38]
            && *(_DWORD *)&v13[v47 + 40] == v29 )
          {
            break;
          }
          v26 = v51;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 14465;
        *(_DWORD *)a7 = 48;
        goto LABEL_43;
      }
      v23 = 216LL * v22;
      if ( !a2 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v20 * 2, v19);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(DxgkWin32kInterface + 736))(
                a1,
                *(_QWORD *)((char *)v7 + v23 + 16),
                *(unsigned int *)((char *)v7 + v23 + 28)) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 14420;
          *(_DWORD *)a7 = 43;
LABEL_43:
          SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410(v49);
          v25 = -1073741790;
          goto LABEL_44;
        }
      }
      v25 = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
              (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v7 + v23),
              v13[10],
              v22,
              0,
              1,
              1,
              (struct D3DKMT_GETPATHSMODALITY *)v13,
              a6);
      if ( v25 < 0 )
        break;
      if ( !_bittest64((const signed __int64 *)&v13[148 * v13[10] + 28], 0x32u) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14444;
      }
      v21 = 1;
      v20 = 148LL * v13[10];
      *(_QWORD *)&v13[v20 + 28] &= ~0x4000000000000uLL;
      ++v13[10];
      ++v22;
    }
    *(_DWORD *)a7 = 46;
    SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14410(v49);
    goto LABEL_44;
  }
  PathsModality = GetPathsModality(a1, &Buffer, 0x1000040u, 0);
  if ( PathsModality < 0 )
  {
    *(_DWORD *)a7 = 44;
    FreePathsModality(Buffer);
    FreePathsModality(0LL);
    return (unsigned int)PathsModality;
  }
  else
  {
    v12 = AllocPathsModality(*((_WORD *)Buffer + 10) + (unsigned __int16)a3);
    v13 = (unsigned __int16 *)v12;
    if ( v12 )
    {
      *((_WORD *)v12 + 10) = 0;
      v14 = (char *)Buffer;
      v15 = 0;
      if ( *((_WORD *)Buffer + 10) )
      {
        do
        {
          v16 = 296LL * v15;
          v17 = &v14[v16 + 56];
          if ( _bittest64((const signed __int64 *)v17, 0x38u) )
          {
            v18 = DxDdGetDxgkWin32kInterface(v16, v14);
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(v18 + 736))(
                   v10,
                   *((_QWORD *)v17 + 2),
                   *((unsigned int *)v17 + 7)) )
            {
              v14 = (char *)Buffer;
            }
            else
            {
              v41 = v13[10];
              v42 = 2LL;
              v43 = &v13[148 * v41];
              v13[10] = v41 + 1;
              v44 = v43 + 28;
              do
              {
                *v44 = *(_OWORD *)v17;
                v44[1] = *((_OWORD *)v17 + 1);
                v44[2] = *((_OWORD *)v17 + 2);
                v44[3] = *((_OWORD *)v17 + 3);
                v44[4] = *((_OWORD *)v17 + 4);
                v44[5] = *((_OWORD *)v17 + 5);
                v44[6] = *((_OWORD *)v17 + 6);
                v44 += 8;
                v45 = *((_OWORD *)v17 + 7);
                v17 += 128;
                *(v44 - 1) = v45;
                --v42;
              }
              while ( v42 );
              *v44 = *(_OWORD *)v17;
              v44[1] = *((_OWORD *)v17 + 1);
              *((_QWORD *)v44 + 4) = *((_QWORD *)v17 + 4);
              if ( !_bittest64((const signed __int64 *)v43 + 7, 0x32u)
                || (*((_DWORD *)v43 + 60) & 0xFFFF0000) == 0xFE500000 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 14382;
              }
              v46 = *((_QWORD *)v43 + 7);
              *((_QWORD *)v43 + 38) = 0LL;
              *((_QWORD *)v43 + 8) = v46 & 0x18001820B8FLL;
              *((_QWORD *)v43 + 7) = v46 | 0x80000000000000LL;
              v14 = (char *)Buffer;
              v10 = a1;
            }
          }
          ++v15;
        }
        while ( v15 < *((unsigned __int16 *)v14 + 10) );
        v7 = a4;
      }
      goto LABEL_10;
    }
    *(_DWORD *)a7 = 45;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 14350;
    FreePathsModality(Buffer);
    FreePathsModality(0LL);
    return 3221225495LL;
  }
}
