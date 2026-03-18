/*
 * XREFs of WPP_IFR_SF_qLsqd @ 0x1400306F4
 * Callers:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x14000BD20 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14000D2C0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14000EBE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x14002F7F0 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x14002FF74 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x140030910 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x140032D80 (imp_WdfRequestForwardToIoQueue.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1400336A0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x14004F760 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qLsqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        unsigned int _a4,
        const char *_a5,
        const void *globals_0,
        int level_0)
{
  const char *v10; // rbx
  __int64 v11; // rdi
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rcx
  const char *v19; // rax

  v10 = _a5;
  v11 = -1LL;
  v15 = 5LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( _a5 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( _a5[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = _a5;
    if ( !_a5 )
      v19 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxIoQueue_cpp_Traceguids,
      _a1,
      &_a3,
      8LL,
      &_a4,
      4LL,
      v19,
      v18,
      &globals_0,
      8LL,
      &level_0,
      4LL,
      0LL);
  }
  v16 = v10 == 0LL;
  if ( v10 )
  {
    do
      ++v11;
    while ( v10[v11] );
    v15 = v11 + 1;
    v16 = v10 == 0LL;
  }
  if ( v16 )
    v10 = "NULL";
  FxIFR(
    globals,
    level,
    0xDu,
    WPP_FxIoQueue_cpp_Traceguids,
    _a1,
    &_a3,
    8LL,
    &_a4,
    4LL,
    v10,
    v15,
    &globals_0,
    8LL,
    &level_0,
    4LL,
    0LL);
}
