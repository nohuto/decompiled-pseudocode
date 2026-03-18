/*
 * XREFs of ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18013DFC0
 * Callers:
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18013CF74 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B5C8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::LogBoostCompositorClock(CInteractionTracker *this, unsigned __int8 a2)
{
  _DWORD v2[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v5; // [rsp+58h] [rbp-28h]
  int v6; // [rsp+60h] [rbp-20h]
  int v7; // [rsp+64h] [rbp-1Ch]
  _DWORD *v8; // [rsp+68h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp-10h]

  if ( (unsigned int)dword_1803DC880 > 5 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v2[0] = a2;
    EventDescriptor.Keyword = 2LL;
    v8 = v2;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1803DC888;
    v9 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1803DC888;
    v5 = &unk_1803B41C9;
    UserData.Reserved = 2;
    v6 = 60;
    v7 = 1;
    v2[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
