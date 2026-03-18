/*
 * XREFs of VidMmCloseFenceStorageSlot @ 0x1400A63A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidMmCloseFenceStorageSlot(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( !v4 )
    return 0LL;
  if ( a3 )
    a2 = *(_QWORD *)(*(_QWORD *)a2 + 40520LL);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 16LL))(v4, a2, a1);
}
