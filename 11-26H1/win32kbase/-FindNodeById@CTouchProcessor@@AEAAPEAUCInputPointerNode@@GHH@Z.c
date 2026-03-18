/*
 * XREFs of ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x14004D4C0
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x140214300 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1402153E0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?ThreadHasPrimaryCaptureExternal@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z @ 0x140216B00 (-ThreadHasPrimaryCaptureExternal@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::FindNodeById(
        PERESOURCE *this,
        unsigned __int16 a2,
        int a3,
        int a4)
{
  _QWORD **v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  bool v12; // zf
  bool v14; // zf

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  v8 = (_QWORD **)((char *)this + (a3 != 0 ? 80LL : 64LL));
  v9 = *v8;
  if ( *v8 == v8 )
    return 0LL;
  do
  {
    v10 = v9 - 2;
    if ( !a3 )
      v10 = v9;
    v11 = v10;
    if ( a4 )
      v12 = *((_WORD *)v10 + 17) == a2;
    else
      v12 = *((_WORD *)v10 + 16) == a2;
    if ( v12 )
      break;
    v9 = (_QWORD *)*v9;
    v11 = v10;
  }
  while ( v9 != v8 );
  if ( v9 == v8 )
    return 0LL;
  if ( a4 )
    v14 = *((_WORD *)v11 + 17) == a2;
  else
    v14 = *((_WORD *)v11 + 16) == a2;
  if ( !v14 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8632LL);
  return (struct CInputPointerNode *)v11;
}
