/*
 * XREFs of RtlpFreeHandleForAtom @ 0x180037F6C
 * Callers:
 *     RtlpFreeAllAtom @ 0x180037E24 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x1800381C0 (RtlEmptyAtomTable.c)
 * Callees:
 *     RtlIsValidHandle @ 0x180037FD0 (RtlIsValidHandle.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 20);
  v4 = a1 + 16;
  v5 = (__int64 *)(*(_QWORD *)(v4 + 24) + v3 * *(unsigned __int16 *)(a2 + 8));
  result = RtlIsValidHandle(v4, v5);
  if ( (_BYTE)result )
  {
    memset_thunk_772440563353939046(v5, 0, v3);
    result = *(_QWORD *)(a1 + 32);
    *v5 = result;
    *(_QWORD *)(a1 + 32) = v5;
  }
  return result;
}
