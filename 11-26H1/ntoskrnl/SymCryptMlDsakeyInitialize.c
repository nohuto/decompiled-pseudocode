/*
 * XREFs of SymCryptMlDsakeyInitialize @ 0x140573AF0
 * Callers:
 *     SymCryptMlDsakeyAllocate @ 0x1405606F0 (SymCryptMlDsakeyAllocate.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptMlDsakeyInitialize(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // r12
  char v5; // r14
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax

  v3 = *(_BYTE *)(a1 + 20);
  v5 = *(_BYTE *)(a1 + 21);
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(unsigned int *)(a1 + 8);
  v9 = *(unsigned int *)(a1 + 12);
  SymCryptWipe(a2, a3);
  *(_QWORD *)(a2 + 8) = a1;
  v11 = a2 + 232 + v7;
  *(_DWORD *)(a2 + 16) = a3;
  *(_BYTE *)(a2 + 232) = v3;
  *(_BYTE *)(a2 + 233) = v5;
  *(_DWORD *)(a2 + 236) = v7;
  *(_QWORD *)(a2 + 184) = a2 + 232;
  *(_BYTE *)v11 = v3;
  *(_DWORD *)(v11 + 4) = v8;
  *(_QWORD *)(a2 + 192) = v11;
  v12 = v8 + v11;
  *(_DWORD *)(v12 + 4) = v9;
  *(_BYTE *)v12 = v5;
  *(_QWORD *)(a2 + 200) = v12;
  v13 = v9 + v12;
  *(_BYTE *)v13 = v3;
  v14 = v8 + v13;
  *(_DWORD *)(v13 + 4) = v8;
  *(_QWORD *)(a2 + 208) = v13;
  *(_BYTE *)v14 = v3;
  *(_DWORD *)(v14 + 4) = v8;
  *(_QWORD *)(a2 + 216) = v8 + v13;
  return a2;
}
