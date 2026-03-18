/*
 * XREFs of ?ResolveTransformParent@CVisual@@IEBA_NPEBVCVisualTree@@@Z @ 0x1801808A0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::ResolveTransformParent(CVisual *this, const struct CVisualTree *a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE *v5; // r9
  __int64 v6; // rdx
  _QWORD **v7; // rcx
  _QWORD *v8; // rcx

  v2 = (_DWORD *)*((_QWORD *)this + 28);
  v3 = 0LL;
  if ( (*v2 & 0x4000000) == 0 )
    return v3 != 0;
  v4 = (unsigned int)v2[1];
  v5 = v2 + 2;
  v6 = 0LL;
  if ( (_DWORD)v4 )
  {
    while ( *v5 != 6 )
    {
      v6 = (unsigned int)(v6 + 1);
      ++v5;
      if ( (unsigned int)v6 >= (unsigned int)v4 )
        goto LABEL_9;
    }
    goto LABEL_4;
  }
LABEL_9:
  if ( (unsigned int)v6 < (unsigned int)v4 )
  {
LABEL_4:
    v7 = (_QWORD **)((char *)&v2[2 * v6] + ((v4 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_5;
  }
  v7 = 0LL;
LABEL_5:
  v8 = *v7;
  if ( v8 )
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 192LL))(*v8);
  return v3 != 0;
}
