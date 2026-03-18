/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x14020C688
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEAUCPointerInputFrame@@@Z @ 0x1401FDD80 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEAUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14020CA40 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D29FC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1400DEC80 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DF11C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x140200014 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140200170 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14020257C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1402042A8 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(PERESOURCE *this, const struct CPointerInputFrame *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r15d
  unsigned __int64 i; // rbx
  int v11; // ebp
  struct CPointerMsgData *PrevMsgId; // rax
  unsigned __int64 v13; // rsi
  int (*v14)(void); // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  void (__fastcall *v17)(const struct CPointerInputFrame *); // rax

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8375);
  if ( !IsInputThread(v5, v4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8382);
  v7 = (volatile signed __int32 *)PtiCurrent();
  if ( (_InterlockedCompareExchange(v7 + 132, 0, 0) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8383);
  v8 = *((unsigned int *)a2 + 12);
  v9 = 0;
  for ( i = *((_QWORD *)a2 + 30); v9 < (unsigned int)v8; i += 480LL )
  {
    v7 = (volatile signed __int32 *)(*((_QWORD *)a2 + 30) + 480 * v8);
    if ( i >= (unsigned __int64)v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8397);
    if ( (unsigned int)(*((_DWORD *)a2 + 56) - 1) <= 1 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8414);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i) > 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8415);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8416);
        CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, v9);
      }
    }
    else if ( !(unsigned int)IsCurrentProcessDwm()
           || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(i + 16)
        || (v7 = (volatile signed __int32 *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                                (CTouchProcessor *)v7,
                                                                a2,
                                                                (const struct CPointerInfoNode *)i)
                                            + 35),
            ((unsigned __int8)v7 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
          CTouchProcessor::FreePointerInfoNode(this, v6, *((_DWORD *)a2 + 10), v9);
      }
      else
      {
        v11 = *(_DWORD *)(i + 180) & 2;
        if ( (*(_DWORD *)(i + 180) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId((CTouchProcessor *)v7, *(_QWORD *)(i + 16));
          v13 = (unsigned __int64)PrevMsgId;
          if ( PrevMsgId )
          {
            v7 = (volatile signed __int32 *)*((unsigned int *)CTouchProcessor::GetNonConstMsgData(
                                                                (CTouchProcessor *)v7,
                                                                (__int64)PrevMsgId)
                                            + 9);
            if ( ((unsigned __int8)v7 & 0x40) != 0 )
              CTouchProcessor::UnreferenceMsgData((__int64)this, v13, 1);
          }
        }
        if ( !v11 )
          CTouchProcessor::UnreferenceMsgData((__int64)this, *(_QWORD *)(i + 16), 1);
      }
    }
    v8 = *((unsigned int *)a2 + 12);
    ++v9;
  }
  v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 6696LL);
  if ( v14 )
  {
    if ( v14() >= 0 )
    {
      v17 = *(void (__fastcall **)(const struct CPointerInputFrame *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15)
                                                                                 + 48)
                                                                     + 6704LL);
      if ( v17 )
        v17(a2);
    }
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)a2);
}
