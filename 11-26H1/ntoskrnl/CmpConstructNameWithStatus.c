/*
 * XREFs of CmpConstructNameWithStatus @ 0x1408C7C30
 * Callers:
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpTraceSecurityChanging @ 0x1408C61DC (CmpTraceSecurityChanging.c)
 *     CmCallbackGetKeyObjectID @ 0x1408C7460 (CmCallbackGetKeyObjectID.c)
 *     CmpDoWritethroughReparse @ 0x1408C77A0 (CmpDoWritethroughReparse.c)
 *     CmpConstructAndCacheName @ 0x1408C7B80 (CmpConstructAndCacheName.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1408C7DFC (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpConstructNameFromKeyNodes @ 0x1408DEAD0 (CmpConstructNameFromKeyNodes.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  char v4; // al
  int v5; // esi
  struct _PRIVILEGE_SET *Pool; // rbx
  char v7; // bp
  __int64 v8; // rax
  __int16 j; // ax
  PPRIVILEGE_SET v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0LL;
  v17 = 0LL;
  WORD1(v17) = -1;
  *(_OWORD *)Privileges = 0LL;
  v4 = CmpAcquireShutdownRundown(a1, a2);
  v5 = *(__int16 *)(a1 + 66);
  Pool = 0LL;
  v7 = v4;
  if ( v5 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
  {
    LOWORD(v17) = v5;
    Privileges[1] = Pool;
    v8 = *(__int16 *)(a1 + 66);
    WORD1(v17) = v8;
    if ( (_WORD)v8 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; LOWORD(v8) = v8 - 1 )
      {
        v16 = *(struct _PRIVILEGE_SET **)(i + 16);
        if ( (__int16)v8 >= 2 )
        {
          *((_QWORD *)Pool + (__int16)v8 - 2) = v16;
        }
        else
        {
          Privileges[(__int16)v8 - 1] = v16;
          Pool = Privileges[1];
        }
        i = *(_QWORD *)(i + 24);
      }
    }
    else
    {
      Privileges[v8 - 1] = (PPRIVILEGE_SET)a1;
      Pool = Privileges[1];
    }
    if ( v7 && (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
    {
      for ( j = WORD1(v17); j >= 0; --j )
      {
        v10 = j >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)Pool + j - 2) : Privileges[j - 1];
        if ( HIWORD(v10[3].Control) && BYTE1(v10[3].Control) == 1 )
          break;
        if ( v10[2].PrivilegeCount != -1 )
        {
          if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
          {
            v11 = CmpConstructNameFromKeyNodes(&v17, &v19);
            Pool = Privileges[1];
            goto LABEL_15;
          }
          break;
        }
      }
    }
    v11 = CmpConstructNameFromKcbNameBlocks(a1, &v19);
LABEL_15:
    v13 = v11;
    if ( v11 >= 0 )
    {
      v13 = 0;
      *a2 = v19;
    }
  }
  else
  {
    Pool = Privileges[1];
    v13 = -1073741670;
  }
  if ( Pool )
    CmSiFreeMemory(Pool);
  if ( v7 )
    CmpReleaseShutdownRundown(v12);
  return v13;
}
