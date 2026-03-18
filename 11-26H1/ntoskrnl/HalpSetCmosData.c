/*
 * XREFs of HalpSetCmosData @ 0x1405014A4
 * Callers:
 *     HalWriteBootRegister @ 0x140BEF1AC (HalWriteBootRegister.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140451A74 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140530540 (HalpAcquireCmosSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpSetCmosData(__int64 a1, unsigned int a2, _BYTE *a3, int a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rdx

  v4 = HalpCmosBusParameterTable;
  v7 = a2;
  if ( a2 + a4 - 1 <= HalpCmosBusParameterTable )
    v4 = a2 + a4 - 1;
  HalpAcquireCmosSpinLock(0LL);
  for ( ; v7 <= v4; ++a3 )
  {
    LOBYTE(v8) = *a3;
    guard_dispatch_icall_no_overrides(v7++, v8);
  }
  HalpReleaseCmosSpinLock();
  return v7 - a2;
}
