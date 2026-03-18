/*
 * XREFs of _PnpCtxInternalEnumKeyCallback @ 0x140469060
 * Callers:
 *     _SysCtxInternalEnumSubkeyCallback @ 0x140469020 (_SysCtxInternalEnumSubkeyCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A01530 (DrvDbGetObjectSubKeyCallback.c)
 */

__int64 __fastcall PnpCtxInternalEnumKeyCallback(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  __int64 v5; // rcx
  __int64 v6; // r9

  v4 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a4[1];
  v5 = *a4;
  v6 = a4[2];
  if ( v4 == DrvDbGetObjectSubKeyCallback )
    return DrvDbGetObjectSubKeyCallback(v5, a2, a3, v6);
  else
    return guard_dispatch_icall_no_overrides(v5, a2);
}
