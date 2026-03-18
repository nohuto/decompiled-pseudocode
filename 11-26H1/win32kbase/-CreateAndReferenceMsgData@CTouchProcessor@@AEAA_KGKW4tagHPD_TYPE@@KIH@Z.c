/*
 * XREFs of ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x14004D2F8
 * Callers:
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x140069CB8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004C108 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x140147B44 (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?CreateMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z @ 0x1401561B0 (-CreateMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CreateAndReferenceMsgData(
        __int64 a1,
        __int16 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        char a7)
{
  int v11; // edi
  __int64 *i; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rsi
  __int64 v17; // rax

  v11 = 0;
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10029LL);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = *(__int64 **)(a1 + 64); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(a1 + 64) )
      return 0LL;
    if ( *((_WORD *)i + 16) == a2 )
      break;
  }
  v14 = Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x64707355u);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  InputTraceLogging::PointerMsg::CreateMsgData(v14);
  *(_WORD *)(v15 + 16) = a2;
  *(_DWORD *)(v15 + 28) = a3;
  *(_DWORD *)(v15 + 32) = a5;
  if ( (a6 & 0x40000) == 0 && (a6 & 4) == 0 )
    v11 = 1;
  *(_DWORD *)(v15 + 48) = a4;
  *(_DWORD *)(v15 + 36) = (a6 >> 9) & 0x10 | (8 * a7) & 8 ^ (v11 & 0xFFFFFFE1 | *(_DWORD *)(v15 + 36) & 0xFFFFFFE0 | ((a6 & 0x40000) != 0 ? 4 : 0) | (a6 >> 15) & 2);
  CTouchProcessor::AssignPointerCaptureData(
    (CTouchProcessor *)a1,
    (struct CInputPointerNode *)i,
    (struct CPointerMsgData *)v15);
  v16 = i + 32;
  v17 = *v16;
  if ( *(__int64 **)(*v16 + 8) != v16 )
    __fastfail(3u);
  *(_QWORD *)v15 = v17;
  *(_QWORD *)(v15 + 8) = v16;
  *(_QWORD *)(v17 + 8) = v15;
  *v16 = v15;
  CTouchProcessor::ReferenceMsgData(a1, v15, 1);
  return v15;
}
