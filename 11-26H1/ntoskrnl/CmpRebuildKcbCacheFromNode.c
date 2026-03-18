/*
 * XREFs of CmpRebuildKcbCacheFromNode @ 0x1408E0760
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1406E2950 (CmpCreateTombstone.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14086071C (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1408609F8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpRebuildKcbCache @ 0x1408BCBD8 (CmpRebuildKcbCache.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409859F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140472390 (CmpFindSecurityCellCacheIndex.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1408C20B4 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408E08B8 (CmpCleanUpSubKeyInfo.c)
 *     CmLockHiveSecurityShared @ 0x140C58B30 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140C58BA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpRebuildKcbCacheFromNode(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  char v5; // al
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v13; // rdi
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v5 = *(_BYTE *)(a2 + 13) & 3;
  LOBYTE(a2) = 1;
  *(_BYTE *)(BugCheckParameter3 + 65) = v5;
  CmpCleanUpSubKeyInfo(BugCheckParameter3, a2);
  v8 = *(_DWORD *)(BugCheckParameter3 + 184);
  if ( (v8 & 0x400000) == 0 )
  {
    if ( a4 )
    {
      CmpCleanUpKcbCachedSymlink(BugCheckParameter3);
      v8 = *(_DWORD *)(BugCheckParameter3 + 184);
    }
    v9 = *(_DWORD *)(v4 + 40);
    *(_DWORD *)(BugCheckParameter3 + 96) = *(_DWORD *)(v4 + 36);
    *(_DWORD *)(BugCheckParameter3 + 100) = v9;
  }
  *(_QWORD *)(BugCheckParameter3 + 168) = *(_QWORD *)(v4 + 4);
  *(_WORD *)(BugCheckParameter3 + 176) = *(_WORD *)(v4 + 52);
  *(_WORD *)(BugCheckParameter3 + 178) = *(_WORD *)(v4 + 60);
  *(_DWORD *)(BugCheckParameter3 + 180) = *(_DWORD *)(v4 + 64);
  v10 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)*(_WORD *)(v4 + 54)) & 0xF;
  *(_DWORD *)(BugCheckParameter3 + 184) = v10;
  *(_DWORD *)(BugCheckParameter3 + 184) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)*(_WORD *)(v4 + 54)) & 0xF0;
  *(_BYTE *)(BugCheckParameter3 + 185) = *(_BYTE *)(v4 + 55);
  result = *(unsigned __int16 *)(v4 + 2);
  *(_WORD *)(BugCheckParameter3 + 186) = result;
  BugCheckParameter4 = *(unsigned int *)(v4 + 44);
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(BugCheckParameter3 + 32);
    v14 = 0;
    CmLockHiveSecurityShared(v13);
    if ( !CmpFindSecurityCellCacheIndex(v13, BugCheckParameter4, &v14) )
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, BugCheckParameter4);
    }
    *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v13 + 1896) + 16LL * v14 + 8);
    return CmUnlockHiveSecurity(v13);
  }
  return result;
}
