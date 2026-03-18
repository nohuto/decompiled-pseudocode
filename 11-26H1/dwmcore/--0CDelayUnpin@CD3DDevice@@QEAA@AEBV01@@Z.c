/*
 * XREFs of ??0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z @ 0x1802963A0
 * Callers:
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@detail@@YAXV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@0@0V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@Z @ 0x1800D81A4 (--$move_backward_uninitialized@V-$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V-$checked_ar.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@PEAVCDelayUnpin@CD3DDevice@@@std@@YAPEAVCDelayUnpin@CD3DDevice@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@V30@PEAV12@@Z @ 0x180295F04 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@PEAVCDelayUn.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 */

CD3DDevice::CDelayUnpin *__fastcall CD3DDevice::CDelayUnpin::CDelayUnpin(
        CD3DDevice::CDelayUnpin *this,
        const struct CD3DDevice::CDelayUnpin *a2)
{
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    this,
    *(_QWORD *)a2);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  return this;
}
