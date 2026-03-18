/*
 * XREFs of ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x1800CB340
 * Callers:
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180237470 (-GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV-$DynA.c)
 * Callees:
 *     ?erase@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@V?$basic_iterator@$$CBV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@@Z @ 0x18008B8F0 (-erase@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirtyRegionAnnotation::GetZ(CDirtyRegionAnnotation *this, const struct CVisualTree *a2, int a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 i; // rax
  __int64 v11; // r12
  __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 k; // rdx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rax
  _BYTE *v21; // r8
  __int64 v22; // rcx
  __int64 ****v23; // rcx
  __int64 ***v24; // rcx
  __int64 **j; // rax
  __int64 v26; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *m; // rcx
  __int64 v29; // rdx
  _QWORD v30[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v31; // [rsp+60h] [rbp+8h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 2);
  v4 = 0LL;
  if ( *((_BYTE *)this + 40) )
  {
    while ( 1 )
    {
      if ( !v3 )
        return (unsigned int)v4;
      if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
        break;
      v7 = v3 + 40;
LABEL_5:
      if ( v7 )
      {
        v8 = v7[22];
        v9 = 0LL;
        for ( i = v8; i != v7[23]; i += 8LL )
        {
          if ( *(_DWORD *)(*(_QWORD *)i + 32LL) == a3 )
          {
            v9 = *(_QWORD *)i;
            break;
          }
        }
        v11 = *(_QWORD *)(*(_QWORD *)(v7[31] + 24) + 880LL);
        if ( v7[27] != v11 )
        {
          v7[27] = v11;
          if ( (unsigned __int64)((v7[23] - v8) >> 3) > 1 )
          {
            while ( v8 != v7[23] )
            {
              if ( *(_QWORD *)v8 != v9
                && (v26 = *(_QWORD *)(*(_QWORD *)v8 + 16LL)) != 0
                && (unsigned __int64)(v11 - v26) >= 0xA )
              {
                v31 = v8;
                v8 = *detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                        v7 + 22,
                        v30,
                        &v31);
              }
              else
              {
                v8 += 8LL;
              }
            }
          }
        }
        if ( v9 )
        {
          if ( g_pComposition )
            v4 = *((_QWORD *)g_pComposition + 110);
          if ( *(_QWORD *)(v9 + 16) != v4 )
            (*(void (__fastcall **)(__int64, const struct CVisualTree *, __int64))(*(_QWORD *)v9 + 16LL))(v9, a2, v4);
          LODWORD(v4) = *(_DWORD *)(v9 + 36);
          return (unsigned int)v4;
        }
      }
LABEL_6:
      if ( v3 == *((__int64 **)a2 + 9) )
        v3 = 0LL;
      else
        v3 = (__int64 *)v3[11];
    }
    v19 = v3[28];
    if ( *(int *)v19 >= 0 )
      goto LABEL_6;
    v20 = *(unsigned int *)(v19 + 4);
    v21 = (_BYTE *)(v19 + 8);
    v22 = 0LL;
    if ( (_DWORD)v20 )
    {
      while ( *v21 != 1 )
      {
        v22 = (unsigned int)(v22 + 1);
        ++v21;
        if ( (unsigned int)v22 >= (unsigned int)v20 )
          goto LABEL_62;
      }
    }
    else
    {
LABEL_62:
      if ( (unsigned int)v22 >= (unsigned int)v20 )
      {
        v23 = 0LL;
LABEL_43:
        v24 = *v23;
        if ( v24 )
        {
          for ( j = *v24; j != (__int64 **)v24; j = (__int64 **)*j )
          {
            v7 = (__int64 *)(j - 44);
            if ( j[4] == (__int64 *)a2 )
              goto LABEL_5;
          }
        }
        goto LABEL_6;
      }
    }
    v23 = (__int64 ****)(v19 + ((v20 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v22);
    goto LABEL_43;
  }
  while ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
    {
      v13 = v3 + 40;
LABEL_25:
      if ( v13 )
      {
        v14 = v13[22];
        v15 = 0LL;
        v16 = v13[23];
        for ( k = v14; k != v16; k += 8LL )
        {
          if ( *(_DWORD *)(*(_QWORD *)k + 32LL) == a3 )
          {
            v15 = *(_QWORD *)k;
            break;
          }
        }
        v18 = *(_QWORD *)(*(_QWORD *)(v13[31] + 24) + 880LL);
        if ( v13[27] != v18 )
        {
          v13[27] = v18;
          if ( (unsigned __int64)((v16 - v14) >> 3) > 1 )
          {
            while ( v14 != v13[23] )
            {
              if ( *(_QWORD *)v14 != v15
                && (v29 = *(_QWORD *)(*(_QWORD *)v14 + 16LL)) != 0
                && (unsigned __int64)(v18 - v29) >= 0xA )
              {
                v31 = v14;
                v14 = *detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                         v13 + 22,
                         v30,
                         &v31);
              }
              else
              {
                v14 += 8LL;
              }
            }
          }
        }
        if ( v15 )
        {
          if ( g_pComposition )
            v4 = *((_QWORD *)g_pComposition + 110);
          if ( *(_QWORD *)(v15 + 16) != v4 )
            (*(void (__fastcall **)(__int64, const struct CVisualTree *, __int64))(*(_QWORD *)v15 + 16LL))(v15, a2, v4);
          LODWORD(v4) = *(_DWORD *)(v15 + 40);
          return (unsigned int)v4;
        }
      }
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
      if ( TreeDataListHead )
      {
        for ( m = TreeDataListHead->Flink; m != TreeDataListHead; m = m->Flink )
        {
          v13 = (__int64 *)&m[-22];
          if ( (const struct CVisualTree *)m[2].Flink == a2 )
            goto LABEL_25;
        }
      }
    }
    if ( v3 == *((__int64 **)a2 + 9) )
      v3 = 0LL;
    else
      v3 = (__int64 *)v3[11];
  }
  return (unsigned int)v4;
}
