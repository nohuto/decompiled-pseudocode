/*
 * XREFs of IrqArbGetDeviceIrql @ 0x1400C325C
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400BBB64 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 *     IcSetPossibleInput @ 0x1400C2ED8 (IcSetPossibleInput.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1400C31C4 (IrqTranslatepQueryDeviceIrql.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1400C4EC4 (ProcessorGetDeviceIdtAssignment.c)
 */

__int64 __fastcall IrqArbGetDeviceIrql(_DWORD *a1, _BYTE *a2)
{
  bool v2; // zf
  unsigned int v4; // edi
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1 == 0;
  v4 = a1[1];
  v9 = 0;
  if ( v2 )
  {
    if ( (unsigned __int8)HalPrivateDispatchTable[62](0LL, (unsigned int)a1[14]) )
    {
      v8 = 0LL;
      if ( (int)((__int64 (__fastcall **)(_DWORD *, __int64))HalPrivateDispatchTable)[59](a1, (__int64)&v9) >= 0
        && (int)ProcessorGetDeviceIdtAssignment(0LL, v9, 0LL, v7) >= 0 )
      {
        v4 = DWORD1(v8);
      }
    }
  }
  *a2 = HalConvertDeviceIdtToIrql(v4);
  return 0LL;
}
