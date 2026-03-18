/*
 * XREFs of AddBGRMapCache @ 0x1402F4988
 * Callers:
 *     CreateDyesColorMappingTable @ 0x14013D548 (CreateDyesColorMappingTable.c)
 * Callees:
 *     TrimBGRMapCache @ 0x1402F5B78 (TrimBGRMapCache.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall AddBGRMapCache(__int64 a1, __int64 a2)
{
  int v2; // r14d
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  PVOID v9; // rax
  PVOID v10; // rbp
  const void *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = a2;
  v4 = 1;
  v5 = *(_QWORD *)(W32GetSessionState(a1, a2) + 112);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 24));
  if ( *(int *)(v5 + 56) > 5 && *(_DWORD *)(v5 + 64) )
    TrimBGRMapCache();
  v6 = *(_DWORD *)(v5 + 60);
  if ( *(_DWORD *)(v5 + 56) >= (signed int)v6 )
  {
    v7 = v6 + 10;
    if ( v6 + 10 >= v6 )
    {
      v8 = 16LL * v7;
      if ( v8 <= 0xFFFFFFFF )
      {
        v9 = EngAllocMem(1u, v8, 0x30365448u);
        v10 = v9;
        if ( v9 )
        {
          v11 = *(const void **)(v5 + 48);
          if ( v11 )
          {
            memmove(v9, v11, 16LL * *(int *)(v5 + 56));
            EngFreeMem(*(PVOID *)(v5 + 48));
          }
          *(_QWORD *)(v5 + 48) = v10;
          *(_DWORD *)(v5 + 60) = v7;
        }
      }
    }
  }
  v12 = *(_QWORD *)(v5 + 48);
  if ( v12 && (v13 = *(int *)(v5 + 56), (int)v13 < *(_DWORD *)(v5 + 60)) )
  {
    v14 = 2 * v13;
    *(_QWORD *)(v12 + 8 * v14) = a1;
    *(_DWORD *)(v12 + 8 * v14 + 12) = v2;
    *(_DWORD *)(v12 + 8 * v14 + 8) = 1;
    ++*(_DWORD *)(v5 + 56);
  }
  else
  {
    v4 = 0;
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v5 + 24));
  return v4;
}
