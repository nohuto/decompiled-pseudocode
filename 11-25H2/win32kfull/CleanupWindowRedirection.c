/*
 * XREFs of CleanupWindowRedirection @ 0x14005AA34
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 */

__int64 __fastcall CleanupWindowRedirection(struct tagWND *a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    UnsetLayeredWindow(a1);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1, 2LL);
    SetOrClrWF(0, a1, 0xB02u, 1);
  }
  result = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(result + 232) & 1) != 0 )
  {
    UnsetRedirectedWindow(a1, 8LL);
    result = *((_QWORD *)a1 + 5);
    *(_DWORD *)(result + 232) &= ~1u;
  }
  if ( (*((_DWORD *)a1 + 95) & 0x20000000) != 0 )
  {
    result = UnsetRedirectedWindow(a1, 8LL);
    *((_DWORD *)a1 + 95) &= ~0x20000000u;
  }
  return result;
}
