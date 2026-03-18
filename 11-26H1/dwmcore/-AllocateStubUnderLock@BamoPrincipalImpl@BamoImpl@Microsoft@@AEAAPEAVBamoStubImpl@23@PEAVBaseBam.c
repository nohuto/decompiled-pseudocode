/*
 * XREFs of ?AllocateStubUnderLock@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl@23@@Z @ 0x1801C209C
 * Callers:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1801C1FB8 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x180009F50 (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct Microsoft::BamoImpl::BamoStubImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStubUnderLock(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  __int64 v2; // rax
  int v5; // eax
  __int64 *v6; // rbx
  struct Microsoft::BamoImpl::BamoStubImpl *result; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64 *))(v2 + 72))(
         this,
         a2,
         &v10);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A6,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v5,
      v8);
  v6 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  v6[3] = (__int64)this;
  wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(v6 + 4, (void (__fastcall ***)(_QWORD))a2);
  result = (struct Microsoft::BamoImpl::BamoStubImpl *)v6;
  v6[5] = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v6;
  v6[6] = *((_QWORD *)a2 + 7);
  *((_QWORD *)a2 + 7) = v6;
  return result;
}
