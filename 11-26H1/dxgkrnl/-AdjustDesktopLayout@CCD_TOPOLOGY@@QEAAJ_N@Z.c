/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1403185B0
 * Callers:
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140269D98 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1403195E0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002E0B0 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140059AF4 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledDeviceUsageNoInline @ 0x1400980A0 (Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403E91D4 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x140405020 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1404459A8 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this, char a2)
{
  unsigned int v2; // r15d
  unsigned int i; // edi
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v8; // rcx
  unsigned int j; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // ecx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v17; // r13
  unsigned int v18; // r14d
  struct tagRECT *v19; // r12
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rdi
  CCD_TOPOLOGY *v29; // rcx
  UINT cx; // edx
  void *v31; // rbx
  int v32; // eax
  unsigned int v33; // edi
  unsigned int v34; // r15d
  int v35; // ebx
  __int64 v36; // rax
  unsigned __int16 v37; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v38; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v39; // rdi
  unsigned int v40; // ecx
  int v41; // edx
  __int64 v42; // rcx
  unsigned int v43; // r14d
  _DWORD *v44; // rax
  __int64 top; // rcx
  LONG left; // r13d
  __int64 v47; // rdx
  UINT v48; // r14d
  struct _D3DKMDT_2DREGION v49; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // r13
  _QWORD *v53; // rax
  __int64 v54; // rcx
  int v55; // ecx
  int v57; // [rsp+5Ch] [rbp-55h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-51h] BYREF
  struct _D3DKMDT_2DREGION v59; // [rsp+68h] [rbp-49h] BYREF
  struct _D3DKMDT_2DREGION v60; // [rsp+70h] [rbp-41h] BYREF
  int v61; // [rsp+78h] [rbp-39h]
  __int64 v62; // [rsp+80h] [rbp-31h]
  __int64 v63; // [rsp+88h] [rbp-29h]
  _BYTE v64[20]; // [rsp+98h] [rbp-19h] BYREF
  __int128 v65; // [rsp+ACh] [rbp-5h]
  __int128 v66; // [rsp+BCh] [rbp+Bh]
  __int64 v67; // [rsp+CCh] [rbp+1Bh]
  int v68; // [rsp+D4h] [rbp+23h]

  v2 = 0;
  v57 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_DWORD *)PathDescriptor & 0x800LL) != 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)PathDescriptor + 33)) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5242;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5242LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v59 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v59);
      v8 = *((_QWORD *)PathDescriptor + 31);
      if ( v8 )
      {
        *(_QWORD *)(v8 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 31) + 72LL) |= 0x20u;
      }
      if ( (signed int)(v59.cx + *((_DWORD *)PathDescriptor + 36)) > v57 )
        v57 = v59.cx + *((_DWORD *)PathDescriptor + 36);
    }
  }
  for ( j = 0; ; ++j )
  {
    v10 = *((_QWORD *)this + 8);
    v11 = v10 ? *(unsigned __int16 *)(v10 + 20) : 0LL;
    if ( j >= (unsigned __int16)v11 )
      break;
    v12 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    v13 = *(_QWORD *)v12;
    if ( (*(_QWORD *)v12 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      *((_DWORD *)v12 + 36) = v57;
      v14 = *((_DWORD *)v12 + 33);
      *((_DWORD *)v12 + 37) = 0;
      *(_QWORD *)v12 = v13 | 0x800;
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v14) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5287;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5287LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v59 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v12, 0, &v59);
      v15 = *((_QWORD *)v12 + 31);
      if ( v15 )
      {
        *(_DWORD *)(v15 + 76) = v57;
        *(_DWORD *)(*((_QWORD *)v12 + 31) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v12 + 31) + 72LL) |= 0x20u;
      }
      v57 += v59.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent(v11);
  if ( !Current )
    return 0LL;
  v17 = *((_QWORD *)Current + 11);
  if ( !v17 )
    return 0LL;
  v58 = 0;
  v18 = -1;
  memset(v64, 0, sizeof(v64));
  v59 = 0LL;
  v67 = 0LL;
  v19 = (struct tagRECT *)v64;
  v68 = 0;
  v65 = 0LL;
  v66 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_FixBufferOverrunInAdjustDesktopLayout__private_IsEnabledDeviceUsageNoInline();
  v21 = *((_QWORD *)this + 8);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( !v21 || *(_WORD *)(v21 + 20) < 4u )
      goto LABEL_45;
    v22 = 16 * (*(unsigned __int16 *)(v21 + 20) + 1LL);
    if ( !is_mul_ok(*(unsigned __int16 *)(v21 + 20) + 1LL, 0x10uLL) )
      v22 = -1LL;
    v23 = operator new[](v22, 0x4B677844u, 256LL);
    v59 = (struct _D3DKMDT_2DREGION)v23;
    if ( !v23 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5329;
      return 3221225495LL;
    }
  }
  else
  {
    if ( !v21 || *(_WORD *)(v21 + 20) <= 4u )
      goto LABEL_45;
    v24 = 16LL * *(unsigned __int16 *)(v21 + 20);
    if ( !is_mul_ok(*(unsigned __int16 *)(v21 + 20), 0x10uLL) )
      v24 = -1LL;
    v23 = operator new[](v24, 0x4B677844u, 256LL);
    v59 = (struct _D3DKMDT_2DREGION)v23;
    if ( !v23 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5342;
      return 3221225495LL;
    }
  }
  v19 = (struct tagRECT *)v23;
