/*
 * XREFs of ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800D4660
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D436C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1800D4500 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1801E5470 (-DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct CVisual *__fastcall CVisual::GetTransformParent(CVisual *this, CVisual **a2, bool *a3)
{
  __int64 v3; // rsi
  _DWORD *v6; // r8
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // rcx
  _QWORD **v10; // rcx
  _QWORD *v11; // rcx
  __int64 **v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // r8
  __int64 v17; // rcx
  __int64 ****v18; // rdx
  __int64 ***v19; // rdx
  __int64 **i; // rax

  v3 = 0LL;
  if ( this == a2[9] )
    return (const struct CVisual *)v3;
  v6 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v6 & 0x4000000) != 0 )
  {
    v7 = (unsigned int)v6[1];
    v8 = v6 + 2;
    v9 = 0LL;
    if ( (_DWORD)v7 )
    {
      while ( *v8 != 6 )
      {
        v9 = (unsigned int)(v9 + 1);
        ++v8;
        if ( (unsigned int)v9 >= (unsigned int)v7 )
          goto LABEL_22;
      }
    }
    else
    {
LABEL_22:
      if ( (unsigned int)v9 >= (unsigned int)v7 )
      {
        v10 = 0LL;
LABEL_6:
        v11 = *v10;
        if ( v11 )
          v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 192LL))(*v11);
        goto LABEL_8;
      }
    }
    v10 = (_QWORD **)((char *)&v6[2 * v9] + ((v7 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_6;
  }
LABEL_8:
  if ( !(*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 24))(a2) )
  {
    v14 = *((_QWORD *)this + 28);
    if ( *(int *)v14 >= 0 )
      return 0LL;
    v15 = *(unsigned int *)(v14 + 4);
    v16 = (_BYTE *)(v14 + 8);
    v17 = 0LL;
    if ( (_DWORD)v15 )
    {
      while ( *v16 != 1 )
      {
        v17 = (unsigned int)(v17 + 1);
        ++v16;
        if ( (unsigned int)v17 >= (unsigned int)v15 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      if ( (unsigned int)v17 >= (unsigned int)v15 )
      {
        v18 = 0LL;
LABEL_17:
        v19 = *v18;
        if ( v19 )
        {
          for ( i = *v19; i != (__int64 **)v19; i = (__int64 **)*i )
          {
            v12 = i - 44;
            if ( i[4] == (__int64 *)a2 )
              goto LABEL_10;
          }
        }
        return 0LL;
      }
    }
    v18 = (__int64 ****)(v14 + ((v15 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v17);
    goto LABEL_17;
  }
  v12 = (__int64 **)((char *)this + 320);
LABEL_10:
  if ( v12 && *((_BYTE *)v12 + 12) )
    return (const struct CVisual *)v3;
  return 0LL;
}
