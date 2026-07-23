/*
 * XREFs of PnprAddProcessorResources @ 0x1407B1B4C
 * Callers:
 *     PnprAddDeviceResources @ 0x1407B18E0 (PnprAddDeviceResources.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140202CC0 (KeGetProcessorNumberFromIndex.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprAddProcessorResources(__int64 a1, ULONG a2, int a3, _DWORD **a4)
{
  _DWORD *v4; // rbx
  int v8; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  __int64 ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = a1;
  v4 = *a4;
  LODWORD(ProcNumber) = 0;
  v8 = v4[4];
  if ( v8 == v4[3] )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v10 = Pool2;
    if ( !Pool2 )
    {
      v11 = PnprContext;
      v12 = *(_DWORD *)(PnprContext + 33288);
      if ( !v12 )
        v12 = 766;
      *(_DWORD *)(PnprContext + 33288) = v12;
      v13 = *(_DWORD *)(v11 + 33292);
      if ( !v13 )
        v13 = 10;
      *(_DWORD *)(v11 + 33292) = v13;
      return 3221225626LL;
    }
    memmove(Pool2, v4, (unsigned int)(4 * v8 + 20));
    ExFreePoolWithTag(v4, 0x51706E50u);
    v4 = v10;
    v10[3] = v8 + 4;
  }
  if ( a2 != -1 )
  {
    KeGetProcessorNumberFromIndex(a2, (PPROCESSOR_NUMBER)&ProcNumber);
    *(_QWORD *)(*(_QWORD *)v4 + 8LL * (unsigned __int16)ProcNumber) |= 1LL << SBYTE2(ProcNumber);
  }
  v4[v4[4]++ + 5] = a3;
  result = 0LL;
  *a4 = v4;
  return result;
}
