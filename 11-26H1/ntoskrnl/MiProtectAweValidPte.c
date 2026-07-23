/*
 * XREFs of MiProtectAweValidPte @ 0x140706F68
 * Callers:
 *     MiProtectAweRegion @ 0x140706C04 (MiProtectAweRegion.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 */

void __fastcall MiProtectAweValidPte(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // ecx
  _KPROCESS *Process; // r15
  unsigned __int64 LeafVa; // rbp
  unsigned __int64 i; // r14
  unsigned int v12; // r14d
  int v13; // ebp
  __int64 v14; // rbx
  unsigned __int64 TransitionPte; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 ValidPte; // rax
  __int64 v18; // r9
  __int64 *ProcessorFlushList; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx

  if ( !*(_QWORD *)(a1 + 136) )
    *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 144) = a2;
  if ( a2 == *(_QWORD *)(a1 + 152) )
  {
    v6 = (a3 & 0x800) != 0 ? 4 : 2;
    *(_DWORD *)(a1 + 40) = v6;
    v7 = *(_DWORD *)(a1 + 36);
    if ( v7 >> 3 == 1 )
    {
      v8 = v6 | 0x200;
LABEL_9:
      *(_DWORD *)(a1 + 40) = v8;
      goto LABEL_10;
    }
    if ( v7 >> 3 == 3 && (v7 & 7) != 0 )
    {
      v8 = v6 | 0x400;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( (*(_DWORD *)(a1 + 56) & 3) == 1 && ((a3 & 0x40) != 0 || (a3 & 2) != 0) )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    LeafVa = MiGetLeafVa(a2);
    for ( i = 0LL; i < *(_QWORD *)(a1 + 88) / *(_QWORD *)(a1 + 80); LeafVa += *(_QWORD *)(a1 + 80) << 12 )
    {
      MiCaptureWriteWatchDirtyBit((__int64)Process, LeafVa, *(struct _LIST_ENTRY **)(a1 + 48));
      ++i;
    }
    *(_DWORD *)(a1 + 56) |= 2u;
  }
  v12 = *(_DWORD *)(a1 + 32);
  v13 = *(_DWORD *)(a1 + 60);
  v14 = (a3 >> 12) & 0xFFFFFFFFFFLL;
  if ( v12 == 24 )
  {
    TransitionPte = MiMakeTransitionPte(v14, 24);
    v16 = TransitionPte;
    if ( !v13 )
      *(_QWORD *)a2 = TransitionPte;
  }
  else
  {
    ValidPte = MiMakeValidPte(a2, v14, *(_DWORD *)(a1 + 64) | v12);
    v16 = ValidPte;
    if ( !v13 )
      MiWriteValidPteNewProtection((__int64 *)a2, ValidPte);
  }
  v18 = v16 | 0x42;
  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 || (v12 & 4) == 0 )
    v18 = v16;
  if ( v13 )
    MiRewritePteWithLockBit(*(_QWORD *)(a1 + 104), 0, a2, v18);
  if ( !*(_QWORD *)(a1 + 120) )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    v20 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 120) = ProcessorFlushList;
    MiInitializeTbFlushList((__int64)ProcessorFlushList, v20, *((_DWORD *)ProcessorFlushList + 3), 0, 1);
  }
  v21 = *(_QWORD *)(a1 + 120);
  if ( v13 )
    MiInsertLargeTbFlushEntry(v21, v13, a2);
  else
    MiInsertTbFlushEntry(v21, (__int64)(a2 << 25) >> 16, 1LL, 0);
}
