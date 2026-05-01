/*
 * XREFs of ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x18013898C
 * Callers:
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18013835C (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x1803056C4 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180139A74 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18029E6F0 (-OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveApp::CImmersiveWindowCollection::_RemoveWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        __int64 a2)
{
  char *v4; // r14
  struct ITaskWindow *v5; // rbx

  v4 = (char *)this + 160;
  v5 = *(struct ITaskWindow **)(*((_QWORD *)this + 20) + 8 * a2);
  if ( v5 )
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v5 + 8LL))(v5);
  CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
    v4,
    a2);
  (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)v5 + 248LL))(v5, 0LL);
  CSplashScreen::OnViewRemoved(*((CSplashScreen **)this + 30), v5);
  if ( v5 )
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v5 + 16LL))(v5);
}
