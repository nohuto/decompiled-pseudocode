/*
 * XREFs of RtlpLookupLowBox @ 0x140461E1C
 * Callers:
 *     RtlPinAtomInAtomTable @ 0x140A41220 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140A412F0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140A413C0 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140B58C84 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x140461FD0 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x1404620E0 (RtlpAllowsLowBoxAccess.c)
 */

_QWORD *__fastcall RtlpLookupLowBox(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  int LowBoxId; // ecx
  _QWORD *result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (_QWORD *)(a2 + 16);
  v6 = 0LL;
  v5 = (_QWORD *)(a2 + 16);
  LowBoxId = RtlpQueryLowBoxId();
  if ( !LowBoxId )
    return v5;
  for ( result = (_QWORD *)*v5; result != v5; result = (_QWORD *)*result )
  {
    if ( *((_DWORD *)result + 4) == LowBoxId )
      return result;
  }
  if ( !(unsigned __int8)RtlpAllowsLowBoxAccess(a2) )
    return 0LL;
  if ( !a3 )
    return (_QWORD *)(a2 + 16);
  return (_QWORD *)v6;
}
