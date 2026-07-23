/*
 * XREFs of SmHpChunkHeapProtect @ 0x1402510C4
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x14064107C (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 * Callees:
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     ExProtectPoolEx @ 0x14024E7DC (ExProtectPoolEx.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140250D94 (SmPrepareForFatalHeapCorruption.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall SmHpChunkHeapProtect(__int64 a1, char a2, unsigned int a3)
{
  ULONG_PTR v3; // r15
  unsigned int i; // esi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int8 *v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // r8d
  int v14; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  v3 = a3;
  for ( i = 1; i < *(_DWORD *)(a1 + 256); ++i )
  {
    _BitScanReverse((unsigned int *)&v7, i);
    LODWORD(BugCheckParameter4) = 0;
    v8 = 2 * (i ^ (unsigned __int64)(unsigned int)(1 << v7));
    v9 = *(_QWORD *)(a1 + 8 * v7);
    v10 = *(unsigned __int8 **)(v9 + 16 * (i ^ (unsigned __int64)(unsigned int)(1 << v7)));
    if ( v10 )
    {
      BugCheckParameter4 = 0LL;
      if ( *(_DWORD *)(v9 + 8 * v8 + 12) )
      {
        if ( (a2 & 3) != 0 )
        {
          v11 = rapidhash_internal(v10, 0x1000uLL, 0LL);
          v13 = *(_DWORD *)(v9 + 8 * v8 + 12);
          if ( !v11 )
            v11 = 1;
          if ( v11 == v13 )
          {
            if ( (a2 & 1) != 0 )
            {
              ExProtectPoolEx(*(_QWORD *)(v9 + 8 * v8), *(_QWORD *)(v9 + 8 * v8), 4096LL, 4u);
              *(_DWORD *)(v9 + 8 * v8 + 12) = 0;
            }
          }
          else if ( (a2 & 4) == 0 )
          {
            SmPrepareForFatalHeapCorruption(*(void **)(v9 + 8 * v8), v12, v13, v11, (__int64 *)&BugCheckParameter4);
            KeBugCheckEx(0x1C7u, v3, *(_QWORD *)(v9 + 8 * v8), *(unsigned int *)(v9 + 8 * v8 + 12), BugCheckParameter4);
          }
        }
      }
      else if ( (a2 & 3) == 0 )
      {
        ExProtectPoolEx((unsigned __int64)v10, (unsigned __int64)v10, 4096LL, 2u);
        v14 = rapidhash_internal(*(unsigned __int8 **)(v9 + 8 * v8), 0x1000uLL, 0LL);
        *(_DWORD *)(v9 + 8 * v8 + 12) = v14;
        if ( !v14 )
          *(_DWORD *)(v9 + 8 * v8 + 12) = 1;
      }
    }
  }
}
