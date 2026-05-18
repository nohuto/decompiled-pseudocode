/*
 * XREFs of sub_18000E5DC @ 0x18000E5DC
 * Callers:
 *     sub_18000E530 @ 0x18000E530 (sub_18000E530.c)
 * Callees:
 *     sub_18000EA80 @ 0x18000EA80 (sub_18000EA80.c)
 */

void __fastcall sub_18000E5DC(char **a1)
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
      sub_18000EA80(v4 + 16);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    *v2++ = 0LL;
  }
  while ( v2 != v1 );
}
