/*
 * XREFs of RtlEmptyAtomTable @ 0x1800381C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180037A80 (RtlpLockAtomTable.c)
 *     RtlpFreeHandleForAtom @ 0x180037F6C (RtlpFreeHandleForAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlEmptyAtomTable(_DWORD *a1, char a2)
{
  __int64 v4; // rdx
  unsigned int v6; // ebp
  __int64 *i; // r14
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rbx

  if ( !RtlpLockAtomTable(a1) )
    return 3221225485LL;
  v6 = 0;
  for ( i = (__int64 *)(a1 + 18); v6 < a1[16]; ++v6 )
  {
    v8 = i++;
    while ( 1 )
    {
      v10 = *v8;
      if ( !*v8 )
        break;
      if ( a2 || (*(_BYTE *)(v10 + 14) & 1) == 0 )
      {
        v9 = *v8;
        *v8 = *(_QWORD *)v10;
        *(_QWORD *)v10 = 0LL;
        RtlpFreeHandleForAtom((__int64)a1, v9);
        RtlpSysVolFree(v10);
      }
      else
      {
        v8 = (__int64 *)*v8;
      }
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 2, v4);
  return 0LL;
}
