/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCSceneResourceManager@@U?$default_delete@VCSceneResourceManager@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18021F540
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VCSceneResourceManager@@@std@@QEBAXPEAVCSceneResourceManager@@@Z @ 0x18022A3B4 (--R-$default_delete@VCSceneResourceManager@@@std@@QEBAXPEAVCSceneResourceManager@@@Z.c)
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CSceneResourceManager>>::~out_param_t<std::unique_ptr<CSceneResourceManager>>(
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
      return std::default_delete<CSceneResourceManager>::operator()();
  }
  return result;
}
