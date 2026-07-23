/*
 * XREFs of MiSectionProtectTrimValidPtes @ 0x1404A8048
 * Callers:
 *     MiSectionProtectValidPte @ 0x1402E64E0 (MiSectionProtectValidPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiUnlockVa @ 0x1404A3E1C (MiUnlockVa.c)
 */

void __fastcall MiSectionProtectTrimValidPtes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r12
  __int64 *ProcessorFlushList; // rax
  char v8; // r14
  char v9; // r15
  __int64 v10; // rbp
  ULONG_PTR v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int16 v14; // r11
  __int64 v15; // r10
  char v16; // [rsp+70h] [rbp+8h]
  int v17; // [rsp+78h] [rbp+10h]
  int v18; // [rsp+80h] [rbp+18h]

  v3 = (_QWORD *)a3;
  v17 = *(_DWORD *)(a1 + 64);
  v5 = (__int64)(a3 << 25) >> 16;
  v6 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == (*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFF000uLL) )
    v6 = *(_QWORD *)(a1 + 48);
  v18 = *(_DWORD *)(a1 + 68);
  ProcessorFlushList = *(__int64 **)(a2 + 8);
  v8 = 0;
  if ( ProcessorFlushList )
  {
    v9 = 0;
    v16 = 0;
  }
  else
  {
    v9 = 1;
    v16 = 1;
    ProcessorFlushList = MiGetProcessorFlushList();
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = (ULONG_PTR)(ProcessorFlushList + 517);
  MiInitializeTbFlushList((__int64)(ProcessorFlushList + 517), v10, *((_DWORD *)ProcessorFlushList + 1037), 2, 1);
  if ( (unsigned __int64)v3 <= v6 )
  {
    while ( 1 )
    {
      if ( (*v3 & 1) == 0
        || (v14 & 0x101) == 0
        && (!v18
         || (v13 = 0xFFFFDE0000000028uLL, *(__int64 *)(48 * ((*v3 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0)) )
      {
LABEL_13:
        v9 = v16;
        goto LABEL_14;
      }
      if ( (MiGetWsleContents(v13, v5) & 0xF) == 8 )
        break;
      MiInsertTbFlushEntry(v11, v5, v15, 0);
      if ( *(_DWORD *)(v11 + 28) == *(_DWORD *)(v11 + 12) )
        goto LABEL_21;
LABEL_12:
      v14 = v17;
      ++v3;
      v5 += 4096LL;
      if ( (unsigned __int64)v3 > v6 )
        goto LABEL_13;
    }
    v8 = v15;
    *(_DWORD *)(a1 + 112) = v15;
LABEL_21:
    if ( *(_DWORD *)(v11 + 28) )
      MiFreeWsleList(v10, v12, v11, 0);
    if ( v8 )
    {
      MiUnlockVa(v10, v5);
      v8 = 0;
    }
    goto LABEL_12;
  }
LABEL_14:
  if ( *(_DWORD *)(v11 + 28) )
    MiFreeWsleList(v10, v12, v11, 0);
  if ( v9 )
    MiReleaseProcessorFlushList();
}
