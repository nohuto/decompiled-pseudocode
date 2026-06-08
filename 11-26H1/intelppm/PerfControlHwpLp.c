/*
 * XREFs of PerfControlHwpLp @ 0x140006FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PerfControlHwpLp(_QWORD *a1, _QWORD *a2, char a3, char a4)
{
  __int64 v5; // rbx
  __int64 result; // rax

  if ( a4 || a3 )
  {
    v5 = *a2 & a1[23];
    result = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1400195B0)(*(unsigned int *)(*a1 + 72LL), v5);
    a1[22] = v5;
  }
  return result;
}
