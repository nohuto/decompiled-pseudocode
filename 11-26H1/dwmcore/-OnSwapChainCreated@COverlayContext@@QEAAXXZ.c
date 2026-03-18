/*
 * XREFs of ?OnSwapChainCreated@COverlayContext@@QEAAXXZ @ 0x18023D3BC
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x1802588A0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::OnSwapChainCreated(COverlayContext *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int (__fastcall **v4)(__int64, GUID *, __int64 *); // rcx
  __int64 v5; // rsi
  char v6; // bp
  __int64 v7; // rcx
  char v8; // al
  int v9; // eax
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 280LL))(*((_QWORD *)this + 7));
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  v4 = *(int (__fastcall ***)(__int64, GUID *, __int64 *))v2;
  v5 = v3;
  v6 = 0;
  v12 = 0LL;
  if ( (*v4)(v2, &GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91, &v12) >= 0 )
  {
    *((_BYTE *)this + 44) = 1;
    v8 = 0;
  }
  else
  {
    v7 = *((_QWORD *)this + 7);
    *((_BYTE *)this + 44) = 0;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 272LL))(v7);
  }
  *((_BYTE *)this + 19355) = v8;
  *(_WORD *)((char *)this + 47) = 0;
  *((_BYTE *)this + 46) = 0;
  *((_DWORD *)this + 4824) = *(_DWORD *)(v5 + 628);
  v9 = *(_DWORD *)(v5 + 904);
  if ( v9 == 32902 )
  {
    if ( *(__int64 *)(v5 + 632) <= 0x140013000F112DLL )
      *((_BYTE *)this + 48) = 1;
    v10 = &`IsIntelFullDesktopClipRequired'::`2'::s_deviceIds;
    v11 = 0;
    while ( *(_DWORD *)(v5 + 908) != *v10 )
    {
      ++v11;
      ++v10;
      if ( v11 >= 0x2B )
        goto LABEL_16;
    }
    v6 = 1;
LABEL_16:
    *((_BYTE *)this + 46) = v6;
  }
  else if ( v9 == 1297040209 && *(_DWORD *)(v5 + 908) == 1177957426 && *(__int64 *)(v5 + 632) <= 0xB001204360026LL )
  {
    *((_BYTE *)this + 47) = 1;
  }
  if ( CCommonRegistryData::m_customRefreshRateMode == 1
    && *((int *)this + 4824) >= 2200
    && (*(_DWORD *)(v5 + 904) != 32902 || (unsigned __int16)(*(_WORD *)(v5 + 632) - 7011) > 0x139u) )
  {
    *((_BYTE *)this + 19353) = 1;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
}
