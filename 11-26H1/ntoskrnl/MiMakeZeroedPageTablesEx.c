/*
 * XREFs of MiMakeZeroedPageTablesEx @ 0x1402A46AC
 * Callers:
 *     MiGetPageTablesForLargeMap @ 0x1402A2624 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSystemCache @ 0x1402A2BF0 (MiExpandSystemCache.c)
 *     MiSplitBitmapPages @ 0x1402A4578 (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x1402A4624 (MiMakeZeroedPageTables.c)
 *     MiCreatePoolPageTables @ 0x1402A4644 (MiCreatePoolPageTables.c)
 *     MmKasanCommitRegion @ 0x14052CDC4 (MmKasanCommitRegion.c)
 *     MiMapNewPfns @ 0x14086CA54 (MiMapNewPfns.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiDeleteSystemPageTables @ 0x1402A3CCC (MiDeleteSystemPageTables.c)
 *     MiCleanupPageTablePages @ 0x1402A4AFC (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x1402A4DE8 (MiInitializeColorBase.c)
 *     MiFastReplenishWithAsync @ 0x1402A4E88 (MiFastReplenishWithAsync.c)
 *     MiAsyncSlabReplenish @ 0x1402A4ED4 (MiAsyncSlabReplenish.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiUpdateChargedWsles @ 0x140526724 (MiUpdateChargedWsles.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiGetLargePagesForSystemMapping @ 0x140B4E990 (MiGetLargePagesForSystemMapping.c)
 */

__int64 __fastcall MiMakeZeroedPageTablesEx(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  char *v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  unsigned __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rdx
  void *volatile *AnyMultiplexedVm; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  unsigned int v19; // r14d
  __int64 v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  int LargePagesForSystemMapping; // eax
  int v25; // ecx
  __int64 v27; // [rsp+38h] [rbp-C8h]
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-ACh]
  char v32; // [rsp+59h] [rbp-A7h]
  void *volatile *v33; // [rsp+70h] [rbp-90h]
  unsigned __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v36)(); // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v37)(); // [rsp+100h] [rbp+0h]
  _BYTE *v38; // [rsp+108h] [rbp+8h]
  _BYTE v39[8]; // [rsp+110h] [rbp+10h] BYREF
  char v40; // [rsp+118h] [rbp+18h] BYREF
  __int64 v41; // [rsp+170h] [rbp+70h]
  __int64 v42; // [rsp+180h] [rbp+80h]
  unsigned int v43; // [rsp+188h] [rbp+88h]
  unsigned int v44; // [rsp+18Ch] [rbp+8Ch]
  int v45; // [rsp+190h] [rbp+90h]
  int v46; // [rsp+194h] [rbp+94h]
  int v47; // [rsp+1A0h] [rbp+A0h]
  _BYTE v48[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v49; // [rsp+1B0h] [rbp+B0h]
  __int64 v50; // [rsp+1B8h] [rbp+B8h]

  memset_0(&v30, 0, 0xC0uLL);
  memset_0(v39, 0, 0xB8uLL);
  v9 = &v40;
  v10 = 4LL;
  do
  {
    *((_QWORD *)v9 + 1) = 0LL;
    *((_QWORD *)v9 - 1) = 0x3FFFFFFFFFLL;
    *(_QWORD *)v9 = 0x3FFFFFFFFFLL;
    v9 += 24;
    --v10;
  }
  while ( v10 );
  if ( (a3 & 0x800) != 0 || (a3 & 4) != 0 )
  {
    v11 = 3;
LABEL_5:
    v46 = v11;
LABEL_6:
    a3 &= ~0x80u;
    goto LABEL_7;
  }
  v11 = 2;
  if ( (a3 & 2) != 0 )
    goto LABEL_5;
  v11 = v46;
  if ( (a3 & 0x20) == 0 )
    v11 = 1;
  v46 = v11;
  if ( v11 == 4 )
    return 1LL;
  if ( v11 )
    goto LABEL_6;
LABEL_7:
  v31 = v31 & 0xFFFFFE3F | ((v11 & 7) << 6);
  v12 = a1 << 25 >> 16;
  v13 = (a2 << 25 >> 16) + 4095;
  v43 = a4;
  AnyMultiplexedVm = MiSystemVaTypeToVm(a4);
  if ( !AnyMultiplexedVm )
    AnyMultiplexedVm = (void *volatile *)MiGetAnyMultiplexedVm(6LL, v14);
  v27 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
  v41 = v27;
  v16 = -1LL;
  v45 = a3;
  v44 = a5;
  v50 = -1LL;
  if ( (a3 & 0x40) != 0 )
  {
    v17 = 8LL;
    do
    {
      v16 = (v16 << 8) | 0xA;
      --v17;
    }
    while ( v17 );
    v50 = v16;
  }
  else if ( v12 >= 0xFFFFDE0000000000uLL && v12 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL || a4 == 19 )
  {
    v50 = 0LL;
  }
  MiInitializeColorBase(v12, a5, v48);
  v18 = (v49 >> 9) & 0x3F;
  if ( (a3 & 0x80u) != 0 )
  {
    LargePagesForSystemMapping = MiGetLargePagesForSystemMapping(v39, v12, v13);
    if ( LargePagesForSystemMapping >= 0 )
    {
      if ( LargePagesForSystemMapping == 1075380276 )
      {
        LOWORD(a3) = a3 & 0xFF7F;
        v45 &= ~0x80u;
      }
    }
    else if ( (a3 & 0x100) != 0 )
    {
      MiCleanupPageTablePages(v39);
      return 0LL;
    }
  }
  v19 = (a3 & 0x1000) != 0 ? 5 : 1;
  if ( v43 == 3 && (a3 & 0x80u) == 0 && (MiFlags & 0x1000000000LL) != 0 )
    MiFastReplenishWithAsync(*(_QWORD *)(v27 + 16) + 16376LL + 56320LL * v18, ((a2 - a1) >> 3) + 1, v19);
  if ( (MiFlags & 0x1000000000LL) != 0 )
  {
    v20 = *(_QWORD *)(v27 + 16) + 56320LL * v18;
    v21 = (unsigned int)(4 - v46);
    if ( *(_QWORD *)(v20 + 16472) + *(_QWORD *)(*(_QWORD *)(v20 + 16456) + 16LL) < v21 )
    {
      if ( v43 <= 0x13 && (v25 = 528656, _bittest(&v25, v43)) )
        MiAsyncSlabReplenish(v20 + 16376, 0LL, v19);
      else
        MiFastReplenishWithAsync(v20 + 16376, (int)v21, v19);
    }
  }
  v30 = 20487;
  v36 = MiCreateSystemPageTable;
  v37 = MiCreateSystemPageTableTail;
  v38 = v39;
  v34 = v12;
  v35 = v13;
  v33 = AnyMultiplexedVm;
  if ( (a3 & 0x1000) != 0 )
  {
    v32 = 17;
    MiLockWorkingSetSharedAtDpc(AnyMultiplexedVm);
  }
  else
  {
    v32 = MiLockWorkingSetShared(AnyMultiplexedVm);
  }
  MiWalkPageTables(&v30);
  LOBYTE(v22) = v32;
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v22);
  if ( (a3 & 0x40) != 0 && v43 != 1 )
    MiUpdateChargedWsles(AnyMultiplexedVm, v42);
  MiCleanupPageTablePages(v39);
  if ( v47 >= 0 )
    return 1LL;
  if ( (a3 & 0x200) == 0 )
    MiDeleteSystemPageTables((__int64)AnyMultiplexedVm, a4, v12, v13, 0);
  return 0LL;
}
