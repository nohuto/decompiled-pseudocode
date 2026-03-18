/*
 * XREFs of ?RemoveRange@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x180154684
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800A7AF0 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180152D28 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801555A0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::RemoveRange(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  int v4; // ecx
  void *v5; // rax
  void *v6; // rax

  v2 = a2;
  if ( a2 < 0 || a2 + 1 > *(_DWORD *)(a1 + 16) )
    return 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * a2));
  v4 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)v2 + 1 != v4 )
  {
    memmove_0((void *)(*(_QWORD *)a1 + 4 * v2), (const void *)(*(_QWORD *)a1 + 4 * (v2 + 1)), 4LL * (v4 - (int)v2 - 1));
    memmove_0(
      (void *)(*(_QWORD *)(a1 + 8) + 8 * v2),
      (const void *)(*(_QWORD *)(a1 + 8) + 8 * (v2 + 1)),
      8LL * (*(_DWORD *)(a1 + 16) - (int)v2 - 1));
  }
  v5 = DefaultHeap::Realloc(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v5 )
    *(_QWORD *)a1 = v5;
  v6 = DefaultHeap::Realloc(*(void **)(a1 + 8), 8LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v6 )
    *(_QWORD *)(a1 + 8) = v6;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
