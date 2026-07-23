/*
 * XREFs of PiSwInterfaceCreate @ 0x140A8C6B4
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x140951520 (PnpAllocatePWSTR.c)
 *     PiSwInterfaceFree @ 0x1409B1D4C (PiSwInterfaceFree.c)
 *     PnpCopyDevPropertyArray @ 0x140A8D6D0 (PnpCopyDevPropertyArray.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwInterfaceCreate(_WORD *a1, int a2, int a3, PVOID *a4)
{
  __int64 Pool2; // rax
  int PWSTR; // ebx
  int v10; // r8d

  Pool2 = ExAllocatePool2(0x100uLL);
  *a4 = (PVOID)Pool2;
  if ( Pool2 )
  {
    PWSTR = PnpAllocatePWSTR(a1, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)(Pool2 + 16));
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, *(_DWORD *)a4 + 32, (__int64)*a4 + 24);
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
  else
  {
    PWSTR = -1073741670;
  }
  if ( *a4 )
  {
    PiSwInterfaceFree(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)PWSTR;
}
