/*
 * XREFs of MiInsertSecondaryListStandbyPage @ 0x1402ABC50
 * Callers:
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402AC370 (MiReplaceSecondaryListStandbyPage.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiSetPfnNodeFlinkHigh @ 0x1402AC310 (MiSetPfnNodeFlinkHigh.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 */

signed __int64 __fastcall MiInsertSecondaryListStandbyPage(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbp
  ULONG_PTR v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r13
  unsigned int v12; // edi
  unsigned __int8 v13; // al
  __int64 v14; // rsi
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int8 v17; // r13
  __int64 v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r10
  __int64 v21; // r8
  __int64 v22; // r11
  signed __int64 v23; // rdx
  unsigned __int64 v24; // r9
  signed __int64 result; // rax
  signed __int64 v26; // rdx
  signed __int64 v27; // rdx
  unsigned __int64 v28; // r10
  signed __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned int v32; // r10d
  __int64 v33; // r8
  volatile signed __int32 *v34; // r9
  int v35; // ebp
  unsigned __int8 v36; // r10
  unsigned __int64 v37; // r14
  signed __int64 v38; // rax
  bool v39; // zf
  __int64 v40; // rax
  int v41; // r15d
  __int64 v42; // [rsp+90h] [rbp+8h]

  v3 = a2;
  v6 = (a1 + 0x220000000000LL) / 48;
  v7 = 48 * v6;
  v8 = 48 * v6 - 0x220000000000LL;
  v42 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  v9 = MiPageToNode(v6);
  v10 = *(_DWORD *)(v8 + 32);
  v11 = v9;
  if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_36;
  if ( (*(_DWORD *)(v8 + 32) & 0x8000000) == 0 )
  {
LABEL_3:
    v12 = HIBYTE(v10) & 7;
    goto LABEL_4;
  }
  if ( v8 < 0xFFFFDE0000000000uLL
    || v8 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || (unsigned int)MiIsDecayPfn(v7 / 48) )
  {
LABEL_36:
    v12 = 5;
  }
  else
  {
    if ( (v10 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(48 * v6 - 0x220000000000LL) != 9 )
      goto LABEL_3;
    v12 = 5;
  }
LABEL_4:
  if ( qword_140E2D868 )
    v13 = *(_BYTE *)(MiSearchChannelTable(v6) + 12);
  else
    v13 = 0;
  v14 = v11;
  v15 = *(_QWORD *)(v42 + 16);
  if ( (int)v3 < 9 )
  {
    if ( (_DWORD)v3 == 8 )
    {
      v17 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)(v7 / 48) >> 9) + 1) & 0x7F;
      v36 = v17;
    }
    else
    {
      v17 = 0;
      v36 = 0;
    }
    v18 = *(_QWORD *)(56320 * v14 + v15 + 232 * v3 + 14824) + 88 * (v12 + 8LL * v36);
  }
  else
  {
    v16 = 5 * v11;
    v17 = 0;
    v18 = v15 + 88 * (v12 + 8 * (v13 + 16 * v16)) + 4160;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v18 + 16));
  if ( a3 )
  {
    v19 = a3[10];
    v20 = a3[7];
    v21 = a3[11];
    v22 = a3[8];
    *(_QWORD *)(a1 + 24) = (v20 << 40) ^ (*(_QWORD *)(a1 + 24) ^ (v20 << 40)) & 0xF80000FFFFFFFFFFuLL;
    *(_DWORD *)(a1 + 36) = (v20 >> 19) ^ (*(_DWORD *)(a1 + 36) ^ (v20 >> 19)) & 0xFFE00000;
    *(_QWORD *)a1 = *(_QWORD *)a1 & 0xFFFFFFFFFFLL | (v19 << 40);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 36) & 0x1FFFFF | ((unsigned int)(v19 >> 24) << 21);
    v23 = *(_QWORD *)(a1 + 40);
    v24 = (v19 & 0xFFFFFFF800000000uLL) << 20;
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 40),
               v24 ^ (v23 ^ v24) & 0xF07FFFFFFFFFFFFFuLL,
               v23);
    if ( v23 != result )
    {
      do
      {
        v26 = result;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 40),
                   v24 ^ (v24 ^ result) & 0xF07FFFFFFFFFFFFFuLL,
                   result);
      }
      while ( v26 != result );
    }
    if ( v20 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)v18 = v6;
    }
    else
    {
      *(_QWORD *)v22 = *(_QWORD *)v22 & 0xFFFFFFFFFFLL | (v6 << 40);
      *(_DWORD *)(v22 + 36) = *(_DWORD *)(v22 + 36) & 0x1FFFFF | ((unsigned int)(v6 >> 24) << 21);
      v27 = *(_QWORD *)(v22 + 40);
      v28 = (v6 & 0xFFFFFFF800000000uLL) << 20;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(v22 + 40),
                 v28 ^ (v27 ^ v28) & 0xF07FFFFFFFFFFFFFuLL,
                 v27);
      if ( v27 != result )
      {
        do
        {
          v29 = result;
          result = _InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v22 + 40),
                     v28 ^ (v28 ^ result) & 0xF07FFFFFFFFFFFFFuLL,
                     result);
        }
        while ( v29 != result );
      }
    }
    if ( v19 != 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v21 + 24) = (v6 << 40) ^ (*(_QWORD *)(v21 + 24) ^ (v6 << 40)) & 0xF80000FFFFFFFFFFuLL;
      result = *(unsigned int *)(v21 + 36);
      *(_DWORD *)(v21 + 36) = (v6 >> 19) ^ (result ^ (v6 >> 19)) & 0xFFE00000;
      goto LABEL_16;
    }
  }
  else
  {
    v37 = *(_QWORD *)(v18 + 8);
    if ( v37 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)v18 = v6;
    }
    else
    {
      *(_QWORD *)(48 * v37 - 0x220000000000LL) = *(_QWORD *)(48 * v37 - 0x220000000000LL) & 0xFFFFFFFFFFLL | (v6 << 40);
      *(_DWORD *)(48 * v37 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(48 * v37 - 0x21FFFFFFFFDCLL) & 0x1FFFFF | ((unsigned int)(v6 >> 24) << 21);
      MiSetPfnNodeFlinkHigh(48 * v37 - 0x220000000000LL, v6 >> 35);
    }
    *(_QWORD *)a1 |= 0xFFFFFF0000000000uLL;
    *(_DWORD *)(a1 + 36) |= 0xFFE00000;
    MiSetPfnNodeFlinkHigh(a1, 7LL);
    *(_QWORD *)(a1 + 24) = (v37 << 40) ^ ((v37 << 40) ^ *(_QWORD *)(a1 + 24)) & 0xF80000FFFFFFFFFFuLL;
    result = (unsigned int)(v37 >> 19) ^ ((unsigned int)(v37 >> 19) ^ *(_DWORD *)(a1 + 36)) & 0xFFE00000;
    *(_DWORD *)(a1 + 36) = result;
  }
  *(_QWORD *)(v18 + 8) = v6;
