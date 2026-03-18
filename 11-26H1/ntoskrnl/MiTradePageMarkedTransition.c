/*
 * XREFs of MiTradePageMarkedTransition @ 0x1402FD5C0
 * Callers:
 *     MiTradePage @ 0x140291970 (MiTradePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiIsPageOnBadList @ 0x14028F9D0 (MiIsPageOnBadList.c)
 *     MiReleaseFreshPage @ 0x140292190 (MiReleaseFreshPage.c)
 *     MiReplaceTransitionPageInitializeTargetPfn @ 0x140293DE0 (MiReplaceTransitionPageInitializeTargetPfn.c)
 *     MiReplaceTransitionPageFinish @ 0x140294918 (MiReplaceTransitionPageFinish.c)
 *     MiSearchChannelTable @ 0x1402CBEE8 (MiSearchChannelTable.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiReplaceTransitionPageInList @ 0x1402FC830 (MiReplaceTransitionPageInList.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiCanPageMove @ 0x1402FDC9C (MiCanPageMove.c)
 */

__int64 __fastcall MiTradePageMarkedTransition(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // r15d
  int v5; // edi
  ULONG_PTR v6; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r9
  int v11; // ebx
  unsigned __int8 v12; // al
  char v13; // di
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __int64 result; // rax
  int v17; // edi
  __int64 v18; // rbx
  char v19; // al
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  int PfnSlabType; // eax
  int v23; // r10d
  int v24; // eax
  int v25; // r10d
  int v26; // r11d
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdi
  unsigned __int8 v36; // al
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rbx
  _QWORD v39[4]; // [rsp+20h] [rbp-78h] BYREF
  int v40; // [rsp+40h] [rbp-58h]
  __int64 v41; // [rsp+44h] [rbp-54h]
  int v42; // [rsp+4Ch] [rbp-4Ch]
  __int64 v43; // [rsp+50h] [rbp-48h]
  __int64 v44; // [rsp+A0h] [rbp+8h] BYREF
  _WORD *v45; // [rsp+A8h] [rbp+10h]
  __int64 *v46; // [rsp+B0h] [rbp+18h]
  __int64 v47; // [rsp+B8h] [rbp+20h]

  v46 = a3;
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
    _InterlockedIncrement(&dword_140EF8DD8);
    v38 = *(unsigned __int8 *)(a1 + 8);
LABEL_75:
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v38 < 2u )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
      __writecr8(v38);
    }
    *(_WORD *)(a1 + 8) = 273;
    return result;
  }
  if ( (v3 & 0x200000) != 0 && MiIsPageOnBadList(48 * v6 - 0x220000000000LL) )
  {
    _InterlockedIncrement(&dword_140EF8DDC);
    v38 = *(unsigned __int8 *)(a1 + 8);
    goto LABEL_75;
  }
  if ( (unsigned __int16)*(_DWORD *)(v8 + 32) )
  {
    _InterlockedIncrement(&dword_140EF8DC0);
LABEL_74:
    v38 = *(unsigned __int8 *)(a1 + 8);
    goto LABEL_75;
  }
  if ( !(unsigned int)MiCanPageMove(48 * v6 - 0x220000000000LL) )
  {
    _InterlockedIncrement(&dword_140EF8DC8);
    goto LABEL_74;
  }
  v11 = *(_DWORD *)(v8 + 32) >> 22;
  v45 = *(_WORD **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  LOBYTE(v44) = *(_BYTE *)(a1 + 8);
  v12 = v44;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 < 2u )
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      v12 = v44;
      v10 = v46;
    }
    __writecr8(v12);
  }
  LOBYTE(v44) = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(a1 + 8) = 17;
  if ( !v10 || (result = *v10, v47 = result, result == -1) )
  {
    if ( (v3 & 0x4000) != 0 )
    {
      v15 = 12288;
      v14 = v5 ^ (unsigned __int8)(v5 ^ v6);
    }
    else
    {
      if ( qword_140E2D6E8 )
        v13 = *((_BYTE *)MiSearchChannelTable(v6) + 12);
      else
        v13 = 0;
      v14 = (unsigned __int8)v6 | ((v13 & 1 | (2 * (((v11 & 3) << 9) | MiPageToNode(v6) & 0x3F | 0x180))) << 8);
      v15 = (131073 - ((unsigned __int8)v44 < 2u)) | 0x8000;
      if ( (v3 & 0x1000000) == 0 )
        v15 = 131073 - ((unsigned __int8)v44 < 2u);
      if ( (v3 & 0x2000000) != 0 )
        v15 |= 0x800u;
    }
    result = MiGetPage((__int64)v45, v14, v15);
    v47 = result;
    if ( result == -1 )
    {
      _InterlockedIncrement(&dword_140EF8DF4);
      *(_BYTE *)(a1 + 9) = 1;
      return result;
    }
    v17 = 1;
  }
  else
  {
    v17 = 0;
  }
  v44 = 48 * result;
  v18 = 48 * result - 0x220000000000LL;
  v19 = MiSafeLockPage(v6, v9);
  *(_BYTE *)(a1 + 8) = v19;
  if ( v19 == 17 )
    goto LABEL_55;
  if ( (((v3 & 0x10000000) == 0) & (*(_DWORD *)(v8 + 32) >> 30)) != 0 )
  {
    _InterlockedIncrement(&dword_140EF8DD4);
    goto LABEL_55;
  }
  if ( v18 == v8 )
  {
    v31 = -1LL;
  }
  else
  {
    MiGetPfnSlabType(48 * v6 - 0x220000000000LL);
    if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) != 0
      || (unsigned __int16)*(_DWORD *)(v8 + 32)
      || *(int *)(v8 + 32) < 0
      || ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FF) != *v45
      || !(unsigned int)MiCanPageMove(48 * v6 - 0x220000000000LL)
      || (PfnSlabType = MiGetPfnSlabType(v18), v23 != PfnSlabType)
      || (v24 = MiGetPfnSlabType(48 * v6 - 0x220000000000LL), v27 = v44, v24 == 8)
      && (v21 = *(unsigned __int8 *)(qword_140E3D0C0 + 2 * ((unsigned __int64)(v7 / 48) >> 9) + 1),
          LOBYTE(v21) = v21 & 0x7F,
          v20 = (unsigned __int64)(v44 / 48) >> 9,
          v36 = *(_BYTE *)(qword_140E3D0C0 + 2 * v20 + 1) & 0x7F,
          (_BYTE)v21 != v36)
      && (unsigned __int8)v21 < 0x40u
      && v36 < 0x40u )
    {
      _InterlockedIncrement(&dword_140EF8DC0);
LABEL_55:
      result = 0x7FFFFFFFFFFFFFFFLL;
LABEL_56:
      *(_BYTE *)(a1 + 9) = 1;
LABEL_57:
      v37 = *(unsigned __int8 *)(a1 + 8);
      if ( (_BYTE)v37 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v37 < 2u )
        {
          if ( KiIrqlFlags )
            result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v37);
          __writecr8(v37);
        }
        *(_BYTE *)(a1 + 8) = 17;
      }
      if ( v17 )
        return MiReleaseFreshPage(v18, v20, v21);
      return result;
    }
    if ( (unsigned __int8)((*(_BYTE *)(v8 + 34) & 7) - 2) > 2u )
    {
      *(_DWORD *)(a1 + 56) = 2;
      _InterlockedIncrement(&dword_140EF8DC0);
      result = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_57;
    }
    v28 = *(_QWORD *)&v26 & (*(_QWORD *)(v8 + 40) >> 43);
    v39[1] = 0LL;
    v41 = 0LL;
    v43 = 0LL;
    v40 = v25;
    v39[0] = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * v28);
    v42 = 0;
    LODWORD(v44) = 0;
    v39[2] = v7 / 48;
    v39[3] = v27 / 48;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v44);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    if ( (int)MiReplaceTransitionPageInitializeTargetPfn((__int64)v39) < 0 )
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedIncrement(&dword_140EF8DC4);
      if ( v17 )
      {
        *(_DWORD *)(a1 + 56) = 2;
        goto LABEL_57;
      }
      goto LABEL_56;
    }
    MiReplaceTransitionPageInList((__int64)v39);
    MiReplaceTransitionPageFinish((__int64)v39, v29, v30);
    v31 = v47;
  }
  _InterlockedIncrement(&dword_140EF8D7C);
  *(_QWORD *)(v8 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v32 = *(_QWORD *)(v8 + 16);
  if ( v32 )
  {
    v33 = v32 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  }
  else
  {
    v33 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( qword_140E2D740 )
    {
      v34 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x90;
      if ( (qword_140E2D740 & v33) == 0 )
        v34 = qword_140E2D740 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC9FuLL | 0x80;
      v33 = v34;
    }
  }
  v35 = *(unsigned __int8 *)(a1 + 8);
  *(_QWORD *)(v8 + 16) = v33;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v35 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v35);
    __writecr8(v35);
  }
  result = (__int64)v46;
  *(_BYTE *)(a1 + 8) = 17;
  if ( result )
    *(_QWORD *)result = v31;
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
