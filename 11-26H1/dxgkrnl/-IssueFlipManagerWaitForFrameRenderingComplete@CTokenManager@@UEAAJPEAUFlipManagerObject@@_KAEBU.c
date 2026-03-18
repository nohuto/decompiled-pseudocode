/*
 * XREFs of ?IssueFlipManagerWaitForFrameRenderingComplete@CTokenManager@@UEAAJPEAUFlipManagerObject@@_KAEBU_LUID@@@Z @ 0x1400A13D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_KAEBU_LUID@@@Z @ 0x1400A1848 (-IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_.c)
 */

__int64 __fastcall CTokenManager::IssueFlipManagerWaitForFrameRenderingComplete(
        CTokenManager *this,
        struct FlipManagerObject *a2,
        unsigned __int64 a3,
        const struct _LUID *a4)
{
  return CAdapterCollection::IssueFlipManagerWaitForFrameRenderingComplete(
           (CTokenManager *)((char *)this + 104),
           a2,
           a3,
           a4);
}
