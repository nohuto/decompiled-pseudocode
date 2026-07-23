/*
 * XREFs of ApiSetpInsertHashEntry @ 0x1406E0788
 * Callers:
 *     ApiSetSchemaExpander_InsertContractEntry @ 0x1406DFB74 (ApiSetSchemaExpander_InsertContractEntry.c)
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x1406DFBF8 (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertGroupContractEntry @ 0x1406DFC70 (ApiSetSchemaExpander_InsertGroupContractEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x1406DFCF4 (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x1406DFDEC (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 * Callees:
 *     ApiSetpGetSearchKeyHash @ 0x1406DF524 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpFindHashInsertionPoint_V7 @ 0x1406E0688 (ApiSetpFindHashInsertionPoint_V7.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall ApiSetpInsertHashEntry(__int64 a1, unsigned int *a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int *v4; // rsi
  int v5; // r12d
  __int64 v6; // rbp
  unsigned int SearchKeyHash; // eax
  unsigned int v10; // r13d
  __int64 result; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int *v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r11
  unsigned __int16 v19; // r8
  __int64 v20; // rcx
  unsigned __int16 v21; // dx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned int v25; // r9d
  unsigned int v26; // r10d
  unsigned __int16 v27; // [rsp+70h] [rbp+18h] BYREF

  v4 = a2 + 1;
  v5 = a3;
  v6 = *((unsigned __int16 *)a2 + 2);
  if ( a3 == (_WORD)v6 )
  {
    SearchKeyHash = ApiSetpGetSearchKeyHash(
                      a4,
                      (*((_BYTE *)a2 + 9) & 2) != 0,
                      (*(_BYTE *)(a1 + 2) & 8) != 0,
                      (*(_BYTE *)(a1 + 2) & 0x10) != 0,
                      *((_BYTE *)a2 + 10));
    v27 = 0;
    v10 = SearchKeyHash;
    result = ApiSetpFindHashInsertionPoint_V7(a1, (__int64)a2, SearchKeyHash, &v27);
    if ( (int)result < 0 )
      return result;
    v12 = v27;
    v13 = v27;
    if ( (_DWORD)v6 == v27 )
    {
      v14 = v4;
    }
    else
    {
      memmove(
        (void *)(a1 + 8LL * v27 + 8 + *a2 + (v6 + 1) * *((unsigned __int8 *)a2 + 8) - *(unsigned __int16 *)(a1 + 18)),
        (const void *)(a1 + 8LL * v27 + *a2 + v6 * *((unsigned __int8 *)a2 + 8) - *(unsigned __int16 *)(a1 + 18)),
        8LL * ((unsigned int)v6 - v27));
      v14 = a2 + 1;
    }
    v15 = *a2;
    v16 = a1 + *((unsigned __int8 *)a2 + 8) * (*(unsigned __int16 *)v4 + 1LL) + 8 * v12 - *(unsigned __int16 *)(a1 + 18);
    *(_DWORD *)(v15 + v16) = v10;
    *(_DWORD *)(v15 + v16 + 4) = v5;
    if ( (_DWORD)v13 )
    {
      memmove(
        (void *)(a1
               + *a2
               + *((unsigned __int8 *)a2 + 8) * (*(unsigned __int16 *)v4 + 1LL)
               - *(unsigned __int16 *)(a1 + 18)),
        (const void *)(a1
                     + *a2
                     + *(unsigned __int16 *)v4 * (unsigned __int64)*((unsigned __int8 *)a2 + 8)
                     - *(unsigned __int16 *)(a1 + 18)),
        8 * v13);
      v4 = v14;
    }
    v17 = *(unsigned __int16 *)v4;
    if ( !(_WORD)v17 )
      return 0LL;
    v18 = *(unsigned __int16 *)(a1 + 18);
    v19 = v17 + 1;
    v20 = v17 + 1;
    v21 = 1;
    v22 = *((unsigned __int8 *)a2 + 8);
    v23 = *a2;
    v24 = v22 * v20;
    if ( v19 <= 1u )
      return 0LL;
    v25 = *(_DWORD *)(v23 + v24 - v18 + a1);
    while ( 1 )
    {
      v26 = *(_DWORD *)(v24 + v23 + 8LL * v21 - v18 + a1);
      if ( v25 >= v26 )
        break;
      ++v21;
      v25 = v26;
      if ( v21 >= v19 )
        return 0LL;
    }
  }
  return 3221225701LL;
}
