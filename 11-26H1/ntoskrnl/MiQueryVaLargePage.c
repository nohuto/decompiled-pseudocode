/*
 * XREFs of MiQueryVaLargePage @ 0x1405286D4
 * Callers:
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 * Callees:
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiIsLazyStampedPte @ 0x140482EE8 (MiIsLazyStampedPte.c)
 *     MiGetProtectionFromPte @ 0x140532CCC (MiGetProtectionFromPte.c)
 */

__int64 __fastcall MiQueryVaLargePage(_QWORD *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // rcx
  ULONG_PTR v8; // r10
  unsigned int v9; // r8d
  ULONG_PTR v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int16 v14; // cx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  int ProtectionFromPte; // r8d

  v3 = a1[2];
  if ( a2 > 1 )
  {
    v6 = (unsigned int)(a2 - 1);
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v6;
    }
    while ( v6 );
  }
  a1[2] = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a1[7] != ((a1[4] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 3221225517LL;
  v8 = a1[3];
  v9 = *(_DWORD *)(v8 + 48);
  v10 = *(_QWORD *)v3;
  if ( (*(_QWORD *)v3 & 1) != 0 )
  {
    v11 = *(_QWORD *)v3;
LABEL_17:
    v12 = (v11 >> 12) & 0xFFFFFFFFFFLL;
    if ( v12 <= qword_140E2D920 && ((*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v13 = *(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL);
      v14 = 1023;
      v15 = v13 >> 43;
    }
    else
    {
      v16 = *(unsigned int *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * (v12 >> 18));
      v14 = 2047;
      v15 = v16 >> 4;
    }
    *(_DWORD *)a3 = 4096;
    *(_WORD *)(a3 + 4) = v14 & v15;
    if ( (v9 & 0x1C) == 0xC || (v9 & 0x80000) != 0 && (v9 & 0x200000) != 0 )
      ProtectionFromPte = MiGetProtectionFromPte(v8, v10);
    else
      ProtectionFromPte = (v9 >> 5) & 0x1F;
    *(_DWORD *)(a3 + 8) = ProtectionFromPte;
    goto LABEL_27;
  }
  if ( (v10 & 0x800) != 0 )
  {
    v11 = *(_QWORD *)v3;
    if ( qword_140E2D8C0 )
    {
      if ( (v10 & 0x10) != 0 )
        v11 = v10 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v11 = qword_140E2D8C8 & v10;
    }
    goto LABEL_17;
  }
  if ( (v9 & 0x1C) == 0xC && MiIsLazyStampedPte(*(_QWORD *)v3) )
    return 3221225477LL;
  *(_WORD *)(a3 + 4) = **(_WORD **)(stru_140E2ED08.ThreadLock
                                  + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  *(_DWORD *)a3 = 4096;
  *(_DWORD *)(a3 + 8) = 16;
LABEL_27:
  *(_QWORD *)(a3 + 16) = MiGetLeafVa(v3 + 8);
  return 0LL;
}
