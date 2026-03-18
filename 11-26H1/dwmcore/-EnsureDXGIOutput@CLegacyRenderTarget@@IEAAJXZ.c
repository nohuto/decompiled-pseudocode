/*
 * XREFs of ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18014921C
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801FC5DC (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1802532E0 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x1800FCA84 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x18014A368 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801B56D8 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x1801C9A10 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18021AA74 (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::EnsureDXGIOutput(CLegacyRenderTarget *this)
{
  char *v1; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // edx
  int DXGIOutput; // eax
  int v6; // eax
  unsigned int v7; // ecx
  struct CSyncLockGroup *Group; // rax
  __int64 v9; // r8
  char v10; // dl
  bool v11; // al
  __int64 v12; // rdx
  bool v13; // zf
  struct IDXGIOutputDWM *v14; // rdx
  struct IDXGIOutputDWM *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[28]; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+5Ch] [rbp-A4h]
  int v19; // [rsp+60h] [rbp-A0h]
  char v20; // [rsp+ACh] [rbp-54h]
  char v21; // [rsp+ADh] [rbp-53h]
  unsigned int v22; // [rsp+F4h] [rbp-Ch]

  v1 = (char *)this + 192;
  if ( *((_QWORD *)this + 24) )
  {
    return 0;
  }
  else
  {
    v4 = *((_DWORD *)this + 8024);
    v16[0] = 0LL;
    DXGIOutput = CDisplayManager::GetDXGIOutput(this, v4, v16);
    v3 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DXGIOutput, 0x380u, 0LL);
      if ( v16[0] )
        (*(void (__fastcall **)(struct IDXGIOutputDWM *))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
    }
    else
    {
      memset_0(v17, 0, 0xC8uLL);
      v6 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v16[0] + 32LL))(v16[0], v17);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x383u, 0LL);
      }
      else
      {
        v7 = v22;
        *((_DWORD *)this + 30) = v18;
        *((_DWORD *)this + 31) = v19;
        if ( v7 )
        {
          Group = CSyncLockGroup::GetGroup(v7);
          *((_QWORD *)this + 4063) = Group;
          *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                       (__int64 *)Group + 2,
                       (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3,
                       v9) = ((unsigned __int64)this + 160) & -(__int64)(this != 0LL);
        }
        v10 = v20;
        *((_BYTE *)this + 32513) = v21 & 1;
        v11 = (v10 & 8) != 0;
        v12 = v10 & 1;
        v13 = CCommonRegistryData::m_fShowDirtyRegions == 0;
        *((_BYTE *)this + 32514) = v11;
        if ( !v13 )
          v12 = 0LL;
        CTargetDirtyBase<8>::EnableTightDirtyRegion((char *)this + 30208, v12);
        v14 = v16[0];
        v16[0] = 0LL;
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(v1, v14);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v16);
    }
  }
  return v3;
}
