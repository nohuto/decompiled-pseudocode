/*
 * XREFs of ?DownlevelIsProcessDPIAware@@YAHXZ @ 0x1801B89C4
 * Callers:
 *     InitDPI @ 0x1801B8920 (InitDPI.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 DownlevelIsProcessDPIAware(void)
{
  unsigned int (*ProcAddress)(void); // rax
  unsigned int v1; // ebx
  HMODULE ModuleHandleW; // rax

  ProcAddress = (unsigned int (*)(void))qword_180897EC8;
  v1 = 1;
  if ( qword_180897EC8 == -1 )
  {
    ModuleHandleW = GetModuleHandleW(L"USER32.DLL");
    if ( ModuleHandleW )
    {
      ProcAddress = (unsigned int (*)(void))GetProcAddress(ModuleHandleW, "IsProcessDPIAware");
      qword_180897EC8 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = (unsigned int (*)(void))qword_180897EC8;
    }
  }
  if ( ProcAddress )
    return ProcAddress();
  return v1;
}
