/*
 * XREFs of ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14015799C
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14002C2BC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1401573A4 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x140210FD8 (--0CPTPProcessor@@AEAA@XZ.c)
 */

__int64 __fastcall CPTPProcessorFactory::AddProcessor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  CPTPProcessor *v2; // rax
  struct PTPEngineTraceProducer **v3; // rax
  struct PTPEngineTraceProducer **v4; // rbx
  __int64 result; // rax

  v2 = (CPTPProcessor *)Win32AllocPoolZInitImpl(256LL, 0x838uLL, 0x43547072u);
  if ( !v2 )
    return 3221225495LL;
  v3 = (struct PTPEngineTraceProducer **)CPTPProcessor::CPTPProcessor(v2);
  v4 = v3;
  if ( !v3 )
    return 3221225495LL;
  result = CPTPProcessor::InitState(v3, a1);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)a1 + 133) = v4;
    return 0LL;
  }
  return result;
}
