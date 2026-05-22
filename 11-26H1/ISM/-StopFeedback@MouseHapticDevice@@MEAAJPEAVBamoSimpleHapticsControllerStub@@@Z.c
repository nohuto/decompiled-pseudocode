/*
 * XREFs of ?StopFeedback@MouseHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z @ 0x18018CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z @ 0x18019EE5C (-TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z.c)
 */

__int64 __fastcall MouseHapticDevice::StopFeedback(MouseHapticDevice *this, struct BamoSimpleHapticsControllerStub *a2)
{
  int v2; // eax
  int v4[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v4 = 0LL;
  v5 = 0LL;
  v2 = CompliantHapticInterface::TriggerHapticsForOrdinal((char *)this + 88, a2, 2LL, v4);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\mousehapticdevice.cpp",
      (const char *)(unsigned int)v2);
  return 0LL;
}
