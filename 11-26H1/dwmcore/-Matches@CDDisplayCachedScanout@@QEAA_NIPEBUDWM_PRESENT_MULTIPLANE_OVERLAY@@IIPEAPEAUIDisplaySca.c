/*
 * XREFs of ?Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180034D78
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180034B8C (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180035C58 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags@@@details@wil@@QEAA_NXZ @ 0x18021F758 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags@@@detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDDisplayCachedScanout::Matches(
        CDDisplayCachedScanout *this,
        unsigned int a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        int a4,
        unsigned int a5,
        struct Windows::Devices::Display::Core::IDisplayScanout **a6)
{
  char v8; // r14
  unsigned int i; // r13d
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct Windows::Devices::Display::Core::IDisplayScanout *v23; // rbx
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+68h] [rbp+10h]
  int v27; // [rsp+78h] [rbp+20h] BYREF

  v27 = a4;
  v26 = a2;
  v8 = 1;
  if ( a2 == 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3)
    && *((_DWORD *)this + 8) == 1
    && !*((_DWORD *)this + 9) )
  {
    for ( i = 0; i < a2; ++i )
    {
      v10 = *(_QWORD *)this;
      v11 = 0LL;
      v12 = 88LL * i;
      v13 = (unsigned __int64)i << 7;
      v27 = 0;
      v14 = *(_QWORD *)((char *)a3 + v13 + 8);
      if ( v14 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 48LL))(v14, &v27);
        v11 = v15;
        if ( !v15 )
          return v15;
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags>::GetImpl'::`2'::impl) )
      {
        if ( *(_QWORD *)(v12 + v10 + 8) != v11
          || *(_DWORD *)(v12 + v10) != *(_DWORD *)((char *)a3 + v13)
          || *(_BYTE *)(v12 + v10 + 4) != (*((_BYTE *)a3 + v13 + 4) != 0)
          || *(_DWORD *)(v12 + v10 + 16) != v27 )
        {
          goto LABEL_46;
        }
        v16 = *(_QWORD *)(v12 + v10 + 20) - *(_QWORD *)((char *)a3 + v13 + 20);
        if ( !v16 )
          v16 = *(_QWORD *)(v12 + v10 + 28) - *(_QWORD *)((char *)a3 + v13 + 28);
        if ( v16 )
          goto LABEL_46;
        v17 = *(_QWORD *)(v12 + v10 + 36) - *(_QWORD *)((char *)a3 + v13 + 36);
        if ( !v17 )
          v17 = *(_QWORD *)(v12 + v10 + 44) - *(_QWORD *)((char *)a3 + v13 + 44);
        if ( v17 )
          goto LABEL_46;
        v18 = *(_QWORD *)(v12 + v10 + 52) - *(_QWORD *)((char *)a3 + v13 + 52);
        if ( !v18 )
          v18 = *(_QWORD *)(v12 + v10 + 60) - *(_QWORD *)((char *)a3 + v13 + 60);
        if ( v18
          || *(_DWORD *)(v12 + v10 + 68) != *(_DWORD *)((char *)a3 + v13 + 72)
          || *(_DWORD *)(v12 + v10 + 72) != *(_DWORD *)((char *)a3 + v13 + 92)
          || *(_DWORD *)(v12 + v10 + 76) != *(_DWORD *)((char *)a3 + v13 + 68) )
        {
          goto LABEL_46;
        }
        v19 = *(_DWORD *)(v12 + v10 + 80) == *(_DWORD *)((char *)a3 + v13 + 16);
      }
      else
      {
        if ( *(_QWORD *)(v12 + v10 + 8) != v11
          || *(_DWORD *)(v12 + v10) != *(_DWORD *)((char *)a3 + v13)
          || *(_BYTE *)(v12 + v10 + 4) != (*((_BYTE *)a3 + v13 + 4) != 0)
          || *(_DWORD *)(v12 + v10 + 16) != v27
          || *(_DWORD *)(v12 + v10 + 68) != *(_DWORD *)((char *)a3 + v13 + 72)
          || *(_DWORD *)(v12 + v10 + 72) != *(_DWORD *)((char *)a3 + v13 + 92) )
        {
          goto LABEL_46;
        }
        v20 = *(_QWORD *)(v12 + v10 + 20) - *(_QWORD *)((char *)a3 + v13 + 20);
        if ( !v20 )
          v20 = *(_QWORD *)(v12 + v10 + 28) - *(_QWORD *)((char *)a3 + v13 + 28);
        if ( v20 )
          goto LABEL_46;
        v21 = *(_QWORD *)(v12 + v10 + 36) - *(_QWORD *)((char *)a3 + v13 + 36);
        if ( !v21 )
          v21 = *(_QWORD *)(v12 + v10 + 44) - *(_QWORD *)((char *)a3 + v13 + 44);
        if ( v21 )
          goto LABEL_46;
        v22 = *(_QWORD *)(v12 + v10 + 52) - *(_QWORD *)((char *)a3 + v13 + 52);
        if ( !v22 )
          v22 = *(_QWORD *)(v12 + v10 + 60) - *(_QWORD *)((char *)a3 + v13 + 60);
        v19 = v22 == 0;
      }
      if ( !v19 )
        goto LABEL_46;
      a2 = v26;
    }
    v23 = (struct Windows::Devices::Display::Core::IDisplayScanout *)*((_QWORD *)this + 3);
    if ( v23 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 8LL))(*((_QWORD *)this + 3));
    v25 = 0LL;
    *a6 = v23;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
  }
  else
  {
LABEL_46:
    v8 = 0;
  }
  LOBYTE(v15) = v8;
  return v15;
}
