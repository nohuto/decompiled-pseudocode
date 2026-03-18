/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x140167150
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140050B68 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x14014553C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(PERESOURCE *this, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  char v5; // r8
  PERESOURCE *v6; // rdi
  CTouchProcessor *v7; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v9; // edx
  struct CPointerMsgData *v10; // rsi
  _QWORD *FrameById; // rax
  _QWORD *v12; // r14
  CPointerInfoNode *v13; // rsi
  int v14; // edx
  CTouchProcessor *v16; // rcx
  __int16 v17; // [rsp+30h] [rbp-38h]
  PERESOURCE *v18; // [rsp+40h] [rbp-28h] BYREF
  bool IsLockedShared; // [rsp+48h] [rbp-20h]

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      314,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v6 = this + 4;
  v18 = this + 4;
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v6);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v7, v2);
  v10 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v4 = 0;
    if ( !(_BYTE)v9 && !v4 )
      goto LABEL_36;
    v17 = 315;
    goto LABEL_58;
  }
  FrameById = CTouchProcessor::FindFrameById((__int64)this, *((_DWORD *)NonConstMsgData + 7), 4);
  v12 = FrameById;
  if ( !FrameById )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v4 = 0;
    if ( !(_BYTE)v9 && !v4 )
      goto LABEL_36;
    v17 = 316;
LABEL_58:
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v16 + 3),
      v9,
      v4,
      *((_QWORD *)v16 + 8),
      5,
      4,
      v17,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_36:
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v6);
    return 0LL;
  }
  if ( *((_DWORD *)v10 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13607LL);
  v13 = (CPointerInfoNode *)(v12[30] + 480LL * *((unsigned int *)v10 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v13) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v4 = 0;
    if ( (_BYTE)v14 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v4,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        317,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    CInpLockGuardShared::~CInpLockGuardShared(&v18);
    return 0LL;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v4 = 0;
  if ( (_BYTE)v14 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v4,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      318,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(*v6);
  return (CPointerInfoNode *)((char *)v13 + 168);
}
