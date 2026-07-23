/*
 * XREFs of IopfCallDriver @ 0x140264B50
 * Callers:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1404D5EB0 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x1404DBCDC (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1404ECCDC (IovCallDriver.c)
 *     DifIofCallDriverWrapper @ 0x1406C40F0 (DifIofCallDriverWrapper.c)
 *     IovCallDriverNoIrpTracking @ 0x140C30834 (IovCallDriverNoIrpTracking.c)
 *     IovCallDriverWithStackBuffer @ 0x140C3084C (IovCallDriverWithStackBuffer.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140480478 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
