/*
 * XREFs of PspEnsureGuiThreadAndBatchFlush @ 0x1407F32A0
 * Callers:
 *     PsSyscallProviderDispatch @ 0x140B45560 (PsSyscallProviderDispatch.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1409FC500 (PsConvertToGuiThread.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspEnsureGuiThreadAndBatchFlush(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax

  if ( (*(_DWORD *)(a1 + 120) & 0x200080) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 144);
    v3 = PsConvertToGuiThread();
    *(_QWORD *)(a1 + 144) = v2;
    if ( v3 < 0 )
      return 3221225473LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 5952LL) )
    PsInvokeWin32Callout(7LL, 0LL, 0LL, 0LL);
  return 0LL;
}
