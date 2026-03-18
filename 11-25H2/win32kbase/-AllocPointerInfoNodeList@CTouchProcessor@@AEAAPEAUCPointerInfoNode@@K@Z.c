/*
 * XREFs of ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1401FA804
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E5470 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::AllocPointerInfoNodeList(PERESOURCE *this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ecx

  v2 = a2;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7781);
  if ( (_DWORD)v2 && (v3 = 480 * v2, (unsigned __int64)(480 * v2) <= 0xFFFFFFFF) && v3 )
    return (struct CPointerInfoNode *)Win32AllocPoolZInitImpl(256LL, v3, 0x65707355u);
  else
    return 0LL;
}
