/*
 * XREFs of ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x14017E504
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x140213800 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInputCapture(__int64 a1, __int16 a2, CInputDest *a3)
{
  unsigned int v6; // edi
  __int64 *v7; // rax
  __int64 *i; // rbx

  v6 = 0;
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15116LL);
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15120LL);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  v7 = (__int64 *)(a1 + 64);
  for ( i = *(__int64 **)(a1 + 64); i != v7; i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 16) == a2 )
    {
      CInputDest::operator=((__int64)(i + 9), (__int64)a3);
      v6 = 1;
      *((_DWORD *)i + 75) = *((_DWORD *)i + 75) & 0xFFFFFF0F | 0x10;
      break;
    }
  }
  CInputDest::~CInputDest(a3);
  return v6;
}
