/*
 * XREFs of ?StopFeedbackImpl@PenHapticDevice@@QEAAJXZ @ 0x18018C4CC
 * Callers:
 *     ?StopFeedback@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z @ 0x18018C4C0 (-StopFeedback@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18010D2DC (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18018C060 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z @ 0x180193308 (-SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticDevice::StopFeedbackImpl(PenHapticDevice *this)
{
  __int64 *v1; // rbx
  __int64 *v2; // rdi
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PenHapticInterface *v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 11);
  v2 = (__int64 *)*((_QWORD *)this + 12);
  while ( v1 != v2 )
  {
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
      (__int64 *)&v6,
      v1);
    v3 = PenHapticInterface::SendHapticFeedbackInternal(v6, 2u, 1.0, 0, 0, 0);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhapticinterface.cpp",
        (const char *)(unsigned int)v3);
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)&v6);
    ++v1;
  }
  return 0LL;
}
