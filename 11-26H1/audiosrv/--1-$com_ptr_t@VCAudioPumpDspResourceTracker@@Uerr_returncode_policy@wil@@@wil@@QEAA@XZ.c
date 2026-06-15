/*
 * XREFs of ??1?$com_ptr_t@VCAudioPumpDspResourceTracker@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C1604
 * Callers:
 *     ??1AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@UEAA@XZ @ 0x1800C16B8 (--1AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E2F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall wil::com_ptr_t<CAudioPumpDspResourceTracker,wil::err_returncode_policy>::~com_ptr_t<CAudioPumpDspResourceTracker,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v1);
  return result;
}
