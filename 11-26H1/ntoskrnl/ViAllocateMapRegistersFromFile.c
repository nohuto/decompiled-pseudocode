/*
 * XREFs of ViAllocateMapRegistersFromFile @ 0x140C2C19C
 * Callers:
 *     ViMapDoubleBuffer @ 0x140C2D778 (ViMapDoubleBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 *     ViTagBuffer @ 0x140C2E050 (ViTagBuffer.c)
 */

__int64 __fastcall ViAllocateMapRegistersFromFile(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4, _DWORD *a5)
{
  __int64 v5; // rsi
  ULONG_PTR *v6; // r14
  ULONG_PTR v8; // rbx
  int v9; // r15d
  unsigned int v10; // r13d
  unsigned __int64 v11; // rdi
  KIRQL v12; // r10
  const void *v13; // rcx
  ULONG_PTR *v14; // rsi
  ULONG_PTR *v15; // rbp
  const void *v16; // rdi
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // rcx
  unsigned int v19; // eax
  ULONG_PTR *v21; // r14
  unsigned int *v22; // r9
  int v23; // r11d
  unsigned int v24; // ecx
  _DWORD *v25; // r9
  unsigned int v26; // ecx
  _DWORD *v27; // r9
  int v28; // [rsp+38h] [rbp-50h]
  KIRQL NewIrql; // [rsp+90h] [rbp+8h]
  KSPIN_LOCK *SpinLock; // [rsp+98h] [rbp+10h]

  v5 = a3;
  v6 = (ULONG_PTR *)(a1 + 88);
  v8 = a2;
  v9 = 0;
  v10 = 0;
  v11 = ((a2 & 0xFFF) + a3 + 4095LL) >> 12;
  v28 = v11;
  SpinLock = (KSPIN_LOCK *)(a1 + 80);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  NewIrql = v12;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v13 = (const void *)(v8 + v5);
    v14 = v6;
    v15 = &v6[4 * *(unsigned int *)(a1 + 28)];
    if ( v6 < v15 )
    {
      v16 = v13;
      do
      {
        v17 = *v14;
        if ( *v14 && v17 >= v8 && v17 < (unsigned __int64)v16 )
        {
          ViHalPreprocessOptions(
            byte_140E0EB1C,
            "Driver is trying to map an address range(%p-%p) that is already mapped    at %p",
            (const void *)0x1D,
            (const void *)v8,
            v16);
          VfReportIssueWithOptions(0xE6u, 0x1DuLL, v8, (ULONG_PTR)v16, *v14, byte_140E0EB1C);
        }
        v14 += 4;
      }
      while ( v14 < v15 );
      LODWORD(v11) = v28;
      v9 = 0;
      v12 = NewIrql;
    }
    LODWORD(v5) = a3;
  }
  while ( v10 < (unsigned int)v11 )
  {
    if ( v9 == *(_DWORD *)(a1 + 28) )
    {
      ViHalPreprocessOptions(byte_140E0EB20, "Map registers needed: %x available: %x", 0x10000000, 2);
      VfReportIssueWithOptions(0xE6u, 0LL, 2uLL, (unsigned int)v11, v10, byte_140E0EB20);
      KeReleaseSpinLock(SpinLock, NewIrql);
      return 0LL;
    }
    v18 = *v6;
    v19 = v10 + 1;
    v10 = 0;
    v6 += 4;
    ++v9;
    if ( !v18 )
      v10 = v19;
  }
  v21 = &v6[-4 * (unsigned int)v11];
  *a5 = v9 - v11;
  if ( (_DWORD)v11 )
  {
    v22 = (unsigned int *)(v21 + 1);
    v23 = 4095;
    if ( a4 )
    {
      do
      {
        *((_QWORD *)v22 - 1) = v8;
        *((_QWORD *)v22 + 2) = v8;
        v22[1] = 1;
        v24 = 4096 - (v23 & v8);
        if ( v24 >= (unsigned int)v5 )
          v24 = v5;
        *v22 = v24;
        _InterlockedAdd((volatile signed __int32 *)(a1 + 32), 1u);
        ViTagBuffer((v23 & (unsigned int)v8) + *((_QWORD *)v22 + 1) + 4096LL, *v22, 3LL);
        LODWORD(v5) = v5 - *v25;
        v8 = (v8 + 4096) & 0xFFFFFFFFFFFFF000uLL;
        v22 = v25 + 8;
        LODWORD(v11) = v11 - 1;
      }
      while ( (_DWORD)v11 );
    }
    else
    {
      do
      {
        *((_QWORD *)v22 - 1) = v8;
        *((_QWORD *)v22 + 2) = v8;
        v22[1] = 2;
        v26 = 4096 - (v23 & v8);
        if ( v26 >= (unsigned int)v5 )
          v26 = v5;
        *v22 = v26;
        _InterlockedAdd((volatile signed __int32 *)(a1 + 32), 1u);
        ViTagBuffer((v23 & (unsigned int)v8) + *((_QWORD *)v22 + 1) + 4096LL, *v22, 3LL);
        LODWORD(v5) = v5 - *v27;
        v8 = (v8 + 4096) & 0xFFFFFFFFFFFFF000uLL;
        v22 = v27 + 8;
        LODWORD(v11) = v11 - 1;
      }
      while ( (_DWORD)v11 );
    }
  }
  KeReleaseSpinLock(SpinLock, v12);
  return 1LL;
}
