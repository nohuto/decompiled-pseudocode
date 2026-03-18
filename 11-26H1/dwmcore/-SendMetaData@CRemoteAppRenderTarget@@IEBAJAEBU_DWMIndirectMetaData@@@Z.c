/*
 * XREFs of ?SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x18020619C
 * Callers:
 *     ?DestroyWindow@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18020613C (-DestroyWindow@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180256610 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SendMetaData(
        CRemoteAppRenderTarget *this,
        const struct _DWMIndirectMetaData *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, CRemoteAppRenderTarget **); // rdi
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  CRemoteAppRenderTarget *v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, CRemoteAppRenderTarget **); // [rsp+60h] [rbp+30h] BYREF

  v10 = this;
  v3 = **((_QWORD **)g_pComposition + 77);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(**((_QWORD **)g_pComposition + 77));
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 224LL))(v3);
    wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
      &v11,
      v4);
    v5 = v11;
    if ( v11 )
    {
      v10 = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v10);
      v6 = (**v5)(v5, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v10);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x291u, 0LL);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(CRemoteAppRenderTarget *, const struct _DWMIndirectMetaData *))(*(_QWORD *)v10 + 184LL))(
               v10,
               a2);
        v7 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x293u, 0LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
    }
    else
    {
      v7 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x297u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    v7 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x29Cu, 0LL);
  }
  return v7;
}
