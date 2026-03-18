/*
 * XREFs of ??0VIDMM_POLICY@@QEAA@XZ @ 0x14011BAB4
 * Callers:
 *     VIDMM_PROCESS_COMMITMENT_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_ @ 0x140042F00 (VIDMM_PROCESS_COMMITMENT_INFO--_unnamed_type__Policy_--_unnamed_type__Policy_.c)
 * Callees:
 *     <none>
 */

VIDMM_POLICY *__fastcall VIDMM_POLICY::VIDMM_POLICY(VIDMM_POLICY *this)
{
  VIDMM_POLICY *result; // rax

  *(_DWORD *)this &= 0xFFFFFFF8;
  result = this;
  *(_QWORD *)((char *)this + 4) = 0LL;
  return result;
}
