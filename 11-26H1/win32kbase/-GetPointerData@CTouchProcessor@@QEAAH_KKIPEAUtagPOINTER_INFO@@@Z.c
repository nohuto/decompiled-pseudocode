/*
 * XREFs of ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x14004FA00
 * Callers:
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x14004F53C (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     GetPointerInfoSize @ 0x140050B38 (GetPointerInfoSize.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140050B68 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x140050DAC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerData(
        PERESOURCE *this,
        unsigned int *a2,
        __int64 a3,
        unsigned int a4,
        struct tagPOINTER_INFO *a5)
{
  unsigned int v6; // r13d
  unsigned int *v7; // rsi
  char v9; // bl
  void *v10; // r9
  PERESOURCE *v11; // rdi
  int v12; // edx
  bool IsLockedShared; // r14
  __int64 FrameById; // rax
  __int64 v15; // rbp
  CPointerInfoNode *v16; // rsi
  int v17; // edx
  unsigned int v18; // esi
  CTouchProcessor *v20; // rcx
  void *v21; // r8
  void *v22; // r8
  __int16 v23; // [rsp+30h] [rbp-38h]

  v6 = a3;
  v7 = a2;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  v10 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      115,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( a4 != (unsigned int)GetPointerInfoSize(v6, a2, a3, v10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5027LL);
  v11 = this + 4;
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v11);
  if ( !v7 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v12 && !v9 )
      goto LABEL_52;
    v21 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    v23 = 116;
    goto LABEL_45;
  }
  if ( (v7[9] & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
  FrameById = CTouchProcessor::FindFrameById(this, v7[7], 4LL);
  v15 = FrameById;
  if ( FrameById )
  {
    if ( v7[8] >= *(_DWORD *)(FrameById + 48) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5045LL);
    v16 = (CPointerInfoNode *)(*(_QWORD *)(v15 + 240) + 480LL * v7[8]);
    if ( !(unsigned int)CPointerInfoNode::IsValid(v16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5047LL);
    if ( (*(_DWORD *)v16 & 2) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5048LL);
    v18 = CTouchProcessor::PointerInfoCopyOutHelper(
            (CTouchProcessor *)this,
            v16,
            *(struct tagHID_POINTER_DEVICE_INFO **)(v15 + 256),
            v6,
            a4,
            a5);
    LOBYTE(v17) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( (_BYTE)v17 || v9 )
    {
      v22 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
      LOBYTE(v22) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        (_DWORD)v22,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        118,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v11);
    return v18;
  }
  v20 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v9 = 0;
  if ( (_BYTE)v12 || v9 )
  {
    v21 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    v23 = 117;
LABEL_45:
    LOBYTE(v21) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v20 + 3),
      v12,
      (_DWORD)v21,
      *((_QWORD *)v20 + 8),
      5,
      4,
      v23,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
LABEL_52:
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(*v11);
  return 0LL;
}
