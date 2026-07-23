/*
 * XREFs of RtlpCheckBusyBlockTail @ 0x18006127C
 * Callers:
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapEntry @ 0x1800610A0 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 */

char __fastcall RtlpCheckBusyBlockTail(__int64 a1, unsigned __int64 a2)
{
  char v4; // al
  __int64 v5; // r8
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  SIZE_T v13; // rbp
  int v15; // eax
  __int64 v16; // rax

  v4 = *(_BYTE *)(a2 + 15);
  if ( v4 == 1 )
    return 1;
  if ( v4 == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v15 = *(_DWORD *)(a2 + 8);
      if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
        v15 ^= *(_DWORD *)(a1 + 136);
    }
    else
    {
      LOWORD(v15) = *(_WORD *)(a2 + 8);
    }
    v8 = *(_QWORD *)(a2 - 16) - (unsigned __int16)v15;
  }
  else
  {
    if ( v4 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        LODWORD(v5) = *(_DWORD *)(a2 + 8);
        if ( ((unsigned int)v5 & *(_DWORD *)(a1 + 124)) != 0 )
          LODWORD(v5) = *(_DWORD *)(a1 + 136) ^ v5;
      }
      else
      {
        LOWORD(v5) = *(_WORD *)(a2 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(a2 + 8) ^ (a2 >> 4)) )
        v5 = 0LL;
      else
        v5 = *(_QWORD *)(a2
                       - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(a2 + 8) ^ (unsigned int)(a2 >> 4)) >> 12));
      LOWORD(v5) = *(_WORD *)(v5 + 36);
    }
    v6 = *(_BYTE *)(a2 + 15);
    if ( v6 == 5 )
    {
      v7 = *(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v6 & 0x40) != 0 )
    {
      v7 = *(unsigned __int16 *)(a2 + 16LL * (v6 & 0x3F) + 12);
    }
    else if ( (v6 & 0x3F) == 0x3F )
    {
      if ( v6 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          LODWORD(v16) = *(_DWORD *)(a2 + 8);
          if ( ((unsigned int)v16 & *(_DWORD *)(a1 + 124)) != 0 )
            LODWORD(v16) = *(_DWORD *)(a1 + 136) ^ v16;
        }
        else
        {
          LOWORD(v16) = *(_WORD *)(a2 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(a2 + 8) ^ (a2 >> 4)) )
          v16 = 0LL;
        else
          v16 = *(_QWORD *)(a2
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(a2 + 8) ^ (unsigned int)(a2 >> 4)) >> 12));
        LOWORD(v16) = *(_WORD *)(v16 + 36);
      }
      v7 = *(_QWORD *)(a2 + 16LL * (unsigned __int16)v16);
    }
    else
    {
      v7 = *(_BYTE *)(a2 + 15) & 0x3F;
    }
    v8 = 16LL * (unsigned __int16)v5 - v7;
  }
  v9 = *(_BYTE *)(a2 + 15);
  if ( v9 == 5 )
  {
    v10 = *(unsigned __int8 *)(a2 + 14);
LABEL_14:
    v11 = 16 * v10;
    goto LABEL_15;
  }
  if ( (v9 & 0x40) != 0 )
  {
    v10 = *(_BYTE *)(a2 + 15) & 0x3F;
    goto LABEL_14;
  }
  v11 = 0LL;
LABEL_15:
  v12 = v11 + v8;
  v13 = RtlCompareMemory((const void *)(v12 + a2 + 16), &CheckHeapFillPattern, 0x10uLL);
  if ( v13 == 16 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap block at %p modified at %p past requested size of %Ix\n",
    (const void *)a2,
    (const void *)(v12 + a2 + 16 + v13),
    v12);
  RtlpBreakPointHeap();
  return 0;
}
