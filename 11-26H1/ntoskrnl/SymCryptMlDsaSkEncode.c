/*
 * XREFs of SymCryptMlDsaSkEncode @ 0x140573034
 * Callers:
 *     SymCryptMlDsakeyGetValue @ 0x1405607C0 (SymCryptMlDsakeyGetValue.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573204 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptMlDsaVectorEncode @ 0x1405735E4 (SymCryptMlDsaVectorEncode.c)
 *     SymCryptMlDsaVectorINTT @ 0x1405736F0 (SymCryptMlDsaVectorINTT.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SymCryptMlDsaSkEncode(__int64 a1, _OWORD *a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned int *v8; // r15
  _OWORD *v9; // rdi
  unsigned __int8 *v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int8 *v12; // rbx
  char *v13; // rdi
  char *v14; // rbx
  void *v15; // rdi

  v3 = 0;
  if ( *(_BYTE *)(a1 + 21) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( a3 == *(_DWORD *)(v6 + 44) )
    {
      v7 = SymCryptMlDsaTemporariesAllocateAndInitialize(v6, 1, 1, 0, 0);
      v8 = (unsigned int *)v7;
      if ( v7 )
      {
        *a2 = *(_OWORD *)(a1 + 86);
        a2[1] = *(_OWORD *)(a1 + 102);
        a2[2] = *(_OWORD *)(a1 + 54);
        a2[3] = *(_OWORD *)(a1 + 70);
        a2[4] = *(_OWORD *)(a1 + 118);
        a2[5] = *(_OWORD *)(a1 + 134);
        a2[6] = *(_OWORD *)(a1 + 150);
        a2[7] = *(_OWORD *)(a1 + 166);
        v9 = a2 + 8;
        v10 = **(unsigned __int8 ***)(v7 + 280);
        memmove(v10, *(const void **)(a1 + 200), *(unsigned int *)(*(_QWORD *)(a1 + 200) + 4LL));
        SymCryptMlDsaVectorINTT(v10);
        SymCryptMlDsaVectorEncode(v10, *(unsigned __int8 *)(v6 + 23), *(unsigned __int8 *)(v6 + 22), v9);
        v11 = (32 * *v10 * (unsigned __int64)*(unsigned __int8 *)(v6 + 23)) & 0x1FFFFFFFFFFFFFFFLL;
        v12 = (unsigned __int8 *)**((_QWORD **)v8 + 34);
        v13 = (char *)v9 + v11;
        memmove(v12, *(const void **)(a1 + 208), *(unsigned int *)(*(_QWORD *)(a1 + 208) + 4LL));
        SymCryptMlDsaVectorINTT(v12);
        SymCryptMlDsaVectorEncode(v12, *(unsigned __int8 *)(v6 + 23), *(unsigned __int8 *)(v6 + 22), v13);
        v14 = &v13[(32 * *(unsigned __int8 *)(v6 + 23) * (unsigned __int64)*v12) & 0x1FFFFFFFFFFFFFFFLL];
        v15 = (void *)**((_QWORD **)v8 + 34);
        memmove(v15, *(const void **)(a1 + 216), *(unsigned int *)(*(_QWORD *)(a1 + 216) + 4LL));
        SymCryptMlDsaVectorINTT(v15);
        SymCryptMlDsaVectorEncode(v15, 13LL, 4096LL, v14);
        SymCryptWipe((__int64)v8, *v8);
        SymCryptCallbackFree(v8);
      }
      else
      {
        return 32783;
      }
    }
    else
    {
      return 32782;
    }
  }
  else
  {
    return 32785;
  }
  return v3;
}
