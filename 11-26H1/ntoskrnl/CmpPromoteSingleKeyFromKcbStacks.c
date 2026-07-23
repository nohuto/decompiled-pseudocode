/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x1409479F4
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140866AEC (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E6D20 (CmpRebuildKcbCacheFromNode.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140943804 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpStartKeyNodeStack @ 0x140943CD8 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140944174 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x140944480 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140945268 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKcbStacks(__int64 a1, __int64 a2, char a3)
{
  _OWORD *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r9
  char *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int16 v11; // di
  char v12; // r12
  ULONG_PTR v13; // r15
  __int16 v14; // dx
  ULONG_PTR v15; // r14
  __int16 v16; // dx
  int started; // ebx
  __int64 v18; // rbx
  _OWORD *v19; // r15
  __int64 v20; // rdi
  _OWORD *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  ULONG_PTR v24; // rcx
  __int64 CellFlat; // rax
  __int64 EntryAtLayerHeight; // rsi
  __int16 v27; // dx
  __int64 v28; // rdi
  __int16 v31; // [rsp+22h] [rbp-A7h]
  __int64 KcbAtLayerHeight; // [rsp+28h] [rbp-A1h]
  unsigned __int16 v34; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v35[4]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v36; // [rsp+88h] [rbp-41h]
  __int16 v37; // [rsp+90h] [rbp-39h] BYREF
  char v38; // [rsp+98h] [rbp-31h] BYREF

  memset_0(&v34, 0, 0x50uLL);
  v5 = v35;
  do
  {
    CmpKeyNodeStackEntryInitialize((__int64)v5);
    v5 = (_OWORD *)(v6 + 32);
  }
  while ( v7 != 1 );
  memset_0(&v37, 0, 0x50uLL);
  v8 = &v38;
  do
  {
    CmpKeyNodeStackEntryInitialize((__int64)v8);
    v8 = (char *)(v9 + 32);
  }
  while ( v10 != 1 );
  v11 = *(_WORD *)(a1 + 2);
  v31 = v11;
  v12 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v11);
  v13 = KcbAtLayerHeight;
  v15 = CmpGetKcbAtLayerHeight(a2, v14);
  started = CmpStartKeyNodeStack((__int64)&v34, v16);
  if ( started >= 0 )
  {
    v18 = *(__int16 *)(a1 + 2);
    if ( (v18 & 0x8000u) == 0LL )
    {
      v19 = &v35[2 * v18];
      v20 = 32LL * (__int16)(v18 - 2);
      do
      {
        if ( (unsigned __int16)v18 < 2u )
          v21 = v19;
        else
          v21 = (_OWORD *)(v20 + v36);
        v22 = CmpGetKcbAtLayerHeight(a1, v18);
        v23 = *(unsigned int *)(v22 + 40);
        if ( (_DWORD)v23 != -1 )
        {
          v24 = *(_QWORD *)(v22 + 32);
          *(_QWORD *)v21 = v24;
          *((_DWORD *)v21 + 2) = v23;
          if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v24, v23, (unsigned int *)v21 + 6);
          else
            CellFlat = HvpGetCellPaged(v24, v23);
          *((_QWORD *)v21 + 2) = CellFlat;
        }
        v20 -= 32LL;
        v19 -= 2;
        LOWORD(v18) = v18 - 1;
      }
      while ( (v18 & 0x8000u) == 0LL );
      v11 = v31;
      v12 = 0;
      v13 = KcbAtLayerHeight;
    }
    started = CmpStartKeyNodeStackFromKcbStack((__int64)&v37, a2, 0LL);
    if ( started >= 0 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)&v34, v11);
      v28 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)&v37, v27);
      if ( *(_DWORD *)(v15 + 40) == -1 )
      {
        started = CmpPartialPromoteSingleKeyFromKeyNodeStacks(&v34, (__int64)&v37);
        if ( started < 0 )
          goto LABEL_28;
        v12 = 1;
        *(_DWORD *)(v15 + 40) = *(_DWORD *)(v28 + 8);
      }
      if ( a3 )
      {
        started = CmpFullPromoteSingleKeyFromKeyNodeStacks((__int64)&v34, &v37);
        if ( started < 0 )
          goto LABEL_26;
        v12 = 1;
      }
      started = 0;
LABEL_26:
      if ( v12 )
      {
        ++*(_QWORD *)(v15 + 304);
        CmpRebuildKcbCacheFromNode(v15, *(_QWORD *)(v28 + 16), 0LL, 0);
        ++*(_QWORD *)(v13 + 304);
        CmpRebuildKcbCacheFromNode(v13, *(_QWORD *)(EntryAtLayerHeight + 16), 0LL, 0);
      }
    }
  }
LABEL_28:
  CmpCleanupKeyNodeStack((__int64)&v37);
  CmpCleanupKeyNodeStack((__int64)&v34);
  return (unsigned int)started;
}
