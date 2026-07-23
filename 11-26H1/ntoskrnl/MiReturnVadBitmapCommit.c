/*
 * XREFs of MiReturnVadBitmapCommit @ 0x140AE3FD0
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x140B262B8 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiBitmapRangeZeroEx @ 0x140316E54 (MiBitmapRangeZeroEx.c)
 *     RtlAreBitsClearEx @ 0x14041EDB0 (RtlAreBitsClearEx.c)
 *     MmGetMinWsPagePriority @ 0x1404AACF0 (MmGetMinWsPagePriority.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 */

void __fastcall MiReturnVadBitmapCommit(__int64 a1)
{
  int v2; // r12d
  signed __int64 v3; // rsi
  signed __int64 v4; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // r15
  int v7; // eax
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  signed __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 96);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 72);
  if ( !*(_DWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 128) += v4 - v3 + 1;
  v11 = v3;
  v5 = v3;
  v6 = *(_QWORD *)(a1 + 136) + 16LL * (unsigned int)(2 - v2);
  if ( v3 <= v4 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a1 + 56) )
        goto LABEL_10;
      if ( v5 == v3 )
      {
        v7 = MiBitmapRangeZeroEx(v6 + 616, v5, &v11);
        v3 = v11;
        if ( v7 )
        {
          v5 = v11 - 1;
          goto LABEL_7;
        }
      }
      if ( _bittest64(*(const signed __int64 **)(v6 + 624), v5) )
        break;
LABEL_7:
      if ( (__int64)++v5 > v4 )
        goto LABEL_8;
    }
    ++*(_QWORD *)(a1 + 128);
LABEL_10:
    *(_BYTE *)((v5 >> 3) + *(_QWORD *)(v6 + 624)) &= ~(1 << (v5 & 7));
    if ( (unsigned int)MmGetMinWsPagePriority() || v5 != v4 && (v5 & 7) != 7 && !*(_DWORD *)(a1 + 56) )
      goto LABEL_7;
    v8 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( !RtlAreBitsClearEx((unsigned __int64 *)(v6 + 616), v5 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL)
      || (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0
      && v8 == (*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      goto LABEL_7;
    }
    if ( v2 )
    {
      ++*(_QWORD *)(a1 + 120);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 104);
      if ( v9 == -1 )
        goto LABEL_28;
      v10 = *(_QWORD *)(a1 + 112);
      if ( v9 + 8 * v10 != v8 )
      {
        HalSystemVectorDispatchEntry();
        *(_QWORD *)(a1 + 120) += *(_QWORD *)(a1 + 112);
LABEL_28:
        *(_QWORD *)(a1 + 112) = 1LL;
        *(_QWORD *)(a1 + 104) = v8;
        goto LABEL_7;
      }
      *(_QWORD *)(a1 + 112) = v10 + 1;
    }
    goto LABEL_7;
  }
LABEL_8:
  if ( *(_QWORD *)(a1 + 112) )
  {
    HalSystemVectorDispatchEntry();
    *(_QWORD *)(a1 + 120) += *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 104) = -1LL;
    *(_QWORD *)(a1 + 112) = 0LL;
  }
}
