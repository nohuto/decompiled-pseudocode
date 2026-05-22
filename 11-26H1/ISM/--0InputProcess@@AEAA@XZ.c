/*
 * XREFs of ??0InputProcess@@AEAA@XZ @ 0x1800CB948
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x180088C68 (--0DeviceInputHost@@AEAA@XZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180043718 (-InternalRelease@-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEBAXXZ @ 0x18007F9FC (-InternalAddRef@-$ComPtr@VInputProcess@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x180088E04 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 *     ?InternalRelease@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ @ 0x18008900C (-InternalRelease@-$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AABCC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&___lambda_b23d6f9d7655be589c0ae99ef9363a00__0_ @ 0x1800CB830 (std--_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft--WRL--ComPtr_B.c)
 *     ?Start@InputProcess@InputTraceLogging@@SAXXZ @ 0x1800CC5B8 (-Start@InputProcess@InputTraceLogging@@SAXXZ.c)
 *     ?DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x180130B5C (-DeferUntilBootstrapped@InputSystemInternalClientConnection@@QEAAXV-$function@$$A6AXAEAV-$ComPtr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
InputProcess *__fastcall InputProcess::InputProcess(InputProcess *this)
{
  Microsoft::Bamo::BaseBamoConnection **v2; // rax
  Microsoft::Bamo::BaseBamoConnection *v3; // rcx
  const char *v4; // r9
  _QWORD *v5; // rsi
  struct Microsoft::Bamo::BaseBamoConnection *v6; // rdx
  __int64 v7; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v8; // rbx
  Microsoft::Bamo::BaseBamoConnection *v10; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v11[7]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  Microsoft::Bamo::BaseBamoConnection *v14; // [rsp+98h] [rbp+28h] BYREF
  InputProcess *v15; // [rsp+A0h] [rbp+30h] BYREF

  *(_QWORD *)this = &BamoInputProcessPrincipalOwner::`vftable';
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &InputProcess::`vftable'{for `BamoInputProcessPrincipalOwner'};
  *((_QWORD *)this + 1) = &InputProcess::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  InputTraceLogging::InputProcess::Start();
  v2 = InputSystemInternalClientConnection::GetForCurrentThread(&v14);
  v3 = 0LL;
  if ( &v10 != v2 )
  {
    v3 = *v2;
    *v2 = 0LL;
  }
  v10 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v3;
  Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(&v14);
  if ( !*((_QWORD *)this + 4) )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      14LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocess\\lib\\inputprocess.cpp",
      v4);
  v5 = operator new(0x40uLL);
  v14 = (Microsoft::Bamo::BaseBamoConnection *)v5;
  v6 = (struct Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 4);
  *v5 = &BamoInputProcessPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v5[1] = &BamoInputProcessPrincipal::`vftable'{for `IInputProcessPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v5 + 2), v6);
  v5[2] = &BamoImpl::BamoInputProcessPrincipalImpl::`vftable';
  v5[7] = this;
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *((_QWORD *)this + 3) = v5;
  v15 = this;
  Microsoft::WRL::ComPtr<InputProcess>::InternalAddRef((__int64 *)&v15);
  v8 = (struct Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 4);
  v14 = this;
  Microsoft::WRL::ComPtr<InputProcess>::InternalAddRef((__int64 *)&v14);
  v12 = 0LL;
  v12 = std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy____::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy______lambda_b23d6f9d7655be589c0ae99ef9363a00__0_(
          v11,
          &v14);
  InputSystemInternalClientConnection::DeferUntilBootstrapped(v8);
  Microsoft::WRL::ComPtr<InputProcess>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<InputProcess>::InternalRelease((__int64 *)&v15);
  return this;
}
