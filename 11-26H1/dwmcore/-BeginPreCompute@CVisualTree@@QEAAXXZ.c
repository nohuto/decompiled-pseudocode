/*
 * XREFs of ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18008E5D0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ @ 0x18008F4D0 (-ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualTree::BeginPreCompute(CVisualTree *this)
{
  char v2; // cl
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 2628) )
  {
    (*(void (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 232LL))(this);
    *((_BYTE *)this + 2628) = 0;
  }
  v2 = *((_BYTE *)this + 2630);
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 2437) = 0;
  *(_WORD *)((char *)this + 2439) = 0;
  *((_BYTE *)this + 2436) = v2 == 0;
  *(_OWORD *)((char *)this + 2420) = *(_OWORD *)(*((_QWORD *)this + 14) + 2504LL);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 2438) )
      *((_BYTE *)this + 2438) = 0;
    *((_DWORD *)this + 32) = 0;
    *((_BYTE *)this + 564) = 0;
    if ( !*((_BYTE *)this + 2438) )
      CTreeDirty::ClearDirtyRectAnnotationLists((CVisualTree *)((char *)this + 112));
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 192LL))(this) )
  {
    v3 = *((_QWORD *)this + 598);
    v4 = (*((_QWORD *)this + 599) - v3) >> 3;
    if ( v4 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v7, v3, v4);
      *((_QWORD *)this + 599) += -8 * v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 224LL))(this);
  if ( v6 )
    (*(void (__fastcall **)(__int64, CVisualTree *))(*(_QWORD *)v6 + 24LL))(v6, this);
}
