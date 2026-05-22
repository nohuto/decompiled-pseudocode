/*
 * XREFs of ?OnAttachedToInputSite@CUIComponentInputObjectProxy@@UEAAXPEAVInputSite@@@Z @ 0x1801350F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CUIComponentInputObjectProxy::OnAttachedToInputSite(
        CUIComponentInputObjectProxy *this,
        struct InputSite *a2)
{
  *((_QWORD *)this + 1) = a2;
}
