/*
 * XREFs of ?find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180027F0C
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x1800278E4 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180027428 (-RemoveAt@-$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamo.c)
 *     ?GetItemAt@?$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_ActivatableEntityPrincipal_Stub@3456@$00$0A@$0A@@Bamo@Microsoft@@QEAAPEAVBamoActivatableEntityPrincipal@@I@Z @ 0x180028078 (-GetItemAt@-$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPr.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ActivationWatcherBamoPrincipal::find_and_remove_if(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // r14
  unsigned int i; // esi
  void (__fastcall ***ItemAt)(_QWORD); // rax
  void (__fastcall ***v7)(_QWORD); // rbx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void (__fastcall ***v17)(_QWORD); // [rsp+50h] [rbp+8h] BYREF
  __int64 *v18; // [rsp+58h] [rbp+10h]
  void (__fastcall ***v19)(_QWORD); // [rsp+60h] [rbp+18h]

  v18 = a2;
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8);
  v4 = (__int64)(v3[8] - v3[7]) >> 3;
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    ItemAt = (void (__fastcall ***)(_QWORD))Microsoft::Bamo::ListPrincipalDetails<BamoActivatableEntityPrincipal,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,1,0,0>::GetItemAt(
                                              v3,
                                              i);
    v7 = ItemAt;
    v19 = ItemAt;
    if ( ItemAt )
      (**ItemAt)(ItemAt);
    v17 = v7;
    v8 = a2[7];
    if ( !v8 )
    {
      std::_Xbad_function_call();
      break;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void (__fastcall ****)(_QWORD)))(*(_QWORD *)v8 + 16LL))(v8, &v17) )
    {
      v9 = Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::RemoveAt(
             v3,
             i);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xA8,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
          (const char *)(unsigned int)v9,
          v15);
      if ( v7 )
        (*v7)[1](v7);
      v11 = (__int64 *)a2[7];
      if ( v11 )
      {
        LOBYTE(v10) = v11 != a2;
        (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 32))(v11, v10);
        a2[7] = 0LL;
      }
      return 0LL;
    }
    if ( v7 )
      (*v7)[1](v7);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAC,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
    (const char *)0x8000FFFFLL,
    v15);
  v13 = (__int64 *)a2[7];
  if ( v13 )
  {
    v14 = *v13;
    LOBYTE(v14) = v13 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v13 + 32))(v13, v14);
    a2[7] = 0LL;
  }
  return 2147549183LL;
}
