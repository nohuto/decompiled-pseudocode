/*
 * XREFs of ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x18006B75C
 * Callers:
 *     ?SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z @ 0x18006B6CC (-SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006B538 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x18006B61C (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x18006BB3C (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?MakeCompletedCallback@GestureHandler@@AEAA?AV?$shared_ptr@VGestureHandler@@@std@@W4GestureCompletedReason@@@Z @ 0x18006BD68 (-MakeCompletedCallback@GestureHandler@@AEAA-AV-$shared_ptr@VGestureHandler@@@std@@W4GestureCompl.c)
 *     ?GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18006BF98 (-GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRelativePoints@GestureHandler@@AEAA?AV?$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@UtagPOINTF@@@Z @ 0x18008F8BC (-GetRelativePoints@GestureHandler@@AEAA-AV-$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@Uta.c)
 *     ?CASGestureState@GestureHandler@@AEAA?AW4GestureOperationState@@W42@@Z @ 0x1800942A4 (-CASGestureState@GestureHandler@@AEAA-AW4GestureOperationState@@W42@@Z.c)
 *     ?GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x1801498F8 (-GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wind.c)
 *     ?GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x180149A3C (-GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wi.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180149D3C (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801A4EB0 (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureHandler::ProcessGesture(__int64 a1, _QWORD *a2, int a3, unsigned int a4)
{
  int v8; // eax
  int v9; // r9d
  __int64 v11; // rax
  bool v12; // al
  _QWORD *v13; // rsi
  _QWORD *v14; // r12
  __int64 v15; // rcx
  void (__fastcall *v16)(__int64, _QWORD, _BYTE *, _BYTE *, std::_Ref_count_base **, _QWORD *, _QWORD, __int64, _QWORD); // rax
  int InputType; // eax
  __int64 v18; // r11
  __int64 *CompletedCallback; // rax
  int v20; // [rsp+28h] [rbp-39h]
  __int64 v21; // [rsp+40h] [rbp-21h]
  __int64 v22; // [rsp+40h] [rbp-21h]
  __int64 v23; // [rsp+50h] [rbp-11h]
  std::_Ref_count_base *v24[2]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v25[8]; // [rsp+88h] [rbp+27h] BYREF
  std::_Ref_count_base *v26; // [rsp+90h] [rbp+2Fh] BYREF
  _BYTE v27[16]; // [rsp+98h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v8 = GestureHandler::CASGestureState(a1, a4);
  if ( v8 == 3 )
    return 0LL;
  if ( v8 == 4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\g"
                    "esturehandler.cpp",
      (const char *)0x80004004LL,
      v20);
    return 2147500036LL;
  }
  v11 = *a2 - *(_QWORD *)(a1 + 152);
  if ( *a2 == *(_QWORD *)(a1 + 152) )
  {
    v11 = a2[1] - *(_QWORD *)(a1 + 160);
    if ( !v11 )
      v11 = a2[2] - *(_QWORD *)(a1 + 168);
  }
  v12 = v11 != 0;
  *(_OWORD *)(a1 + 152) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 168) = a2[2];
  *(_DWORD *)(a1 + 176) = a3;
  if ( a4 != 2 || v12 )
    GestureHandler::FeedAnimationDataIfNeeded((GestureHandler *)a1, v9 == 3);
  v13 = *(_QWORD **)(a1 + 112);
  v14 = *(_QWORD **)(a1 + 120);
  while ( v13 != v14 )
  {
    GestureHandler::GetRelativePoints(a1, v25, v13, *a2);
    switch ( a4 )
    {
      case 1u:
        InputType = PointerManipulationHelper::GetInputType(*(unsigned int *)(a1 + 140));
        InputETW::InputGesture::GestureStarted(
          *(_QWORD *)(a1 + 24),
          *(unsigned int *)(a1 + 136),
          v27,
          v25,
          &v26,
          *(_QWORD *)(a1 + 184),
          a3,
          *(_QWORD *)(a1 + 192),
          InputType,
          *v13,
          *(_QWORD *)(a1 + 256));
        LODWORD(v23) = PointerManipulationHelper::GetInputType(*(unsigned int *)(a1 + 140));
        LODWORD(v22) = a3;
        (*(void (__fastcall **)(__int64, _QWORD, _BYTE *, _BYTE *, std::_Ref_count_base **, _QWORD *, _QWORD, __int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(v18 + 8) + 24LL))(
          v18 + 8,
          *(unsigned int *)(a1 + 136),
          v27,
          v25,
          &v26,
          a2,
          *(_QWORD *)(a1 + 184),
          v22,
          *(_QWORD *)(a1 + 192),
          v23,
          *v13,
          *(_QWORD *)(a1 + 256),
          *(_DWORD *)(a1 + 16));
        break;
      case 2u:
        InputETW::InputGesture::GestureInProgress(
          *(_QWORD *)(a1 + 24),
          *(unsigned int *)(a1 + 136),
          v27,
          v25,
          &v26,
          *(_QWORD *)(a1 + 184),
          a3,
          *(_QWORD *)(a1 + 192));
        if ( *(_DWORD *)(a1 + 16) != 2 )
        {
          v15 = v13[1] + 8LL;
          v16 = *(void (__fastcall **)(__int64, _QWORD, _BYTE *, _BYTE *, std::_Ref_count_base **, _QWORD *, _QWORD, __int64, _QWORD))(*(_QWORD *)v15 + 32LL);
LABEL_15:
          LODWORD(v21) = a3;
          v16(v15, *(unsigned int *)(a1 + 136), v27, v25, &v26, a2, *(_QWORD *)(a1 + 184), v21, *(_QWORD *)(a1 + 192));
        }
        break;
      case 3u:
        InputETW::InputGesture::GestureEnded(
          *(_QWORD *)(a1 + 24),
          *(unsigned int *)(a1 + 136),
          v27,
          v25,
          &v26,
          *(_QWORD *)(a1 + 184),
          a3,
          *(_QWORD *)(a1 + 192));
        v15 = v13[1] + 8LL;
        v16 = *(void (__fastcall **)(__int64, _QWORD, _BYTE *, _BYTE *, std::_Ref_count_base **, _QWORD *, _QWORD, __int64, _QWORD))(*(_QWORD *)v15 + 40LL);
        goto LABEL_15;
      default:
        break;
    }
    v13 += 5;
  }
  *(_OWORD *)v24 = 0LL;
  if ( a4 == 3 )
  {
    CompletedCallback = (__int64 *)GestureHandler::MakeCompletedCallback(a1, v25, 0LL);
    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
      v24,
      CompletedCallback);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    if ( !*(_BYTE *)(a1 + 240) || !*(_DWORD *)(a1 + 228) && !*(_DWORD *)(a1 + 232) && !*(_DWORD *)(a1 + 236) )
    {
      GestureHandler::SendAnimationEndedIfNeeded((GestureHandler *)a1);
      if ( !*(_DWORD *)(a1 + 228) && !*(_DWORD *)(a1 + 232) && !*(_DWORD *)(a1 + 236) )
        GestureHandler::CleanupAnimationDataIfNeeded((GestureHandler *)a1);
    }
    *(_DWORD *)(a1 + 136) = 0;
  }
  if ( v24[1] )
    std::_Ref_count_base::_Decref(v24[1]);
  return 0LL;
}
