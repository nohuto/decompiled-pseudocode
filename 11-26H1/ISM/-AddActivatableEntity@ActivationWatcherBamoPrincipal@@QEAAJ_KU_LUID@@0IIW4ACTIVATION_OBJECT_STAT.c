/*
 * XREFs of ?AddActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJ_KU_LUID@@0IIW4ACTIVATION_OBJECT_STATE@@@Z @ 0x180026FA8
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x1800278E4 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@QEAAJPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800270E8 (-Add@-$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBam.c)
 *     ??0ActivatableEntityBamoPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@_K@Z @ 0x180027160 (--0ActivatableEntityBamoPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800AF248 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ActivationWatcherBamoPrincipal::AddActivatableEntity(
        ActivationWatcherBamoPrincipal *a1,
        __int64 a2,
        struct _LUID a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  ActivatableEntityBamoPrincipal *v10; // rax
  __int64 v11; // rcx
  struct ISMBamos_AutoBamos::BamoConnection *v12; // rdx
  ActivatableEntityBamoPrincipal *v13; // rdi
  char *v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  struct _LUID v18; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _LUID v20; // [rsp+60h] [rbp+18h] BYREF

  v20 = a3;
  v10 = (ActivatableEntityBamoPrincipal *)operator new(0x60uLL);
  v18 = (struct _LUID)v10;
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  if ( *(int *)(v11 + 8) <= 0 )
    v12 = 0LL;
  else
    v12 = *(struct ISMBamos_AutoBamos::BamoConnection **)(v11 + 16);
  v13 = ActivatableEntityBamoPrincipal::ActivatableEntityBamoPrincipal(v10, v12, a4);
  v14 = (char *)v13 + 8;
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v13 + 1) + 32LL))((__int64)v13 + 8, a2);
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v14 + 80LL))(v14, a5);
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v14 + 96LL))(v14, a6);
  (*(void (__fastcall **)(char *, struct _LUID *))(*(_QWORD *)v14 + 64LL))(v14, &v20);
  v15 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)a1 + 1) + 32LL))((_QWORD *)a1 + 1);
  v16 = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>,BamoActivatableEntityPrincipal *>::Add(
          v15,
          v13);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
      (const char *)(unsigned int)v16,
      v18.LowPart);
  if ( (a7 & 4) != 0 )
  {
    v18 = 0LL;
    ActivationWatcherBamoPrincipal::HandleActivationChange(a1, &v20, &v18);
  }
  if ( v13 )
    (*(void (__fastcall **)(ActivatableEntityBamoPrincipal *))(*(_QWORD *)v13 + 8LL))(v13);
  return 0LL;
}
