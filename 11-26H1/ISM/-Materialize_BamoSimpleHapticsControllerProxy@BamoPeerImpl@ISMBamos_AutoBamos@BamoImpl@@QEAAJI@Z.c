/*
 * XREFs of ?Materialize_BamoSimpleHapticsControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180121834
 * Callers:
 *     ?Thunk_Materialize_BamoSimpleHapticsControllerProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180128F70 (-Thunk_Materialize_BamoSimpleHapticsControllerProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBa.c)
 * Callees:
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x18004D054 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??0BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAA@XZ @ 0x180116EF8 (--0BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoSimpleHapticsControllerProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v11; // [rsp+50h] [rbp+18h]

  v11 = operator new(0x50uLL);
  *v11 = &BamoSimpleHapticsControllerProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v11[1] = &BamoSimpleHapticsControllerProxy::`vftable'{for `ISimpleHapticsControllerProxy'};
  BamoImpl::BamoSimpleHapticsControllerProxyImpl::BamoSimpleHapticsControllerProxyImpl((BamoImpl::BamoSimpleHapticsControllerProxyImpl *)(v11 + 2));
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v5 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v5 + 24) = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v6 + 40LL))(
         v6,
         *((unsigned int *)this + 9),
         a2,
         v5);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD8D6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
  return 0LL;
}
