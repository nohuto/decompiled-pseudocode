/*
 * XREFs of SmHpChunkFree @ 0x140211300
 * Callers:
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14020B620 (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020D6E0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     SmHpBufferProtectEx @ 0x14024E610 (SmHpBufferProtectEx.c)
 *     ExProtectPoolEx @ 0x14024E7DC (ExProtectPoolEx.c)
 *     SmHpUnprotectListNeighbors @ 0x14024F5F4 (SmHpUnprotectListNeighbors.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140250D94 (SmPrepareForFatalHeapCorruption.c)
 *     SmHpBufferCleanup @ 0x1403E9E38 (SmHpBufferCleanup.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall SmHpChunkFree(__int64 a1, unsigned __int64 a2)
{
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // r14
  __int64 result; // rax
  __int16 v8; // r9
  unsigned int v9; // edx
  int v10; // esi
  unsigned int v11; // edx
  int v12; // ecx
  __int64 *v13; // r15
  __int64 *v14; // rcx
  _QWORD *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  void *v19; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v3 = -1;
  v4 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v5, v4);
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v5) + 16 * (v4 ^ (unsigned int)(1 << v5)));
  result = *((unsigned __int16 *)v6 + 4);
  *(_WORD *)a2 = result;
  v8 = a2 - *(_WORD *)v6;
  v9 = *((unsigned __int16 *)v6 + 5);
  *((_WORD *)v6 + 4) = v8;
  if ( (_WORD)v9 )
    v10 = v9 >> *(_BYTE *)(a1 + 552);
  else
    v10 = -1;
  *((_WORD *)v6 + 5) = v9 + 1;
  ++*(_DWORD *)(a1 + 560);
  v11 = *((unsigned __int16 *)v6 + 5);
  if ( (_WORD)v11 )
    v3 = v11 >> *(_BYTE *)(a1 + 552);
  if ( v10 != v3 )
  {
    BugCheckParameter4 = 0LL;
    if ( *((_DWORD *)v6 + 3) )
    {
      v18 = rapidhash_internal(*v6, 4096LL, 0LL);
      v19 = (void *)*v6;
      if ( !v18 )
        v18 = 1;
      if ( v18 != *((_DWORD *)v6 + 3) )
      {
        SmPrepareForFatalHeapCorruption(v19, (__int64)&BugCheckParameter4);
        KeBugCheckEx(0x1C7u, 0LL, *v6, *((unsigned int *)v6 + 3), BugCheckParameter4);
      }
      result = ExProtectPoolEx(v19, *v6, 4096LL, 4LL);
      *((_DWORD *)v6 + 3) = 0;
    }
    v13 = (__int64 *)*v6;
    if ( v10 >= 0 )
    {
      SmHpUnprotectListNeighbors(a1, a1 + 16 * (v10 + 18LL), *v6);
      result = *v13;
      if ( *(__int64 **)(*v13 + 8) != v13 )
        goto LABEL_18;
      v14 = (__int64 *)v13[1];
      if ( (__int64 *)*v14 != v13 )
        goto LABEL_18;
      *v14 = result;
      *(_QWORD *)(result + 8) = v14;
      if ( *(_QWORD *)(a1 + 16 * (v10 + 18LL)) == a1 + 16 * (v10 + 18LL) )
      {
        result = (unsigned int)(1 << v10);
        *(_DWORD *)(a1 + 284) ^= result;
      }
    }
    if ( v3 < 0 )
    {
      v13[1] = (__int64)v13;
      *v13 = (__int64)v13;
      goto LABEL_6;
    }
    v15 = (_QWORD *)(a1 + 16 * (v3 + 18LL));
    if ( (_QWORD *)*v15 == v15 )
    {
      *(_DWORD *)(a1 + 284) ^= 1 << v3;
    }
    else
    {
      v16 = *(unsigned int *)(v15[1] + 16LL);
      _BitScanReverse((unsigned int *)&v17, v16);
      SmHpBufferProtectEx(v17, *(_QWORD *)(a1 + 8 * v17) + 16 * (v16 ^ (unsigned int)(1 << v17)), 1LL, 0LL);
    }
    result = v15[1];
    if ( *(_QWORD **)result == v15 )
    {
      *v13 = (__int64)v15;
      v13[1] = result;
      *(_QWORD *)result = v13;
      v15[1] = v13;
      goto LABEL_6;
    }
LABEL_18:
    __fastfail(3u);
  }
LABEL_6:
  v12 = *((unsigned __int16 *)v6 + 5);
  if ( v12 == *(_DWORD *)(a1 + 548) )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 560) - v12);
    if ( (unsigned int)result >= *(_DWORD *)(a1 + 556) )
      result = SmHpBufferCleanup(a1, v6);
  }
  --*(_DWORD *)(a1 + 564);
  return result;
}
