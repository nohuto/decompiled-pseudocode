/*
 * XREFs of ?Snapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801904D0
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18009A68C (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18009B688 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x18009B720 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180128D84 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x180186920 (-GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1801D844C (-IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18026247C (-IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this)
{
  CDisplayManager *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // xmm1_8
  struct IRenderTargetBitmap *v7; // rdi
  struct D2D_SIZE_U *v8; // rax
  struct D2D_SIZE_U v9; // rdx
  char *v10; // rax
  char v11; // r13
  __int64 *v12; // rbx
  char v13; // r12
  CCachedVisualImage::CCachedTarget *v14; // r15
  __int64 RenderTargetInfo; // rax
  __int64 v16; // rcx
  struct IRenderTargetBitmap *v18; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v19[24]; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v20[24]; // [rsp+58h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+70h] [rbp+Fh] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &VISUALTREEREMOTING_SKIP_RENDER_ON_SERVER,
        v3,
        1u,
        &v21);
    *((_BYTE *)this + 1601) = 1;
    *((_QWORD *)this + 199) = *(_QWORD *)(*(__int64 (__fastcall **)(char *, struct _EVENT_DATA_DESCRIPTOR *))(*((_QWORD *)this + 10) + 32LL))(
                                           (char *)this + 80,
                                           &v21);
  }
  else
  {
    CDisplayManager::GetPrimaryAdapterLuid(v2, v19);
    *(_DWORD *)&v19[8] = -1;
    *(_WORD *)&v19[21] = 0;
    v19[23] = 0;
    *(_QWORD *)&v19[12] = 0LL;
    v19[20] = 0;
    v4 = **((_QWORD **)g_pComposition + 77);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)(v4 + 8) + 24LL))(
             v4 + 8,
             &v21);
      v6 = *(_QWORD *)(v5 + 16);
      *(_OWORD *)v19 = *(_OWORD *)v5;
      *(_QWORD *)&v19[16] = v6;
    }
    v18 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v18);
    if ( (int)CCachedVisualImage::EnsureRenderTargetBitmap(this, (const struct RenderTargetInfo *)v19, &v18) >= 0 )
    {
      v7 = v18;
      v8 = (struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(char *, struct _EVENT_DATA_DESCRIPTOR *))(*((_QWORD *)v18 + 1) + 32LL))(
                                  (char *)v18 + 8,
                                  &v21);
      v9 = *v8;
      *((struct D2D_SIZE_U *)this + 199) = *v8;
      CCachedVisualImage::RemoveInvalidTargets(this, v9);
      v10 = (char *)this + 168;
      v11 = 0;
      v12 = (__int64 *)*((_QWORD *)this + 21);
      v13 = 0;
      while ( 1 )
      {
        if ( v12 == *((__int64 **)this + 22) )
        {
          if ( !v11 )
          {
            if ( v13 )
            {
              v16 = *((_QWORD *)g_pComposition + 77);
              if ( *(_BYTE *)(v16 + 751) )
              {
                *(_DWORD *)&v19[16] = *(_DWORD *)(v16 + 732);
                v21.Ptr = 0LL;
                wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v21);
                CCachedVisualImage::EnsureRenderTargetBitmap(
                  this,
                  (const struct RenderTargetInfo *)v19,
                  (struct IRenderTargetBitmap **)&v21);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
              }
            }
          }
          *((_BYTE *)this + 1601) = 1;
          goto LABEL_26;
        }
        v14 = (CCachedVisualImage::CCachedTarget *)*v12;
        if ( *(struct IRenderTargetBitmap **)(*v12 + 8) != v7 )
        {
          if ( *((_BYTE *)v14 + 56) )
            goto LABEL_14;
          RenderTargetInfo = CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(*v12, (__int64)v20);
          if ( (*(_DWORD *)(RenderTargetInfo + 8) == -1 || *(_DWORD *)(RenderTargetInfo + 8) == -3)
            && !CCachedVisualImage::CCachedTarget::IsHardwareProtected(v14)
            && !CCachedVisualImage::CCachedTarget::IsHDR(v14) )
          {
            break;
          }
        }
        if ( CCachedVisualImage::CCachedTarget::IsHDR(v14) )
        {
          v11 = 1;
        }
        else if ( *((_BYTE *)v14 + 57) )
        {
          v13 = 1;
        }
        ++v12;
LABEL_15:
        v10 = (char *)this + 168;
      }
      v10 = (char *)this + 168;
LABEL_14:
      v12 = (__int64 *)*std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
                          (__int64)v10,
                          &v21,
                          (__int64)v12);
      goto LABEL_15;
    }
LABEL_26:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  }
  if ( *((_BYTE *)this + 1601) )
  {
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 72LL))(this);
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 216LL))(this);
  }
  else
  {
    *((_BYTE *)this + 1600) = 1;
  }
  return 0LL;
}
