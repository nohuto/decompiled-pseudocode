/*
 * XREFs of ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18017A510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180178A9C (--$_Emplace_reallocate@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@-$vect.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18017A698 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ControllerNavigationManager::RegisterOverride(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationManagerStub *a2,
        struct BamoControllerNavigationOverrideProxy *a3)
{
  _QWORD *v5; // rdi
  struct BamoControllerNavigationOverrideProxy *v6; // rbx
  struct BamoControllerNavigationOverrideProxy **v7; // rdx
  __int64 (__fastcall ***v9[3])(_QWORD); // [rsp+20h] [rbp-18h] BYREF

  v5 = (_QWORD *)((char *)this + 200);
  v6 = a3;
  v9[0] = (__int64 (__fastcall ***)(_QWORD))a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(v9);
  v7 = (struct BamoControllerNavigationOverrideProxy **)v5[1];
  if ( v7 == (struct BamoControllerNavigationOverrideProxy **)v5[2] )
  {
    std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>(
      v5,
      v7,
      v9);
    v6 = (struct BamoControllerNavigationOverrideProxy *)v9[0];
  }
  else
  {
    *v7 = 0LL;
    if ( v7 != (struct BamoControllerNavigationOverrideProxy **)v9 )
    {
      *v7 = v6;
      v6 = 0LL;
    }
    v5[1] += 8LL;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct BamoControllerNavigationOverrideProxy *))(*(_QWORD *)v6 + 8LL))(v6);
  ControllerNavigationManager::SetCurrentStateWithOverride(this, a3);
  return 0LL;
}
