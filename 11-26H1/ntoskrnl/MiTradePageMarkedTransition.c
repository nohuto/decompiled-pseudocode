/*
 * XREFs of MiTradePageMarkedTransition @ 0x1402DF640
 * Callers:
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiReplaceTransitionPageInitializeTargetPfn @ 0x140293340 (MiReplaceTransitionPageInitializeTargetPfn.c)
 *     MiReplaceTransitionPageFinish @ 0x140293E78 (MiReplaceTransitionPageFinish.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiCanPageMove @ 0x1402DFD1C (MiCanPageMove.c)
 */

__int64 __fastcall MiTradePageMarkedTransition(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // r15d
  int v5; // edi
  ULONG_PTR v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // r9
  int v12; // ebx
  unsigned __int8 v13; // al
  char v14; // di
  unsigned int v15; // eax
  unsigned int v16; // r8d
  __int64 result; // rax
  int v18; // edi
  __int64 v19; // rbx
  char v20; // al
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  int PfnSlabType; // eax
  int v24; // r10d
  int v25; // eax
  int v26; // r10d
  int v27; // r11d
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdi
  unsigned __int8 v37; // al
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rbx
  _QWORD v40[4]; // [rsp+20h] [rbp-78h] BYREF
  int v41; // [rsp+40h] [rbp-58h]
  __int64 v42; // [rsp+44h] [rbp-54h]
  int v43; // [rsp+4Ch] [rbp-4Ch]
  __int64 v44; // [rsp+50h] [rbp-48h]
  __int64 v45; // [rsp+A0h] [rbp+8h] BYREF
  _WORD *v46; // [rsp+A8h] [rbp+10h]
  __int64 *v47; // [rsp+B0h] [rbp+18h]
  __int64 v48; // [rsp+B8h] [rbp+20h]

  v47 = a3;
  v3 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 56) = 1;
  if ( (v3 & 0x400000) != 0 )
    v5 = *(_DWORD *)(a2 + 28);
  else
    v5 = 0;
  v6 = *(_QWORD *)a1;
  v7 = 48LL * *(_QWORD *)a1;
  v8 = v7 - 0x220000000000LL;
  if ( (v3 & 0x4000000) == 0 && *(__int64 *)(v8 + 8) > 0 && (*(_QWORD *)(v8 + 40) & 0x10000000000LL) == 0 )
  {
    _InterlockedIncrement(&dword_140EF9138);
    v39 = *(unsigned __int8 *)(a1 + 8);
LABEL_75:
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v39 < 2u )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v39);
      __writecr8(v39);
    }
    *(_WORD *)(a1 + 8) = 273;
    return result;
  }
  if ( (v3 & 0x200000) != 0 && MiIsPageOnBadList(48 * v6 - 0x220000000000LL) )
  {
    _InterlockedIncrement(&dword_140EF913C);
    v39 = *(unsigned __int8 *)(a1 + 8);
    goto LABEL_75;
  }
  if ( (unsigned __int16)*(_DWORD *)(v8 + 32) )
  {
    _InterlockedIncrement(&dword_140EF9120);
LABEL_74:
    v39 = *(unsigned __int8 *)(a1 + 8);
    goto LABEL_75;
  }
  if ( !(unsigned int)MiCanPageMove(48 * v6 - 0x220000000000LL) )
  {
    _InterlockedIncrement(&dword_140EF9128);
    goto LABEL_74;
  }
  v12 = *(_DWORD *)(v8 + 32) >> 22;
  v46 = *(_WORD **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  LOBYTE(v45) = *(_BYTE *)(a1 + 8);
  v13 = v45;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 < 2u )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      v13 = v45;
      v11 = v47;
    }
    __writecr8(v13);
  }
  LOBYTE(v45) = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(a1 + 8) = 17;
  if ( !v11 || (result = *v11, v48 = result, result == -1) )
  {
    if ( (v3 & 0x4000) != 0 )
    {
      v16 = 12288;
      v15 = v5 ^ (unsigned __int8)(v5 ^ v6);
    }
    else
    {
      if ( qword_140E2D868 )
        v14 = *((_BYTE *)MiSearchChannelTable(v6) + 12);
      else
        v14 = 0;
      v15 = (unsigned __int8)v6 | ((v14 & 1 | (2 * (((v12 & 3) << 9) | MiPageToNode(v6) & 0x3F | 0x180))) << 8);
      v16 = (131073 - ((unsigned __int8)v45 < 2u)) | 0x8000;
      if ( (v3 & 0x1000000) == 0 )
        v16 = 131073 - ((unsigned __int8)v45 < 2u);
      if ( (v3 & 0x2000000) != 0 )
        v16 |= 0x800u;
    }
    result = MiGetPage((__int64)v46, v15, v16);
    v48 = result;
    if ( result == -1 )
    {
      _InterlockedIncrement(&dword_140EF9154);
      *(_BYTE *)(a1 + 9) = 1;
      return result;
    }
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  v45 = 48 * result;
  v19 = 48 * result - 0x220000000000LL;
  v20 = MiSafeLockPage(v6, v9, v10);
  *(_BYTE *)(a1 + 8) = v20;
  if ( v20 == 17 )
    goto LABEL_55;
  if ( (((v3 & 0x10000000) == 0) & (*(_DWORD *)(v8 + 32) >> 30)) != 0 )
  {
    _InterlockedIncrement(&dword_140EF9134);
    goto LABEL_55;
  }
  if ( v19 == v8 )
  {
    v32 = -1LL;
  }
  else
  {
    MiGetPfnSlabType(48 * v6 - 0x220000000000LL);
    if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) != 0
      || (unsigned __int16)*(_DWORD *)(v8 + 32)
      || *(int *)(v8 + 32) < 0
      || ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FF) != *v46
      || !(unsigned int)MiCanPageMove(48 * v6 - 0x220000000000LL)
      || (PfnSlabType = MiGetPfnSlabType(v19), v24 != PfnSlabType)
      || (v25 = MiGetPfnSlabType(48 * v6 - 0x220000000000LL), v28 = v45, v25 == 8)
      && (v22 = *(unsigned __int8 *)(qword_140E3D240 + 2 * ((unsigned __int64)(v7 / 48) >> 9) + 1),
          LOBYTE(v22) = v22 & 0x7F,
          v21 = (unsigned __int64)(v45 / 48) >> 9,
          v37 = *(_BYTE *)(qword_140E3D240 + 2 * v21 + 1) & 0x7F,
          (_BYTE)v22 != v37)
      && (unsigned __int8)v22 < 0x40u
      && v37 < 0x40u )
    {
      _InterlockedIncrement(&dword_140EF9120);
LABEL_55:
      result = 0x7FFFFFFFFFFFFFFFLL;
LABEL_56:
      *(_BYTE *)(a1 + 9) = 1;
LABEL_57:
      v38 = *(unsigned __int8 *)(a1 + 8);
      if ( (_BYTE)v38 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v38 < 2u )
        {
          if ( KiIrqlFlags )
            result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
          __writecr8(v38);
        }
        *(_BYTE *)(a1 + 8) = 17;
      }
      if ( v18 )
        return MiReleaseFreshPage(v19, v21, v22);
      return result;
    }
    if ( (unsigned __int8)((*(_BYTE *)(v8 + 34) & 7) - 2) > 2u )
    {
      *(_DWORD *)(a1 + 56) = 2;
      _InterlockedIncrement(&dword_140EF9120);
      result = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_57;
    }
    v29 = *(_QWORD *)&v27 & (*(_QWORD *)(v8 + 40) >> 43);
    v40[1] = 0LL;
    v42 = 0LL;
    v44 = 0LL;
    v41 = v26;
    v40[0] = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v29);
    v43 = 0;
    LODWORD(v45) = 0;
    v40[2] = v7 / 48;
    v40[3] = v28 / 48;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v45);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    if ( (int)MiReplaceTransitionPageInitializeTargetPfn((__int64)v40) < 0 )
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedIncrement(&dword_140EF9124);
      if ( v18 )
      {
        *(_DWORD *)(a1 + 56) = 2;
        goto LABEL_57;
      }
      goto LABEL_56;
    }
    MiReplaceTransitionPageInList((__int64)v40);
    MiReplaceTransitionPageFinish((__int64)v40, v30, v31);
    v32 = v48;
  }
  _InterlockedIncrement(&dword_140EF90DC);
  *(_QWORD *)(v8 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v33 = *(_QWORD *)(v8 + 16);
  if ( v33 )
  {
    v34 = v33 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  }
  else
  {
    v34 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( qword_140E2D8C0 )
    {
      v35 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
      if ( (qword_140E2D8C0 & v34) == 0 )
        v35 = qword_140E2D8C0 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL | 0x80;
      v34 = v35;
    }
  }
  v36 = *(unsigned __int8 *)(a1 + 8);
  *(_QWORD *)(v8 + 16) = v34;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v36 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v36);
    __writecr8(v36);
  }
  result = (__int64)v47;
  *(_BYTE *)(a1 + 8) = 17;
  if ( result )
    *(_QWORD *)result = v32;
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
