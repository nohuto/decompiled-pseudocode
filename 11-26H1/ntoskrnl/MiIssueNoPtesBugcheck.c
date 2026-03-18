/*
 * XREFs of MiIssueNoPtesBugcheck @ 0x140524C34
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x1402A5DB8 (MmGetNumberOfFreeSystemPtes.c)
 *     MiGetHighestPteConsumer @ 0x140524CA4 (MiGetHighestPteConsumer.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiIssueNoPtesBugcheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR HighestPteConsumer; // rbx
  char *NumberOfFreeSystemPtes; // rax
  char *v4; // rax
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)BugCheckParameter2;
  BugCheckParameter2a = 0LL;
  HighestPteConsumer = MiGetHighestPteConsumer(&BugCheckParameter2a);
  if ( HighestPteConsumer )
  {
    NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes();
    KeBugCheckEx(0xD8u, HighestPteConsumer, BugCheckParameter2a, (ULONG_PTR)NumberOfFreeSystemPtes, 0LL);
  }
  v4 = MmGetNumberOfFreeSystemPtes();
  KeBugCheckEx(0x3Fu, 0LL, v1, (ULONG_PTR)v4, 0LL);
}
