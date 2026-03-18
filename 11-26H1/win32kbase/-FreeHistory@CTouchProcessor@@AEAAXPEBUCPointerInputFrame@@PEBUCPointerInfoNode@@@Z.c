/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x140062F74
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x14006D144 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x140062B2C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14006D2C4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D41C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D5C8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeHistory(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 v6; // rcx
  unsigned int HistoryCount; // esi
  CTouchProcessor *v8; // rdi
  unsigned int v9; // ebx
  bool v10; // zf
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // [rsp+28h] [rbp-60h]
  CTouchProcessor *v17; // [rsp+30h] [rbp-58h]

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11398LL);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v6, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11400LL);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11403LL);
  v8 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v9 = *((_DWORD *)a3 + 86);
  v16 = v9;
  v17 = (CTouchProcessor *)(this + 6);
  if ( v8 == (CTouchProcessor *)(this + 6) )
  {
LABEL_8:
    v10 = HistoryCount == 1;
  }
  else
  {
    while ( 1 )
    {
      v10 = HistoryCount == 1;
      if ( HistoryCount <= 1 )
        break;
      v11 = (__int64)v8 - 8;
      v8 = *(CTouchProcessor **)v8;
      if ( *(_QWORD *)(v11 + 64) == *((_QWORD *)a2 + 8) )
      {
        if ( v9 >= *(_DWORD *)(v11 + 48) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11422LL);
        v12 = *(_QWORD *)(v11 + 240);
        v13 = 480LL * v9;
        v14 = v13 + v12;
        if ( (*(_DWORD *)(v13 + v12) & 0x2000) != 0 || !*(_DWORD *)(v14 + 172) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11424LL);
        if ( *(_WORD *)(v14 + 172) != *((_WORD *)a3 + 86) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11426LL);
        if ( *(_QWORD *)(v13 + v12 + 16) != *((_QWORD *)a3 + 2) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11427LL);
        v15 = 2LL;
        if ( (*(_DWORD *)(v13 + v12) & 2) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11428LL);
        v9 = *(_DWORD *)(v13 + v12 + 344);
        CTouchProcessor::ReferenceFrameInt(v15, v11);
        CTouchProcessor::FreePointerInfoNodeInt(this, v11, v16);
        CTouchProcessor::UnreferenceFrameInt(this, v11);
        --HistoryCount;
        v16 = v9;
      }
      if ( v8 == v17 )
        goto LABEL_8;
    }
  }
  if ( !v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11446LL);
}
