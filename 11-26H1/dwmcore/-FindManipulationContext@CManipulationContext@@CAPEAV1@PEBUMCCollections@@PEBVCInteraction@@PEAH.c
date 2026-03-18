/*
 * XREFs of ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x1801E382C
 * Callers:
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180152D28 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801D59AC (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?FindDesktopTree@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAU_LUID@@@Z @ 0x180226F70 (-FindDesktopTree@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAU_LUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CManipulationContext *__fastcall CManipulationContext::FindManipulationContext(
        const struct MCCollections *a1,
        const struct CInteraction *a2,
        int *a3)
{
  __int64 v3; // rdi
  const struct CInteraction *v4; // rbp
  int v5; // ebx
  __int64 v6; // r14

  v3 = 0LL;
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  while ( v5 < *((_DWORD *)a1 + 8) )
  {
    a3 = (int *)(*(__int64 (__fastcall **)(_QWORD, const struct CInteraction *, int *))(**(_QWORD **)(v6 + *((_QWORD *)a1 + 3))
                                                                                      + 16LL))(
                  *(_QWORD *)(v6 + *((_QWORD *)a1 + 3)),
                  a2,
                  a3);
    a2 = (const struct CInteraction *)((char *)v4 + 72);
    if ( a3 == (int *)(((unsigned __int64)v4 + 72) & -(__int64)(v4 != 0LL)) )
      return *(struct CManipulationContext **)(*((_QWORD *)a1 + 3) + 8LL * v5);
    ++v5;
    v6 += 8LL;
  }
  return (struct CManipulationContext *)v3;
}
