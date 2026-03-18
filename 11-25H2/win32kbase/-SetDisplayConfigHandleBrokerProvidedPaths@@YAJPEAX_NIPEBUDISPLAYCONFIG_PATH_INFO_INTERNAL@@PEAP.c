/*
 * XREFs of ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x140111E40
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x140157D40 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N11PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x140112470 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140112D64 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x140112DA4 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x140112EB4 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554 @ 0x1401C99E0 (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualMod.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554 @ 0x1401C9AC4 (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyBut_ea_1401C9AC4.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetDisplayConfigHandleBrokerProvidedPaths(
        void *a1,
        char a2,
        unsigned int a3,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        struct D3DKMT_GETPATHSMODALITY **a5,
        bool *a6,
        enum _DXGK_DIAG_SDC_STAGE *a7)
{
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v7; // r13
  void *v10; // rsi
  int PathsModality; // ebx
  struct D3DKMT_GETPATHSMODALITY *v12; // rax
  unsigned __int16 *v13; // rbx
  char *v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rcx
  char *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r11d
  unsigned int v21; // esi
  __int64 DxgkWin32kInterface; // rax
  int v23; // edi
  unsigned int v24; // r9d
  unsigned int i; // r8d
  __int64 v27; // rcx
  int v28; // r10d
  unsigned int j; // edx
  unsigned int v30; // ecx
  unsigned int v31; // r10d
  struct D3DKMT_GETPATHSMODALITY *v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r11
  unsigned int k; // edx
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int16 *v41; // rsi
  _OWORD *v42; // rcx
  __int128 v43; // xmm1
  __int64 v44; // rcx
  __int64 v45; // r9
  PVOID Buffer; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v47[24]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v49; // [rsp+A8h] [rbp+48h]

  v7 = a4;
  Buffer = 0LL;
  v10 = a1;
  if ( a2 )
  {
    v32 = AllocPathsModality(a3);
    v13 = (unsigned __int16 *)v32;
    if ( !v32 )
    {
      *(_DWORD *)a7 = 45;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 14545;
      v23 = -1073741801;
LABEL_40:
      FreePathsModality(Buffer);
      FreePathsModality(v13);
      return (unsigned int)v23;
    }
    *((_WORD *)v32 + 10) = 0;
LABEL_10:
    SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554(
      v47,
      v13);
    v21 = 0;
    v49 = v13[10];
    while ( 1 )
    {
      if ( v21 >= a3 )
      {
        v24 = v49;
        for ( i = v49; ; i += v20 )
        {
          if ( i >= v13[10] )
          {
            *a5 = (struct D3DKMT_GETPATHSMODALITY *)v13;
            SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554(v47);
            FreePathsModality(Buffer);
            FreePathsModality(0LL);
            return 0LL;
          }
          v27 = 148LL * i;
          v28 = *(_DWORD *)&v13[v27 + 40];
          if ( v28 != -2 )
            break;
          *(_DWORD *)&v13[v27 + 40] = 0;
LABEL_23:
          for ( j = 0; j < v13[10]; j += v20 )
          {
            if ( j != i )
            {
              v37 = 148LL * j;
              if ( *(_DWORD *)&v13[v37 + 36] == *(_DWORD *)&v13[v27 + 36]
                && *(_DWORD *)&v13[v37 + 38] == *(_DWORD *)&v13[v27 + 38] )
              {
                v38 = *(_DWORD *)&v13[v27 + 40];
                if ( *(_DWORD *)&v13[v37 + 40] == v38 )
                {
                  *(_DWORD *)&v13[v27 + 40] = v38 + 1;
                  goto LABEL_23;
                }
              }
            }
          }
          v24 = v49;
LABEL_28:
          if ( (*(_QWORD *)&v13[148 * i + 28] & 0x4000000000000LL) == 0 )
          {
            v30 = i + 1;
            v31 = i | 0xFE500000;
            if ( i + 1 < v13[10] )
            {
              v33 = 148LL * i;
              do
              {
                v34 = 148LL * v30;
                v35 = *(_QWORD *)&v13[v34 + 28];
                if ( (v35 & 0x4000000000000LL) == 0 && *(_DWORD *)&v13[v34 + 120] == *(_DWORD *)&v13[v33 + 120] )
                {
                  *(_DWORD *)&v13[v34 + 120] = v31;
                  *(_QWORD *)&v13[v34 + 28] = v35 | 0x4000000000000LL;
                  if ( !HIBYTE(v13[v33 + 92]) || LOBYTE(v13[v33 + 172]) )
                    *(_DWORD *)&v13[v34 + 40] = *(_DWORD *)&v13[v33 + 40];
                }
                v20 = 1;
                ++v30;
              }
              while ( v30 < v13[10] );
              v24 = v49;
            }
            *(_DWORD *)&v13[148 * i + 120] = v31;
            *(_QWORD *)&v13[148 * i + 28] |= 0x4000000000000uLL;
          }
        }
        for ( k = 0; ; k += v20 )
        {
          if ( k >= v24 )
          {
            *(_QWORD *)&v13[v27 + 32] |= 0x200000000000uLL;
            goto LABEL_28;
          }
          v45 = 148LL * k;
          if ( *(_DWORD *)&v13[v45 + 36] == *(_DWORD *)&v13[v27 + 36]
            && *(_DWORD *)&v13[v45 + 38] == *(_DWORD *)&v13[v27 + 38]
            && *(_DWORD *)&v13[v45 + 40] == v28 )
          {
            break;
          }
          v24 = v49;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 14609;
        *(_DWORD *)a7 = 48;
        goto LABEL_39;
      }
      if ( !a2 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v19 * 2);
        if ( !(*(unsigned __int8 (__fastcall **)(void *, _QWORD, _QWORD))(DxgkWin32kInterface + 736))(
                a1,
                *((_QWORD *)v7 + 27 * v21 + 2),
                *((unsigned int *)v7 + 54 * v21 + 7)) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 14564;
          *(_DWORD *)a7 = 43;
LABEL_39:
          SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554(v47);
          v23 = -1073741790;
          goto LABEL_40;
        }
      }
      v23 = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
              (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v7 + 216 * v21),
              v13[10],
              v21,
              0,
              1,
              1,
              (struct D3DKMT_GETPATHSMODALITY *)v13,
              a6);
      if ( v23 < 0 )
        break;
      if ( !_bittest64((const signed __int64 *)&v13[148 * v13[10] + 28], 0x32u) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14588;
      }
      v20 = 1;
      v19 = 148LL * v13[10];
      *(_QWORD *)&v13[v19 + 28] &= ~0x4000000000000uLL;
      ++v13[10];
      ++v21;
    }
    *(_DWORD *)a7 = 46;
    SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14554(v47);
    goto LABEL_40;
  }
  PathsModality = GetPathsModality(a1, &Buffer, 16777280LL);
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
            v18 = DxDdGetDxgkWin32kInterface(v16);
            if ( (*(unsigned __int8 (__fastcall **)(void *, _QWORD, _QWORD))(v18 + 736))(
                   v10,
                   *((_QWORD *)v17 + 2),
                   *((unsigned int *)v17 + 7)) )
            {
              v14 = (char *)Buffer;
            }
            else
            {
              v39 = v13[10];
              v40 = 2LL;
              v41 = &v13[148 * v39];
              v13[10] = v39 + 1;
              v42 = v41 + 28;
              do
              {
                *v42 = *(_OWORD *)v17;
                v42[1] = *((_OWORD *)v17 + 1);
                v42[2] = *((_OWORD *)v17 + 2);
                v42[3] = *((_OWORD *)v17 + 3);
                v42[4] = *((_OWORD *)v17 + 4);
                v42[5] = *((_OWORD *)v17 + 5);
                v42[6] = *((_OWORD *)v17 + 6);
                v42 += 8;
                v43 = *((_OWORD *)v17 + 7);
                v17 += 128;
                *(v42 - 1) = v43;
                --v40;
              }
              while ( v40 );
              *v42 = *(_OWORD *)v17;
              v42[1] = *((_OWORD *)v17 + 1);
              *((_QWORD *)v42 + 4) = *((_QWORD *)v17 + 4);
              if ( !_bittest64((const signed __int64 *)v41 + 7, 0x32u)
                || (*((_DWORD *)v41 + 60) & 0xFFFF0000) == 0xFE500000 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 14526;
              }
              v44 = *((_QWORD *)v41 + 7);
              *((_QWORD *)v41 + 38) = 0LL;
              *((_QWORD *)v41 + 8) = v44 & 0x18001820B8FLL;
              *((_QWORD *)v41 + 7) = v44 | 0x80000000000000LL;
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
    WdLogGlobalForLineNumber = 14494;
    FreePathsModality(Buffer);
    FreePathsModality(0LL);
    return 3221225495LL;
  }
}
