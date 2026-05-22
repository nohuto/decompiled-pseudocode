/*
 * XREFs of ?Materialize_BamoDockableDeviceProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011FD04
 * Callers:
 *     ?Thunk_Materialize_BamoDockableDeviceProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180128CE0 (-Thunk_Materialize_BamoDockableDeviceProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImp.c)
 * Callees:
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x18004D054 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoDockableDeviceProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v10; // [rsp+50h] [rbp+18h]

  v10 = (char *)operator new(0x50uLL);
  *(_QWORD *)v10 = &BamoDockableDeviceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v10 + 1) = &BamoDockableDeviceProxy::`vftable'{for `IDockableDeviceProxy'};
  *((_DWORD *)v10 + 6) = 0;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_QWORD *)v10 + 2) = &BamoImpl::BamoDockableDeviceProxyImpl::`vftable';
  *((_QWORD *)v10 + 5) = 0LL;
  *((_QWORD *)v10 + 6) = 0LL;
  *(_OWORD *)(v10 + 56) = 0LL;
  *((_QWORD *)v10 + 9) = 0LL;
  v4 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 56LL))(v10);
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
      (void *)0xD41F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
