/*
 * XREFs of ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x14006D61C
 * Callers:
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x140051C6C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x14006D51C (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::GetPreviousFrameByDeviceInt(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2)
{
  CTouchProcessor *v4; // rax
  CTouchProcessor *v5; // rcx
  char *v6; // rbx

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8508LL);
  v4 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v5 = (CTouchProcessor *)(this + 6);
  if ( v4 == (CTouchProcessor *)(this + 6) )
    return 0LL;
  while ( 1 )
  {
    v6 = (char *)v4 - 8;
    if ( *((_QWORD *)v4 + 7) == *((_QWORD *)a2 + 8) )
      break;
    v4 = *(CTouchProcessor **)v4;
    if ( v4 == v5 )
      return 0LL;
  }
  if ( *((_DWORD *)v6 + 13) > *((_DWORD *)v6 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8530LL);
  if ( *((_DWORD *)v6 + 13) == *((_DWORD *)v6 + 12) )
    return 0LL;
  if ( *((_QWORD *)v6 + 8) != *((_QWORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8538LL);
  return (struct CPointerInputFrame *)v6;
}
