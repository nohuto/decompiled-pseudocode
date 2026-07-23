/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x1402A3998
 * Callers:
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x1402A42B4 (MiSystemVaToDynamicBitmap.c)
 *     MiReduceSystemRegionType @ 0x1402A4E64 (MiReduceSystemRegionType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiNonPagedPoolToNode @ 0x1404C7FA0 (MiNonPagedPoolToNode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiMakeSystemRangeAvailable(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR v4; // r14
  _QWORD *v7; // rbx
  ULONG_PTR *v8; // r15
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  volatile LONG *v11; // rcx
  ULONG_PTR v12; // rcx
  __int64 *v13; // r10
  __int64 *v14; // r8
  __int64 v15; // r11
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rax
  bool i; // zf
  unsigned __int64 v19; // rsi
  volatile LONG *v20; // rcx
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  KIRQL OldIrql; // [rsp+80h] [rbp+18h]

  BugCheckParameter4 = (int)a3;
  v4 = BugCheckParameter3 >> 21;
  v21 = 0LL;
  if ( a3 == 4 )
    v7 = (_QWORD *)(qword_140E2D838 + 384LL * (unsigned int)MiNonPagedPoolToNode(BugCheckParameter2));
  else
    v7 = (_QWORD *)MiSystemVaToDynamicBitmap(a3);
  v8 = v7;
  v9 = (BugCheckParameter2 - v7[4]) >> 21;
  if ( (((_DWORD)BugCheckParameter4 - 10) & 0xFFFFFFFD) == 0 )
  {
    v8 = (ULONG_PTR *)&v21;
    v10 = v7[2];
    *((_QWORD *)&v21 + 1) = v7[1];
    *(_QWORD *)&v21 = v10;
  }
  v11 = (volatile LONG *)(v7 + 8);
  if ( KeGetCurrentIrql() == 2 )
  {
    OldIrql = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v11);
  }
  else
  {
    OldIrql = ExAcquireSpinLockExclusive(v11);
  }
  if ( v9 >= *v8 )
    goto LABEL_39;
  if ( v4 <= 1 )
  {
    if ( v4 == 1 && _bittest64((const signed __int64 *)(v8[1] + 8 * (v9 >> 6)), v9 & 0x3F) )
      goto LABEL_23;
LABEL_39:
    KeBugCheckEx(0x1Au, 0x101CuLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( *v8 - v9 < v4 )
    goto LABEL_39;
  v12 = v8[1];
  v13 = (__int64 *)(v12 + 8 * ((v9 + v4 - 1) >> 6));
  v14 = (__int64 *)(v12 + 8 * (v9 >> 6));
  v15 = *v14;
  if ( v14 == v13 )
  {
    v16 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v9;
    v17 = v15 & v16;
  }
  else
  {
    for ( i = (v15 & (-1LL << v9)) == -1LL << v9; ; i = *v14 == -1 )
    {
      if ( !i )
        goto LABEL_39;
      if ( ++v14 == v13 )
        break;
    }
    v16 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v4 - 1);
    v17 = *v14 & v16;
  }
  if ( v17 != v16 )
    goto LABEL_39;
LABEL_23:
  RtlClearBitsEx((__int64)v8, v9, v4);
  if ( (((_DWORD)BugCheckParameter4 - 10) & 0xFFFFFFFD) != 0 )
  {
    if ( v9 < v7[3] )
    {
      if ( (_DWORD)BugCheckParameter4 != 11
        || (KiFeatureSettings & 0x20000) != 0
        || (BugCheckParameter2 < PsNtosImageEnd
          ? (v19 = PsNtosImageEnd - BugCheckParameter2)
          : (v19 = BugCheckParameter3 + BugCheckParameter2 - (_QWORD)PsNtosImageBase),
            v19 < 0x80000000) )
      {
        v7[3] = v9;
      }
    }
  }
  else
  {
    LODWORD(BugCheckParameter4) = MiReduceSystemRegionType((unsigned int)BugCheckParameter4);
    if ( v9 < v7[6] )
      v7[6] = v9;
  }
  _InterlockedAdd64(&qword_140E37B48[(int)BugCheckParameter4], -(__int64)v4);
  if ( (_DWORD)BugCheckParameter4 == 7 )
    stru_140E2DAB0.KernelStack = (char *)stru_140E2DAB0.KernelStack + BugCheckParameter3;
  v20 = (volatile LONG *)(v7 + 8);
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v20);
  else
    ExReleaseSpinLockExclusive(v20, OldIrql);
}
