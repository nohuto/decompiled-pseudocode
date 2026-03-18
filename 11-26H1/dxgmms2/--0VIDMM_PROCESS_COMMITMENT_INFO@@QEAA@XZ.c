/*
 * XREFs of ??0VIDMM_PROCESS_COMMITMENT_INFO@@QEAA@XZ @ 0x140042ED0
 * Callers:
 *     <none>
 * Callees:
 *     VIDMM_PROCESS_COMMITMENT_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_ @ 0x140042F00 (VIDMM_PROCESS_COMMITMENT_INFO--_unnamed_type__Policy_--_unnamed_type__Policy_.c)
 */

VIDMM_PROCESS_COMMITMENT_INFO *__fastcall VIDMM_PROCESS_COMMITMENT_INFO::VIDMM_PROCESS_COMMITMENT_INFO(
        VIDMM_PROCESS_COMMITMENT_INFO *this)
{
  VIDMM_PROCESS_COMMITMENT_INFO *v1; // rdx

  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  VIDMM_PROCESS_COMMITMENT_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_((char *)this + 168, this);
  return v1;
}
