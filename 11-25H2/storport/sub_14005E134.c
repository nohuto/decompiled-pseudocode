/*
 * XREFs of sub_14005E134 @ 0x14005E134
 * Callers:
 *     sub_140029920 @ 0x140029920 (sub_140029920.c)
 * Callees:
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_14006B1AC @ 0x14006B1AC (sub_14006B1AC.c)
 */

__int64 __fastcall sub_14005E134(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *v4; // rdi
  __int64 v8; // rax

  v4 = (char *)(a1 + 1008);
  v8 = sub_14006B1AC(a1 + 1008);
  if ( v8 )
  {
    *(_DWORD *)(v8 + 32) = 11;
    *(_QWORD *)(v8 + 40) = a2;
    *(_QWORD *)(v8 + 48) = a3;
    *(_DWORD *)(v8 + 56) = a4;
    sub_14000F5E0(v4, (struct _SLIST_ENTRY *)v8);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1401688B8);
    return 3238002691LL;
  }
}
