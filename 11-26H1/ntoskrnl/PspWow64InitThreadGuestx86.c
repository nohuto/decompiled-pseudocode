/*
 * XREFs of PspWow64InitThreadGuestx86 @ 0x1409E6F68
 * Callers:
 *     PspWow64InitThread @ 0x1409E712C (PspWow64InitThread.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall PspWow64InitThreadGuestx86(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rbp
  int v11; // r9d
  bool v12; // zf
  void *result; // rax

  v6 = *(int *)(a2 + 8);
  v11 = a4 - 4 * (ExGenRandom(1, a2) & 0x1FF);
  v12 = (*(_BYTE *)(a1 + 1872) & 0x40) == 0;
  *(_DWORD *)(a2 + v6 + 176) = a5;
  if ( !v12 )
    v11 = a4;
  *(_DWORD *)(a2 + v6 + 164) = a6;
  *(_DWORD *)(a2 + v6 + 196) = v11 - 16;
  *(_DWORD *)(a2 + v6 + 184) = a3;
  *(_DWORD *)(a2 + v6 + 140) = 43;
  *(_DWORD *)(a2 + v6 + 148) = 43;
  *(_DWORD *)(a2 + v6 + 152) = 43;
  *(_DWORD *)(a2 + v6 + 200) = 43;
  *(_DWORD *)(a2 + v6 + 144) = 83;
  *(_DWORD *)(a2 + v6 + 188) = 35;
  memset_0((void *)(a2 + v6 + 28), 0, 0x70uLL);
  *(_DWORD *)(a2 + v6 + 28) = 639;
  *(_DWORD *)(a2 + v6 + 36) = 0xFFFF;
  result = memset_0((void *)(a2 + v6 + 204), 0, 0x200uLL);
  *(_DWORD *)(a2 + v6) |= 0x1003Fu;
  *(_WORD *)(a2 + v6 + 204) = 639;
  *(_DWORD *)(a2 + v6 + 232) = 0xFFFF;
  *(_DWORD *)(a2 + v6 + 228) = 8064;
  *(_QWORD *)(a2 + v6 + 4) = 0LL;
  *(_QWORD *)(a2 + v6 + 12) = 0LL;
  *(_QWORD *)(a2 + v6 + 20) = 0LL;
  *(_DWORD *)(a2 + v6 + 192) = 514;
  return result;
}
