/*
 * XREFs of IopfCallDriver @ 0x1402655E0
 * Callers:
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1404DC7D0 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x1404E25FC (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1404F36FC (IovCallDriver.c)
 *     DifIofCallDriverWrapper @ 0x1406C0510 (DifIofCallDriverWrapper.c)
 *     IovCallDriverNoIrpTracking @ 0x140C2A824 (IovCallDriverNoIrpTracking.c)
 *     IovCallDriverWithStackBuffer @ 0x140C2A83C (IovCallDriverWithStackBuffer.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140486AA8 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopfCallDriver(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rax
  char v4; // cl

  if ( (char)--*(_BYTE *)(a2 + 67) <= 0 )
    KeBugCheckEx(0x35u, a2, 0LL, 0LL, 0LL);
  v3 = *(_QWORD *)(a2 + 184) - 72LL;
  *(_QWORD *)(a2 + 184) = v3;
  *(_QWORD *)(v3 + 40) = a1;
  if ( *(_BYTE *)v3 == 22 && ((v4 = *(_BYTE *)(v3 + 1), v4 == 2) || v4 == 3) )
    return IopPoHandleIrp(a2);
  else
    return guard_dispatch_icall_no_overrides(a1, a2, a1);
}
