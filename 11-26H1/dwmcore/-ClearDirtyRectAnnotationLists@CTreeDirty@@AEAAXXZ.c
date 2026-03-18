/*
 * XREFs of ?ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ @ 0x18008F4D0
 * Callers:
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18008E5D0 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F5F0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?Initialize@CTreeDirty@@QEAAX_N@Z @ 0x1801673C0 (-Initialize@CTreeDirty@@QEAAX_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTreeDirty::ClearDirtyRectAnnotationLists(CTreeDirty *this)
{
  char *v1; // rbx
  char **v2; // rcx
  char **v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax

  *((_QWORD *)this + 58) = (char *)this + 456;
  v1 = (char *)this + 600;
  *((_QWORD *)this + 57) = (char *)this + 456;
  *((_QWORD *)this + 60) = (char *)this + 472;
  *((_QWORD *)this + 59) = (char *)this + 472;
  *((_QWORD *)this + 62) = (char *)this + 488;
  *((_QWORD *)this + 61) = (char *)this + 488;
  *((_QWORD *)this + 64) = (char *)this + 504;
  *((_QWORD *)this + 63) = (char *)this + 504;
  *((_QWORD *)this + 66) = (char *)this + 520;
  *((_QWORD *)this + 65) = (char *)this + 520;
  *((_QWORD *)this + 68) = (char *)this + 536;
  *((_QWORD *)this + 67) = (char *)this + 536;
  *((_QWORD *)this + 70) = (char *)this + 552;
  *((_QWORD *)this + 69) = (char *)this + 552;
  *((_QWORD *)this + 72) = (char *)this + 568;
  *((_QWORD *)this + 71) = (char *)this + 568;
  *((_QWORD *)this + 74) = (char *)this + 584;
  *((_QWORD *)this + 73) = (char *)this + 584;
  v2 = (char **)*((_QWORD *)this + 76);
  if ( *v2 != v1 || (v3 = (char **)v2[1], *v3 != (char *)v2) )
LABEL_9:
    __fastfail(3u);
  *((_QWORD *)v1 + 1) = v3;
  *v3 = v1;
  while ( 1 )
  {
    v4 = *(_QWORD **)v1;
    if ( *(char **)v1 == v1 )
      break;
    if ( (char *)v4[1] != v1 )
      goto LABEL_9;
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 )
      goto LABEL_9;
    *(_QWORD *)v1 = v5;
    *(_QWORD *)(v5 + 8) = v1;
    operator delete(v4, 0x610uLL);
  }
  *((_QWORD *)v1 + 2) = v1;
  *((_QWORD *)v1 + 3) = v1;
  *((_QWORD *)v1 + 1) = v1 + 16;
  *(_QWORD *)v1 = v1 + 16;
  *((_DWORD *)v1 + 392) = 0;
}
