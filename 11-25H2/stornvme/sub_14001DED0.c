/*
 * XREFs of sub_14001DED0 @ 0x14001DED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 *     _guard_dispatch_icall @ 0x1400327C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14001DED0(__int64 a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // r9
  void (__fastcall *v8)(__int64, __int64, _QWORD); // rax
  __int64 result; // rax
  __int64 v10; // r9

  v3 = a2;
  LOBYTE(a2) = *a2;
  LOBYTE(v6) = sub_14001ED94(a1, a2);
  v8 = (void (__fastcall *)(__int64, __int64, _QWORD))*((_QWORD *)v3 + 1);
  if ( v8 )
    v8(a1, v6, *((_QWORD *)v3 + 2));
  result = StorPortExtendedFunction(1LL, a1, v3, v7);
  if ( a3 )
    return StorPortExtendedFunction(31LL, a1, a3, v10);
  return result;
}
