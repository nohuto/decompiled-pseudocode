/*
 * XREFs of ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1401FFB98
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D29FC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?FreeMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z @ 0x14011665C (-FreeMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1401FFD70 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1401FFE9C (-FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1402091F4 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeMsgData(PERESOURCE *this, unsigned __int64 a2)
{
  char *NonConstMsgData; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rdi
  __int16 v8; // r14
  __int64 v9; // rsi
  char **v10; // rax
  int v11; // eax
  char *v13; // rbx

  NonConstMsgData = (char *)CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)this, a2);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11595);
  if ( *((_DWORD *)NonConstMsgData + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11597);
  v7 = *(char **)NonConstMsgData;
  v8 = *((_WORD *)NonConstMsgData + 8);
  v9 = *((_QWORD *)NonConstMsgData + 5);
  if ( *(char **)(*(_QWORD *)NonConstMsgData + 8LL) != NonConstMsgData
    || (v10 = (char **)*((_QWORD *)NonConstMsgData + 1), *v10 != NonConstMsgData) )
  {
    __fastfail(3u);
  }
  *v10 = v7;
  *((_QWORD *)v7 + 1) = v10;
  *((_QWORD *)NonConstMsgData + 1) = NonConstMsgData;
  *(_QWORD *)NonConstMsgData = NonConstMsgData;
  InputTraceLogging::PointerMsg::FreeMsgData((__int64)NonConstMsgData, v4, v5, v6);
  if ( (*((_DWORD *)NonConstMsgData + 9) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073, 11574);
  v11 = *((_DWORD *)NonConstMsgData + 9);
  if ( (v11 & 0x80u) == 0 )
  {
    *((_DWORD *)NonConstMsgData + 9) = v11 | 0x80;
    GreDeleteFastMutex(NonConstMsgData);
  }
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 16) == 1 )
    {
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v9 + 32));
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v9 + 168));
    }
    if ( (*(_DWORD *)(v9 + 16))-- == 1 )
      CTouchProcessor::FreePointerCaptureData((CTouchProcessor *)this, (struct CPointerCaptureData *)v9);
  }
  if ( *(char **)v7 == v7 )
  {
    v13 = v7 - 256;
    if ( *((_WORD *)v7 - 112) != v8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11641);
    if ( *(char **)v7 != v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11642);
    if ( *((char **)v13 + 30) != v13 + 240 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11643);
    if ( *((_DWORD *)v13 + 14) == 3 && !*((_DWORD *)v13 + 9) )
      CTouchProcessor::FreeNode((CTouchProcessor *)this, (struct CInputPointerNode *)(v7 - 256));
  }
}
