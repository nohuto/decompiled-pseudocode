/*
 * XREFs of ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x14020DB04
 * Callers:
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1401FBF18 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 * Callees:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D1754 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D29FC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

void __fastcall CTouchProcessor::UpdateMsgData(PERESOURCE *this, __int64 a2, int a3, int a4, unsigned __int64 a5)
{
  struct CPointerMsgData *NonConstMsgData; // rdi
  CTouchProcessor *v9; // rcx
  struct CPointerMsgData *v10; // rbx

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)this, a2);
  v10 = CTouchProcessor::GetNonConstMsgData(v9, a5);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10677);
  if ( (*((_DWORD *)NonConstMsgData + 9) & 0x20) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10683);
  *((_DWORD *)NonConstMsgData + 7) = a3;
  *((_DWORD *)NonConstMsgData + 8) = a4;
  if ( v10 )
  {
    if ( (*((_DWORD *)v10 + 9) & 0x40) != 0 )
    {
      if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10706);
      CTouchProcessor::ReferenceMsgData((__int64)this, (unsigned __int64)NonConstMsgData, 1);
      CTouchProcessor::UnreferenceMsgData((__int64)this, (unsigned __int64)v10, 1);
    }
    *((_DWORD *)v10 + 9) |= 0x20u;
  }
}
