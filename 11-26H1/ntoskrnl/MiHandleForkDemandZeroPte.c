/*
 * XREFs of MiHandleForkDemandZeroPte @ 0x14049460C
 * Callers:
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     MiFindZeroCloneBlock @ 0x140494758 (MiFindZeroCloneBlock.c)
 *     MiWriteSharedDemandZeroPte @ 0x140494784 (MiWriteSharedDemandZeroPte.c)
 */

__int64 __fastcall MiHandleForkDemandZeroPte(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rax
  unsigned __int64 updated; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 ZeroCloneBlock; // rax
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  _KPROCESS *v12; // rax
  __int64 v13; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v15; // rax
  int v16; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v2 = (unsigned __int64 *)a1[39];
  v3 = a2;
  if ( (a2 & 4) != 0 )
  {
    v11 = v17;
    if ( (unsigned __int64)&v17 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v17 <= 0xFFFFF6FB7DBED7F8uLL
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v12 = MiPteHasShadow();
      if ( v12 )
      {
        KernelWaitTime = v12[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v15 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v17 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v13 |= 0x20uLL;
          v11 = v13 | 0x42;
          if ( (v15 & 0x42) == 0 )
            v11 = v13;
        }
      }
    }
    v17 = v11 & 0xFFFFFFFFFFFFFFFBuLL;
    v3 = v11 & 0xFFFFFFFFFFFFFFFBuLL;
  }
  updated = MiUpdatePageFileHighInPte(v3, 0);
  v6 = updated & 0xFFFFFFFFFFFF0FFFuLL;
  if ( (updated & 0x400) == 0 && (updated & 0x8000000) != 0
    || (v7 = a1[3]) == 0
    || (ZeroCloneBlock = MiFindZeroCloneBlock(v7, (v6 >> 5) & 0x1F)) == 0
    || (result = MiWriteSharedDemandZeroPte(a1, ZeroCloneBlock, v2), !(_DWORD)result) )
  {
    v10 = a1[41];
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *v2 = v6;
    MiIncreaseUsedPtesInPfn(a1[41], 1);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1[41] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
