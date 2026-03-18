/*
 * XREFs of ?Add@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x180153F3C
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800A72E0 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180152D28 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801555A0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Add(
        int *a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rax
  unsigned int v5; // edi
  int v6; // r14d
  __int64 v7; // rbp
  int v8; // ebx
  char *v9; // rax
  char *v10; // rcx
  char *v11; // rcx

  v2 = a1[2];
  v5 = 1;
  v6 = v2 + 1;
  if ( (int)v2 + 1 <= 0 )
    return 0;
  if ( (_DWORD)v2 == a1[3] )
  {
    if ( (int)v2 <= 0x3FFFFFFF )
    {
      v7 = a1[2];
      if ( v2 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v8 = 2;
        if ( a1[3] >= 2 )
          v8 = v2 + ((int)v2 >> 1);
        v9 = (char *)((_DWORD)v2 ? DefaultHeap::Realloc(*(void **)a1, 8LL * v8) : DefaultHeap::AllocClear(8LL * v8));
        if ( v9 )
        {
          a1[3] = v8;
          *(_QWORD *)a1 = v9;
          goto LABEL_11;
        }
      }
    }
    return 0;
  }
  v7 = a1[2];
LABEL_11:
  v10 = *(char **)a1;
  a1[2] = v6;
  v11 = &v10[8 * v7];
  if ( v11 )
  {
    *(_QWORD *)v11 = *a2;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))v11);
  }
  return v5;
}
