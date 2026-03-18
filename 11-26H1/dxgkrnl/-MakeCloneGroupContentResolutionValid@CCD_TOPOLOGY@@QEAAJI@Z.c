/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14031811C
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x140318DA0 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14005F79C (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403200E0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  char v2; // r15
  char v4; // r12
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // esi
  int v9; // r13d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v10; // rax
  int v11; // ecx
  int v12; // edx
  __int64 result; // rax
  unsigned int j; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // rbx
  unsigned int v19; // r13d
  unsigned int v20; // r15d
  int IsVirtualizationDisabledForTarget; // r12d
  unsigned int k; // edi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int i; // ebx
  int *PathDescriptor; // rax
  signed int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // [rsp+40h] [rbp-48h]
  int v36; // [rsp+A8h] [rbp+20h]

  v2 = 1;
  v4 = 1;
  v5 = 0LL;
  v6 = 0;
  v7 = 0x7FFFFFFF;
  v8 = 0x7FFFFFFF;
  v9 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  v36 = v9;
  while ( 1 )
  {
    if ( v6 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      if ( v2 )
      {
        v27 = 0x3FFFFFFF00000001LL;
        for ( i = 0; i < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++i )
        {
          PathDescriptor = (int *)CCD_TOPOLOGY::GetPathDescriptor(this, i);
          if ( PathDescriptor[46] == v9 )
          {
            if ( v4 )
            {
              v30 = PathDescriptor[40];
              v31 = PathDescriptor[41];
              v32 = v31 * v30;
              v33 = PathDescriptor[38] * (__int64)PathDescriptor[39] - v32;
              v34 = v32 - PathDescriptor[38] * (__int64)PathDescriptor[39];
              if ( v34 < 0 )
                v34 = v33;
              if ( v34 < v27 )
              {
                v7 = v30;
                v8 = v31;
                v27 = v34;
              }
            }
            else if ( PathDescriptor[38] == PathDescriptor[40] && PathDescriptor[39] == PathDescriptor[41] )
            {
              v7 = PathDescriptor[40];
              v8 = PathDescriptor[41];
              goto LABEL_26;
            }
          }
        }
        goto LABEL_26;
      }
      return 0LL;
    }
    v10 = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    if ( *((_DWORD *)v10 + 46) == v9 )
      break;
LABEL_13:
    ++v6;
  }
  if ( (*(_QWORD *)v10 & 0x20000LL) == 0 )
    goto LABEL_17;
  if ( !v5 )
    v5 = (_DWORD *)((char *)v10 + 152);
  v11 = *((_DWORD *)v10 + 38);
  if ( v11 )
  {
    v12 = *((_DWORD *)v10 + 39);
    if ( v12 )
    {
      if ( *v5 == v11 && v5[1] == v12 )
      {
        if ( (*(_QWORD *)v10 & 0x20000000000000LL) != 0 )
        {
          if ( v11 == *((_DWORD *)v10 + 40) && v12 == *((_DWORD *)v10 + 41) )
            v4 = 0;
        }
        else
        {
          v2 = 0;
        }
        goto LABEL_13;
      }
    }
  }
  *((_DWORD *)v10 + 65) |= 0x400u;
LABEL_17:
  for ( j = 0; ; j = v35 + 1 )
  {
    v35 = j;
    if ( j >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      break;
    v15 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    v16 = v15;
    if ( *((_DWORD *)v15 + 46) == v9 )
    {
      v17 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)v15 + 33));
      if ( (*(_DWORD *)v16 & 0x200LL) != 0 && ((v17 - 1) & 0xFFFFFFFD) != 0 )
      {
        v20 = *((_DWORD *)v16 + 25);
        v19 = *((_DWORD *)v16 + 24);
        v18 = __PAIR64__(v19, v20);
      }
      else
      {
        v18 = *((_QWORD *)v16 + 12);
        v19 = HIDWORD(v18);
        v20 = v18;
      }
      IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                            *(struct _LUID *)((char *)v16 + 16),
                                            *((_DWORD *)v16 + 7),
                                            0LL,
                                            0LL,
                                            0LL,
                                            0LL);
      if ( IsVirtualizationDisabledForTarget < 0 )
      {
        WdLogSingleEntry1(2LL);
        result = (unsigned int)IsVirtualizationDisabledForTarget;
        WdLogGlobalForLineNumber = 4512;
        return result;
      }
      if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v16 + 22)) )
      {
        v9 = v36;
        if ( (*(_DWORD *)v16 & 0x20000) != 0 )
        {
          v7 = *((_DWORD *)v16 + 38);
          v8 = *((_DWORD *)v16 + 39);
        }
        else
        {
          v7 = v18;
          v8 = HIDWORD(v18);
        }
        break;
      }
      if ( v20 < v7 )
      {
        *((_DWORD *)v16 + 65) |= 0x4000u;
        v7 = v20;
      }
      if ( v19 < v8 )
      {
        *((_DWORD *)v16 + 65) |= 0x4000u;
        v8 = v19;
      }
      v9 = v36;
    }
  }
LABEL_26:
  if ( v7 && v8 && v7 != 0x7FFFFFFF && v8 != 0x7FFFFFFF )
  {
    for ( k = 0; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
    {
      v23 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
      v24 = v23;
      if ( *((_DWORD *)v23 + 46) == v9 )
      {
        v25 = *(_QWORD *)v23;
        if ( (*(_QWORD *)v23 & 0x20000LL) == 0 || *((_DWORD *)v23 + 38) != v7 || *((_DWORD *)v23 + 39) != v8 )
        {
          if ( (*((_DWORD *)v23 + 2) & 0x20000) != 0 )
          {
            if ( (*(_QWORD *)v23 & 0x20000LL) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4596;
            }
            *((_DWORD *)v24 + 65) |= 0x80000000;
            WdLogSingleEntry3(2LL, *((_QWORD *)this + 8), v7, v8);
            WdLogGlobalForLineNumber = 4599;
            return 3221225473LL;
          }
          v26 = *((_QWORD *)v23 + 31);
          *((_DWORD *)v24 + 38) = v7;
          *((_DWORD *)v24 + 39) = v8;
          *(_QWORD *)v24 = v25 & 0xFFFFFFFFFF7DFFFFuLL | 0x20000;
          if ( v26 )
          {
            *(_DWORD *)(v26 + 172) = v7;
            *(_DWORD *)(*((_QWORD *)v24 + 31) + 176LL) = v8;
          }
        }
      }
    }
    return 0LL;
  }
  WdLogSingleEntry3(2LL, *((_QWORD *)this + 8), v7, v8);
  WdLogGlobalForLineNumber = 4567;
  return 3221225473LL;
}
