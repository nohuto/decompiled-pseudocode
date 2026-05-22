/*
 * XREFs of ?Materialize_BamoInputSpacePayloadProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800888C0
 * Callers:
 *     ?Thunk_Materialize_BamoInputSpacePayloadProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800888B0 (-Thunk_Materialize_BamoInputSpacePayloadProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeer.c)
 * Callees:
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x18004D054 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoInputSpacePayloadProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v10; // [rsp+50h] [rbp+18h]

  v10 = operator new(0x50uLL);
  *v10 = &BamoInputSpacePayloadProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v10[1] = &BamoInputSpacePayloadProxy::`vftable'{for `IInputSpacePayloadProxy'};
  *((_DWORD *)v10 + 6) = 0;
  v10[4] = 0LL;
  v10[2] = &BamoImpl::BamoInputSpacePayloadProxyImpl::`vftable';
  v10[5] = 0LL;
  v10[6] = 0LL;
  *((_DWORD *)v10 + 14) = 0;
  v10[8] = 0LL;
  *((_DWORD *)v10 + 18) = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 56LL))(v10);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v4 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v4 + 24) = a2;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 40LL))(
         v5,
         *((unsigned int *)this + 9),
         a2,
         v4);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD6E1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