LABEL_16:
  if ( (int)v3 >= 9 )
    return result;
  if ( (_DWORD)v3 != 8 )
    goto LABEL_18;
  v38 = _InterlockedIncrement64((volatile signed __int64 *)(v42 + 22080));
  v39 = v38 == 1;
  v40 = v38 - 1;
  v41 = v39;
  if ( v40 < 1056 && v40 + 1 >= 1056 )
    v41 = v39 | 2;
  if ( v41 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v42 + 16576));
    if ( (v41 & 1) != 0 )
    {
      KeSetEvent((PRKEVENT)(v42 + 22088), 0, 0);
      ++*(_DWORD *)(v42 + 22112);
    }
    if ( (v41 & 2) != 0 )
    {
      KeSetEvent((PRKEVENT)(v42 + 22120), 0, 0);
      ++*(_DWORD *)(v42 + 22144);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v42 + 16576));
    v30 = *(_QWORD *)(v42 + 16) + 56320 * v14;
  }
  else
  {
LABEL_18:
    v30 = *(_QWORD *)(v42 + 16) + 56320 * v14;
    if ( (_DWORD)v3 != 8 )
    {
      v31 = (_QWORD *)(v30 + 56096);
      goto LABEL_20;
    }
  }
  v31 = (_QWORD *)(*(_QWORD *)(v30 + 56112) + 314104LL);
  LODWORD(v3) = v17;
LABEL_20:
  LOBYTE(v32) = 1;
  v33 = v3 & 0x1F;
  v34 = (volatile signed __int32 *)(*v31 + 4 * ((unsigned __int64)(unsigned int)v3 >> 5));
  result = v33 + 1;
  if ( (unsigned __int64)(v33 + 1) <= 0x20 )
  {
    _InterlockedOr(v34, 1 << v33);
  }
  else
  {
    v35 = v3 & 0x1F;
    if ( !v35 )
      goto LABEL_22;
    result = (unsigned int)(((1 << (32 - v35)) - 1) << v33);
    _InterlockedOr(v34, result);
    v32 = 1 - (32 - v35);
    ++v34;
    if ( v32 >= 0x20 )
    {
      result = (unsigned __int64)v32 >> 5;
      do
      {
        *v34 = -1;
        v32 -= 32;
        ++v34;
        --result;
      }
      while ( result );
    }
    if ( v32 )
LABEL_22:
      _InterlockedOr(v34, (1 << v32) - 1);
  }
  return result;
}
