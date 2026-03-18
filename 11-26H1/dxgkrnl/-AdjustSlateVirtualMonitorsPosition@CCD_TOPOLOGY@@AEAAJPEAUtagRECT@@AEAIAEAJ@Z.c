/*
 * XREFs of ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1404459A8
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1403185B0 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140059AF4 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInline @ 0x1400980F8 (Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInli.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403E91D4 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x140405020 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(
        CCD_TOPOLOGY *this,
        struct tagRECT *a2,
        unsigned int *a3,
        int *a4)
{
  signed int cy; // ebp
  int v5; // r15d
  unsigned int v6; // esi
  int v7; // r13d
  signed int cx; // ebx
  unsigned int v9; // r14d
  unsigned int *v10; // r9
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  const struct _LUID *PathDescriptor; // rdi
  CCD_TOPOLOGY *v15; // rcx
  LONG bottom; // edx
  signed int right; // r9d
  int top; // r9d
  int left; // r9d
  signed int v20; // eax
  char *v21; // rsi
  bool v22; // zf
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned int v26; // r12d
  unsigned int i; // edx
  const struct _LUID *v28; // r14
  __int64 v29; // rax
  unsigned __int16 v30; // cx
  CCD_TOPOLOGY *v31; // rcx
  __int64 v32; // rax
  unsigned __int16 v33; // cx
  CCD_TOPOLOGY *v34; // rdi
  __int64 v35; // rax
  unsigned __int16 v36; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v37; // r14
  CCD_TOPOLOGY *v38; // rcx
  __int64 v39; // rax
  struct tagRECT v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // r8
  UINT v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  signed int v47; // r10d
  __int64 v48; // rcx
  void *v49; // rdi
  unsigned int *v50; // r8
  unsigned int v51; // ecx
  struct tagRECT *v52; // rdx
  __int64 v53; // rax
  unsigned int v55; // [rsp+20h] [rbp-F8h]
  signed int v56; // [rsp+24h] [rbp-F4h]
  int v57; // [rsp+28h] [rbp-F0h]
  int v58; // [rsp+2Ch] [rbp-ECh]
  signed int v59; // [rsp+30h] [rbp-E8h]
  struct _D3DKMDT_2DREGION v60; // [rsp+38h] [rbp-E0h] BYREF
  unsigned int v61; // [rsp+40h] [rbp-D8h]
  unsigned int *v62; // [rsp+48h] [rbp-D0h]
  CCD_TOPOLOGY *v63; // [rsp+50h] [rbp-C8h]
  void *v64; // [rsp+58h] [rbp-C0h]
  signed int v65; // [rsp+60h] [rbp-B8h]
  signed int v66; // [rsp+64h] [rbp-B4h]
  struct tagRECT *v67; // [rsp+68h] [rbp-B0h]
  int *v68; // [rsp+70h] [rbp-A8h]
  char v69; // [rsp+80h] [rbp-98h] BYREF

  cy = 0x80000000;
  v68 = a4;
  v5 = 0x7FFFFFFF;
  v59 = 0x80000000;
  v6 = 0;
  v57 = 0x7FFFFFFF;
  v7 = 0x7FFFFFFF;
  v58 = 0x7FFFFFFF;
  cx = 0x80000000;
  v56 = 0x80000000;
  v9 = 0;
  v62 = a3;
  v10 = a3;
  v67 = a2;
  v63 = this;
  while ( 1 )
  {
    v12 = *((_QWORD *)this + 8);
    v13 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( v6 >= v13 || v9 >= *v10 )
      break;
    PathDescriptor = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    if ( (PathDescriptor->LowPart & 0x800LL) != 0
      && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v6)
      && !PathDescriptor[26].HighPart
      && !CCD_TOPOLOGY::IsVirtualSlate(v15, PathDescriptor) )
    {
      bottom = v67[v9].bottom;
      if ( bottom > cy )
      {
        right = v59;
        cy = v67[v9].bottom;
        if ( v59 < v67[v9].right )
          right = v67[v9].right;
        v59 = right;
      }
      if ( v67[v9].right > cx )
      {
        top = v57;
        cx = v67[v9].right;
        if ( v57 > v67[v9].top )
          top = v67[v9].top;
        v57 = top;
      }
      if ( v67[v9].top < v7 )
      {
        left = v58;
        v7 = v67[v9].top;
        if ( v58 > v67[v9].left )
          left = v67[v9].left;
        v58 = left;
      }
      if ( v67[v9].left < v5 )
      {
        v5 = v67[v9].left;
        v20 = v56;
        if ( v56 < bottom )
          v20 = v67[v9].bottom;
        v56 = v20;
      }
      ++v9;
    }
    v10 = v62;
    ++v6;
  }
  v21 = &v69;
  v64 = 0LL;
  v22 = (unsigned int)Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInline() == 0;
  v23 = *((_QWORD *)this + 8);
  if ( v22 )
  {
    if ( !v23 || *(_WORD *)(v23 + 20) <= 4u )
      goto LABEL_39;
    v24 = *(unsigned __int16 *)(v23 + 20);
  }
  else
  {
    if ( !v23 || *(_WORD *)(v23 + 20) < 4u )
      goto LABEL_39;
    v24 = *(unsigned __int16 *)(v23 + 20) + 1LL;
  }
  v25 = 16 * v24;
  if ( !is_mul_ok(v24, 0x10uLL) )
    v25 = -1LL;
  v64 = (void *)operator new[](v25, 0x4B677844u, 256LL);
  v21 = (char *)v64;
LABEL_39:
  v26 = 0;
  v55 = 0;
  if ( !*v62 )
  {
    for ( i = 0; ; i = v26 )
    {
      v28 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(v63, i);
      v29 = *((_QWORD *)v63 + 8);
      v30 = v29 ? *(_WORD *)(v29 + 20) : 0;
      if ( v26 >= v30
        || CCD_TOPOLOGY::IsPrimaryClonePathByModality(v63, v26)
        && !v28[26].HighPart
        && CCD_TOPOLOGY::IsVirtualSlate(v31, v28) )
      {
        break;
      }
      ++v26;
    }
    v32 = *((_QWORD *)v63 + 8);
    v33 = v32 ? *(_WORD *)(v32 + 20) : 0;
    if ( v26 < v33 )
    {
      v55 = 1;
      v60 = 0LL;
      *v62 = 1;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation((const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v28, 0, &v60);
      cx = v60.cx;
      cy = v60.cy;
      v7 = 0;
      v5 = 0;
      *(_QWORD *)v21 = 0LL;
      *((_DWORD *)v21 + 3) = cy;
      v58 = 0;
      *((_DWORD *)v21 + 2) = cx;
      v57 = 0;
      v59 = cx;
      v56 = cy;
    }
  }
  v34 = v63;
  v61 = 0;
  while ( 1 )
  {
    v35 = *((_QWORD *)v34 + 8);
    LODWORD(v63) = cy;
    v66 = v5;
    v65 = v7;
    v36 = v35 ? *(_WORD *)(v35 + 20) : 0;
    if ( v26 >= v36 )
      break;
    v37 = CCD_TOPOLOGY::GetPathDescriptor(v34, v26);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(v34, v26) && !*((_DWORD *)v37 + 53) )
    {
      if ( CCD_TOPOLOGY::IsVirtualSlate(v38, (const struct _LUID *)v37) )
      {
        v60 = 0LL;
        ++*v62;
        CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v37, 0, &v60);
        v42 = v60.cy;
        v43 = v60.cx;
        if ( (__int64)(v7 - (unsigned __int64)v60.cy) < -32000 )
        {
          if ( (__int64)(v5 - (unsigned __int64)v60.cx) < -32000 )
          {
            if ( (__int64)(cy + (unsigned __int64)v60.cy) > 32000 )
            {
              if ( v60.cx + (__int64)cx > 32000 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5192;
              }
              else
              {
                v47 = cx;
                v48 = 2LL * v55;
                *(_DWORD *)&v21[8 * v48] = cx;
                cx += v43;
                *(_DWORD *)&v21[8 * v48 + 8] = cx;
                if ( v42 + v57 > cy )
                {
                  if ( cy - v42 < -32000 )
                  {
                    cy = v42 - 32000;
                    *(_DWORD *)&v21[16 * v55 + 4] = -32000;
                    *(_DWORD *)&v21[16 * v55 + 12] = v42 - 32000;
                    v7 = -32000;
                    v59 = cx;
                  }
                  else
                  {
                    *(_DWORD *)&v21[16 * v55 + 12] = cy;
                    *(_DWORD *)&v21[16 * v55 + 4] = cy - v42;
                    if ( cy - (int)v42 < v7 )
                    {
                      v7 = cy - v42;
                      v58 = v47;
                    }
                  }
                }
                else
                {
                  *(_DWORD *)&v21[16 * v55 + 4] = v57;
                  *(_DWORD *)&v21[16 * v55 + 12] = v42 + v57;
                }
              }
            }
            else
            {
              v46 = 2LL * v55;
              *(_DWORD *)&v21[8 * v46 + 4] = cy;
              cy += v42;
              *(_DWORD *)&v21[8 * v46 + 12] = cy;
              if ( (__int64)(v59 - (unsigned __int64)v43) < v5 )
              {
                if ( v43 + (__int64)v5 > 32000 )
                {
                  *(_DWORD *)&v21[16 * v55 + 8] = 32000;
                  v5 = 32000 - v43;
                  v56 = cy;
                  *(_DWORD *)&v21[16 * v55] = 32000 - v43;
                  cx = 32000;
                }
                else
                {
                  *(_DWORD *)&v21[16 * v55] = v5;
                  *(_DWORD *)&v21[16 * v55 + 8] = v43 + v5;
                  if ( (int)(v43 + v5) > cx )
                  {
                    cx = v43 + v5;
                    v57 = (int)v63;
                  }
                }
              }
              else
              {
                *(_DWORD *)&v21[16 * v55 + 8] = v59;
                *(_DWORD *)&v21[16 * v55] = v59 - v43;
              }
            }
          }
          else
          {
            v45 = 2LL * v55;
            *(_DWORD *)&v21[8 * v45 + 8] = v5;
            v5 -= v43;
            *(_DWORD *)&v21[8 * v45] = v5;
            if ( v56 - v42 < v7 )
            {
              if ( v42 + v7 > 32000 )
              {
                *(_DWORD *)&v21[16 * v55 + 12] = 32000;
                v7 = 32000 - v42;
                v58 = v5;
                *(_DWORD *)&v21[16 * v55 + 4] = 32000 - v42;
                cy = 32000;
              }
              else
              {
                *(_DWORD *)&v21[16 * v55 + 4] = v7;
                *(_DWORD *)&v21[16 * v55 + 12] = v42 + v7;
                if ( (int)v42 + v7 > cy )
                {
                  cy = v42 + v7;
                  v59 = v66;
                }
              }
            }
            else
            {
              *(_DWORD *)&v21[16 * v55 + 12] = v56;
              *(_DWORD *)&v21[16 * v55 + 4] = v56 - v42;
            }
          }
        }
        else
        {
          v44 = 2LL * v55;
          *(_DWORD *)&v21[8 * v44 + 12] = v7;
          v7 -= v42;
          *(_DWORD *)&v21[8 * v44 + 4] = v7;
          if ( v43 + (__int64)v58 > cx )
          {
            if ( (__int64)(cx - (unsigned __int64)v43) < -32000 )
            {
              cx = v43 - 32000;
              *(_DWORD *)&v21[16 * v55] = -32000;
              *(_DWORD *)&v21[16 * v55 + 8] = v43 - 32000;
              v5 = -32000;
              v57 = v7;
            }
            else
            {
              *(_DWORD *)&v21[16 * v55 + 8] = cx;
              *(_DWORD *)&v21[16 * v55] = cx - v43;
              if ( (int)(cx - v43) < v5 )
              {
                v5 = cx - v43;
                v56 = v65;
              }
            }
          }
          else
          {
            *(_DWORD *)&v21[16 * v55] = v58;
            *(_DWORD *)&v21[16 * v55 + 8] = v43 + v58;
          }
        }
        ++v55;
      }
      else
      {
        v39 = v61++;
        v40 = v67[v39];
        v41 = 2LL * v55++;
        *(struct tagRECT *)&v21[8 * v41] = v40;
      }
    }
    ++v26;
  }
  v49 = v64;
  if ( cx > *v68 )
    *v68 = cx;
  v50 = v62;
  v51 = 0;
  if ( *v62 )
  {
    v52 = v67;
    do
    {
      v53 = v51++;
      v52[v53] = *(struct tagRECT *)&v21[16 * v53];
    }
    while ( v51 < *v50 );
  }
  if ( v49 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v49);
  return 0LL;
}
