/*
 * XREFs of ??0DbgOverlayStateInfo@COverlayContext@@QEAA@XZ @ 0x180239050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

COverlayContext::DbgOverlayStateInfo *__fastcall COverlayContext::DbgOverlayStateInfo::DbgOverlayStateInfo(
        COverlayContext::DbgOverlayStateInfo *this)
{
  COverlayContext::DbgOverlayStateInfo *result; // rax

  *(_QWORD *)((char *)this + 1644) = 0LL;
  *(_QWORD *)((char *)this + 1652) = 0LL;
  *(_QWORD *)((char *)this + 1660) = 0LL;
  *(_QWORD *)((char *)this + 1668) = 0LL;
  *(_QWORD *)((char *)this + 1676) = 0LL;
  *(_QWORD *)((char *)this + 1684) = 0LL;
  *(_QWORD *)((char *)this + 1692) = 0LL;
  *((_QWORD *)this + 213) = 0LL;
  result = this;
  *((_WORD *)this + 856) = 1;
  return result;
}
