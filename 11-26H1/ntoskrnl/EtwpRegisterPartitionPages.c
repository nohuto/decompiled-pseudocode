/*
 * XREFs of EtwpRegisterPartitionPages @ 0x1406CB230
 * Callers:
 *     EtwpAllocatePartitionMemory @ 0x1404B6854 (EtwpAllocatePartitionMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpRegisterPartitionPages(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // di
  _QWORD *Pool2; // rax
  _QWORD *v8; // rsi
  KIRQL v9; // r15
  __int64 v10; // rbx
  char *v11; // r8
  char v12; // cl
  unsigned __int64 v13; // rcx
  char v14; // dl
  unsigned int v15; // edi
  __int64 v16; // r9
  _QWORD *KernelShadowStackBase; // r14
  _QWORD *v18; // r10
  __int64 v19; // rdx
  void *v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // r8
  __int64 v24; // [rsp+68h] [rbp+20h]
  __int64 v25; // [rsp+68h] [rbp+20h]

  v6 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v8 = Pool2;
  if ( !Pool2 )
    return (char)Pool2;
  Pool2[1] = a3;
  Pool2[2] = a2;
  Pool2[3] = a1;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&ExpSysDbgLock.KernelShadowStackLimit);
  v10 = (unsigned int)(2 * (HIDWORD(ExpSysDbgLock.KernelShadowStackInitial) >> 5));
  if ( LODWORD(ExpSysDbgLock.KernelShadowStackInitial) < (unsigned int)v10 )
    goto LABEL_24;
  if ( (unsigned int)v10 < 4 )
    v10 = 4LL;
  v11 = (char *)ExAllocatePool2(0x40uLL);
  if ( v11 )
  {
    if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
    {
      v12 = -1;
      do
      {
        ++v12;
        LODWORD(v10) = (unsigned int)v10 >> 1;
      }
      while ( (_DWORD)v10 );
      v10 = (unsigned int)(1 << v12);
    }
    if ( (unsigned int)v10 > 0x4000000 )
      v10 = 0x4000000LL;
    v13 = (unsigned int)v10;
    if ( v11 > &v11[8 * v10] )
      v13 = 0LL;
    if ( v13 )
      memset64(v11, (unsigned __int64)&ExpSysDbgLock.KernelShadowStackInitial + 1, v13);
    v14 = BYTE4(ExpSysDbgLock.KernelShadowStackInitial);
    v15 = 0;
    v16 = -1LL << (BYTE4(ExpSysDbgLock.KernelShadowStackInitial) & 0x1F);
    if ( (HIDWORD(ExpSysDbgLock.KernelShadowStackInitial) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        KernelShadowStackBase = ExpSysDbgLock.KernelShadowStackBase;
        while ( 1 )
        {
          v18 = (_QWORD *)KernelShadowStackBase[v15];
          if ( ((unsigned __int8)v18 & 1) != 0 )
            break;
          KernelShadowStackBase[v15] = *v18;
          v24 = v16 & v18[1];
          v19 = ((_DWORD)v10 - 1) & (HIBYTE(v24)
                                   + 37
                                   * (BYTE6(v24)
                                    + 37
                                    * (BYTE5(v24)
                                     + 37
                                     * (BYTE4(v24)
                                      + 37
                                      * (BYTE3(v24)
                                       + 374026047
                                       + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * (unsigned int)(unsigned __int8)v24)))))));
          *v18 = *(_QWORD *)&v11[8 * v19];
          *(_QWORD *)&v11[8 * v19] = v18;
        }
        v14 = BYTE4(ExpSysDbgLock.KernelShadowStackInitial);
        ++v15;
      }
      while ( v15 < HIDWORD(ExpSysDbgLock.KernelShadowStackInitial) >> 5 );
    }
    v20 = ExpSysDbgLock.KernelShadowStackBase;
    ExpSysDbgLock.KernelShadowStackBase = v11;
    HIDWORD(ExpSysDbgLock.KernelShadowStackInitial) = (32 * v10) | v14 & 0x1F;
    if ( v20 )
      ExFreePoolWithTag(v20, 0x42777445u);
    goto LABEL_24;
  }
  if ( (HIDWORD(ExpSysDbgLock.KernelShadowStackInitial) & 0xFFFFFFE0) != 0 )
  {
LABEL_24:
    v25 = v8[1] & (-1LL << (BYTE4(ExpSysDbgLock.KernelShadowStackInitial) & 0x1F));
    v21 = ExpSysDbgLock.KernelShadowStackBase;
    v22 = ((HIDWORD(ExpSysDbgLock.KernelShadowStackInitial) >> 5) - 1) & (HIBYTE(v25)
                                                                        + 37
                                                                        * (BYTE6(v25)
                                                                         + 37
                                                                         * (BYTE5(v25)
                                                                          + 37
                                                                          * (BYTE4(v25)
                                                                           + 37
                                                                           * (BYTE3(v25)
                                                                            + 374026047
                                                                            + 37
                                                                            * (BYTE2(v25)
                                                                             + 37
                                                                             * (BYTE1(v25) + 37 * (unsigned __int8)v25)))))));
    *v8 = *((_QWORD *)ExpSysDbgLock.KernelShadowStackBase + v22);
    v21[v22] = v8;
    v6 = 1;
    ++LODWORD(ExpSysDbgLock.KernelShadowStackInitial);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&ExpSysDbgLock.KernelShadowStackLimit, v9);
  if ( !v6 )
    ExFreePoolWithTag(v8, 0x4F777445u);
  LOBYTE(Pool2) = v6;
  return (char)Pool2;
}
