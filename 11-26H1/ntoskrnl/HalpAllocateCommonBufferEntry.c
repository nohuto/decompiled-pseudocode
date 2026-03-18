/*
 * XREFs of HalpAllocateCommonBufferEntry @ 0x140348EB0
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x140348C34 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404F1E84 (HalpAllocateCommonBufferDmarThin.c)
 *     HalCreateCommonBufferFromMdl @ 0x140589A30 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140589FC0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14058AFC0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14058B4B0 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpAllocateCommonBufferEntry(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 Pool2; // rax
  char v11; // bl
  __int64 v12; // rdi
  KIRQL v13; // si
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax

  Pool2 = ExAllocatePool2(0x42uLL);
  v11 = 0;
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 48) = a1;
  *(_QWORD *)(Pool2 + 24) = a2;
  *(_QWORD *)(Pool2 + 40) = a3;
  *(_QWORD *)(Pool2 + 56) = a4;
  *(_BYTE *)(Pool2 + 64) = a5;
  *(_QWORD *)(Pool2 + 32) = a6;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 80));
  v15 = *(_QWORD *)(a4 + 64);
  if ( (*(_BYTE *)(a4 + 72) & 1) != 0 )
  {
    if ( v15 )
      v15 ^= a4 + 64;
    else
      v15 = 0LL;
  }
  if ( v15 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v15 + 24) > a2 )
      {
        v16 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(a4 + 72) & 1) != 0 )
        {
          if ( !v16 )
            break;
          v16 ^= v15;
        }
        if ( !v16 )
          break;
      }
      else
      {
        v16 = *(_QWORD *)(v15 + 8);
        if ( (*(_BYTE *)(a4 + 72) & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_7;
          v16 ^= v15;
        }
        if ( !v16 )
        {
LABEL_7:
          v11 = 1;
          break;
        }
      }
      v15 = v16;
    }
  }
  LOBYTE(v14) = v11;
  RtlRbInsertNodeEx(a4 + 64, v15, v14, v12);
  KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 80), v13);
  return 0LL;
}
