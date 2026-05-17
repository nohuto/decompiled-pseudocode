/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x1800C62D4
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800C5420 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180081510 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 */

struct _TEB *__fastcall LdrpWriteBackProtectedDelayLoad(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  volatile signed __int64 *v5; // rbp
  __int64 v7; // r14
  unsigned int v8; // ebx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v16; // eax
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 v18; // [rsp+88h] [rbp+10h] BYREF
  int v19; // [rsp+98h] [rbp+20h] BYREF

  v5 = (volatile signed __int64 *)(a1 + 144);
  v7 = 8LL * a4;
  v17 = v7;
  v8 = a4;
  v19 = 0;
  v18 = a2;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 144), a2);
  if ( *(_QWORD *)(a2 + 8LL * a5) != *(_QWORD *)(a3 + 8LL * a5)
    && (int)ZwProtectVirtualMemory(-1LL, &v18, &v17, 4LL, &v19) >= 0 )
  {
    if ( v8 )
    {
      v12 = (_QWORD *)(v7 + a2);
      v13 = a3 - a2;
      do
      {
        --v12;
        --v8;
        v14 = *(_QWORD *)((char *)v12 + v13);
        if ( v14 )
          *v12 = v14;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory(-1LL, &v18, &v17, 2LL, &v19);
    if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v16 = LdrpUnsuppressAddressTakenIat(
              *(_QWORD *)(a1 + 48),
              (unsigned int)(a2 - *(_DWORD *)(a1 + 48)),
              (unsigned int)a2 + 8 * a4 - *(_DWORD *)(a1 + 48) - 8);
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrdload.c",
        937,
        (__int64)"LdrpWriteBackProtectedDelayLoad",
        0,
        "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the DLL"
        " based at 0x%p.Status = 0x%x\n",
        *(const void **)(a1 + 48),
        v16);
    }
  }
  return RtlReleaseSRWLockExclusive(v5);
}
