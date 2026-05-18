/*
 * XREFs of sub_180026980 @ 0x180026980
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_DWORD *__fastcall sub_180026980(__int64 a1, _DWORD *a2)
{
  *a2 = 34;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, 12LL) )
    *a2 |= 0x10u;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, 13LL) )
    *a2 |= 1u;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, 14LL) )
    *a2 |= 4u;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, 15LL) )
    *a2 |= 8u;
  return a2;
}
