/*
 * XREFs of ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x14020B4D8
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1401FA670 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInputCapture(PERESOURCE *a1, unsigned __int16 a2, CInputDest *a3)
{
  unsigned int v6; // ebx
  struct CInputPointerNode *NodeById; // rax
  struct CInputPointerNode *v8; // rdi

  v6 = 0;
  if ( !tagDomLock::IsLockedShared(a1 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15192);
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15196);
  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  v8 = NodeById;
  if ( NodeById )
  {
    CInputDest::operator=((__int64)NodeById + 72, (__int64)a3);
    v6 = 1;
    *((_DWORD *)v8 + 75) = *((_DWORD *)v8 + 75) & 0xFFFFFF0F | 0x10;
  }
  CInputDest::~CInputDest(a3);
  return v6;
}
