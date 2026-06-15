/*
 * XREFs of sub_14007D124 @ 0x14007D124
 * Callers:
 *     sub_140045540 @ 0x140045540 (sub_140045540.c)
 * Callees:
 *     sub_140045508 @ 0x140045508 (sub_140045508.c)
 *     sub_14004CEC8 @ 0x14004CEC8 (sub_14004CEC8.c)
 *     sub_14004DAB4 @ 0x14004DAB4 (sub_14004DAB4.c)
 *     sub_14004F82C @ 0x14004F82C (sub_14004F82C.c)
 *     sub_14004F9C4 @ 0x14004F9C4 (sub_14004F9C4.c)
 *     sub_140077E38 @ 0x140077E38 (sub_140077E38.c)
 */

int __fastcall sub_14007D124(__int64 lpMem)
{
  int result; // eax
  HANDLE ProcessHeap; // rax
  void *v4; // [rsp+48h] [rbp+10h] BYREF

  if ( sub_140045508(lpMem) )
  {
    result = --*(_DWORD *)lpMem;
    if ( !*(_DWORD *)lpMem )
      return sub_14007BEA4(lpMem + 32);
  }
  else
  {
    sub_14004F82C((HANDLE *)(lpMem + 8), &v4);
    if ( !--*(_DWORD *)lpMem )
    {
      sub_14004DAB4((__int64 *)(lpMem + 16));
      sub_14004F9C4(&v4, 0LL);
      sub_140077E38(lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, (LPVOID)lpMem);
    }
    return sub_14004CEC8(&v4);
  }
  return result;
}
