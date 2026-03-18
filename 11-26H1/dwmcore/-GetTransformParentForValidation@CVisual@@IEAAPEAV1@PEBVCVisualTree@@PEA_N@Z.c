/*
 * XREFs of ?GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800CB0D0
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801E4FF0 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800ADA94 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CC0E0 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180260224 (--0CTreeData@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CVisual *__fastcall CVisual::GetTransformParentForValidation(CVisual *this, CVisual **a2, bool *a3)
{
  __int64 v3; // rbx
  _DWORD *v7; // rdx
  __int64 v9; // rax
  _BYTE *v10; // r8
  __int64 v11; // rcx
  _BYTE **v12; // rdx
  _BYTE *v13; // rbp
  struct CTreeData *UnusedTreeData; // r15
  char v15; // dl
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  _DWORD *v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  bool v21; // zf
  __int64 v22; // rcx
  CTreeData *v23; // rax

  v3 = 0LL;
  if ( this == a2[9] )
    goto LABEL_3;
  v7 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v7 & 0x4000000) == 0 )
    goto LABEL_3;
  v9 = (unsigned int)v7[1];
  v10 = v7 + 2;
  v11 = 0LL;
  if ( (_DWORD)v9 )
  {
    while ( *v10 != 6 )
    {
      v11 = (unsigned int)(v11 + 1);
      ++v10;
      if ( (unsigned int)v11 >= (unsigned int)v9 )
        goto LABEL_17;
    }
    goto LABEL_7;
  }
LABEL_17:
  if ( (unsigned int)v11 < (unsigned int)v9 )
  {
LABEL_7:
    v12 = (_BYTE **)((char *)&v7[2 * v11] + ((v9 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_8;
  }
  v12 = 0LL;
LABEL_8:
  v13 = *v12;
  if ( !*v12 )
    goto LABEL_3;
  if ( !(*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 24))(a2) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        UnusedTreeData = (struct CTreeData *)&i[-22];
        if ( (CVisual **)i[2].Flink == a2 )
          goto LABEL_11;
      }
    }
    goto LABEL_22;
  }
  UnusedTreeData = (CVisual *)((char *)this + 320);
LABEL_11:
  if ( !UnusedTreeData )
  {
LABEL_22:
    UnusedTreeData = CVisual::GetUnusedTreeData(this);
    if ( UnusedTreeData )
    {
      v18 = (_DWORD *)*((_QWORD *)this + 28);
      if ( (*v18 & 0x10000000) != 0 )
      {
        v19 = 0;
        *v18 &= ~0x10000000u;
        v20 = v18[1];
        if ( v20 )
        {
          while ( *((_BYTE *)v18 + v19 + 8) != 4 )
          {
            if ( ++v19 >= v20 )
              goto LABEL_27;
          }
          *((_BYTE *)v18 + v19 + 8) = 0;
        }
      }
    }
    else
    {
      v23 = (CTreeData *)operator new(0x188uLL);
      UnusedTreeData = v23;
      if ( v23 )
      {
        CTreeData::CTreeData(v23);
        *((_QWORD *)UnusedTreeData + 48) = 0LL;
        *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
      }
      else
      {
        UnusedTreeData = 0LL;
      }
    }
LABEL_27:
    (*(void (__fastcall **)(struct CTreeData *, CVisual **, CVisual *))(*(_QWORD *)UnusedTreeData + 8LL))(
      UnusedTreeData,
      a2,
      this);
  }
  v15 = *((_BYTE *)UnusedTreeData + 12);
  if ( v15
    || *((_QWORD *)UnusedTreeData + 29) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)UnusedTreeData + 31) + 24LL) + 880LL) )
  {
    *((_BYTE *)UnusedTreeData + 13) = v15;
    *((_BYTE *)UnusedTreeData + 12) = 1;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 192LL))(*(_QWORD *)v13);
    if ( !v3 )
    {
      v21 = *((_BYTE *)UnusedTreeData + 13) == 0;
      v22 = *((_QWORD *)UnusedTreeData + 31);
      *((_BYTE *)UnusedTreeData + 12) = 0;
      *((_QWORD *)UnusedTreeData + 29) = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 880LL);
      if ( !v21 )
      {
        CVisual::PropagateFlags((__int64)this, 5u);
        *((_BYTE *)UnusedTreeData + 137) = 1;
      }
    }
  }
  if ( v13[8] )
  {
    *a3 = 1;
    return (struct CVisual *)v3;
  }
LABEL_3:
  *a3 = 0;
  return (struct CVisual *)v3;
}
