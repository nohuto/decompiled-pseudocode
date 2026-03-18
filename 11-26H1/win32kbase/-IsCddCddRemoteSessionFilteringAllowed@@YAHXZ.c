/*
 * XREFs of ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x14000D8B0
 * Callers:
 *     ldevLoadDriver @ 0x14000D360 (ldevLoadDriver.c)
 *     EngQueryW32kCddInterface @ 0x14002B170 (EngQueryW32kCddInterface.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1401560A0 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCddCddRemoteSessionFilteringAllowed(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1136LL) )
    return *(_DWORD *)(W32GetUserSessionState() + 68696) == 0;
  return v1;
}
