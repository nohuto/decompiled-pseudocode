/*
 * XREFs of ??$destruct_range@VCPreComputeSubTreeContext@@@detail@@YAXPEAVCPreComputeSubTreeContext@@0@Z @ 0x1801756E8
 * Callers:
 *     ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x180175418 (--$emplace_back@PEAVCVisualTree@@@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCP.c)
 * Callees:
 *     ??1CPreComputeSubTreeContext@@QEAA@XZ @ 0x180175834 (--1CPreComputeSubTreeContext@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<CPreComputeSubTreeContext>(
        CPreComputeSubTreeContext *this,
        CPreComputeSubTreeContext *a2)
{
  CPreComputeSubTreeContext *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CPreComputeSubTreeContext::~CPreComputeSubTreeContext(v3);
      v3 = (CPreComputeSubTreeContext *)((char *)v3 + 352);
    }
    while ( v3 != a2 );
  }
}
