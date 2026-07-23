/*
 * XREFs of VmpFillValidFaultInfo @ 0x140AABF4C
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x140822998 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpFillValidFaultInfo(__int64 a1, _QWORD *a2, __int64 a3, char a4, char a5)
{
  __int64 v6; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 40) = *a2 & 0xFFFFFFFFFFFFFLL;
  if ( (a4 & 2) != 0 || (*a2 & 0x20000000000000LL) != 0 && (a5 & 2) != 0 )
    *(_QWORD *)(a1 + 32) |= 0x10000000000000uLL;
  v6 = *(_QWORD *)(a1 + 32);
  if ( (a4 & 4) != 0 )
  {
    v6 |= 0x20000000000000uLL;
    *(_QWORD *)(a1 + 32) = v6;
  }
  if ( (*a2 & 0x80000000000000LL) != 0 )
    v6 |= 0x40000000000000uLL;
  if ( a4 < 0 )
    v6 |= 0x80000000000000uLL;
  result = 0x400000000000000LL;
  *(_QWORD *)(a1 + 32) = v6 | 0x400000000000000LL;
  return result;
}
