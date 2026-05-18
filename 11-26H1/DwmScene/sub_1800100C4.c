/*
 * XREFs of sub_1800100C4 @ 0x1800100C4
 * Callers:
 *     sub_18000E510 @ 0x18000E510 (sub_18000E510.c)
 * Callees:
 *     sub_18000E4B4 @ 0x18000E4B4 (sub_18000E4B4.c)
 *     sub_18000E530 @ 0x18000E530 (sub_18000E530.c)
 *     sub_18000E6E8 @ 0x18000E6E8 (sub_18000E6E8.c)
 *     sub_18000E768 @ 0x18000E768 (sub_18000E768.c)
 *     sub_180010208 @ 0x180010208 (sub_180010208.c)
 *     sub_180010F68 @ 0x180010F68 (sub_180010F68.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800100C4(char *lpMem)
{
  __int64 v2; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( byte_1801C8438 || qword_1801C8410 && (unsigned __int8)qword_1801C8410() )
  {
    return (unsigned int)--*(_DWORD *)lpMem;
  }
  else
  {
    sub_180010F68(lpMem + 8, &v5);
    if ( !--*(_DWORD *)lpMem )
    {
      sub_180011088(lpMem + 16, 0LL);
      sub_180011088(lpMem + 24, 0LL);
      v2 = v5;
      if ( v5 )
      {
        sub_18000E4B4((__int64)&v5);
        sub_180010208(v2);
        sub_18000E768((__int64)&v5);
      }
      v5 = 0LL;
      sub_18000E530((__int64)lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    return sub_18000E6E8(&v5);
  }
}
