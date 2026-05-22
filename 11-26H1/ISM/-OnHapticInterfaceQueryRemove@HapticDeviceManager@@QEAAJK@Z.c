/*
 * XREFs of ?OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z @ 0x18018FC58
 * Callers:
 *     ?OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DF700 (-OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?GetItemAt@?$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_ActivatableEntityPrincipal_Stub@3456@$00$0A@$0A@@Bamo@Microsoft@@QEAAPEAVBamoActivatableEntityPrincipal@@I@Z @ 0x180028078 (-GetItemAt@-$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPr.c)
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800812E8 (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 *     ??0?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800C7EA4 (--0-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEA.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8028 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticDeviceManager::OnHapticInterfaceQueryRemove(HapticDeviceManager *this, int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 ItemAt; // rax
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
    &v8,
    *((void (__fastcall ****)(_QWORD))this + 9));
  v3 = v8;
  v4 = (__int64)(v8[8] - v8[7]) >> 3;
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    while ( 1 )
    {
      ItemAt = Microsoft::Bamo::ListPrincipalDetails<BamoActivatableEntityPrincipal,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,1,0,0>::GetItemAt(
                 v3,
                 v5);
      if ( *(_DWORD *)(ItemAt + 624) == a2 )
        break;
      if ( ++v5 >= (unsigned int)v4 )
        goto LABEL_6;
    }
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(ItemAt + 88),
      (void *)0xFFFFFFFFFFFFFFFFLL);
  }
LABEL_6:
  wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v8);
  return 0LL;
}
