/*
 * XREFs of MiMapMdlWithLargePages @ 0x140502900
 * Callers:
 *     MiMapMdlCommon @ 0x140312C2C (MiMapMdlCommon.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiRewritePteWithLockBit @ 0x14029F518 (MiRewritePteWithLockBit.c)
 *     MiWriteLargePte @ 0x1402A10E0 (MiWriteLargePte.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiIoSpaceGetBounds @ 0x140313748 (MiIoSpaceGetBounds.c)
 *     MiGetLeafVa @ 0x140326060 (MiGetLeafVa.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiInsertPageChainHead @ 0x14033A060 (MiInsertPageChainHead.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033C7D0 (MiMakeProtectionPfnCompatible.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLookupIoPageNode @ 0x140367E4C (MiLookupIoPageNode.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall MiMapMdlWithLargePages(_DWORD *a1, unsigned __int64 a2, __int64 a3, char a4, int a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // bl
  int v15; // r12d
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  unsigned int v23; // r9d
  __int64 v24; // rdx
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int8 v28; // bl
  unsigned __int64 LeafVa; // rax
  int v30; // r9d
  KIRQL v31; // bl
  char v32; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v34; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v35; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v36; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v38; // [rsp+58h] [rbp-A8h]
  __int128 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int128 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  char *AnyMultiplexedVm; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  _BYTE v45[208]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a6;
  v7 = a3;
  v44 = a3;
  v42 = a6;
  memset_0(v45, 0, 0xC8uLL);
  v35 = (unsigned __int64 *)(a1 + 12);
  v10 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 0LL;
  v36 = 0LL;
  v13 = v11 + 8 * (((unsigned int)a1[10] + 4095LL + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 21);
  v37 = v13;
  CurrentIrql = KeGetCurrentIrql();
  v38 = CurrentIrql;
  if ( v7 )
  {
    v15 = 1;
    if ( CurrentIrql == 2 )
    {
      v32 = 17;
      MiLockWorkingSetSharedAtDpc(v7);
    }
    else
    {
      v32 = MiLockWorkingSetShared(v7, 0LL, 0xFFFFF68000000000uLL);
    }
  }
  else
  {
    v15 = 0;
    v32 = 17;
  }
  if ( v11 < v13 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
    *(_QWORD *)&v41 = v16 << 25;
    do
    {
      if ( v15 )
      {
        v36 = (v17 & (v11 >> 9)) + v16;
        MiLockPageTableInternal(v7, v36, 0);
      }
      v18 = 512 - ((v11 >> 3) & 0x1FF);
      if ( v18 > (__int64)(v37 - v11) >> 3 )
        v18 = (__int64)(v37 - v11) >> 3;
      v19 = 8 * v18;
      v20 = 8 * v18 + v11;
      v34 = v20;
      if ( v11 < v20 )
      {
        v21 = 8 * v18 + v11;
        do
        {
          v22 = *(_QWORD *)v11;
          MiRewritePteWithLockBit(v7, 0, v11, *(__int64 *)&CLFS_LSN_NULL_EXT);
          MiInsertPageChainHead((__int64 *)&v39, (__int64 *)(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL));
          v11 += 8LL;
        }
        while ( v11 < v21 );
        v6 = v42;
        v19 = 8 * v18;
        v20 = v34;
      }
      MiInitializeTbFlushList((__int64)v45, (__int64)AnyMultiplexedVm, 20, 0, 1);
      v11 -= v19;
      MiInsertTbFlushEntry((__int64)v45, (__int64)((v11 << 25) - v41) >> 16, v18, v23);
      MiFlushTbList((__int64)v45);
      if ( v11 < v20 )
      {
        v25 = v35;
        do
        {
          v26 = *v25;
          v27 = 6 * *v25;
          if ( *v25 <= qword_140E2D7A0 && ((*(_QWORD *)(48 * *v25 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            MiMakeProtectionPfnCompatible(a4, 48 * *v25 - 0x220000000000LL);
          }
          else
          {
            if ( !*(_DWORD *)(v6 + 20) || v26 < *(_QWORD *)v6 || v26 > *(_QWORD *)(v6 + 8) )
            {
              if ( v38 == 2 )
              {
                v28 = 17;
              }
              else
              {
                v28 = KeGetCurrentIrql();
                if ( v28 != 2 )
                  __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v24) = 2;
                  LOBYTE(v27) = v28;
                  KiRaiseIrqlProcessIrqlFlags(v27, v24);
                }
              }
              MiIoSpaceGetBounds(v6, v26);
              if ( !v15 )
              {
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
                __writecr8(v28);
              }
              v20 = v34;
            }
            if ( *(_DWORD *)(v6 + 20) == 3 )
              MiLookupIoPageNode(v26, 0LL);
          }
          LeafVa = MiGetLeafVa(v11);
          MiWriteLargePte(LeafVa, v26, 1u, v30);
          v11 += 8LL;
          v25 = v35 + 512;
          v35 += 512;
        }
        while ( v11 < v20 );
        v7 = v44;
      }
      v12 = v36;
      if ( v36 )
        MiUnlockPageTableInternal(v7, v36);
      v17 = 0x7FFFFFFFF8LL;
      v16 = 0xFFFFF68000000000uLL;
    }
    while ( v11 < v37 );
    v10 = v40;
    CurrentIrql = v38;
    v41 = v39;
  }
  if ( v15 )
  {
    LOBYTE(v12) = v32;
    MiUnlockWorkingSetShared(v7, v12);
  }
  if ( CurrentIrql == 2 )
  {
    v31 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E34B68);
  }
  else
  {
    v31 = ExAcquireSpinLockExclusive(&dword_140E34B68);
  }
  if ( (_QWORD)xmmword_140E34B78 )
  {
    **((_QWORD **)&xmmword_140E34B78 + 1) = v39;
    qword_140E34B88 += v10;
    *((_QWORD *)&xmmword_140E34B78 + 1) = *((_QWORD *)&v39 + 1);
  }
  else
  {
    xmmword_140E34B78 = v41;
    qword_140E34B88 = v40;
  }
  if ( v31 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34B68);
  else
    ExReleaseSpinLockExclusive(&dword_140E34B68, v31);
}
