/*
 * XREFs of HalpInterruptSelectController @ 0x1405938A8
 * Callers:
 *     HalpInitializeInterrupts @ 0x140CB3DD8 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpFindInterruptController @ 0x1405924F8 (HalpFindInterruptController.c)
 *     HalpInterruptInitializeController @ 0x140592950 (HalpInterruptInitializeController.c)
 */

__int64 __fastcall HalpInterruptSelectController(__int64 a1)
{
  ULONG_PTR *InterruptController; // rax
  __int64 v3; // rdx
  ULONG_PTR *v4; // rbx
  int v5; // r10d
  ULONG_PTR *v6; // rsi
  ULONG_PTR *v7; // rax
  __int64 v8; // rdx
  int v9; // eax

  InterruptController = HalpFindInterruptController(2);
  v4 = InterruptController;
  if ( InterruptController && (v5 = HalpInterruptInitializeController((ULONG_PTR)InterruptController, v3), v5 >= 0) )
  {
    v6 = v4;
  }
  else
  {
    v7 = HalpFindInterruptController(0);
    v4 = v7;
    v6 = v7;
    if ( !v7 || (v5 = HalpInterruptInitializeController((ULONG_PTR)v7, v8), v5 < 0) )
    {
      HalpInterruptSetProblemEx(0LL, 2, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0x167u);
      return (unsigned int)v5;
    }
  }
  *(_QWORD *)a1 = v6;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 104LL) )
    HalPerformEndOfInterruptAtController = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 104LL);
  v9 = *((_DWORD *)v4 + 61);
  if ( (v9 & 1) != 0 )
  {
    HalpInterruptDirectedEoiModeDetermined = 1;
    if ( (v9 & 0x400) != 0 )
      HalpInterruptDirectedEoiModeEnabled = 1;
  }
  return (unsigned int)v5;
}
