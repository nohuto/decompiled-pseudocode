/*
 * XREFs of ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180034B8C
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034920 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ?Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180034D78 (-Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplaySca.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003638C (--$_Freenode@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_de.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1800FAE08 (-Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Cor.c)
 *     ?CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1801B6AC0 (-CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplaySc.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180299DC8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDD.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDisplayCachedScanout@@PEAV1@_KAEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180299FBC (--$_Uninitialized_value_construct_n@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::FindCachedDesktopScanout(
        CDDisplaySwapChain *this,
        char a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        struct Windows::Devices::Display::Core::IDisplayScanout **a4)
{
  CDDisplayCachedScanout **v4; // rbx
  CDDisplayCachedScanout *v6; // rcx
  unsigned int v7; // r14d
  unsigned int v11; // edx
  CDDisplayCachedScanout *v12; // r15
  __int64 *v13; // rbx
  unsigned int v14; // r9d
  struct Windows::Devices::Display::Core::IDisplayScanout *v15; // rbp
  struct Windows::Devices::Display::Core::IDisplayScanout *v16; // rcx
  __int64 v18; // rax
  __int64 *v19; // rdi
  __int64 v21; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v22; // rcx
  int v23; // eax
  unsigned int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-38h]
  unsigned int v26; // [rsp+20h] [rbp-38h]
  unsigned int v27; // [rsp+20h] [rbp-38h]
  struct Windows::Devices::Display::Core::IDisplayScanout *v28; // [rsp+60h] [rbp+8h] BYREF

  v4 = (CDDisplayCachedScanout **)((char *)this + 296);
  v6 = (CDDisplayCachedScanout *)*((_QWORD *)this + 38);
  v7 = 0;
  if ( v6 == *v4 && *((_DWORD *)this + 128) )
  {
    if ( *((unsigned int *)this + 128) <= 0xCCCCCCCCCCCCCCCDuLL * ((v4[2] - *v4) >> 3) )
      v4[1] = (CDDisplayCachedScanout *)std::_Uninitialized_value_construct_n<std::allocator<CDDisplayCachedScanout>>(v6);
    else
      std::vector<CDDisplayCachedScanout>::_Resize_reallocate<std::_Value_init_tag>(v4);
  }
  if ( a2 )
    v11 = (unsigned int)(*((_DWORD *)this + 128) + *((_DWORD *)this + 131) - 1) % *((_DWORD *)this + 128);
  else
    v11 = *((_DWORD *)this + 131);
  v28 = 0LL;
  v12 = (CDDisplayCachedScanout *)((char *)*v4 + 40 * v11);
  v13 = (__int64 *)**((_QWORD **)this + 40);
  if ( CDDisplayCachedScanout::Matches(v12, 1u, a3, (unsigned int)a4, v25, &v28) )
  {
    v15 = v28;
  }
  else
  {
    v22 = v28;
    v28 = 0LL;
    if ( v22 )
      (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v22 + 16LL))(v22);
    v23 = CDDisplaySwapChain::CreateScanout(this, 1u, a3, v14, v26, &v28);
    v7 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x525u, 0LL);
      v16 = v28;
      goto LABEL_8;
    }
    v15 = v28;
    CDDisplayCachedScanout::Set(v12, 1u, a3, v24, v27, v28);
  }
  while ( v13 != *((__int64 **)this + 40) )
  {
    v18 = v13[2];
    v19 = (__int64 *)*v13;
    if ( (*(_DWORD *)(v18 + 40))-- == 1 )
    {
      *(_QWORD *)v13[1] = *v13;
      v21 = *v13;
      *(_QWORD *)(v21 + 8) = v13[1];
      --*((_QWORD *)this + 41);
      std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>::_Freenode<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
        v21,
        v13);
    }
    v13 = v19;
  }
  v16 = 0LL;
  *a4 = v15;
LABEL_8:
  if ( v16 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v16 + 16LL))(v16);
  return v7;
}
