/*
 * XREFs of StorCreateEventQueue @ 0x14002DFEC
 * Callers:
 *     RaidUnitAllocateResources @ 0x14002D7B4 (RaidUnitAllocateResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorCreateEventQueue(_QWORD *a1)
{
  ULONG MaximumProcessorCount; // ebp
  __int64 v3; // r15
  __int64 Pool2; // rax
  _DWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rsi
  _QWORD *v10; // rax

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = MaximumProcessorCount;
  Pool2 = ExAllocatePool2(72LL, (MaximumProcessorCount + 1LL) << 6, 1364222290LL);
  v5 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( MaximumProcessorCount )
  {
    v7 = Pool2 + 72;
    v8 = Pool2 + 80;
    v9 = Pool2 + 64;
    do
    {
      *(_QWORD *)v7 = v9;
      *(_QWORD *)(v7 - 8) = v9;
      KeInitializeSpinLock((PKSPIN_LOCK)(v9 + 40));
      *(_DWORD *)(v7 + 40) = -1;
      v10 = (_QWORD *)(v7 + 8);
      *(_QWORD *)(v7 + 16) = v8;
      v7 += 64LL;
      v8 += 64LL;
      *v10 = v10;
      v9 += 64LL;
      *(_QWORD *)(v7 - 40) = 0LL;
      --v3;
    }
    while ( v3 );
  }
  *v5 = 0;
  result = 0LL;
  v5[2] = MaximumProcessorCount;
  v5[1] = 4;
  *a1 = v5;
  return result;
}
