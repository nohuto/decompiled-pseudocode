/*
 * XREFs of ?OnInput@CManipulationManager@@IEAAXXZ @ 0x180112BF4
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x180112DE4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     _CGlobalManipulationManager::ManipulationThreadMain_::_25_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1801D0FE0 (_CGlobalManipulationManager--ManipulationThreadMain_--_25_--_lambda_1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x18002E388 (McTemplateU0qq_EventWriteTransfer.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180093A18 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180093A80 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180113030 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x180113FBC (-DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::OnInput(CManipulationManager *this)
{
  int v2; // ebp
  int *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v12[56]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v13[56]; // [rsp+60h] [rbp-68h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v12, "GestureTargetingInput", 0LL);
  v2 = 0;
  v3 = &v11;
  v11 = 0;
  v4 = 0LL;
  do
  {
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v13,
      "GestureTargetingInputFrame",
      (const struct InputTraceLogging::PerfRegion *)v12);
    v5 = 0LL;
    EnterCriticalSection(&stru_1803DCB88);
    v6 = (__int64 *)CManipulationManager::s_InputQueue;
    if ( *((void ***)CManipulationManager::s_InputQueue + 1) != &CManipulationManager::s_InputQueue
      || (v7 = *(_QWORD *)CManipulationManager::s_InputQueue,
          *(void **)(*(_QWORD *)CManipulationManager::s_InputQueue + 8LL) != CManipulationManager::s_InputQueue) )
    {
      __fastfail(3u);
    }
    CManipulationManager::s_InputQueue = *(void **)CManipulationManager::s_InputQueue;
    *(_QWORD *)(v7 + 8) = &CManipulationManager::s_InputQueue;
    if ( v6 == (__int64 *)&CManipulationManager::s_InputQueue )
    {
      v8 = dword_1803DCB80;
    }
    else
    {
      v5 = v6[2];
      if ( v5 )
        (**(void (__fastcall ***)(__int64))v5)(v6[2]);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v6 + 2);
      operator delete(v6, 0x18uLL);
      v8 = --dword_1803DCB80;
    }
    if ( v3 )
    {
      *v3 = v8;
      v2 = v11;
    }
    LeaveCriticalSection(&stru_1803DCB88);
    v9 = v4;
    v4 = v5;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v3 = 0LL;
    if ( v5 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&MANIPULATION_FRAME_DEQUEUED,
          *(unsigned int *)(v5 + 24),
          *(_DWORD *)(v5 + 16));
      InputTraceLogging::GestureTargeting::DequeueFrame((struct CManipulationFrame *)v5);
      CManipulationManager::ProcessManipulationInfo(this, (struct CManipulationFrame *)v5);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v13);
    v10 = v2--;
    v11 = v2;
  }
  while ( v10 );
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v12);
}
