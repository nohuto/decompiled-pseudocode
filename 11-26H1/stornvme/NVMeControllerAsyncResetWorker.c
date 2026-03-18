/*
 * XREFs of NVMeControllerAsyncResetWorker @ 0x1400169B0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     _guard_dispatch_icall @ 0x140032570 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NVMeControllerAsyncResetWorker(__int64 a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // r9
  void (__fastcall *v8)(__int64, __int64, _QWORD); // rax
  __int64 result; // rax
  __int64 v10; // r9

  v3 = a2;
  LOBYTE(a2) = *a2;
  LOBYTE(v6) = NVMeControllerReset(a1, a2);
  v8 = (void (__fastcall *)(__int64, __int64, _QWORD))*((_QWORD *)v3 + 1);
  if ( v8 )
    v8(a1, v6, *((_QWORD *)v3 + 2));
  result = StorPortExtendedFunction(1LL, a1, v3, v7);
  if ( a3 )
    return StorPortExtendedFunction(31LL, a1, a3, v10);
  return result;
}
