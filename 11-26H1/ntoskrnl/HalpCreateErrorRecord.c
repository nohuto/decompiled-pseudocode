/*
 * XREFs of HalpCreateErrorRecord @ 0x14057D1A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCreateMachineCheckErrorRecord @ 0x14044A750 (HalpCreateMachineCheckErrorRecord.c)
 *     HalpCreateNMIErrorRecord @ 0x1405810E8 (HalpCreateNMIErrorRecord.c)
 */

__int64 __fastcall HalpCreateErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // r10d
  int v5; // r10d

  v4 = *(_DWORD *)(a1 + 8);
  if ( !v4 )
    return HalpCreateMachineCheckErrorRecord(a1, a2, a3, a4);
  v5 = v4 - 1;
  if ( !v5 )
    return HalpCreateMachineCheckErrorRecord(a1, a2, a3, a4);
  if ( v5 == 2 )
    return HalpCreateNMIErrorRecord();
  return 3221225659LL;
}
