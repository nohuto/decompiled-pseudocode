/*
 * XREFs of ?OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180050A50
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180035E18 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::OnApplicationViewChangedGameMode(
        __int64 a1,
        struct IApplicationView *a2,
        int a3)
{
  __int64 *v6; // r8
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rax
  std::_Ref_count_base *v11; // rdi

  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( a3 == 7 || !a3 )
  {
    v6 = *(__int64 **)(a1 + 264);
    v7 = (__int64 *)v6[1];
    v8 = v6;
    if ( !*((_BYTE *)v7 + 25) )
    {
      do
      {
        if ( v7[4] >= (unsigned __int64)a2 )
          v8 = v7;
        v9 = v7 + 2;
        if ( v7[4] >= (unsigned __int64)a2 )
          v9 = v7;
        v7 = (__int64 *)*v9;
      }
      while ( !*(_BYTE *)(*v9 + 25) );
    }
    if ( !*((_BYTE *)v8 + 25) && (unsigned __int64)a2 >= v8[4] && v8 != v6 )
    {
      v10 = v8[6];
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v11 = (std::_Ref_count_base *)v8[6];
      BroadcastDVRComponent::EvaluateAppForGameMode((Windows::Internal::String **)a1, a2, (HWND *)v8[5]);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
    }
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
}
