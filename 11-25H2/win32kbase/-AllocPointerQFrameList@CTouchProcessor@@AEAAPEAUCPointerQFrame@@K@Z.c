/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x140185D90
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E5470 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x140243000 (memset.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(PERESOURCE *this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  _BYTE *v7; // rbx

  v2 = a2;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7809LL);
  if ( !(_DWORD)v2 )
    return 0LL;
  v3 = 160 * v2;
  v4 = v2;
  if ( (unsigned __int64)(160 * v2) > 0xFFFFFFFF || !v3 )
    return 0LL;
  v5 = Win32AllocPoolZInitImpl(256LL, v3, 0x51707355u);
  v6 = v5;
  if ( v5 )
  {
    v7 = (_BYTE *)(v5 + 16);
    do
    {
      *((_DWORD *)v7 - 4) = -1;
      memset(v7, 0, 0x70uLL);
      v7[112] = 0;
      v7 += 160;
      --v4;
    }
    while ( v4 );
  }
  return (struct CPointerQFrame *)v6;
}
