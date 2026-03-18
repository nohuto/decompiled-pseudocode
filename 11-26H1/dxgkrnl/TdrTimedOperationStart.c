/*
 * XREFs of TdrTimedOperationStart @ 0x140045FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TdrTimedOperationStart(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 || *(_WORD *)a1 != 40 || !a2 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 8) = retaddr;
  *(_BYTE *)(a1 + 17) = 0;
  *(_BYTE *)(a1 + 16) = a3 != 0;
  v4 = *a2;
  *(_QWORD *)(a1 + 24) = *a2;
  if ( v4 < 0 )
  {
    v4 = -v4;
    *(_QWORD *)(a1 + 24) = v4;
  }
  if ( v4 > 50000000 )
    *(_QWORD *)(a1 + 24) = 50000000LL;
  *(__int64 *)(a1 + 24) /= (__int64)KeQueryTimeIncrement();
  *(_QWORD *)(a1 + 32) = MEMORY[0xFFFFF78000000320];
  return 0LL;
}
