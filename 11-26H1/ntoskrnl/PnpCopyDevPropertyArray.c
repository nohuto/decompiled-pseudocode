/*
 * XREFs of PnpCopyDevPropertyArray @ 0x140A8D6D0
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x1407B3648 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 *     PiSwInterfaceCreate @ 0x140A8C6B4 (PiSwInterfaceCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpCopyDevProperty @ 0x140A8D7A4 (PnpCopyDevProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCopyDevPropertyArray(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4, PVOID *a5)
{
  unsigned int v5; // ebx
  __int64 Pool2; // rax
  __int64 v10; // r14
  __int64 i; // rbp

  v5 = 0;
  *a4 = 0;
  *a5 = 0LL;
  if ( a2 && a1 )
  {
    if ( !is_mul_ok(a1, 0x30uLL) )
      return (unsigned int)-1073741675;
    Pool2 = ExAllocatePool2(0x100uLL);
    *a5 = (PVOID)Pool2;
    if ( Pool2 )
    {
      v10 = 0LL;
      if ( !a1 )
        return v5;
      while ( 1 )
      {
        v5 = PnpCopyDevProperty(a2 + 48 * v10, 1466986064LL, (char *)*a5 + 48 * v10);
        if ( (v5 & 0x80000000) != 0 )
          break;
        ++*a4;
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= a1 )
          return v5;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    if ( *a5 )
    {
      for ( i = 0LL; (unsigned int)i < *a4; i = (unsigned int)(i + 1) )
        ExFreePoolWithTag(*((PVOID *)*a5 + 6 * i + 5), 0x57706E50u);
      ExFreePoolWithTag(*a5, 0x57706E50u);
      *a4 = 0;
      *a5 = 0LL;
    }
  }
  return v5;
}
