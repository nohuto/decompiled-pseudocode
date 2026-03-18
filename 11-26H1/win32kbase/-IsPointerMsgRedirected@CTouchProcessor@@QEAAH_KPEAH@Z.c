/*
 * XREFs of ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x140165F20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140050B68 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMsgRedirected(PERESOURCE *this, __int64 a2, int *a3)
{
  PERESOURCE *v3; // rdi
  CTouchProcessor *v7; // rcx
  bool IsLockedShared; // si
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v10; // rbx
  _QWORD *FrameById; // rax
  _QWORD *v12; // rbp
  CPointerInfoNode *v13; // r14
  unsigned int v14; // ebx

  v3 = this + 4;
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v3);
  *a3 = 0;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v7, a2);
  v10 = NonConstMsgData;
  if ( NonConstMsgData
    && (FrameById = CTouchProcessor::FindFrameById((__int64)this, *((_DWORD *)NonConstMsgData + 7), 4),
        (v12 = FrameById) != 0LL) )
  {
    if ( *((_DWORD *)v10 + 8) >= *((_DWORD *)FrameById + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13812LL);
    v13 = (CPointerInfoNode *)(v12[30] + 480LL * *((unsigned int *)v10 + 8));
    if ( !(unsigned int)CPointerInfoNode::IsValid(v13) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13814LL);
    if ( *((_DWORD *)v13 + 43) != *((unsigned __int16 *)v10 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13817LL);
    if ( (*((_DWORD *)v13 + 1) & 0x80u) != 0 )
      *a3 = 1;
    v14 = -__CFSHR__(*(_DWORD *)v13, 11);
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v3);
    return v14;
  }
  else
  {
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v3);
    return 0LL;
  }
}
