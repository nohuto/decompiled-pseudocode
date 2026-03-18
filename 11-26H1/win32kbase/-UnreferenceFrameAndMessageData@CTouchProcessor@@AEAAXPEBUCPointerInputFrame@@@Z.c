/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140216FE8
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEAUCPointerInputFrame@@@Z @ 0x1402149D0 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEAUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1402172F0 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1400676F0 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x14006A91C (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x14006C298 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x14006D144 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14006D2C4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(PERESOURCE *this, const struct CPointerInputFrame *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r15d
  unsigned __int64 i; // rbx
  int v13; // eax
  int v14; // ebp
  struct CPointerMsgData *PrevMsgId; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  int (*v18)(void); // rax
  __int64 v19; // rcx
  void (__fastcall *v20)(const struct CPointerInputFrame *); // rax

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8358);
  if ( !IsInputThread(v5, v4, v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8365);
  v9 = (unsigned __int64)PtiCurrent(v8, v7);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 520), 0, 0) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8366);
  v10 = *((unsigned int *)a2 + 12);
  v11 = 0;
  for ( i = *((_QWORD *)a2 + 30); v11 < (unsigned int)v10; i += 480LL )
  {
    v9 = *((_QWORD *)a2 + 30) + 480 * v10;
    if ( i >= v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8380);
    v13 = *((_DWORD *)a2 + 56);
    if ( v13 == 1 || v13 == 2 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8397);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i) > 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8398);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 8399);
        CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, v11);
      }
    }
    else if ( !(unsigned int)IsCurrentProcessDwm(v9)
           || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(i + 16)
        || (v9 = *((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                     (CTouchProcessor *)v9,
                                     a2,
                                     (const struct CPointerInfoNode *)i)
                 + 35),
            (v9 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
          CTouchProcessor::FreePointerInfoNode(this, v17, *((_DWORD *)a2 + 10), v11);
      }
      else
      {
        v14 = *(_DWORD *)(i + 180) & 2;
        if ( (*(_DWORD *)(i + 180) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId((CTouchProcessor *)v9, *(_QWORD *)(i + 16));
          v16 = (unsigned __int64)PrevMsgId;
          if ( PrevMsgId )
          {
            v9 = *((unsigned int *)CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)v9, (__int64)PrevMsgId) + 9);
            if ( (v9 & 0x40) != 0 )
              CTouchProcessor::UnreferenceMsgData((__int64)this, v16, 1);
          }
        }
        if ( !v14 )
          CTouchProcessor::UnreferenceMsgData((__int64)this, *(_QWORD *)(i + 16), 1);
      }
    }
    v10 = *((unsigned int *)a2 + 12);
    ++v11;
  }
  v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48) + 6256LL);
  if ( v18 )
  {
    if ( v18() >= 0 )
    {
      v20 = *(void (__fastcall **)(const struct CPointerInputFrame *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 48)
                                                                     + 6264LL);
      if ( v20 )
        v20(a2);
    }
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)a2);
}
