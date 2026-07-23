/*
 * XREFs of IvtIommuFaultLogWorkerRoutine @ 0x1405A9D20
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpIommuReportIommuFault @ 0x1405A2AB0 (HalpIommuReportIommuFault.c)
 */

__int64 __fastcall IvtIommuFaultLogWorkerRoutine(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // r15d
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-59h] BYREF
  ULONG_PTR v12; // [rsp+30h] [rbp-29h]
  __int64 v13; // [rsp+38h] [rbp-21h]
  __int64 v14; // [rsp+40h] [rbp-19h] BYREF
  int v15; // [rsp+48h] [rbp-11h]
  _BYTE v16[12]; // [rsp+4Ch] [rbp-Dh]
  __int128 v17; // [rsp+58h] [rbp-1h] BYREF
  ULONG_PTR v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+70h] [rbp+17h]
  int v20; // [rsp+74h] [rbp+1Bh]
  __int128 v21; // [rsp+78h] [rbp+1Fh]
  __int64 v22; // [rsp+88h] [rbp+2Fh]
  unsigned int BugCheckParameter3; // [rsp+C0h] [rbp+67h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  BugCheckParameter3 = *(_DWORD *)(v1 + 52);
  v3 = *(unsigned __int8 *)(BugCheckParameter2 + 221) + 1LL;
  v4 = v1 + 16 * ((*(_QWORD *)(BugCheckParameter2 + 216) >> 24) & 0x3FFLL);
  v5 = BYTE1(BugCheckParameter3);
  if ( *(_BYTE *)(BugCheckParameter2 + 320)
    && ((BugCheckParameter3 & 0x10) != 0 || (BugCheckParameter3 & 0x20) != 0 || (BugCheckParameter3 & 0x40) != 0) )
  {
    KeBugCheckEx(
      0x5Cu,
      0x502uLL,
      BugCheckParameter2,
      BugCheckParameter3,
      *(_QWORD *)(16 * (BYTE1(BugCheckParameter3) % v3)
                + 16 * ((*(_QWORD *)(BugCheckParameter2 + 216) >> 24) & 0x3FFLL)
                + v1));
  }
  if ( (BugCheckParameter3 & 2) != 0 && BugCheckParameter3 != -1 )
  {
    do
    {
      v6 = v5 % v3;
      v7 = 2 * v6;
      v12 = *(_QWORD *)(v4 + 16 * v6);
      v13 = *(_QWORD *)(v4 + 16 * v6 + 8);
      if ( v13 >= 0 )
        break;
      if ( (unsigned int)BYTE4(v13) - 32 > 8 )
      {
        v8 = *(unsigned int *)(BugCheckParameter2 + 252);
        v22 = 0LL;
        v15 = v8;
        v17 = 0LL;
        BYTE4(v17) = (int)v13 < 0;
        v21 = 0LL;
        v18 = v12 >> 12;
        v20 = BYTE4(v13);
        v14 = 1LL;
        *(_QWORD *)&v16[4] = 0LL;
        v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 1;
        DWORD2(v21) = *(_DWORD *)(BugCheckParameter2 + 252);
        *(_QWORD *)&v21 = *(_QWORD *)BugCheckParameter2;
        *(_QWORD *)v16 = (unsigned __int16)v13;
        LODWORD(v17) = 2;
        HalpIommuReportIommuFault((__int64)&v14, (unsigned __int16)v13 | (unsigned __int64)(v8 << 16), (__int64)&v17);
      }
      else if ( *(_BYTE *)(BugCheckParameter2 + 320) )
      {
        KeBugCheckEx(0x1FBu, 0x1000uLL, BYTE4(v13), (unsigned __int16)v13, v12 >> 12);
      }
      v13 |= 0x8000000000000000uLL;
      *(_QWORD *)(v4 + 8 * v7 + 8) = v13;
      _InterlockedOr(v11, 0);
      ++v5;
      BugCheckParameter3 = *(_DWORD *)(v1 + 52);
    }
    while ( (BugCheckParameter3 & 2) != 0 );
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 52LL) = BugCheckParameter3 | 1;
    _InterlockedOr(v11, 0);
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 468));
  *(_BYTE *)(BugCheckParameter2 + 464) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 468));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
