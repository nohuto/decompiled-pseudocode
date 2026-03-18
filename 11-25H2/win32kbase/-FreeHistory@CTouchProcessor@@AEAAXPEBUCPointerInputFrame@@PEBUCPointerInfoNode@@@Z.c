/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1401FF934
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x140200014 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1401887DC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140200170 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14020257C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x140208F4C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C984 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeHistory(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 v6; // rcx
  unsigned int HistoryCount; // ebp
  CTouchProcessor *v8; // rsi
  unsigned int v9; // r12d
  bool v10; // zf
  char *v11; // r14
  __int64 v12; // rdi
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  CTouchProcessor *v16; // [rsp+28h] [rbp-50h]

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11421);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v6, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11423);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11426);
  v8 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v9 = *((_DWORD *)a3 + 86);
  v16 = (CTouchProcessor *)(this + 6);
  if ( v8 == (CTouchProcessor *)(this + 6) )
  {
LABEL_23:
    v10 = HistoryCount == 1;
  }
  else
  {
    while ( 1 )
    {
      v10 = HistoryCount == 1;
      if ( HistoryCount <= 1 )
        break;
      v11 = (char *)v8 - 8;
      v8 = *(CTouchProcessor **)v8;
      if ( *((_QWORD *)v11 + 8) == *((_QWORD *)a2 + 8) )
      {
        if ( v9 >= *((_DWORD *)v11 + 12) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11445);
        v12 = *((_QWORD *)v11 + 30) + 480LL * v9;
        v13 = (_DWORD *)(v12 + 172);
        if ( (*(_DWORD *)v12 & 0x2000) != 0 || !*v13 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11447);
        if ( *(_WORD *)v13 != *((_WORD *)a3 + 86) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11449);
        if ( *(_QWORD *)(v12 + 16) != *((_QWORD *)a3 + 2) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11450);
        v14 = 2LL;
        if ( (*(_DWORD *)v12 & 2) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11451);
        v15 = *(_DWORD *)(v12 + 344);
        CTouchProcessor::ReferenceFrameInt(v14, v11);
        CTouchProcessor::FreePointerInfoNodeInt(this, v11, v9);
        CTouchProcessor::UnreferenceFrameInt(this, v11);
        --HistoryCount;
        v9 = v15;
      }
      if ( v8 == v16 )
        goto LABEL_23;
    }
  }
  if ( !v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11469);
}
