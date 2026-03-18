/*
 * XREFs of ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1400E57A8
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x140055008 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1400E5718 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(
        struct _RTL_GENERIC_TABLE *a1,
        unsigned int a2)
{
  _UNKNOWN **result; // rax
  PRTL_GENERIC_FREE_ROUTINE *p_FreeRoutine; // rsi
  PRTL_GENERIC_FREE_ROUTINE *i; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  p_FreeRoutine = &a1[3].FreeRoutine;
  for ( i = (PRTL_GENERIC_FREE_ROUTINE *)a1[3].FreeRoutine; i != p_FreeRoutine; i = (PRTL_GENERIC_FREE_ROUTINE *)*i )
  {
    result = (_UNKNOWN **)(*((__int64 (__fastcall **)(PRTL_GENERIC_FREE_ROUTINE *, _QWORD))*(i - 43) + 44))(i - 43, a2);
    if ( (_BYTE)result )
      return (_UNKNOWN **)DirectComposition::CApplicationChannel::ReleaseResource(
                            a1,
                            (struct DirectComposition::CResourceMarshaler *)(i - 43));
  }
  return result;
}
