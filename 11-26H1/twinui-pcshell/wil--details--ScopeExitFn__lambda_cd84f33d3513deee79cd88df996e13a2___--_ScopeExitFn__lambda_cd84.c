/*
 * XREFs of wil::details::ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___::_ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___ @ 0x180395E04
 * Callers:
 *     _CVirtualTouchpadExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x1806E74C6 (_CVirtualTouchpadExperienceManager--OnViewShown_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::OnViewPropertiesChanging_::_1_::dtor$0 @ 0x1806E7550 (_CVirtualTouchpadExperienceManager--OnViewPropertiesChanging_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___::_ScopeExitFn__lambda_cd84f33d3513deee79cd88df996e13a2___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_DWORD *)(result + 768) = 0;
  }
  return result;
}
