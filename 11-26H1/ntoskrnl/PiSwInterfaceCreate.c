/*
 * XREFs of PiSwInterfaceCreate @ 0x140A7B574
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14090BA58 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x14090F730 (PiSwCompleteCreate.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x14090FC1C (PiSwInterfaceFree.c)
 *     PnpAllocatePWSTR @ 0x140990AC0 (PnpAllocatePWSTR.c)
 *     PnpCopyDevPropertyArray @ 0x140A7C5A0 (PnpCopyDevPropertyArray.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwInterfaceCreate(_WORD *a1, int a2, int a3, __int64 *a4)
{
  __int64 Pool2; // rax
  int PWSTR; // ebx
  int v10; // r8d

  Pool2 = ExAllocatePool2(0x100uLL);
  *a4 = Pool2;
  if ( Pool2 )
  {
    PWSTR = PnpAllocatePWSTR(a1, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)(Pool2 + 16));
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, *(_DWORD *)a4 + 32, *a4 + 24);
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
    PiSwInterfaceFree((_QWORD *)*a4);
    *a4 = 0LL;
  }
  return (unsigned int)PWSTR;
}
