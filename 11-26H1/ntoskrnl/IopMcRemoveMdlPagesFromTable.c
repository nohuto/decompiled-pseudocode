/*
 * XREFs of IopMcRemoveMdlPagesFromTable @ 0x1402EF90C
 * Callers:
 *     IopMcTryUnlockMdl @ 0x1405D9F78 (IopMcTryUnlockMdl.c)
 *     IopMcCreateBufferEntryMdl @ 0x14079E10C (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     IopMcShouldYield @ 0x1402EF3B8 (IopMcShouldYield.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall IopMcRemoveMdlPagesFromTable(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int64 v6; // rsi
  unsigned int v7; // ebp
  KIRQL v8; // r15
  __int64 v9; // r14
  ULONG_PTR BugCheckParameter4; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+60h] [rbp+18h] BYREF

  if ( FeaturePfnArrayDebug )
  {
    BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( BugCheckParameter4 != BugCheckParameter3 + 48 )
      KeBugCheckEx(0x1F4u, 5uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  v4 = *(_DWORD *)(BugCheckParameter3 + 44) & 0xFFF;
  v5 = *(unsigned int *)(BugCheckParameter3 + 40) + 4095LL;
  v13 = 0;
  v6 = (unsigned __int64)(v4 + v5) >> 12;
  v7 = 0;
  v8 = ExAcquireSpinLockExclusive(&dword_140F850E4);
  if ( (_DWORD)v6 )
  {
    v9 = BugCheckParameter2 + 96;
    do
    {
      if ( IopMcShouldYield(v7, v8) )
      {
        ExReleaseSpinLockExclusive(&dword_140F850E4, v8);
        KeYieldProcessorEx(&v13);
        v8 = ExAcquireSpinLockExclusive(&dword_140F850E4);
      }
      RtlAvlRemoveNode((unsigned __int64 *)&qword_140F850E8, v9);
      ++v7;
      v9 += 32LL;
    }
    while ( v7 < (unsigned int)v6 );
  }
  ExReleaseSpinLockExclusive(&dword_140F850E4, v8);
  if ( (_DWORD)v6 )
  {
    v11 = (_DWORD *)(BugCheckParameter2 + 120);
    v12 = (unsigned int)v6;
    do
    {
      *v11 = -2;
      v11 += 8;
      --v12;
    }
    while ( v12 );
  }
  if ( FeaturePfnArrayDebug && *(_QWORD *)(BugCheckParameter2 + 88) != BugCheckParameter3 + 48 )
    KeBugCheckEx(0x1F4u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter2 + 88));
  *(_QWORD *)(BugCheckParameter2 + 88) = 0LL;
}
