/*
 * XREFs of sub_1400D46D8 @ 0x1400D46D8
 * Callers:
 *     sub_140029920 @ 0x140029920 (sub_140029920.c)
 * Callees:
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_14006B1AC @ 0x14006B1AC (sub_14006B1AC.c)
 */

__int64 __fastcall sub_1400D46D8(union _SLIST_HEADER *a1, __int64 a2, struct _SLIST_ENTRY *a3, int a4)
{
  char *v4; // rdi
  PSLIST_ENTRY v8; // rax

  v4 = (char *)&a1[38];
  v8 = sub_14006B1AC(a1 + 38);
  if ( !v8 )
    return 3238002691LL;
  LODWORD(v8[2].Next) = 1;
  *((_QWORD *)&v8[2].Next + 1) = a2;
  v8[3].Next = a3;
  *((_DWORD *)&v8[3].Next + 2) = a4;
  sub_14000F5E0(v4, v8);
  return 0LL;
}
