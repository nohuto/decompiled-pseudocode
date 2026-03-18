/*
 * XREFs of ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x14006526C
 * Callers:
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x140064CC8 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 * Callees:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004C108 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateMsgData(PERESOURCE *this, __int64 a2, int a3, int a4, unsigned __int64 a5)
{
  struct CPointerMsgData *NonConstMsgData; // rdi
  CTouchProcessor *v9; // rcx
  struct CPointerMsgData *v10; // rbx

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)this, a2);
  v10 = CTouchProcessor::GetNonConstMsgData(v9, a5);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10660LL);
  if ( (*((_DWORD *)NonConstMsgData + 9) & 0x20) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10666LL);
  *((_DWORD *)NonConstMsgData + 7) = a3;
  *((_DWORD *)NonConstMsgData + 8) = a4;
  if ( v10 )
  {
    if ( (*((_DWORD *)v10 + 9) & 0x40) != 0 )
    {
      if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10689LL);
      CTouchProcessor::ReferenceMsgData((__int64)this, (__int64)NonConstMsgData, 1);
      CTouchProcessor::UnreferenceMsgData((__int64)this, (unsigned __int64)v10, 1);
    }
    *((_DWORD *)v10 + 9) |= 0x20u;
  }
}
