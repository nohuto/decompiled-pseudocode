/*
 * XREFs of ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1400B8770
 * Callers:
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1400B6F04 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPU.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1400B7130 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtag.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1400B72F0 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z @ 0x1400B75A4 (-SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x1400B76B4 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x1400B80B0 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1400B83F4 (-HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x14020D188 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x14022008C (-DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z.c)
 *     ?QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z @ 0x140221E88 (-QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputTraceLogging::GetWindowDetails(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // r8
  __int64 v8; // rax
  const WCHAR *v9; // rax
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rcx
  unsigned int ThreadId; // eax
  PETHREAD *v13; // rcx
  int v14; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct _KTHREAD *v18; // rcx
  unsigned int v19; // eax
  PETHREAD *v20; // rcx

  v3 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)(a2 + 136) + 104LL);
    if ( *(_DWORD *)(v8 + 184) )
      v9 = *(const WCHAR **)(a2 + 184);
    else
      v9 = &word_14025FAA8;
    v10 = *(_QWORD *)(v7 + 464);
    v11 = *(struct _KTHREAD **)v7;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v10 + 976;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v10 + 56);
    ThreadId = (unsigned int)PsGetThreadId(v11);
    v13 = *(PETHREAD **)(a2 + 264);
    *(_DWORD *)(a1 + 28) = ThreadId;
    if ( v13 )
      v3 = (unsigned int)PsGetThreadId(*v13);
    v14 = *(_DWORD *)(a2 + 260);
  }
  else
  {
    if ( !a3 )
      return a1;
    v16 = *(_QWORD *)(a3 + 16);
    v17 = *(_QWORD *)(v16 + 464);
    v18 = *(struct _KTHREAD **)v16;
    *(_QWORD *)(a1 + 16) = v17 + 976;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v17 + 56);
    v19 = (unsigned int)PsGetThreadId(v18);
    v20 = *(PETHREAD **)(a3 + 64);
    *(_DWORD *)(a1 + 28) = v19;
    if ( v20 )
      v3 = (unsigned int)PsGetThreadId(*v20);
    v14 = *(_DWORD *)(a3 + 72);
  }
  *(_DWORD *)(a1 + 36) = v14;
  *(_DWORD *)(a1 + 32) = v3;
  return a1;
}
