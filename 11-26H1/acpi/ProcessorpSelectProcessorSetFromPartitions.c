/*
 * XREFs of ProcessorpSelectProcessorSetFromPartitions @ 0x1400D092C
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1400BD160 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     IntPartAllocateAndZeroMemory @ 0x14004E394 (IntPartAllocateAndZeroMemory.c)
 *     IntPartArbInit @ 0x1400BFF80 (IntPartArbInit.c)
 *     IntpArbGetNextAffinity @ 0x1400D0AE4 (IntpArbGetNextAffinity.c)
 */

__int64 __fastcall ProcessorpSelectProcessorSetFromPartitions(__int64 *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 result; // rax
  USHORT v12; // cx
  __int64 v13; // r14
  _QWORD *v14; // rax
  int NextAffinity; // ecx
  __int16 v16; // ax
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v17[0] = 0LL;
  if ( (_WORD)a1 != 6 )
    return 3221225485LL;
  if ( *(_BYTE *)a4 )
  {
    v6 = *(_QWORD *)(a4 + 24);
    goto LABEL_14;
  }
  if ( !a2 )
  {
    v6 = *(_QWORD *)ProcessorGroupByNumber;
    v7 = **(_QWORD **)ProcessorGroupByNumber;
    if ( *(_QWORD *)(v7 + 8) == *(_QWORD *)ProcessorGroupByNumber )
    {
      v8 = *(_QWORD **)(v6 + 8);
      if ( *v8 == v6 )
      {
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        goto LABEL_12;
      }
    }
LABEL_30:
    __fastfail(3u);
  }
  v6 = ProcessorGroupListHead;
  if ( (__int64 *)ProcessorGroupListHead == &ProcessorGroupListHead )
    goto LABEL_30;
  v9 = *(_QWORD *)ProcessorGroupListHead;
  if ( *(_QWORD *)(*(_QWORD *)ProcessorGroupListHead + 8LL) != ProcessorGroupListHead )
    goto LABEL_30;
  v10 = *(_QWORD **)(ProcessorGroupListHead + 8);
  if ( *v10 != ProcessorGroupListHead )
    goto LABEL_30;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
LABEL_12:
  a1 = (__int64 *)qword_14008F3F8;
  if ( *(__int64 **)qword_14008F3F8 != &ProcessorGroupListHead )
    goto LABEL_30;
  *(_QWORD *)v6 = &ProcessorGroupListHead;
  *(_QWORD *)(v6 + 8) = a1;
  *a1 = v6;
  qword_14008F3F8 = v6;
LABEL_14:
  if ( *(_WORD *)(v6 + 32) )
    return 3221225485LL;
  if ( !ProcessorpDefaultIntPartitionArtiber )
  {
    result = IntPartArbInit((__int64)a1);
    if ( (_DWORD)result == 259 )
    {
      if ( *(_BYTE *)a4 )
        return 3221226021LL;
      v12 = *(_WORD *)(v6 + 32);
      *(_OWORD *)a3 = 0LL;
      *(_WORD *)(a3 + 8) = v12;
      *(_QWORD *)a3 = KeQueryGroupAffinity(v12);
      result = 0LL;
      *(_BYTE *)a4 = 1;
      *(_QWORD *)(a4 + 24) = v6;
      return result;
    }
    if ( (int)result < 0 )
      return result;
  }
  if ( !*(_BYTE *)a4 )
  {
    v13 = ProcessorpDefaultIntPartitionArtiber;
    v14 = (_QWORD *)IntPartAllocateAndZeroMemory(*(unsigned __int8 *)(*(_QWORD *)ProcessorpDefaultIntPartitionArtiber
                                                                    + 2LL) + 20LL);
    if ( v14 )
      *v14 = v13;
    *(_QWORD *)(a4 + 32) = v14;
  }
  NextAffinity = IntpArbGetNextAffinity(*(_QWORD *)(a4 + 32), v17);
  if ( !*(_BYTE *)a4 )
  {
    *(_BYTE *)a4 = 1;
    *(_QWORD *)(a4 + 24) = v6;
  }
  if ( NextAffinity >= 0 )
  {
    v16 = *(_WORD *)(v6 + 32);
    *(_OWORD *)a3 = 0LL;
    *(_WORD *)(a3 + 8) = v16;
    *(_QWORD *)a3 = v17[0];
  }
  return (unsigned int)NextAffinity;
}
