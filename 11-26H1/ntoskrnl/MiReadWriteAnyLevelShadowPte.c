/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x14040D644
 * Callers:
 *     MiCheckKernelShadow @ 0x14040D4B4 (MiCheckKernelShadow.c)
 *     MiInitializeShadowPageTable @ 0x1408755C4 (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x140875858 (MiMakeShadowPageTableRange.c)
 *     MmDeleteShadowMapping @ 0x140875BF4 (MmDeleteShadowMapping.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140342108 (MiSanitizeShadowPxe.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040DF60 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, int a2, int a3, ULONG_PTR a4)
{
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 KernelWaitTime; // r15
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int8 v10; // r11
  __int64 *v11; // r10
  __int64 v12; // rsi
  ULONG_PTR v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int v17; // ecx
  int v18; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-30h]
  __int64 v20; // [rsp+38h] [rbp-28h]
  __int128 v21; // [rsp+40h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-10h]
  unsigned __int8 v23; // [rsp+98h] [rbp+38h] BYREF

  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v6 = a2;
  v7 = a2;
  KernelWaitTime = KeGetCurrentThread()->ApcState.Process[2].KernelWaitTime;
  if ( a2 < 4LL )
  {
    a2 = 4;
    do
    {
      *(&v20 + v6) = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v6;
    }
    while ( v6 < 4 );
  }
  BugCheckParameter4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v10 = 17;
  v23 = 17;
  v11 = (__int64 *)KernelWaitTime;
  v12 = a2;
  while ( 1 )
  {
    v13 = *(&BugCheckParameter2 + v12--);
    v14 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v12 == 3 )
    {
      v11 += (v13 >> 3) & 0x1FF;
    }
    else
    {
      if ( v10 != 17 )
      {
        LOBYTE(v14) = v10;
        MiUnmapPageInHyperSpaceWorker(KernelWaitTime, v14, 0x80000000LL);
      }
      v15 = MiMapPageInHyperSpaceWorker((BugCheckParameter4 >> 12) & 0xFFFFFFFFFFLL, &v23, 0x80000000);
      v10 = v23;
      KernelWaitTime = v15;
      v14 = 0xFFFFF6FB7DBED7F8uLL;
      v11 = (__int64 *)(v15 + 8 * ((v13 >> 3) & 0x1FF));
    }
    if ( a3 && v12 == v7 )
      break;
    BugCheckParameter4 = *v11;
    if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
      BugCheckParameter4 = MiReadPteShadow((unsigned __int64)v11, *v11);
    if ( v12 && (BugCheckParameter4 & 0x81) == 0x81 )
      KeBugCheckEx(0x1Au, 0x1306uLL, v13, 0LL, BugCheckParameter4);
    if ( v12 == v7 )
      goto LABEL_15;
  }
  if ( (a4 & 1) != 0 && !v12 )
    a4 |= 0x100uLL;
  v17 = 0;
  BugCheckParameter2 = a4;
  if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v18 = MiSanitizeShadowPxe();
    a4 = BugCheckParameter2;
    v17 = v18;
  }
  *v11 = a4;
  if ( v17 )
    MiWritePteShadow();
LABEL_15:
  if ( v10 != 17 )
  {
    LOBYTE(v14) = v10;
    MiUnmapPageInHyperSpaceWorker(KernelWaitTime, v14, 0x80000000LL);
  }
  return BugCheckParameter4;
}
