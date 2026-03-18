/*
 * XREFs of MiSectionProtectValidPte @ 0x140304460
 * Callers:
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetProtoPteAddress @ 0x1402D2540 (MiGetProtoPteAddress.c)
 *     MiRevertValidPte @ 0x140304974 (MiRevertValidPte.c)
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiCopyOnWrite @ 0x14036AD38 (MiCopyOnWrite.c)
 *     MiLocateCloneAddress @ 0x14036BA4C (MiLocateCloneAddress.c)
 *     MiSetWsleProtection @ 0x14036C090 (MiSetWsleProtection.c)
 *     MiGetPfnProtection @ 0x140433FF0 (MiGetPfnProtection.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404AE9B8 (MiSectionProtectTrimValidPtes.c)
 */

__int64 __fastcall MiSectionProtectValidPte(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  int v5; // r12d
  __int64 v6; // rbx
  __int64 *v7; // rdi
  unsigned __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rsi
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 DemandZeroPte; // rax
  int v21; // esi
  __int64 v22; // rdi
  __int64 ProcessorFlushList; // rax
  BOOL v24; // edx
  __int64 result; // rax
  __int64 v26; // rdi
  int PfnProtection; // eax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  unsigned int v31; // edx
  int v32; // edx
  int v33; // edx
  unsigned int v34; // eax
  int v35; // eax
  __int64 CloneAddress; // rbx
  unsigned int *v37; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v38; // [rsp+80h] [rbp+18h]
  __int64 v39; // [rsp+88h] [rbp+20h]

  v38 = a3;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 68);
  LOWORD(v6) = a4;
  v39 = v4;
  v7 = a3;
  v10 = (__int64)((_QWORD)a3 << 25) >> 16;
  v11 = (a4 >> 12) & 0xFFFFFFFFFFLL;
  v12 = 48 * v11 - 0x220000000000LL;
  if ( *(__int64 *)(v12 + 40) < 0 )
  {
    v26 = *(_QWORD *)(v12 + 8);
    if ( (v26 | 0x8000000000000000uLL) == MiGetProtoPteAddress(v4, v10 >> 12, 8u, &v37) )
    {
      v7 = v38;
    }
    else
    {
      CloneAddress = 0LL;
      if ( *(__int64 *)(v12 + 8) <= 0 || (*(_QWORD *)(v12 + 40) & 0x10000000000LL) != 0 )
      {
        CloneAddress = MiLocateCloneAddress(*(_QWORD *)(a1 + 8), *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1040LL) + 1192LL) <= *(_QWORD *)(CloneAddress + 96) )
          CloneAddress = 0LL;
      }
      v7 = v38;
      result = MiCopyOnWrite(v10, (_DWORD)v38, -1, 0, a2 + 24);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        return result;
      }
      if ( CloneAddress )
        --*(_QWORD *)(a1 + 72);
      v6 = *v7;
      v11 = ((unsigned __int64)*v7 >> 12) & 0xFFFFFFFFFFLL;
      v12 = 48 * v11 - 0x220000000000LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x101) != 0 || v5 && *(__int64 *)(v12 + 40) >= 0 )
  {
    MiSectionProtectTrimValidPtes(a1, a2, v7);
    return 3221226029LL;
  }
  if ( *(__int64 *)(v12 + 40) >= 0 )
  {
    v13 = *(_DWORD *)(a1 + 60);
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v14);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    v15 = *(_QWORD *)(v12 + 16);
    v16 = (v15 >> 5) & 0x1F;
    if ( v13 == 24 )
    {
      v13 = 24;
      goto LABEL_13;
    }
    if ( (_DWORD)v16 == 24
      && ((v31 = *(_DWORD *)(v39 + 48), (v31 & 0x80000) == 0)
        ? (v32 = *(_DWORD *)(*(_QWORD *)(v39 + 80) + 32LL) >> 1)
        : (v32 = v31 >> 5),
          v33 = v32 & 0x1F,
          LOBYTE(v16) = v33,
          v33 == 24)
      || (v17 = v16 & 0x18) == 0 )
    {
      v18 = v13 & 0x18;
      if ( v18 == 24 )
      {
        v13 &= 0xFFFFFFE7;
        goto LABEL_13;
      }
      if ( v18 != 8 )
      {
LABEL_13:
        if ( v15 )
        {
          v19 = 32LL * v13;
          DemandZeroPte = v19 ^ (v15 ^ v19) & 0xFFFFFFFFFFFFFC1FuLL;
        }
        else
        {
          DemandZeroPte = MiMakeDemandZeroPte(v13);
        }
        *(_QWORD *)(v12 + 16) = DemandZeroPte;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v21 = v39;
        goto LABEL_16;
      }
    }
    else if ( v17 != 16 )
    {
      if ( v17 == 8 )
      {
        v13 = v13 & 0xFFFFFFE7 | 8;
      }
      else if ( v17 == 24 )
      {
        v13 |= 0x18u;
      }
      goto LABEL_13;
    }
    v13 &= ~8u;
    goto LABEL_13;
  }
  if ( !*(_BYTE *)(a1 + 89) && (v6 & 0x200) != 0 )
    ++*(_QWORD *)(a1 + 96);
  PfnProtection = MiGetPfnProtection(a1, v10, v12);
  v13 = *(_DWORD *)(a1 + 56);
  v21 = v39;
  if ( v13 == 24 )
  {
    v13 = 24;
    MiSetWsleProtection(v28, v10, 24LL);
    goto LABEL_16;
  }
  if ( PfnProtection == 24
    && ((v34 = *(_DWORD *)(v39 + 48), (v34 & 0x80000) == 0)
      ? (v35 = *(_DWORD *)(*(_QWORD *)(v39 + 80) + 32LL) >> 1)
      : (v35 = v34 >> 5),
        PfnProtection = v35 & 0x1F,
        PfnProtection == 24)
    || (v29 = PfnProtection & 0x18) == 0 )
  {
    v30 = *(_DWORD *)(a1 + 56) & 0x18;
    if ( v30 == 24 )
    {
      v13 &= 0xFFFFFFE7;
      MiSetWsleProtection(v28, v10, v13);
      goto LABEL_16;
    }
    if ( v30 != 8 )
      goto LABEL_37;
  }
  else if ( v29 != 16 )
  {
    if ( v29 == 8 )
    {
      v13 = v13 & 0xFFFFFFE7 | 8;
      MiSetWsleProtection(v28, v10, v13);
      goto LABEL_16;
    }
    if ( v29 == 24 )
    {
      v13 |= 0x18u;
      MiSetWsleProtection(v28, v10, v13);
      goto LABEL_16;
    }
    goto LABEL_37;
  }
  v13 &= ~8u;
LABEL_37:
  MiSetWsleProtection(v28, v10, v13);
LABEL_16:
  if ( !*(_QWORD *)a2 )
  {
    v22 = *(_QWORD *)(a1 + 16);
    ProcessorFlushList = MiGetProcessorFlushList(v15, v19);
    *(_QWORD *)(a2 + 8) = ProcessorFlushList;
    *(_QWORD *)a2 = ProcessorFlushList;
    *(_DWORD *)(ProcessorFlushList + 16) = 0;
    *(_DWORD *)(ProcessorFlushList + 20) = 32;
    *(_QWORD *)ProcessorFlushList = v22;
    *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v22 + 184) & 0x40) != 0;
    if ( (*(_DWORD *)(v22 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v22 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v24 = (*(_DWORD *)(v22 + 184) & 0xF) == 0;
    }
    else
    {
      *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
      v24 = 0;
    }
    *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
    *(_DWORD *)(ProcessorFlushList + 8) = v24;
    *(_WORD *)(ProcessorFlushList + 25) = 0;
    *(_DWORD *)(ProcessorFlushList + 28) = 0;
    *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
    *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
  }
  MiRevertValidPte(v21, (_DWORD)v38, v13, v11, *(_QWORD *)a2);
  return 0LL;
}
