/*
 * XREFs of ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x180020748
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180187688 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x180490140 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x180490C70 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 * Callees:
 *     ?s_GetMTVHostType@CMultitaskingViewManager@@CA?AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingViewHost@@@Z @ 0x18002084C (-s_GetMTVHostType@CMultitaskingViewManager@@CA-AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingView.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewManager::_FindMTVHost(__int64 a1, int a2, int a3, _QWORD *a4, unsigned __int64 *a5)
{
  int v7; // ebx
  unsigned __int64 *v9; // rsi
  char v10; // di
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax

  v7 = a2;
  if ( a4 )
    *a4 = 0LL;
  v9 = a5;
  if ( a5 )
    *a5 = -1LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  while ( v11 < *(_QWORD *)(a1 + 296) && !v10 )
  {
    if ( ((unsigned int)CMultitaskingViewManager::s_GetMTVHostType(*(_QWORD *)(v12 + *(_QWORD *)(a1 + 288))) & v7) != 0 )
    {
      if ( a3 != 1
        || (v16 = *(_QWORD *)(a1 + 288),
            LODWORD(a5) = 0,
            (*(void (__fastcall **)(_QWORD, unsigned __int64 **))(**(_QWORD **)(v12 + v16) + 32LL))(
              *(_QWORD *)(v12 + v16),
              &a5),
            (_DWORD)a5) )
      {
        v10 = 1;
        if ( a4 )
        {
          v14 = (__int64 *)(v12 + *(_QWORD *)(a1 + 288));
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
          v15 = *v14;
          v7 = a2;
          *a4 = v15;
        }
        if ( v9 )
          *v9 = v11;
      }
    }
    ++v11;
    v12 += 16LL;
  }
  return v10 == 0 ? 0x8002802B : 0;
}
