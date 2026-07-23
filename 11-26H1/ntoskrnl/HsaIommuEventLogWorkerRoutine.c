/*
 * XREFs of HsaIommuEventLogWorkerRoutine @ 0x1405AC7D0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIommuReportIommuFault @ 0x1405A2AB0 (HalpIommuReportIommuFault.c)
 *     HsaProcessEventLogEntry @ 0x1405ACC30 (HsaProcessEventLogEntry.c)
 */

__int64 __fastcall HsaIommuEventLogWorkerRoutine(volatile LONG *BugCheckParameter2)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  char v4; // r15
  char v5; // cl
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  signed __int32 v14[8]; // [rsp+8h] [rbp-49h] BYREF
  __int128 v15; // [rsp+28h] [rbp-29h] BYREF
  __int64 v16; // [rsp+38h] [rbp-19h]
  __int128 v17; // [rsp+40h] [rbp-11h]
  __int128 v18; // [rsp+50h] [rbp-1h]
  __int128 v19; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v20; // [rsp+70h] [rbp+1Fh]
  __int128 v21; // [rsp+80h] [rbp+2Fh]
  __int64 v22; // [rsp+90h] [rbp+3Fh]

  v1 = *(_QWORD *)BugCheckParameter2;
  v3 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 8224LL);
  if ( (v3 & 1) != 0 )
  {
    v4 = 1;
    while ( (v3 & 8) != 0 )
      v3 = *(_QWORD *)(v1 + 8224);
    *(_QWORD *)(v1 + 24) &= ~4uLL;
    _InterlockedOr(v14, 0);
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_BYTE *)(v1 + 23);
  v22 = 0LL;
  v6 = *(_QWORD *)(v1 + 8208);
  LODWORD(v16) = 0;
  v7 = *(_QWORD *)(v1 + 8216);
  v17 = 0LL;
  v8 = 1 << (v5 & 0xF);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v15 = 0LL;
  if ( v6 != v7 )
  {
    v9 = v8;
    do
    {
      HsaProcessEventLogEntry((ULONG_PTR)BugCheckParameter2);
      if ( (_DWORD)v17 == 6 )
      {
        HIDWORD(v15) = WORD1(v18);
        DWORD2(v15) = (unsigned __int16)v18;
        *(_QWORD *)&v15 = 1LL;
        v22 = 0LL;
        *((_QWORD *)&v20 + 1) = 0x600000000LL;
        v16 = 0LL;
        v19 = 0LL;
        BYTE4(v19) = BYTE4(v17) & 1;
        v21 = 0LL;
        DWORD2(v21) = (unsigned __int16)v18;
        LODWORD(v19) = 2;
        *(_QWORD *)&v20 = *((_QWORD *)&v17 + 1);
        v10 = *((_QWORD *)BugCheckParameter2 + 1);
        DWORD2(v20) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) & 0xFFFFFFFE | (DWORD1(v17) >> 1) & 1;
        *(_QWORD *)&v21 = v10;
        HalpIommuReportIommuFault(
          (__int64)&v15,
          WORD1(v18) | (unsigned __int64)((unsigned __int16)v18 << 16),
          (__int64)&v19);
      }
      v8 = -524273;
      v11 = (v6 + 16) ^ (v6 ^ (v6 + 16)) & 0xFFFFFFFFFFF8000FuLL;
      v6 = v11 & 0xFFFFFFFFFFF8000FuLL;
      v7 = *(_QWORD *)(v1 + 8216);
      if ( ((v11 >> 4) & 0x7FFF) != v9 )
        v6 = v11;
    }
    while ( v6 != v7 );
  }
  *(_QWORD *)(v1 + 8208) = v7;
  _InterlockedOr(v14, 0);
  *(_QWORD *)(v1 + 8224) |= 2uLL;
  _InterlockedOr(v14, 0);
  if ( v4 )
  {
    *(_QWORD *)(v1 + 8224) |= 1uLL;
    _InterlockedOr(v14, 0);
    *(_QWORD *)(v1 + 24) |= 4uLL;
    _InterlockedOr(v14, 0);
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(BugCheckParameter2 + 89);
  *((_BYTE *)BugCheckParameter2 + 352) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(BugCheckParameter2 + 89);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
