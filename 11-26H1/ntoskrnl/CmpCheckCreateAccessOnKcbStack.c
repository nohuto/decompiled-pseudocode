/*
 * XREFs of CmpCheckCreateAccessOnKcbStack @ 0x140945804
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D7310 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpCheckCreateAccess @ 0x14094592C (CmpCheckCreateAccess.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1409466F4 (CmpSetAccessStateForBackupRestore.c)
 */

char __fastcall CmpCheckCreateAccessOnKcbStack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11)
{
  __int64 SecurityCacheEntryForKcbStack; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rsi
  char v17; // bl
  __int64 v18; // rcx

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a2, a8, 0LL);
  v16 = SecurityCacheEntryForKcbStack;
  v17 = 1;
  if ( a7
    && (LOBYTE(v14) = a5,
        LOBYTE(v15) = 1,
        (int)CmpSetAccessStateForBackupRestore(a4, v14, SecurityCacheEntryForKcbStack + 32, v15) < 0)
    || (v18 = *(_DWORD *)(a4 + 24) | a6 | 4u, ((unsigned int)v18 & *(_DWORD *)(a3 + 96)) != (_DWORD)v18) )
  {
    v17 = 0;
    *a11 = -1073741790;
  }
  else if ( !a7 || *(_DWORD *)(a4 + 16) )
  {
    LOBYTE(v15) = a5;
    return CmpCheckCreateAccess(v18, v16 + 32, a4, v15, a6, a8, a9, a10, a11);
  }
  else
  {
    *a11 = 0;
  }
  return v17;
}
