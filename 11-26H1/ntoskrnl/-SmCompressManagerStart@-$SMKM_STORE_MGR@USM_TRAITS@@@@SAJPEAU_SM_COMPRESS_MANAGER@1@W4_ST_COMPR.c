/*
 * XREFs of ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640444
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 * Callees:
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640190 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSI.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640690 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsRegisterProcessAvailableCpusChangeNotification @ 0x1407F67A0 (PsRegisterProcessAvailableCpusChangeNotification.c)
 */

int __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerStart(__int64 a1, int a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rax
  int result; // eax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rcx
  __int16 v11; // ax
  size_t v12; // r8
  __int64 v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // r15
  __int64 v16; // rbx
  int v17; // eax
  unsigned int i; // ebx
  __int64 v19; // rax
  __int64 v20; // rbx

  v4 = *(_DWORD *)(*(_QWORD *)a1 + 2124LL);
  v5 = v4;
  v6 = SmAllocEx(272LL * v4, 0x6E436D73u, -1);
  *(_QWORD *)(a1 + 24) = v6;
  if ( !v6 )
    return -1073741670;
  if ( v4 )
  {
    v8 = 0LL;
    v9 = v4;
    do
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = KiMaximumGroups;
      v12 = 8LL * (unsigned __int16)KiMaximumGroups;
      *(_WORD *)(v8 + v10) = 1;
      *(_WORD *)(v8 + v10 + 2) = v11;
      *(_DWORD *)(v8 + v10 + 4) = 0;
      memset_0((void *)(v8 + v10 + 8), 0, v12);
      v8 += 272LL;
      --v9;
    }
    while ( v9 );
  }
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerUpdateTopology(a1);
  v13 = SmAllocEx(176LL * v4, 0x63436D73u, -1);
  *(_QWORD *)(a1 + 16) = v13;
  if ( !v13 )
    return -1073741670;
  v14 = 0;
  if ( v4 )
  {
    v15 = 0LL;
    do
    {
      v16 = v15 + *(_QWORD *)(a1 + 16);
      memset_0((void *)v16, 0, 0xB0uLL);
      v15 += 176LL;
      *(_QWORD *)(v16 + 24) = v16 + 16;
      *(_QWORD *)(v16 + 16) = 0LL;
      *(_QWORD *)(v16 + 112) = v16 + 104;
      *(_QWORD *)(v16 + 104) = v16 + 104;
      *(_WORD *)(v16 + 32) = 1;
      *(_BYTE *)(v16 + 34) = 6;
      *(_DWORD *)(v16 + 36) = 0;
      *(_QWORD *)(v16 + 48) = v16 + 40;
      *(_QWORD *)(v16 + 40) = v16 + 40;
      *(_WORD *)(v16 + 56) = 0;
      *(_BYTE *)(v16 + 58) = 6;
      *(_DWORD *)(v16 + 60) = 0;
      *(_QWORD *)(v16 + 72) = v16 + 64;
      *(_QWORD *)(v16 + 64) = v16 + 64;
      *(_WORD *)(v16 + 80) = 0;
      *(_BYTE *)(v16 + 82) = 6;
      *(_DWORD *)(v16 + 84) = 0;
      *(_QWORD *)(v16 + 96) = v16 + 88;
      *(_QWORD *)(v16 + 88) = v16 + 88;
      *(_QWORD *)(v16 + 144) = 0LL;
      *(_QWORD *)(v16 + 128) = v16 + 120;
      *(_QWORD *)(v16 + 120) = 0LL;
      v17 = *(_DWORD *)(a1 + 596);
      *(_DWORD *)(v16 + 168) = v14++;
      *(_DWORD *)(v16 + 152) = v17;
      *(_QWORD *)(v16 + 8) = a1;
    }
    while ( v14 < v4 );
  }
  for ( i = 0; i < v4; ++i )
  {
    result = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(*(_QWORD *)(a1 + 16) + 176LL * i, a2);
    if ( result < 0 )
      return result;
  }
  v19 = SmAllocEx(16LL * v4, 0x77436D73u, -1);
  *(_QWORD *)(a1 + 32) = v19;
  if ( !v19 )
    return -1073741670;
  if ( v4 )
  {
    v20 = 0LL;
    do
    {
      InitializeSListHead((PSLIST_HEADER)(v20 + *(_QWORD *)(a1 + 32)));
      v20 += 16LL;
      --v5;
    }
    while ( v5 );
  }
  result = PsRegisterProcessAvailableCpusChangeNotification(
             *(_QWORD *)(*(_QWORD *)a1 + 2280LL),
             (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerRefreshTopology,
             a1,
             (int)a1 + 312,
             a1 + 320);
  if ( result >= 0 )
    return 0;
  return result;
}
