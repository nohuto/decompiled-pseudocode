/*
 * XREFs of ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800211E0
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x18001F980 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020000 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020674 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180268440 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?EnsureWeights@?$CRectangleCollection@$03@@AEAAXXZ @ 0x18001FE14 (-EnsureWeights@-$CRectangleCollection@$03@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?CalcOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180021EB0 (-CalcOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MoveOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180022200 (-MoveOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??0?$CMergedRectBase@$03@@QEAA@_N@Z @ 0x18005A228 (--0-$CMergedRectBase@$03@@QEAA@_N@Z.c)
 *     ?Allocate@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z @ 0x1800AE028 (-Allocate@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::AddAdditionalDirtyRect(__int64 a1, float *a2, char a3, const char *a4)
{
  __int64 v6; // r14
  _DWORD *v7; // rdx
  _QWORD *v8; // r12
  __int64 v9; // rax
  _BYTE *v10; // r8
  __int64 v11; // rcx
  char **v12; // rbx
  char *v13; // rbx
  __int64 v14; // rax
  bool v15; // zf
  unsigned int *v16; // rbx
  unsigned int v17; // esi
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 nn; // rsi
  char v23; // al
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  HANDLE ProcessHeap; // rax
  char *v28; // rax
  _DWORD *v29; // r13
  _BYTE *v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  _DWORD *v33; // rsi
  unsigned int v34; // edi
  unsigned int v35; // esi
  unsigned int v36; // r8d
  unsigned int ii; // esi
  unsigned int jj; // esi
  float v39; // xmm0_4
  int v40; // ecx
  unsigned int v41; // r15d
  unsigned int v42; // r10d
  unsigned int v43; // r8d
  unsigned int v44; // esi
  __int64 v45; // rdx
  unsigned int v46; // eax
  int v47; // r8d
  unsigned int v48; // r9d
  unsigned int v49; // r9d
  unsigned int v50; // eax
  int v51; // r11d
  unsigned int v52; // eax
  unsigned int v53; // r12d
  unsigned int v54; // edi
  __int64 v55; // r10
  unsigned int kk; // edi
  unsigned int v57; // eax
  unsigned int mm; // edi
  __int64 v59; // rax
  unsigned int v60; // edi
  unsigned int v61; // r8d
  unsigned int j; // edi
  unsigned int k; // edi
  float v64; // xmm0_4
  int v65; // ecx
  unsigned int v66; // r10d
  unsigned int v67; // eax
  unsigned int v68; // esi
  __int64 v69; // rdx
  int v70; // r8d
  unsigned int v71; // eax
  unsigned int v72; // r9d
  unsigned int v73; // r9d
  unsigned int v74; // eax
  int v75; // r11d
  unsigned int v76; // r8d
  unsigned int v77; // r13d
  unsigned int v78; // edi
  __int64 v79; // r10
  unsigned int m; // edi
  unsigned int v81; // eax
  unsigned int n; // edi
  __int64 v83; // rax
  unsigned int i; // r8d
  __int64 v85; // rax
  _QWORD *v86; // rdx
  __int128 v87; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v89; // [rsp+70h] [rbp+8h]

  v6 = a1;
  if ( (*(_BYTE *)(a1 + 96) & 4) != 0 || a2[2] <= *a2 || a2[3] <= a2[1] )
    return;
  v7 = *(_DWORD **)(a1 + 224);
  v8 = (_QWORD *)(a1 + 224);
  if ( (*v7 & 0x40000000) != 0 )
  {
    v9 = (unsigned int)v7[1];
    v10 = v7 + 2;
    v11 = 0LL;
    if ( (_DWORD)v9 )
    {
      while ( *v10 != 2 )
      {
        v11 = (unsigned int)(v11 + 1);
        ++v10;
        if ( (unsigned int)v11 >= (unsigned int)v9 )
          goto LABEL_113;
      }
    }
    else
    {
LABEL_113:
      if ( (unsigned int)v11 >= (unsigned int)v9 )
      {
        v12 = 0LL;
        goto LABEL_8;
      }
    }
    v12 = (char **)((char *)&v7[2 * v11] + ((v9 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_8:
    v13 = *v12;
    if ( v13 )
      goto LABEL_9;
    v8 = (_QWORD *)(v6 + 224);
  }
  ProcessHeap = GetProcessHeap();
  v28 = (char *)HeapAlloc(ProcessHeap, 0, 0x160uLL);
  v13 = v28;
  if ( v28 )
  {
    memset_0(v28 + 8, 0, 0x158uLL);
    *(_QWORD *)v13 = 0LL;
    CMergedRectBase<4>::CMergedRectBase<4>(v13 + 8);
    CMergedRectBase<4>::CMergedRectBase<4>(v13 + 180);
    v29 = *(_DWORD **)(v6 + 224);
    v30 = v29 + 2;
    v31 = v29[1];
    if ( (*v29 & 0x40000000) != 0 )
    {
      for ( i = 0; i < v31; ++v30 )
      {
        if ( *v30 == 2 )
          break;
        ++i;
      }
      v85 = (unsigned int)v29[1];
      if ( i >= (unsigned int)v85 )
        v86 = 0LL;
      else
        v86 = (_QWORD *)((char *)&v29[2 * i] + ((v85 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
      *v86 = v13;
    }
    else
    {
      v32 = 0;
      v33 = *(_DWORD **)(v6 + 224);
      v89 = 0;
      if ( v31 )
      {
        do
        {
          if ( !*v30 )
            break;
          ++v32;
          ++v30;
        }
        while ( v32 < v31 );
        v89 = v32;
      }
      if ( v32 == v31 )
      {
        v33 = (_DWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::Allocate(v31 + 4);
        *v8 = v33;
        if ( v29 != (_DWORD *)&CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage )
        {
          *v33 = *v29;
          memcpy_0(v33 + 2, v29 + 2, (unsigned int)v29[1]);
          memcpy_0(
            (char *)v33 + (((unsigned int)v33[1] + 15LL) & 0xFFFFFFFFFFFFFFF8uLL),
            (char *)v29 + (((unsigned int)v29[1] + 15LL) & 0xFFFFFFFFFFFFFFF8uLL),
            8LL * (unsigned int)v29[1]);
          operator delete(v29);
        }
        v32 = v89;
      }
      *v33 |= 0x40000000u;
      *((_BYTE *)v33 + v32 + 8) = 2;
      *(_QWORD *)((char *)v33 + (unsigned int)v33[1] + 8LL * v32 - (((unsigned __int8)v33[1] + 15) & 7) + 15) = v13;
    }
LABEL_9:
    v14 = 0LL;
    if ( a3 )
    {
      if ( g_pComposition )
        v14 = *((_QWORD *)g_pComposition + 110);
      if ( *(_QWORD *)v13 != v14 )
      {
        *(_QWORD *)v13 = 0LL;
        v15 = v13[176] == -1;
        *((_DWORD *)v13 + 2) = 0;
        v13[172] = 0;
        if ( !v15 )
          v13[176] = 0;
        v15 = v13[348] == -1;
        *((_DWORD *)v13 + 45) = 0;
        v13[344] = 0;
        if ( !v15 )
          v13[348] = 0;
        *(_QWORD *)v13 = v14;
      }
      v16 = (unsigned int *)(v13 + 8);
      if ( a2[2] > *a2 && a2[3] > a2[1] )
      {
        if ( *((_BYTE *)v16 + 168) == 1 )
          *((_BYTE *)v16 + 168) = 0;
        *(_OWORD *)&v16[4 * *v16 + 1] = *(_OWORD *)a2;
        v17 = *v16 + 1;
        *v16 = v17;
        if ( v17 <= 4 )
        {
LABEL_23:
          *((_BYTE *)v16 + 164) = 1;
          goto LABEL_24;
        }
        if ( v17 > 5 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x3E,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\MergedRect.h",
            a4);
        if ( *((_BYTE *)v16 + 164) )
        {
          CRectangleCollection<4>::EnsureWeights((__int64)v16);
        }
        else
        {
          v60 = 0;
          do
            CRectangleCollection<4>::CalcOverhead(v16, v60++);
          while ( v60 < v61 );
          for ( j = v60 + 1; j < v17; ++j )
            CRectangleCollection<4>::CalcOverhead(v16, 4LL);
          for ( k = j + 1; k < *v16; ++k )
            CRectangleCollection<4>::CalcOverhead(v16, 4LL);
        }
        CRectangleCollection<4>::EnsureWeights((__int64)v16);
        v64 = *((float *)v16 + 21);
        v65 = 1;
        v41 = 1;
        v66 = 1;
        v67 = 0;
        v68 = 0;
        v69 = 2LL;
        do
        {
          if ( v64 == 0.0 )
            break;
          v70 = v65 + 1;
          v71 = v67 + 1;
          v72 = 0;
          if ( v71 != v65 )
          {
            v70 = v65;
            v72 = v71;
          }
          if ( v64 > *(float *)&v16[v69 + 21] )
          {
            v64 = *(float *)&v16[v69 + 21];
            v68 = v72;
            v41 = v70;
          }
          if ( v64 == 0.0 )
            break;
          v73 = v72 + 1;
          v65 = v70;
          if ( v73 == v70 )
            v65 = v70 + 1;
          v74 = 0;
          if ( v73 != v70 )
            v74 = v73;
          v75 = v65;
          if ( v64 > *(float *)&v16[v69 + 23] )
          {
            v64 = *(float *)&v16[v69 + 23];
            v68 = v74;
            v41 = v65;
          }
          if ( v64 == 0.0 )
            break;
          v76 = v74 + 1;
          if ( v74 + 1 == v65 )
            ++v65;
          v67 = 0;
          if ( v76 != v75 )
            v67 = v76;
          if ( v64 > *(float *)&v16[v69 + 25] )
          {
            v64 = *(float *)&v16[v69 + 25];
            v68 = v67;
            v41 = v65;
          }
          v66 += 3;
          v69 += 6LL;
        }
        while ( v66 < 0xA );
        v87 = *(_OWORD *)&v16[4 * v68 + 1];
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v87, &v16[4 * v41 + 1]);
        v77 = v41;
        v78 = 0;
        *(_OWORD *)&v16[2 * v79 + 1] = v87;
        if ( v41 >= *v16 )
          v77 = *v16;
        if ( v68 )
        {
          do
            CRectangleCollection<4>::CalcOverhead(v16, v78++);
          while ( v78 < v68 );
        }
        for ( m = v78 + 1; m < v77; ++m )
          CRectangleCollection<4>::CalcOverhead(v16, v68);
        v81 = *v16;
        for ( n = m + 1; n < *v16; ++n )
        {
          CRectangleCollection<4>::CalcOverhead(v16, v68);
          v81 = *v16;
        }
        v83 = v81 - 1;
        *v16 = v83;
        if ( v41 < (unsigned int)v83 )
        {
          *(_OWORD *)&v16[4 * v41 + 1] = *(_OWORD *)&v16[4 * v83 + 1];
          goto LABEL_153;
        }
      }
    }
    else
    {
      if ( g_pComposition )
        v14 = *((_QWORD *)g_pComposition + 110);
      if ( *(_QWORD *)v13 != v14 )
      {
        *(_QWORD *)v13 = 0LL;
        v15 = v13[176] == -1;
        *((_DWORD *)v13 + 2) = 0;
        v13[172] = 0;
        if ( !v15 )
          v13[176] = 0;
        v15 = v13[348] == -1;
        *((_DWORD *)v13 + 45) = 0;
        v13[344] = 0;
        if ( !v15 )
          v13[348] = 0;
        *(_QWORD *)v13 = v14;
      }
      v16 = (unsigned int *)(v13 + 180);
      if ( a2[2] > *a2 && a2[3] > a2[1] )
      {
        if ( *((_BYTE *)v16 + 168) == 1 )
          *((_BYTE *)v16 + 168) = 0;
        *(_OWORD *)&v16[4 * *v16 + 1] = *(_OWORD *)a2;
        v34 = *v16 + 1;
        *v16 = v34;
        if ( v34 <= 4 )
          goto LABEL_23;
        if ( v34 > 5 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x3E,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\MergedRect.h",
            a4);
        if ( *((_BYTE *)v16 + 164) )
        {
          CRectangleCollection<4>::EnsureWeights((__int64)v16);
        }
        else
        {
          v35 = 0;
          do
            CRectangleCollection<4>::CalcOverhead(v16, v35++);
          while ( v35 < v36 );
          for ( ii = v35 + 1; ii < v34; ++ii )
            CRectangleCollection<4>::CalcOverhead(v16, 4LL);
          for ( jj = ii + 1; jj < *v16; ++jj )
            CRectangleCollection<4>::CalcOverhead(v16, 4LL);
        }
        CRectangleCollection<4>::EnsureWeights((__int64)v16);
        v39 = *((float *)v16 + 21);
        v40 = 1;
        v41 = 1;
        v42 = 1;
        v43 = 0;
        v44 = 0;
        v45 = 2LL;
        do
        {
          if ( v39 == 0.0 )
            break;
          v46 = v43 + 1;
          v47 = v40 + 1;
          v48 = 0;
          if ( v46 != v40 )
          {
            v47 = v40;
            v48 = v46;
          }
          if ( v39 > *(float *)&v16[v45 + 21] )
          {
            v39 = *(float *)&v16[v45 + 21];
            v44 = v48;
            v41 = v47;
          }
          if ( v39 == 0.0 )
            break;
          v49 = v48 + 1;
          v40 = v47;
          if ( v49 == v47 )
            v40 = v47 + 1;
          v50 = 0;
          if ( v49 != v47 )
            v50 = v49;
          v51 = v40;
          if ( v39 > *(float *)&v16[v45 + 23] )
          {
            v39 = *(float *)&v16[v45 + 23];
            v44 = v50;
            v41 = v40;
          }
          if ( v39 == 0.0 )
            break;
          v52 = v50 + 1;
          if ( v52 == v40 )
            ++v40;
          v43 = 0;
          if ( v52 != v51 )
            v43 = v52;
          if ( v39 > *(float *)&v16[v45 + 25] )
          {
            v39 = *(float *)&v16[v45 + 25];
            v44 = v43;
            v41 = v40;
          }
          v42 += 3;
          v45 += 6LL;
        }
        while ( v42 < 0xA );
        v87 = *(_OWORD *)&v16[4 * v44 + 1];
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v87, &v16[4 * v41 + 1]);
        v53 = v41;
        v54 = 0;
        *(_OWORD *)&v16[2 * v55 + 1] = v87;
        if ( v41 >= *v16 )
          v53 = *v16;
        if ( v44 )
        {
          do
            CRectangleCollection<4>::CalcOverhead(v16, v54++);
          while ( v54 < v44 );
        }
        for ( kk = v54 + 1; kk < v53; ++kk )
          CRectangleCollection<4>::CalcOverhead(v16, v44);
        v57 = *v16;
        for ( mm = kk + 1; mm < *v16; ++mm )
        {
          CRectangleCollection<4>::CalcOverhead(v16, v44);
          v57 = *v16;
        }
        v59 = v57 - 1;
        *v16 = v59;
        if ( v41 < (unsigned int)v59 )
        {
          *(_OWORD *)&v16[4 * v41 + 1] = *(_OWORD *)&v16[4 * v59 + 1];
LABEL_153:
          CRectangleCollection<4>::MoveOverhead(v16, v41, *v16);
        }
      }
    }
LABEL_24:
    if ( (*(_QWORD *)(v6 + 32) & 3) != 0 )
    {
      if ( (*(_QWORD *)(v6 + 32) & 3LL) == 1 )
      {
        v18 = (_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_28;
      }
      if ( (*(_QWORD *)(v6 + 32) & 3LL) == 2 )
      {
        v18 = 0LL;
        goto LABEL_28;
      }
      if ( (*(_QWORD *)(v6 + 32) & 3LL) != 3 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v18 = (_QWORD *)(v6 + 32);
LABEL_28:
    v19 = detail::pointer_buffer_impl<CResource *,0>::last(v6 + 32);
    while ( v18 != (_QWORD *)v19 )
    {
      if ( *v18 != *(_QWORD *)(v6 + 88) )
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v18 + 80LL))(*v18, 1LL, v6);
      ++v18;
    }
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6);
    *(_BYTE *)(v6 + 96) |= 8u;
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 28);
    for ( nn = *(_QWORD *)(v6 + 88); ; nn = *(_QWORD *)(nn + 88) )
    {
      if ( (*(_BYTE *)(v6 + 102) & 0x20) == 0 )
        return;
      if ( !nn )
        return;
      v23 = *(_BYTE *)(nn + 96);
      if ( v23 < 0 )
        return;
      *(_BYTE *)(nn + 96) = v23 | 0x80;
      if ( (*(_QWORD *)(nn + 32) & 3) == 0 )
        goto LABEL_105;
      switch ( *(_QWORD *)(nn + 32) & 3LL )
      {
        case 1LL:
          v24 = (_QWORD *)(*(_QWORD *)(nn + 32) & 0xFFFFFFFFFFFFFFFCuLL);
          break;
        case 2LL:
          v24 = 0LL;
          break;
        case 3LL:
LABEL_105:
          v24 = (_QWORD *)(nn + 32);
          break;
        default:
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v25 = detail::pointer_buffer_impl<CResource *,0>::last(nn + 32);
      while ( v24 != (_QWORD *)v25 )
      {
        if ( *v24 != *(_QWORD *)(nn + 88) )
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v24 + 80LL))(*v24, 1LL, nn);
        ++v24;
      }
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)nn + 160LL))(nn);
      if ( v26 )
      {
        if ( v21 != v26 )
        {
          ++*(_DWORD *)(v26 + 24);
          v21 = v26;
        }
      }
      v6 = nn;
    }
  }
  CVisual::PropagateFlags(v6, 4LL);
}
