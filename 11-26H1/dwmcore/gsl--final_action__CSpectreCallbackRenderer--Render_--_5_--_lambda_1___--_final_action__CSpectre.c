/*
 * XREFs of gsl::final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___::_final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___ @ 0x180234824
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 *     ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x18025A880 (-Render@CSpectreCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall gsl::final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___::_final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___(
        _QWORD *a1)
{
  __int64 *v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    v2 = (__int64 *)a1[1];
    v3 = 0LL;
    v4 = *v2;
    if ( (v2[1] - *v2) >> 3 )
    {
      do
      {
        v5 = *(_QWORD *)(v4 + 8 * v3);
        if ( v5 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, 0LL);
        v6 = (__int64 *)a1[1];
        ++v3;
        v4 = *v6;
      }
      while ( v3 < (v6[1] - *v6) >> 3 );
    }
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 48LL))(*a1);
  }
  return result;
}
