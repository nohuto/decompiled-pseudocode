/*
 * XREFs of ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1401429E4
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?FreeMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z @ 0x140142BEC (-FreeMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x140142C4C (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x140142D60 (-FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x140142F1C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeMsgData(PERESOURCE *this, __int64 a2)
{
  char *NonConstMsgData; // rbx
  char *v4; // rsi
  __int16 v5; // r14
  __int64 v6; // rdi
  char **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  char *v13; // rbx

  NonConstMsgData = (char *)CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)this, a2);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11572LL);
  if ( *((_DWORD *)NonConstMsgData + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11574LL);
  v4 = *(char **)NonConstMsgData;
  v5 = *((_WORD *)NonConstMsgData + 8);
  v6 = *((_QWORD *)NonConstMsgData + 5);
  if ( *(char **)(*(_QWORD *)NonConstMsgData + 8LL) != NonConstMsgData
    || (v7 = (char **)*((_QWORD *)NonConstMsgData + 1), *v7 != NonConstMsgData) )
  {
    __fastfail(3u);
  }
  *v7 = v4;
  *((_QWORD *)v4 + 1) = v7;
  *((_QWORD *)NonConstMsgData + 1) = NonConstMsgData;
  *(_QWORD *)NonConstMsgData = NonConstMsgData;
  InputTraceLogging::PointerMsg::FreeMsgData((unsigned __int64)NonConstMsgData);
  if ( (*((_DWORD *)NonConstMsgData + 9) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11551LL);
  v11 = *((_DWORD *)NonConstMsgData + 9);
  if ( (v11 & 0x80u) == 0 )
  {
    *((_DWORD *)NonConstMsgData + 9) = v11 | 0x80;
    GreDeleteFastMutex(NonConstMsgData, v8, v9, v10);
  }
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 16) == 1 )
    {
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v6 + 32));
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v6 + 168));
    }
    if ( (*(_DWORD *)(v6 + 16))-- == 1 )
      CTouchProcessor::FreePointerCaptureData((CTouchProcessor *)this, (struct CPointerCaptureData *)v6);
  }
  if ( *(char **)v4 == v4 )
  {
    v13 = v4 - 256;
    if ( *((_WORD *)v4 - 112) != v5 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11618LL);
    if ( *(char **)v4 != v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11619LL);
    if ( *((char **)v13 + 30) != v13 + 240 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11620LL);
    if ( *((_DWORD *)v13 + 14) == 3 && !*((_DWORD *)v13 + 9) )
      CTouchProcessor::FreeNode((CTouchProcessor *)this, (struct CInputPointerNode *)(v4 - 256));
  }
}
