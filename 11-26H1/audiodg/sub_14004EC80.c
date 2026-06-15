/*
 * XREFs of sub_14004EC80 @ 0x14004EC80
 * Callers:
 *     sub_1400B46B0 @ 0x1400B46B0 (sub_1400B46B0.c)
 * Callees:
 *     sub_140045508 @ 0x140045508 (sub_140045508.c)
 *     sub_14004CD00 @ 0x14004CD00 (sub_14004CD00.c)
 *     sub_14004CEC8 @ 0x14004CEC8 (sub_14004CEC8.c)
 *     sub_14004DAB4 @ 0x14004DAB4 (sub_14004DAB4.c)
 *     sub_14004F82C @ 0x14004F82C (sub_14004F82C.c)
 *     sub_14004F9C4 @ 0x14004F9C4 (sub_14004F9C4.c)
 */

int __fastcall sub_14004EC80(__int64 *lpMem)
{
  HANDLE ProcessHeap; // rax
  void *v4; // [rsp+48h] [rbp+10h] BYREF

  if ( sub_140045508((__int64)lpMem) )
  {
    return --*(_DWORD *)lpMem;
  }
  else
  {
    sub_14004F82C(lpMem + 1, &v4);
    if ( !--*(_DWORD *)lpMem )
    {
      sub_14004DAB4(lpMem + 2);
      sub_14004F9C4(&v4, 0LL);
      sub_14004CD00((__int64)lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    return sub_14004CEC8(&v4);
  }
}
