/*
 * XREFs of RtlQueryAtomsInAtomTable @ 0x140B5BAA4
 * Callers:
 *     NtQueryInformationAtom @ 0x1409FC020 (NtQueryInformationAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x14045ADDC (RtlpLookupLowBox.c)
 *     RtlpLockAtomTable @ 0x1409FCDE0 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x1409FCE80 (RtlpUnlockAtomTable.c)
 */

__int64 __fastcall RtlQueryAtomsInAtomTable(_DWORD *a1, __int64 a2, _DWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // r13d
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 i; // rsi
  __int64 j; // r15

  v5 = a2;
  if ( !RtlpLockAtomTable(a1, a2, (__int64)a3, a4) )
    return 3221225485LL;
  v8 = 0;
  v9 = 0LL;
  for ( i = 0LL; (unsigned int)i < a1[7]; i = (unsigned int)(i + 1) )
  {
    for ( j = *(_QWORD *)&a1[2 * i + 8]; j; j = *(_QWORD *)j )
    {
      if ( RtlpLookupLowBox((__int64)a1, j, 0) )
      {
        if ( (unsigned int)v9 >= v5 )
          v8 = -1073741820;
        else
          *((_WORD *)&a4->Thread + v9) = *(_WORD *)(j + 10);
        v9 = (unsigned int)(v9 + 1);
      }
    }
  }
  *a3 = v9;
  RtlpUnlockAtomTable((__int64)a1);
  return v8;
}
