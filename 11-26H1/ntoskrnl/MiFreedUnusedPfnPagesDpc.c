/*
 * XREFs of MiFreedUnusedPfnPagesDpc @ 0x1406ED820
 * Callers:
 *     MiFreeUnusedPfnPagesDpc @ 0x1406ED600 (MiFreeUnusedPfnPagesDpc.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x1404BCA10 (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiGetNextNonGapPfnPage @ 0x1406EDDA8 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 *     RtlCompareMemoryUlong @ 0x1407359E0 (RtlCompareMemoryUlong.c)
 */

void __fastcall MiFreedUnusedPfnPagesDpc(__int64 a1)
{
  unsigned __int64 v1; // r13
  unsigned __int64 v2; // rdx
  unsigned __int64 *i; // r8
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r15
  _QWORD *NextNonGapPfnPage; // rbx
  SIZE_T v10; // rdi
  SIZE_T v11; // rbp
  _QWORD *v12; // r12
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rsi
  char *v15; // rsi
  char *v16; // r14
  unsigned __int64 v17; // rax
  void *volatile *v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+90h] [rbp+18h]
  unsigned __int64 v22; // [rsp+98h] [rbp+20h]

  v19 = a1;
  v18 = MiSystemVaTypeToVm(3);
  MiLockWorkingSetExclusiveAtDpc((__int64)v18);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&stru_140E37F48.Header.WaitListHead);
  v1 = 0LL;
  while ( 1 )
  {
    v2 = v1;
    if ( v1 == qword_140E2D920 + 1 )
      break;
    for ( i = (unsigned __int64 *)((char *)MmPhysicalMemoryBlock + 16);
          i < (unsigned __int64 *)((char *)MmPhysicalMemoryBlock + 16 * *(unsigned int *)MmPhysicalMemoryBlock + 16);
          i += 2 )
    {
      v4 = *i;
      if ( v2 >= *i )
      {
        v6 = i[1] + v4;
        if ( v2 < v6 )
          v2 = v6;
      }
      else
      {
        v5 = v4 - v2;
        if ( v4 - v2 >= 0x55 )
          goto LABEL_12;
        v2 = v4 + i[1];
      }
    }
    v5 = qword_140E2D920 - v2 + 1;
    if ( qword_140E2D920 - v2 == -1LL )
      break;
LABEL_12:
    v1 = v5 + v2;
    v22 = v1;
    v7 = (((48 * v2 - 0x21FFFFFFF001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = v7;
    v8 = (((48 * v1 - 0x220000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = v8;
    if ( v7 < v8 )
    {
      do
      {
        LOBYTE(i) = 2;
        v19 = (__int64)(v8 - v7) >> 3 << 12;
        NextNonGapPfnPage = (_QWORD *)MiGetNextNonGapPfnPage(&v20, &v19, i, 1LL, v18);
        if ( !NextNonGapPfnPage )
          break;
        v10 = v19 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v19 & 0xFFFFFFFFFFFFF000uLL) == 0 )
          break;
        do
        {
          if ( *NextNonGapPfnPage || (v11 = RtlCompareMemoryUlong(NextNonGapPfnPage, v10, 0), v11 < 0x1000) )
          {
            v11 = 4096LL;
          }
          else
          {
            v12 = NextNonGapPfnPage;
            v13 = (unsigned __int64)(NextNonGapPfnPage + 0x44000000000LL) / 0x30;
            v14 = (_QWORD *)(48 * v13 - 0x220000000000LL);
            if ( v14 != NextNonGapPfnPage
              && MmIsAddressValidEx(48 * v13 - 0x220000000000LL)
              && RtlCompareMemoryUlong(v14, 0x30uLL, 0) != 48 )
            {
              v12 = NextNonGapPfnPage + 512;
            }
            v15 = (char *)NextNonGapPfnPage + (v11 & 0xFFFFFFFFFFFFF000uLL);
            v16 = (char *)(48 * ((unsigned __int64)(v15 + 0x220000000000LL) / 0x30) - 0x220000000000LL);
            if ( v16 != v15 && MmIsAddressValidEx((__int64)(v16 + 48)) && RtlCompareMemoryUlong(v16, 0x30uLL, 0) != 48 )
              v15 -= 4096;
            MiPfnRangeIsZero(v12, v15);
          }
          v17 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          NextNonGapPfnPage = (_QWORD *)((char *)NextNonGapPfnPage + v17);
          v10 -= v17;
        }
        while ( v10 >= 0x1000 );
        v7 = v20;
        v8 = v21;
        v1 = v22;
      }
      while ( v20 < v21 );
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E37F48.Header.WaitListHead);
  MiUnlockWorkingSetExclusive((__int64)v18, 0x11u);
}
