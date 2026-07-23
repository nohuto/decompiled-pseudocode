/*
 * XREFs of lm_init @ 0x14062C5C0
 * Callers:
 *     deflateReset @ 0x14062AC3C (deflateReset.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall lm_init(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 168) = 2 * *(_DWORD *)(a1 + 148);
  *(_WORD *)(*(_QWORD *)(a1 + 184) + 2LL * (unsigned int)(v2 - 1)) = 0;
  memset_0(*(void **)(a1 + 184), 0, 2LL * (unsigned int)(*(_DWORD *)(a1 + 196) - 1));
  v3 = 2LL * *(int *)(a1 + 252);
  *(_DWORD *)(a1 + 248) = WORD1(qword_1400089E0[2 * *(int *)(a1 + 252)]);
  *(_DWORD *)(a1 + 260) = LOWORD(qword_1400089E0[v3]);
  *(_DWORD *)(a1 + 264) = WORD2(qword_1400089E0[v3]);
  *(_DWORD *)(a1 + 244) = HIWORD(qword_1400089E0[v3]);
  result = 2LL;
  *(_DWORD *)(a1 + 240) = 2;
  *(_DWORD *)(a1 + 216) = 2;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 5976) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  return result;
}
