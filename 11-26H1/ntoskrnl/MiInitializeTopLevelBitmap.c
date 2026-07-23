/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x140D10FA8
 * Callers:
 *     MiInitializeSystemVa @ 0x140D10EF8 (MiInitializeSystemVa.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 */

__int64 MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  _KPROCESS *v4; // rax
  __int64 v5; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  v0 = __rdtsc();
  *(_DWORD *)&stru_140E2DAB0.AbWaitEntryCount = (unsigned __int8)((((unsigned __int64)HIDWORD(v0) << 32) | (unsigned int)v0) >> 4);
  BitMapHeader.Buffer = (unsigned int *)&stru_140E2DAB0.ThreadListEntry;
  stru_140E2DAB0.ThreadListEntry = 0LL;
  stru_140E2DAB0.MutantListHead = 0LL;
  v1 = 0xFFFFF6FB7DBED800uLL;
  v2 = 256LL;
  do
  {
    v3 = *(_QWORD *)v1;
    if ( v1 >= 0xFFFFF6FB7DBED000uLL
      && v1 <= 0xFFFFF6FB7DBED7F8uLL
      && (v3 & 1) != 0
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      v4 = MiPteHasShadow();
      if ( v4 )
      {
        KernelWaitTime = v4[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v7 = *(_QWORD *)(KernelWaitTime + 8 * ((v1 >> 3) & 0x1FF));
          if ( (v7 & 0x20) != 0 )
            v5 |= 0x20uLL;
          v3 = v5 | 0x42;
          if ( (v7 & 0x42) == 0 )
            v3 = v5;
        }
      }
    }
    if ( v3 )
      RtlSetBits(&BitMapHeader, (__int64)(v1 + 0x90482412800LL) >> 3, 1u);
    v1 += 8LL;
    --v2;
  }
  while ( v2 );
  RtlSetBits(&BitMapHeader, ((__int64)(v1 + 0x90482412800LL) >> 3) - 1, 1u);
  if ( (MiFlags & 0x400000) == 0 )
    BYTE5(stru_140E2DAB0.MutantListHead.Blink) &= ~0x20u;
  result = 1LL;
  LOBYTE(stru_140E2DAB0.ThreadListEntry.Flink) |= 1u;
  return result;
}