LABEL_45:
  while ( 1 )
  {
    v26 = *((_QWORD *)this + 8);
    v27 = v26 ? *(_WORD *)(v26 + 20) : 0;
    if ( v2 >= v27 )
      break;
    v28 = CCD_TOPOLOGY::GetPathDescriptor(this, v2);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v2)
      && !*((_DWORD *)v28 + 53)
      && (a2 || !CCD_TOPOLOGY::IsVirtualSlate(v29, v28)) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v28 + 33)) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5373;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5373LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v60 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v28, 0, &v60);
      cx = v60.cx;
      v19[v58].left = *((_DWORD *)v28 + 36);
      v19[v58].top = *((_DWORD *)v28 + 37);
      v19[v58].right = *((_DWORD *)v28 + 36) + cx;
      v19[v58].bottom = *((_DWORD *)v28 + 37) + v60.cy;
      if ( v18 == -1 && !*((_DWORD *)v28 + 36) && !*((_DWORD *)v28 + 37) )
        v18 = v58;
      ++v58;
    }
    ++v2;
  }
  v31 = (void *)v59;
  if ( v18 == -1 )
  {
    WdLogSingleEntry0(3LL);
    v18 = 0;
    WdLogGlobalForLineNumber = 5397;
  }
  if ( !(*(unsigned int (__fastcall **)(struct tagRECT *, _QWORD, _QWORD))(v17 + 336))(v19, v58, v18) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5406;
    if ( v31 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v31);
    return 3221225495LL;
  }
  v57 = 0;
  if ( a2 || (v32 = CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(this, v19, &v58, &v57), v33 = v32, v32 >= 0) )
  {
    v34 = 0;
    v35 = 0;
    while ( 1 )
    {
      v36 = *((_QWORD *)this + 8);
      v37 = v36 ? *(_WORD *)(v36 + 20) : 0;
      if ( v34 >= v37 )
        break;
      v38 = CCD_TOPOLOGY::GetPathDescriptor(this, v34);
      v39 = v38;
      if ( *((_DWORD *)v38 + 53) )
      {
        v40 = v57;
        v41 = *((_DWORD *)v38 + 24);
        *(_QWORD *)v38 |= 0x800uLL;
        v63 = v40;
        *((_QWORD *)v38 + 18) = v40;
        *((_DWORD *)v38 + 39) = *((_DWORD *)v38 + 25);
        *((_DWORD *)v38 + 38) = v41;
        v57 += v41;
      }
      else
      {
        v42 = *((_QWORD *)this + 8);
        v43 = 0;
        if ( *(_WORD *)(v42 + 20) )
        {
          v44 = (_DWORD *)(v42 + 240);
          while ( *v44 != *(_DWORD *)(296LL * v34 + v42 + 240) )
          {
            ++v43;
            v44 += 74;
            if ( v43 >= *(unsigned __int16 *)(v42 + 20) )
              goto LABEL_82;
          }
        }
        else
        {
LABEL_82:
          v43 = -559038737;
        }
        if ( v43 == v34 )
        {
          top = (unsigned int)v19[v35].top;
          left = v19[v35].left;
          v47 = (unsigned int)(v19[v35].bottom - top);
          v48 = v19[v35].right - left;
          v60 = (struct _D3DKMDT_2DREGION)__PAIR64__(v47, v48);
          ++v35;
          v49.cy = v47;
          v61 = top;
          LODWORD(v62) = v47;
        }
        else
        {
          v62 = *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v43) + 18);
          v50 = CCD_TOPOLOGY::GetPathDescriptor(this, v43);
          left = v62;
          v61 = HIDWORD(v62);
          v49 = (struct _D3DKMDT_2DREGION)*((_QWORD *)v50 + 19);
          v60 = v49;
          top = v49.cy;
          v48 = v49.cx;
          LODWORD(v62) = v49.cy;
        }
        if ( *((_QWORD *)v39 + 19) != __PAIR64__(v49.cy, v48) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5488;
        }
        if ( *((_DWORD *)v39 + 36) != left )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdTrace(top, v47);
          v51[3] = v34;
          v51[4] = *((int *)v39 + 36);
          top = left;
          v51[5] = left;
          WdLogGlobalForLineNumber = 5496;
        }
        *((_DWORD *)v39 + 36) = left;
        v52 = v61;
        if ( *((_DWORD *)v39 + 37) != v61 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdTrace(top, v47);
          v53[3] = v34;
          v53[4] = *((int *)v39 + 37);
          v53[5] = v52;
          WdLogGlobalForLineNumber = 5505;
        }
        *(_QWORD *)v39 |= 0x800uLL;
        v54 = *((_QWORD *)v39 + 31);
        *((_DWORD *)v39 + 37) = v52;
        if ( v54 )
        {
          *(_QWORD *)(v54 + 76) = *((_QWORD *)v39 + 18);
          v55 = v62;
          *(_DWORD *)(*((_QWORD *)v39 + 31) + 172LL) = v48;
          *(_DWORD *)(*((_QWORD *)v39 + 31) + 176LL) = v55;
          *(_DWORD *)(*((_QWORD *)v39 + 31) + 72LL) |= 0x180020u;
        }
      }
      ++v34;
    }
    if ( v59 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)&v59);
    return 0LL;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v32);
  WdLogGlobalForLineNumber = 5422;
  if ( v31 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v31);
  return v33;
}
