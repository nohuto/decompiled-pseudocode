/*
 * XREFs of ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x180204C60
 * Callers:
 *     ?ResetBuffers@CLegacyStereoSwapChain@@MEAAJXZ @ 0x1802A6D70 (-ResetBuffers@CLegacyStereoSwapChain@@MEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801CBAD8 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil.c)
 *     ??1?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801CBD44 (--1-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reserve_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCBufferResource@CLegacySwapChain@@_K0@Z @ 0x1801CF6DC (-reserve_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResour.c)
 *     ?CreateBackBuffer@CLegacySwapChain@@IEAAJPEAUID3D11Texture2D@@@Z @ 0x1801D0D80 (-CreateBackBuffer@CLegacySwapChain@@IEAAJPEAUID3D11Texture2D@@@Z.c)
 *     ?Create@CLegacySwapChainBuffer@@SAJPEAVCLegacySwapChain@@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z @ 0x1801D1590 (-Create@CLegacySwapChainBuffer@@SAJPEAVCLegacySwapChain@@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801E07A0 (-clear@-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V.c)
 *     ?ReleaseBackBuffer@CLegacySwapChain@@IEAAXXZ @ 0x1801E2E08 (-ReleaseBackBuffer@CLegacySwapChain@@IEAAXXZ.c)
 *     ?clear@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180205070 (-clear@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResource@CLegac.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::ResetBuffers(CLegacySwapChain *this)
{
  unsigned int v2; // esi
  unsigned int i; // r15d
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, struct ID3D11Texture2D **); // rbx
  int v6; // eax
  int BackBuffer; // eax
  __int64 v8; // rcx
  const struct D2D_SIZE_U *v9; // rax
  int v10; // eax
  __int64 v11; // r8
  struct ID3D11Texture2D *v12; // rdi
  _QWORD *v13; // rbx
  struct CLegacySwapChainBuffer *v14; // rbx
  __int64 v15; // rdx
  _BYTE v17[24]; // [rsp+30h] [rbp-18h] BYREF
  struct ID3D11Texture2D *v18; // [rsp+90h] [rbp+48h] BYREF
  struct CLegacySwapChainBuffer *v19; // [rsp+98h] [rbp+50h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+60h] BYREF

  v2 = 0;
  CLegacySwapChain::ReleaseBackBuffer(this);
  detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::clear((char *)this + 304);
  detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 47);
  *((_BYTE *)this + 277) = 0;
  if ( *((_QWORD *)this + 36) )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *((_DWORD *)this + 124) )
        return v2;
      v18 = 0LL;
      v4 = *((_QWORD *)this + 36);
      v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct ID3D11Texture2D **))(*(_QWORD *)v4 + 72LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v18);
      v6 = v5(v4, i, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v18);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180373840, 2u, v6, 0x376u, 0LL);
        goto LABEL_13;
      }
      if ( !i )
      {
        BackBuffer = CLegacySwapChain::CreateBackBuffer(this, v18);
        v2 = BackBuffer;
        if ( BackBuffer < 0 )
          break;
      }
      v8 = *((_QWORD *)this + 37);
      v19 = 0LL;
      v9 = (const struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 88LL))(v8, v17);
      v10 = CLegacySwapChainBuffer::Create(this, v9, i, &v19);
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180373840, 2u, v10, 0x382u, 0LL);
        wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(&v19);
        goto LABEL_13;
      }
      v12 = v18;
      v13 = (_QWORD *)detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::reserve_region(
                        (__int64 *)this + 38,
                        (__int64)(*((_QWORD *)this + 39) - *((_QWORD *)this + 38)) >> 4,
                        v11);
      wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
        v13,
        (__int64)v12);
      v13[1] = 0LL;
      (**(void (__fastcall ***)(_QWORD, GUID *))*v13)(*v13, &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b);
      v14 = v19;
      v15 = (__int64)(*((_QWORD *)this + 48) - *((_QWORD *)this + 47)) >> 3;
      v19 = 0LL;
      v21 = 0LL;
      v20 = 0LL;
      *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::reserve_region(
                   (__int64 *)this + 47,
                   v15) = v14;
      wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(&v20);
      wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(&v21);
      wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(&v19);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180373840, 2u, BackBuffer, 0x37Bu, 0LL);
LABEL_13:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
    return v2;
  }
  v2 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180373840, 2u, -2003304307, 0x38Au, 0LL);
  return v2;
}
