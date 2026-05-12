/*
 * XREFs of sub_140028E24 @ 0x140028E24
 * Callers:
 *     sub_1400281F4 @ 0x1400281F4 (sub_1400281F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140028E24(_QWORD *a1)
{
  ULONG MaximumProcessorCount; // esi
  __int64 v3; // rbp
  __int64 Pool2; // rax
  _DWORD *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = MaximumProcessorCount;
  Pool2 = ExAllocatePool2(72LL, (MaximumProcessorCount + 1LL) << 6, 1364222290LL);
  v5 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( MaximumProcessorCount )
  {
    v7 = Pool2 + 72;
    do
    {
      *(_QWORD *)v7 = v7 - 8;
      *(_QWORD *)(v7 - 8) = v7 - 8;
      KeInitializeSpinLock((PKSPIN_LOCK)(v7 + 32));
      *(_DWORD *)(v7 + 40) = -1;
      v8 = (_QWORD *)(v7 + 8);
      *(_QWORD *)(v7 + 16) = v7 + 8;
      v7 += 64LL;
      *v8 = v8;
      *(_QWORD *)(v7 - 40) = 0LL;
      --v3;
    }
    while ( v3 );
  }
  *v5 = 0;
  v5[2] = MaximumProcessorCount;
  result = 0LL;
  v5[1] = 4;
  *a1 = v5;
  return result;
}
