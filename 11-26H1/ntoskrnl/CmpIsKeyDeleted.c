/*
 * XREFs of CmpIsKeyDeleted @ 0x1408C8400
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B8450 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpQueryKeyDataFromCache @ 0x1408C6F10 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C8DC0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C94A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x140B47A70 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2)
{
  int v4; // esi
  struct _PRIVILEGE_SET *Pool; // rdi
  __int64 v6; // rax
  __int16 v7; // ax
  PPRIVILEGE_SET v8; // rcx
  char v9; // bl
  __int64 v11; // r9
  __int64 NextElement; // rax
  __int64 v13; // rcx
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v15; // rdx
  __int64 v16; // rax
  bool IsEqual; // al
  __int64 v18; // rdx
  __int128 v19; // [rsp+20h] [rbp-28h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    return 1;
  v4 = *(__int16 *)(a1 + 66);
  Pool = 0LL;
  v19 = 0LL;
  WORD1(v19) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( v4 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
  {
    v6 = *(__int16 *)(a1 + 66);
    Privileges[1] = Pool;
    WORD1(v19) = v6;
    if ( (_WORD)v6 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; LOWORD(v6) = v6 - 1 )
      {
        v15 = *(struct _PRIVILEGE_SET **)(i + 16);
        if ( (__int16)v6 >= 2 )
        {
          *((_QWORD *)Pool + (__int16)v6 - 2) = v15;
        }
        else
        {
          Privileges[(__int16)v6 - 1] = v15;
          Pool = Privileges[1];
        }
        i = *(_QWORD *)(i + 24);
      }
    }
    else
    {
      Privileges[v6 - 1] = (PPRIVILEGE_SET)a1;
      Pool = Privileges[1];
    }
  }
  else
  {
    Pool = Privileges[1];
  }
  v7 = WORD1(v19);
  v21 = 0LL;
  while ( 1 )
  {
    if ( v7 < 0
      || (v7 >= 2 ? (v8 = (PPRIVILEGE_SET)*((_QWORD *)Pool + v7 - 2)) : (v8 = Privileges[v7 - 1]),
          HIWORD(v8[3].Control) && BYTE1(v8[3].Control) == 1) )
    {
LABEL_23:
      v9 = 1;
      goto LABEL_14;
    }
    if ( v8[2].PrivilegeCount != -1 )
      break;
    --v7;
  }
  if ( a2 )
  {
    v11 = *((_QWORD *)&v19 + 1);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v11 + 208, &v21, 32LL);
      if ( !NextElement )
        break;
      if ( *(_DWORD *)(NextElement + 68) == 2 )
      {
        v13 = *(_QWORD *)(NextElement + 56);
        if ( !v13 )
          break;
        if ( v13 != a2 )
        {
          v16 = *(_QWORD *)(v13 + 56);
          if ( v16 && (v18 = *(_QWORD *)(a2 + 56)) != 0 )
            IsEqual = v16 == v18;
          else
            IsEqual = CmpTransUowIsEqual((const void *)(v13 + 88), (const void *)(a2 + 88));
          if ( !IsEqual )
          {
            v9 = 0;
            goto LABEL_14;
          }
        }
        goto LABEL_23;
      }
    }
  }
  v9 = 0;
LABEL_14:
  if ( Pool )
    CmSiFreeMemory(Pool);
  return v9;
}
