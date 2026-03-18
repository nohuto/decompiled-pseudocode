/*
 * XREFs of ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C6AC
 * Callers:
 *     ?ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z @ 0x14006472C (-ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x140067880 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x14006D144 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x14015C27C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_QWORD *__fastcall CTouchProcessor::FindAndReferenceFrameById(__int64 a1, int a2, int a3)
{
  tagDomLock *v3; // rdi
  _QWORD **v7; // rbx
  _QWORD *i; // rcx
  _QWORD *result; // rax

  v3 = (tagDomLock *)(a1 + 32);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8100LL);
  v7 = (_QWORD **)(a1 + 48);
  if ( !tagDomLock::IsLockedShared(v3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8041LL);
  for ( i = *v7; ; i = (_QWORD *)*i )
  {
    if ( i == v7 )
      return 0LL;
    result = i - 1;
    if ( *((_DWORD *)i + 8) == a2 )
      break;
  }
  if ( *((_DWORD *)result + 56) != a3 || i == (_QWORD *)8 )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)result + 11);
  return result;
}
