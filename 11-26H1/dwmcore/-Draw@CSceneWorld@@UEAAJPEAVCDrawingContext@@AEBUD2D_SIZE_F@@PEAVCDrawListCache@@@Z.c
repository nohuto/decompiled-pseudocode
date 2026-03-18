/*
 * XREFs of ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180288970
 * Callers:
 *     <none>
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180009DA8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneWorld::Draw(
        CSceneWorld *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  _QWORD *v4; // rsi
  _QWORD *i; // rdi
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  _BYTE v13[64]; // [rsp+40h] [rbp-58h] BYREF
  int v14; // [rsp+80h] [rbp-18h]

  v4 = (_QWORD *)*((_QWORD *)this + 17);
  for ( i = (_QWORD *)*((_QWORD *)this + 16); i != v4; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 192LL))(*i);
  v8 = (__int64 *)*((_QWORD *)this + 17);
  v9 = (__int64 *)*((_QWORD *)this + 16);
  if ( v9 != v8 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(v9, v8);
    *((_QWORD *)this + 17) = *((_QWORD *)this + 16);
  }
  v14 = 0;
  CMILMatrix::SetScale((CMILMatrix *)v13, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
  v10 = CDrawingContext::DrawScene3D(
          a2,
          *((struct ISpectreWorld **)this + 11),
          *((struct CEnvironmentLight **)this + 19),
          (const struct CMILMatrix *)v13);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xF7u, 0LL);
  return v11;
}
