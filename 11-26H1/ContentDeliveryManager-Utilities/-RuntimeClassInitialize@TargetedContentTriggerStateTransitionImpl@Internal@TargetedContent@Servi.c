/*
 * XREFs of ?RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAAJPEAUHSTRING__@@W4TargetedContentTriggerState@2345@1@Z @ 0x180078584
 * Callers:
 *     ??$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@2345@AEAW472345@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@4567@2@Z @ 0x180078224 (--$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedCo_ea_180078224.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18003AE24 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::RuntimeClassInitialize(
        __int64 a1,
        HSTRING a2,
        int a3,
        int a4)
{
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v7 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 72), &v12);
  try
  {
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        329LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v7,
        v10);
    *(_DWORD *)(a1 + 80) = a3;
    *(_DWORD *)(a1 + 84) = a4;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14E,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                           v8);
  }
  return result;
}
