/*
 * XREFs of MiChangePageAttributeBatch @ 0x14036ABBC
 * Callers:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiFreeSlabEntry @ 0x1402A6E7C (MiFreeSlabEntry.c)
 *     MiConvertContiguousPages @ 0x140464F84 (MiConvertContiguousPages.c)
 *     MiPerformFinalZeroing @ 0x14050D60C (MiPerformFinalZeroing.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x140711F9C (MiChangePageAttributeAndZeroBatch.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushCacheForAttributeChange @ 0x140251450 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x140251640 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiGetPteLink @ 0x14036AF38 (MiGetPteLink.c)
 *     MiAbortCombineScan @ 0x14036AF70 (MiAbortCombineScan.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiChangePageAttributeBatch(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r15
  __int64 PteLink; // r12
  int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // edx
  int v17; // r9d
  int v18; // [rsp+20h] [rbp-78h]
  __int64 v19; // [rsp+28h] [rbp-70h]
  unsigned __int64 v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  char v22; // [rsp+A0h] [rbp+8h]
  int v24; // [rsp+B0h] [rbp+18h] BYREF
  int v25; // [rsp+B8h] [rbp+20h]

  CurrentIrql = 17;
  v3 = *(_QWORD *)a1;
  v22 = *(_BYTE *)(a1 + 12);
  result = 0x7FFFFFFFFFLL;
  v18 = *(_DWORD *)(a1 + 8);
  v21 = *(_QWORD *)(a1 + 16);
  v19 = *(_QWORD *)a1;
  while ( v3 != 0x7FFFFFFFFFLL )
  {
    v5 = 0LL;
    PteLink = v3;
    v25 = 0;
    v7 = 1;
    do
    {
      v8 = 48 * PteLink - 0x220000000000LL;
      PteLink = MiGetPteLink(*(_QWORD *)(v8 + 16));
      if ( v5 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          break;
      }
      else if ( a2 )
      {
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v8 + 24) < 0 );
        }
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = 2;
          LOBYTE(v10) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v10, v9);
        }
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v8 + 24) < 0 );
        }
      }
      v11 = 0;
      if ( (*(_DWORD *)(v8 + 32) & 0xC00000) == 0xC00000 )
        v11 = v7;
      v7 = v11;
      MiAbortCombineScan(v8);
      ++v5;
    }
    while ( (CurrentIrql >= 2u || (v5 & 0x3F) != 0 || !KeShouldYieldProcessor()) && PteLink != 0x7FFFFFFFFFLL );
    v3 = v19;
    v20 = v5;
    v24 = v7;
    if ( !v7 )
    {
      MiFlushEntireTbDueToAttributeChange();
      if ( v5 >= (unsigned int)dword_140E2D8B4 && v18 != 1 )
      {
        ++dword_140E2D8AC;
        KeInvalidateAllCaches();
        v12 = 0LL;
        v25 = 1;
        v13 = v19;
        goto LABEL_12;
      }
    }
    v12 = 0LL;
    result = 0x7FFFFFFFFFLL;
    v13 = v19;
    if ( v19 == 0x7FFFFFFFFFLL )
      break;
    while ( 1 )
    {
LABEL_12:
      v19 = v3;
      v14 = 48 * v13;
      v15 = MiGetPteLink(*(_QWORD *)(48 * v13 - 0x220000000000LL + 16));
      v16 = *(_DWORD *)(48 * v13 - 0x220000000000LL + 32);
      v13 = v15;
      *(_DWORD *)(v14 - 0x220000000000LL + 32) = (v18 << 22) ^ (*(_DWORD *)(v14 - 0x220000000000LL + 32) ^ (v18 << 22)) & 0xFF3FFFFF;
      if ( !v17 && !v24 && (v16 & 0xC00000) == 0x400000 && v18 != 1 )
      {
        ++dword_140E2D8B0;
        MiFlushCacheForAttributeChange(v14 / 48, 1LL, v18, 0LL);
      }
      *(_QWORD *)(v14 - 0x220000000000LL + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
      if ( !v22 )
        *(_QWORD *)(v14 - 0x220000000000LL + 16) = v21;
      ++v12;
      _InterlockedAnd64((volatile signed __int64 *)(v14 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v12 == v20 )
        break;
      result = 0x7FFFFFFFFFLL;
      if ( v13 == 0x7FFFFFFFFFLL )
        goto LABEL_19;
    }
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v3 = v13;
    v19 = v13;
    result = 0x7FFFFFFFFFLL;
LABEL_19:
    ;
  }
  return result;
}
