/*
 * XREFs of ??1CPreComputeSubTreeContext@@QEAA@XZ @ 0x180175834
 * Callers:
 *     ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x180175418 (--$emplace_back@PEAVCVisualTree@@@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCP.c)
 *     ??$destruct_range@VCPreComputeSubTreeContext@@@detail@@YAXPEAVCPreComputeSubTreeContext@@0@Z @ 0x1801756E8 (--$destruct_range@VCPreComputeSubTreeContext@@@detail@@YAXPEAVCPreComputeSubTreeContext@@0@Z.c)
 *     ?clear_region@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180175724 (-clear_region@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCPreComputeSubTreeCont.c)
 * Callees:
 *     <none>
 */

void __fastcall CPreComputeSubTreeContext::~CPreComputeSubTreeContext(CPreComputeSubTreeContext *this)
{
  void *v1; // rdi
  void *v3; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v5; // rax

  v1 = (void *)*((_QWORD *)this + 37);
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
  v3 = (void *)*((_QWORD *)this + 34);
  if ( v3 )
  {
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v3);
  }
  CBspPreComputeHelper::~CBspPreComputeHelper(this);
}
