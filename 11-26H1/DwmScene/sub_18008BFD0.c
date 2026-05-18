/*
 * XREFs of sub_18008BFD0 @ 0x18008BFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_18008BFD0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  if ( *(_BYTE *)(a1 + 232) )
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, _QWORD *))(**(_QWORD **)(a1 + 184) + 16LL))(
      *(_QWORD *)(a1 + 184),
      a2,
      a3,
      a4,
      a5);
  else
    sub_180012C40(a2, a5);
  return a2;
}
