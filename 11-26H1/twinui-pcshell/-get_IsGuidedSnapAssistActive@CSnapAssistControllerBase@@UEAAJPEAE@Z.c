/*
 * XREFs of ?get_IsGuidedSnapAssistActive@CSnapAssistControllerBase@@UEAAJPEAE@Z @ 0x1805A9880
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ @ 0x18029887C (-IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ.c)
 */

__int64 __fastcall CSnapAssistControllerBase::get_IsGuidedSnapAssistActive(
        CSnapAssistControllerBase *this,
        unsigned __int8 *a2)
{
  *a2 = CSnapAssistControllerBase::IsGuidedSnapAssistActive((CSnapAssistControllerBase *)((char *)this - 40));
  return 0LL;
}
