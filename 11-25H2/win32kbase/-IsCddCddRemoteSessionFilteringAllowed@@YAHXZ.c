/*
 * XREFs of ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x140102640
 * Callers:
 *     EngQueryW32kCddInterface @ 0x14006BBD0 (EngQueryW32kCddInterface.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1400854F0 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ldevLoadDriver @ 0x140101990 (ldevLoadDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCddCddRemoteSessionFilteringAllowed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx

  v1 = 0;
  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( !*(_DWORD *)(v3 + 1048) )
    return *(_DWORD *)(W32GetUserSessionState(v3, v2) + 68704) == 0;
  return v1;
}
