/*
 * XREFs of ?SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z @ 0x18018C420
 * Callers:
 *     ?InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@GAEBUtagINPUT_HAPTIC_SETTINGS@@II@Z @ 0x1800C9A60 (-InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincip.c)
 *     ?SendHapticFeedbackForPlayCount@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z @ 0x18018C400 (-SendHapticFeedbackForPlayCount@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@.c)
 * Callees:
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18010D2DC (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18018C060 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SendHapticFeedbackForPlayCount@PenHapticInterface@@QEAAJGMII@Z @ 0x180193274 (-SendHapticFeedbackForPlayCount@PenHapticInterface@@QEAAJGMII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticDevice::SendHapticFeedbackForPlayCountImpl(
        PenHapticDevice *this,
        unsigned __int16 a2,
        float a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  unsigned int v9; // esi
  PenHapticInterface *v11; // [rsp+60h] [rbp+8h] BYREF

  v7 = (__int64 *)*((_QWORD *)this + 11);
  v8 = (__int64 *)*((_QWORD *)this + 12);
  if ( v7 != v8 )
  {
    v9 = a5;
    while ( 1 )
    {
      wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
        (__int64 *)&v11,
        v7);
      if ( (int)PenHapticInterface::SendHapticFeedbackForPlayCount(v11, a2, a3, a4, v9) >= 0 )
        break;
      wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)&v11);
      if ( ++v7 == v8 )
        return 0LL;
    }
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)&v11);
  }
  return 0LL;
}
