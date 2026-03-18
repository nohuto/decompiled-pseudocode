/*
 * XREFs of PreserveWriteObj @ 0x140001010
 * Callers:
 *     <none>
 * Callees:
 *     PushAccFieldObj @ 0x1400010C0 (PushAccFieldObj.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 */

__int64 __fastcall PreserveWriteObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = a3;
  if ( a3 )
    goto LABEL_8;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) == 0 )
  {
    ++*(_DWORD *)(a2 + 16);
    return (unsigned int)PushAccFieldObj(
                           a1,
                           ReadFieldObj,
                           *(_QWORD *)(a2 + 32),
                           *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                           a2 + 56,
                           4);
  }
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 2 )
      return v3;
LABEL_8:
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8LL);
    HeapFree();
    return v3;
  }
  v4 = *(_QWORD *)(a2 + 48) & *(_QWORD *)(a2 + 56);
  ++*(_DWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 40) |= v4;
  return (unsigned int)PushAccFieldObj(
                         a1,
                         WriteFieldObj,
                         *(_QWORD *)(a2 + 32),
                         *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                         a2 + 40,
                         4);
}
