/*
 * XREFs of ?SendWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJXZ @ 0x180257DEC
 * Callers:
 *     ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180257B50 (-RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x18012388C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x1801AB130 (--$_Emplace_reallocate@AEBUFlipPropertyItem@@@-$vector@UFlipPropertyItem@@V-$allocator@UFlipProp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::SendWindowedSwapChainMetadata(CCaptureRenderTarget *this)
{
  struct CD3DDevice *D3DDeviceNoRef; // rdi
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  unsigned int v10; // ebx
  char v11; // [rsp+20h] [rbp-19h]
  __int128 v12; // [rsp+50h] [rbp+17h] BYREF
  __int64 v13; // [rsp+60h] [rbp+27h]
  __int128 v14; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v15; // [rsp+78h] [rbp+3Fh]
  char *v16; // [rsp+80h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef(this);
  if ( !D3DDeviceNoRef )
    return 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v15 = 8LL;
  v16 = (char *)this + 2828;
  v14 = xmmword_180377C40;
  std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(&v12, 0LL, &v14, v3);
  v4 = ++*((_QWORD *)this + 334);
  v5 = *((_QWORD *)this + 333);
  *((_BYTE *)D3DDeviceNoRef + 1491) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)D3DDeviceNoRef + 28) + 152LL))(
         *((_QWORD *)D3DDeviceNoRef + 28),
         v5,
         v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
      (const char *)(unsigned int)v6);
    if ( (_QWORD)v12 )
      std::_Deallocate<16>((void *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFE0uLL);
    return v7;
  }
  v11 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, _DWORD, _QWORD, _QWORD))(**((_QWORD **)this + 336)
                                                                                               + 72LL))(
         *((_QWORD *)this + 336),
         *((_QWORD *)this + 333),
         *((_QWORD *)this + 334),
         0LL,
         v11,
         (__int64)(*((_QWORD *)&v12 + 1) - v12) >> 5,
         v12,
         0LL);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( (_QWORD)v12 )
      std::_Deallocate<16>((void *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFE0uLL);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3EA,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
    (const char *)(unsigned int)v9);
  if ( (_QWORD)v12 )
    std::_Deallocate<16>((void *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFE0uLL);
  return v10;
}
