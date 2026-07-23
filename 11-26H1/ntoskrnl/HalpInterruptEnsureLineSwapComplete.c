/*
 * XREFs of HalpInterruptEnsureLineSwapComplete @ 0x140BF4730
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140BF47C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR *HalpInterruptEnsureLineSwapComplete()
{
  ULONG_PTR *v0; // rcx
  ULONG_PTR *result; // rax
  ULONG_PTR *v2; // r9
  _QWORD **v3; // r9
  _QWORD *v4; // rdx
  _QWORD *v5; // rdi
  int v6; // r8d
  __int64 v7; // r10
  ULONG_PTR v8; // r11

  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( 1 )
  {
    result = &HalpRegisteredInterruptControllers;
    if ( v0 == &HalpRegisteredInterruptControllers )
      break;
    v2 = v0;
    v0 = (ULONG_PTR *)*v0;
    v3 = (_QWORD **)(v2 + 33);
    v4 = *v3;
    while ( v4 != v3 )
    {
      v5 = v4;
      v6 = 0;
      v4 = (_QWORD *)*v4;
      v7 = 0LL;
      while ( v6 < *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 5) )
      {
        v8 = v7 + v5[6];
        if ( *(_BYTE *)(v8 + 2) )
          KeBugCheckEx(0x5Cu, 0x4000uLL, v8, 0LL, 0LL);
        ++v6;
        v7 += 16LL;
      }
    }
  }
  return result;
}
