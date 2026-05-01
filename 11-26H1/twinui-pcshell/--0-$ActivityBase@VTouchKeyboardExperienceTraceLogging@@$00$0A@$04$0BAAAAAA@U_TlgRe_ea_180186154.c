/*
 * XREFs of ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180186154
 * Callers:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180186120 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180186120.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180040E10 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax

  *(_QWORD *)a1 = &wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v6 = a1 + 8;
  v7 = a2 + 8;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 12);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = 0;
  v8 = a1 + 48;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 48));
  *(_QWORD *)(v8 + 16) = *(_QWORD *)(v7 + 56);
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_BYTE *)(v8 + 24) = *(_BYTE *)(v7 + 64);
  *(_BYTE *)(v7 + 64) = 0;
  *(_DWORD *)(v6 + 72) = *(_DWORD *)(v7 + 72);
  *(_OWORD *)(v6 + 80) = *(_OWORD *)(v7 + 80);
  *(_OWORD *)(v6 + 96) = *(_OWORD *)(v7 + 96);
  *(_OWORD *)(v6 + 112) = *(_OWORD *)(v7 + 112);
  *(_OWORD *)(v6 + 128) = *(_OWORD *)(v7 + 128);
  *(_OWORD *)(v6 + 144) = *(_OWORD *)(v7 + 144);
  *(_OWORD *)(v6 + 160) = *(_OWORD *)(v7 + 160);
  *(_OWORD *)(v6 + 176) = *(_OWORD *)(v7 + 176);
  *(_OWORD *)(v6 + 192) = *(_OWORD *)(v7 + 192);
  *(_OWORD *)(v6 + 208) = *(_OWORD *)(v7 + 208);
  *(_QWORD *)(v6 + 224) = *(_QWORD *)(v7 + 224);
  *(_QWORD *)(v6 + 232) = *(_QWORD *)(v7 + 232);
  *(_QWORD *)(v6 + 240) = *(_QWORD *)(v7 + 240);
  *(_QWORD *)(v7 + 232) = 0LL;
  *(_QWORD *)(v7 + 240) = 0LL;
  *(_DWORD *)(v6 + 248) = *(_DWORD *)(v7 + 248);
  *(_QWORD *)(v6 + 256) = 0LL;
  *(_QWORD *)(a1 + 280) = *(_QWORD *)(a2 + 280);
  *(_QWORD *)(a2 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = a1;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0LL;
  if ( a3 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  v9 = *(_QWORD *)(a1 + 280);
  if ( v9 )
    v6 = v9 + 8;
  *(_QWORD *)(a1 + 272) = v6;
  *(_QWORD *)(a1 + 320) = v6 + 40;
  *(_QWORD *)(a2 + 272) = v7;
  if ( *(_DWORD *)(a2 + 312) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 288));
  return a1;
}
