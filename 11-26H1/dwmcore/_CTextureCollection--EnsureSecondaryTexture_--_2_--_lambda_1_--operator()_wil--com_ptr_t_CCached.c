/*
 * XREFs of _CTextureCollection::EnsureSecondaryTexture_::_2_::_lambda_1_::operator()_wil::com_ptr_t_CCachedTexture_wil::err_returncode_policy___ @ 0x1802B1230
 * Callers:
 *     ?EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z @ 0x1802B1888 (-EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CTextureCollection::EnsureSecondaryTexture_::_2_::_lambda_1_::operator()_wil::com_ptr_t_CCachedTexture_wil::err_returncode_policy___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a2;
  if ( *(_BYTE *)(*a2 + 160) )
  {
    v3 = *(_QWORD *)(v2 + 136);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = (unsigned int)v4;
        v7 = 69LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\bitmaps/TextureCollection.h",
          (const char *)v6);
        return v5 < 0;
      }
      return v5 < 0;
    }
LABEL_8:
    v5 = -2003292412;
    v7 = 77LL;
    v6 = 2291674884LL;
    goto LABEL_9;
  }
  v8 = *(_QWORD *)(v2 + 128);
  if ( !v8 )
    goto LABEL_8;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  v5 = v9;
  if ( v9 < 0 )
  {
    v6 = (unsigned int)v9;
    v7 = 74LL;
    goto LABEL_9;
  }
  return v5 < 0;
}
