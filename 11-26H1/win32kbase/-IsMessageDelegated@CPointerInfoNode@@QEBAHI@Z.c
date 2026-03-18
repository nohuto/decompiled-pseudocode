/*
 * XREFs of ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x14004F080
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x14006CFE8 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1400CB810 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     IsPointerInputMessage @ 0x14004F22C (IsPointerInputMessage.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z @ 0x140140578 (-IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CPointerInfoNode::IsMessageDelegated(CPointerInfoNode *this, unsigned int a2)
{
  CPointerInfoNode *v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  int v8; // eax
  int v9; // r9d
  int v10; // r8d
  bool v11; // cf
  int v12; // edx
  int v13; // edx

  v5 = 0;
  if ( !(unsigned int)IsPointerInputMessage(a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 352LL);
  if ( !gbIgnoreStressedOutStuff && (*(_DWORD *)this & 0x80000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 353LL);
  switch ( a2 )
  {
    case 0x249u:
      v8 = -__CFSHR__(*(_DWORD *)this, 27);
      v9 = -__CFSHR__(*(_DWORD *)this, 26);
      v10 = -__CFSHR__(*(_DWORD *)this, 25);
      v11 = __CFSHR__(*(_DWORD *)this, 24);
LABEL_16:
      v12 = -v11;
      return CPointerInfoNode::IsMessageDelegated(v4, v12, v10, v9, v8);
    case 0x24Au:
      v8 = (2 * *(_DWORD *)this) >> 31;
      v9 = (4 * *(_DWORD *)this) >> 31;
      v10 = (8 * *(_DWORD *)this) >> 31;
      v11 = __CFSHR__(*(_DWORD *)this, 28);
      goto LABEL_16;
    case 0x251u:
      v8 = -__CFSHR__(*((_DWORD *)this + 1), 3);
      v9 = -__CFSHR__(*((_DWORD *)this + 1), 2);
      v10 = -(*((_DWORD *)this + 1) & 1);
      v12 = *(int *)this >> 31;
      return CPointerInfoNode::IsMessageDelegated(v4, v12, v10, v9, v8);
    case 0x252u:
      v13 = *((_DWORD *)this + 1);
      v8 = -__CFSHR__(v13, 7);
      v9 = -__CFSHR__(v13, 6);
      v10 = -__CFSHR__(v13, 5);
      v11 = __CFSHR__(v13, 4);
      goto LABEL_16;
  }
  v6 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x100000) != 0 && (v6 & 0x200000) == 0 && (v6 & 0x400000) == 0 )
    return 1;
  return v5;
}
