/*
 * XREFs of ?OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x1801799F0
 * Callers:
 *     ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18017B620 (-OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ControllerNavigationManager::OverrideStateChanged(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationOverrideProxy *a2,
        __int64 a3,
        const char *a4)
{
  struct BamoControllerNavigationOverrideProxy **v6; // rbx
  struct BamoControllerNavigationOverrideProxy **v7; // r14
  struct BamoControllerNavigationOverrideProxy *v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct BamoControllerNavigationOverrideProxy *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = (struct BamoControllerNavigationOverrideProxy **)*((_QWORD *)this + 25);
  v7 = (struct BamoControllerNavigationOverrideProxy **)*((_QWORD *)this + 26);
  while ( v6 != v7 )
  {
    v10 = *v6;
    v8 = v10;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v10);
    if ( v8 )
      (*(void (__fastcall **)(struct BamoControllerNavigationOverrideProxy *))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v8 == a2 )
      break;
    ++v6;
  }
  if ( v6 == *((struct BamoControllerNavigationOverrideProxy ***)this + 26) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x19F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      a4);
  ControllerNavigationManager::SetCurrentStateWithOverride(this, a2);
}
