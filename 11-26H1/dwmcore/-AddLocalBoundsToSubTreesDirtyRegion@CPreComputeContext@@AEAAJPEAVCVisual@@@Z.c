/*
 * XREFs of ?AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180184D60
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::AddLocalBoundsToSubTreesDirtyRegion(
        CPreComputeContext *this,
        struct CVisual *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)this;
  v4 = *((_QWORD *)this + 1);
  while ( 1 )
  {
    if ( v2 == v4 )
      return 0LL;
    if ( !*(_DWORD *)(v2 + 340) && !*(_BYTE *)(*(_QWORD *)(v2 + 320) + 2324LL) )
    {
      v5 = (*(__int64 (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)a2 + 224LL))(a2, v2);
      v6 = v5;
      if ( v5 < 0 )
        break;
    }
    v2 += 352LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E0,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
