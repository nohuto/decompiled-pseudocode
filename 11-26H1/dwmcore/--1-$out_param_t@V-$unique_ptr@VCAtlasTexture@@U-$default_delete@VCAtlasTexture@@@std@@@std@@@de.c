/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801D962C
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180036E7C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CAtlasTexture>>::~out_param_t<std::unique_ptr<CAtlasTexture>>(
        __int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  if ( *((_BYTE *)a1 + 16) )
  {
    result = (__int64)a1[1];
    v2 = **a1;
    **a1 = result;
    if ( v2 )
      return std::default_delete<CAtlasTexture>::operator()(a1, v2);
  }
  return result;
}
