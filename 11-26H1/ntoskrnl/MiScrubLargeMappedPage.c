/*
 * XREFs of MiScrubLargeMappedPage @ 0x140710CEC
 * Callers:
 *     MiScrubProcessLargePage @ 0x1408842B8 (MiScrubProcessLargePage.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiIdentifyPfnWrapper @ 0x1402D2DA0 (MiIdentifyPfnWrapper.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiScrubPage @ 0x140408114 (MiScrubPage.c)
 *     MiMakePageBad @ 0x1404B42D8 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x1404C3F28 (MiScrubInterrupted.c)
 */

__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  struct _LIST_ENTRY **p_Blink; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // rcx
  unsigned __int64 v11; // r13
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 *ProcessorFlushList; // r14
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rbp
  signed __int64 v26; // r14
  BOOL v27; // r10d
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  char v34; // [rsp+30h] [rbp-A8h]
  BOOL v35; // [rsp+34h] [rbp-A4h]
  unsigned int v36; // [rsp+38h] [rbp-A0h]
  int v37; // [rsp+3Ch] [rbp-9Ch]
  unsigned __int64 valid; // [rsp+48h] [rbp-90h] BYREF
  __int64 v39; // [rsp+50h] [rbp-88h]
  unsigned __int64 v40; // [rsp+58h] [rbp-80h]
  __int64 v41; // [rsp+60h] [rbp-78h]
  __int64 v42; // [rsp+68h] [rbp-70h]
  unsigned __int64 v43; // [rsp+70h] [rbp-68h]
  __int128 v44; // [rsp+78h] [rbp-60h] BYREF
  __int64 v45; // [rsp+88h] [rbp-50h]
  unsigned int v48; // [rsp+F0h] [rbp+18h]

  v48 = a3;
  v4 = 0;
  v5 = a2;
  v35 = 0;
  v39 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v37 = 0;
  v7 = 0xFFFFF68000000000uLL;
  v42 = MiPageSizes[(unsigned int)a3];
  v43 = a4[2];
  v8 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 2 - a3;
  v36 = 2 - a3;
  if ( (unsigned int)a3 >= 2 )
  {
    v36 = 2 - a3;
  }
  else
  {
    v10 = v9;
    v37 = 2 - a3;
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v10;
    }
    while ( v10 );
  }
  v11 = 1LL;
  if ( (unsigned int)a3 > 1 )
    v11 = 16LL;
  v40 = v11;
  v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = v12;
  while ( 1 )
  {
    v45 = 0LL;
    v44 = 0LL;
    v34 = MiLockWorkingSetShared((__int64)p_Blink, v7, a3);
    valid = MiLockLowestValidPageTableEx((__int64)p_Blink, v8, &valid, 0);
    v13 = valid;
    if ( valid != v12 )
      break;
    v14 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 1) == 0 )
      break;
    v15 = (v14 >> 12) & 0xFFFFFFFFFFLL;
    if ( v15 != v5 )
      break;
    v16 = 48 * v15 - 0x220000000000LL;
    v17 = MiIdentifyPfnWrapper(v16, 0LL, &v44);
    if ( v17 != v42 )
      break;
    v18 = *a4;
    if ( (((unsigned __int8)v44 ^ (unsigned __int8)*a4) & 0x70) != 0
      || (((unsigned __int8)v44 ^ (unsigned __int8)v18) & 0xF) != 0
      || v45 != a4[2]
      || (((unsigned __int64)v44 ^ v18) & 0x1FFFFFFFFFFFE00LL) != 0
      || (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
      || (unsigned __int16)*(_DWORD *)(v16 + 32) != 2 )
    {
      break;
    }
    if ( v48 > 1 )
    {
      v19 = 0;
      v20 = 0LL;
      do
      {
        ++v19;
        *(_QWORD *)(v8 + 8 * v20) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v20 = v19;
      }
      while ( v19 < v11 );
    }
    else
    {
      if ( (v14 & 0x80u) == 0LL )
        break;
      MiRewritePteWithLockBit((signed __int64)p_Blink, 0, v8, *(__int64 *)&CLFS_LSN_NULL_EXT);
      v14 &= 0xCFFFFFFFFFFFFFFFuLL;
    }
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)p_Blink, *((_DWORD *)ProcessorFlushList + 3), 0, 1);
    if ( v37 < 1 )
      MiInsertTbFlushEntry(v22, v43, v11, v9);
    else
      MiInsertLargeTbFlushEntry(v22, v37, v8);
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
    v23 = v39;
    v24 = v16 + 48 * v42;
    v25 = 48 * v39 + v16;
    v26 = v25 + 0x220000000000LL;
    while ( v25 < v24 )
    {
      v39 = ++v23;
      if ( (unsigned __int16)*(_DWORD *)(v26 - 0x21FFFFFFFFE0LL) == 2 )
      {
        if ( (int)MiScrubPage(a1, v26 / 48, 0, 0LL, 3) < 0 )
          MiMakePageBad(v26 / 48, 1);
        if ( MiWorkingSetIsContended((__int64)p_Blink, 0)
          || (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, valid)
          || KeShouldYieldProcessor() )
        {
          v27 = v35;
          a3 = 1LL;
          v25 += 48LL;
          goto LABEL_42;
        }
        v35 = MiScrubInterrupted(a1);
        v27 = v35;
        if ( v35 )
        {
          v25 += 48LL;
          goto LABEL_41;
        }
        v23 = v39;
      }
      v25 += 48LL;
      v26 += 48LL;
    }
    v27 = v35;
LABEL_41:
    a3 = 0LL;
LABEL_42:
    v28 = v40;
    v29 = v14 | 0x20;
    LODWORD(v7) = 0;
    v30 = 0LL;
    do
    {
      *(_QWORD *)(v8 + 8 * v30) = v29;
      v7 = (unsigned int)(v7 + 1);
      v30 = (unsigned int)v7;
      v29 = (v29 + 4096) ^ ((v29 + 4096) ^ v29) & 0xFFF0000000000FFFuLL;
    }
    while ( (unsigned int)v7 < v28 );
    if ( v25 == v24 )
    {
      v4 = 1;
LABEL_49:
      v13 = valid;
      break;
    }
    if ( v27 )
      goto LABEL_49;
    v9 = v36;
    v11 = v28;
    v12 = v41;
    v5 = a2;
    if ( (_DWORD)a3 )
    {
      MiUnlockPageTableInternal((__int64)p_Blink, valid);
      LOBYTE(v31) = v34;
      MiUnlockWorkingSetShared((__int64)p_Blink, v31);
    }
  }
  MiUnlockPageTableInternal((__int64)p_Blink, v13);
  LOBYTE(v32) = v34;
  MiUnlockWorkingSetShared((__int64)p_Blink, v32);
  return v4;
}
