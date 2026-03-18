/*
 * XREFs of ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x1401FC964
 * Callers:
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x14020C254 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D1754 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CreateMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z @ 0x140115E70 (-CreateMsgData@PointerMsg@InputTraceLogging@@SAX_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1401FA87C (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

unsigned __int64 __fastcall CTouchProcessor::CreateAndReferenceMsgData(
        PERESOURCE *a1,
        unsigned __int16 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        char a7)
{
  int v11; // edi
  struct CInputPointerNode *NodeById; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 *v19; // rax
  __int64 v20; // rcx

  v11 = 0;
  if ( !tagDomLock::IsLockedShared(a1 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10046);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a2, 0, 0);
  if ( !NodeById )
    return 0LL;
  v13 = Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x64707355u);
  v17 = v13;
  if ( !v13 )
    return 0LL;
  InputTraceLogging::PointerMsg::CreateMsgData(v13, v14, v15, v16);
  *(_DWORD *)(v17 + 32) = a5;
  v18 = *(_DWORD *)(v17 + 36);
  *(_WORD *)(v17 + 16) = a2;
  *(_DWORD *)(v17 + 28) = a3;
  LOBYTE(v11) = (a6 & 0x40004) == 0;
  *(_DWORD *)(v17 + 48) = a4;
  *(_DWORD *)(v17 + 36) = (a6 >> 9) & 0x10 | (8 * a7) & 8 ^ (v18 & 0xFFFFFFE0 | v11 & 0xFFFFFFE1 | ((a6 & 0x10000 | (a6 >> 1) & 0x20000) >> 15));
  CTouchProcessor::AssignPointerCaptureData(a1, NodeById, (struct CPointerMsgData *)v17);
  v19 = (unsigned __int64 *)((char *)NodeById + 256);
  v20 = *((_QWORD *)NodeById + 32);
  if ( *(struct CInputPointerNode **)(v20 + 8) != (struct CInputPointerNode *)((char *)NodeById + 256) )
    __fastfail(3u);
  *(_QWORD *)v17 = v20;
  *(_QWORD *)(v17 + 8) = v19;
  *(_QWORD *)(v20 + 8) = v17;
  *v19 = v17;
  CTouchProcessor::ReferenceMsgData((__int64)a1, v17, 1);
  return v17;
}
