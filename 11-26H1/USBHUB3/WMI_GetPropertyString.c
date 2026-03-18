/*
 * XREFs of WMI_GetPropertyString @ 0x140090300
 * Callers:
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1400414D0 (WMI_QueryInstanceDeviceNodeInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 */

__int64 __fastcall WMI_GetPropertyString(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  size_t v4; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  const void *v10; // rax
  size_t v11; // r8
  __int64 v12; // [rsp+48h] [rbp+7h] BYREF
  size_t v13; // [rsp+50h] [rbp+Fh] BYREF
  __int128 v14; // [rsp+58h] [rbp+17h] BYREF
  __int64 v15; // [rsp+68h] [rbp+27h]
  __int64 v16; // [rsp+70h] [rbp+2Fh]
  __int128 v17; // [rsp+78h] [rbp+37h]
  __int64 v18; // [rsp+88h] [rbp+47h]

  v13 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  v4 = a4;
  v16 = 0x100000001LL;
  v14 = 0LL;
  LODWORD(v14) = 56;
  v17 = 0LL;
  *(_QWORD *)&v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(
                      WdfDriverGlobals,
                      a1);
  v12 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 656))(
             WdfDriverGlobals,
             v8,
             a2,
             (unsigned int)ExDefaultNonPagedPoolType,
             &v14,
             &v12);
  if ( (int)result >= 0 )
  {
    v10 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t *))(WdfFunctions_01015 + 1552))(
                          WdfDriverGlobals,
                          v12,
                          &v13);
    v11 = v13;
    if ( v4 < v13 )
      v11 = v4;
    memmove(a3, v10, v11);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v12);
  }
  return result;
}
