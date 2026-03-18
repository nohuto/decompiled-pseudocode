/*
 * XREFs of ?MilWerUnregisterMemoryBlock@@YAXPEBX@Z @ 0x18021DF94
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MilWerUnregisterMemoryBlock(const void *a1)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "WerUnregisterMemoryBlock");
    if ( ProcAddress )
      ((void (__fastcall *)(const void *))ProcAddress)(a1);
  }
}
