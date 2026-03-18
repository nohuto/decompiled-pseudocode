/*
 * XREFs of ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18006B470
 * Callers:
 *     ?Pop@CDrawingContext@@QEAAJXZ @ 0x18003EE08 (-Pop@CDrawingContext@@QEAAJXZ.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180063680 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800642A4 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@Z @ 0x18006ADD0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdex.c)
 *     ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x180206A28 (--4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::PopClippingScope(CDrawingContext *this, char a2)
{
  int v3; // eax
  __int64 v4; // rbx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  if ( a2 )
  {
    v3 = *((_DWORD *)this + 66);
    if ( v3 )
      *((_DWORD *)this + 66) = v3 - 1;
  }
  v4 = *((_QWORD *)this + 92);
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 93) - v4) >> 6);
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 93) - v4 - 192) >> 6) + 1;
  if ( v6 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v7 = v4 + 192 * v5;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, v4, v5);
  if ( v6 != v9 )
  {
    v14 = v16;
    v15 = v17;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v14, v8);
    v12 = 192 * v6 + v4;
    v16 = v14;
    v17 = v15;
    v13 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *> &,__int64>(
            &v16,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 - v12) >> 6))
        - v12;
    while ( v12 != v7 )
    {
      CScopedClipStack::ClippingScopeState::operator=(v13 + v12, v12);
      v12 += 192LL;
    }
  }
  v10 = v7 - 192;
  do
  {
    v11 = *(_QWORD *)(v10 + 176);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v10 += 192LL;
  }
  while ( v10 != v7 );
  *((_QWORD *)this + 93) -= 192LL;
}
