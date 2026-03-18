/*
 * XREFs of ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1400666A8
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x140066560 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x140065934 (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CTouchProcessor::PopRoutedAwayTarget(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 *i; // rax
  struct tagCPointerRoutedAwayTarget ****v8; // rax
  struct tagCPointerRoutedAwayTarget ***v9; // rdi

  *(_DWORD *)(a2 + 113) = 0;
  *(_WORD *)(a2 + 117) = 0;
  *(_BYTE *)(a2 + 119) = 0;
  memset((void *)a2, 0, 0x70uLL);
  *(_BYTE *)(a2 + 112) = 0;
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = *(__int64 **)(a1 + 64); i != (__int64 *)(a1 + 64); i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 16) == a3 )
    {
      v8 = (struct tagCPointerRoutedAwayTarget ****)(i + 35);
      v9 = *v8;
      if ( *v8 != (struct tagCPointerRoutedAwayTarget ***)v8 )
      {
        CInputDest::operator=(a2, v9 + 2);
        CTouchProcessor::FreeRoutedAwayTarget((PERESOURCE *)a1, v9);
      }
      return a2;
    }
  }
  return a2;
}
