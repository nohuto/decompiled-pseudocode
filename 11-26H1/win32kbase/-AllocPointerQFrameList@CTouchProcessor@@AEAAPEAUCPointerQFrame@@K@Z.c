/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x14004C4E4
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x140063560 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(CTouchProcessor *this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  _BYTE *v8; // rbx

  v2 = a2;
  if ( !tagDomLock::IsLockedShared((CTouchProcessor *)((char *)this + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7792LL);
  if ( !(_DWORD)v2 )
    return 0LL;
  v3 = 160 * v2;
  v4 = v2;
  if ( (unsigned __int64)(160 * v2) > 0xFFFFFFFF || !v3 )
    return 0LL;
  v6 = Win32AllocPoolZInitImpl(256LL, v3, 0x51707355u);
  v7 = v6;
  if ( v6 )
  {
    v8 = (_BYTE *)(v6 + 16);
    do
    {
      *((_DWORD *)v8 - 4) = -1;
      memset(v8, 0, 0x70uLL);
      v8[112] = 0;
      v8 += 160;
      --v4;
    }
    while ( v4 );
  }
  return (struct CPointerQFrame *)v7;
}
