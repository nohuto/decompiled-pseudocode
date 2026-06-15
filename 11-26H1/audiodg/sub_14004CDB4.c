/*
 * XREFs of sub_14004CDB4 @ 0x14004CDB4
 * Callers:
 *     sub_14004CD00 @ 0x14004CD00 (sub_14004CD00.c)
 * Callees:
 *     sub_14004D4F0 @ 0x14004D4F0 (sub_14004D4F0.c)
 */

void __fastcall sub_14004CDB4(char **a1)
{
  char **v1; // rbp
  char **v2; // rdi
  char *v3; // rsi
  char *v4; // rbx
  HANDLE ProcessHeap; // rax

  v1 = a1 + 10;
  v2 = a1;
  do
  {
    v3 = *v2;
    while ( v3 )
    {
      v4 = v3;
      v3 = (char *)*((_QWORD *)v3 + 1);
      sub_14004D4F0(v4 + 16);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    *v2++ = 0LL;
  }
  while ( v2 != v1 );
}
