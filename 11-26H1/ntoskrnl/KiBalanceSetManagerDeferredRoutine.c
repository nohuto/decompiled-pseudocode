/*
 * XREFs of KiBalanceSetManagerDeferredRoutine @ 0x1404C0780
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     _local_unwind @ 0x140538480 (_local_unwind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine6 @ 0x140737440 (KiCustomAccessRoutine6.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

LONG __fastcall KiBalanceSetManagerDeferredRoutine(__int64 a1, struct _KEVENT *a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v9[24]; // [rsp+0h] [rbp-1A8h] BYREF
  _BYTE v10[31]; // [rsp+70h] [rbp-138h] BYREF
  __int64 v11; // [rsp+8Fh] [rbp-119h]
  __int64 v12; // [rsp+A7h] [rbp-101h]
  __int64 v13; // [rsp+C7h] [rbp-E1h]
  _DWORD *v14; // [rsp+180h] [rbp-28h]

  v14 = v9;
  memset_0(v10, 0, 0x5FuLL);
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    v9[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v13 = a3;
    v12 = __ROL8__(a2, a3);
    v11 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine6(a2);
  }
  return KeSetEvent(a2, 10, 0);
}
