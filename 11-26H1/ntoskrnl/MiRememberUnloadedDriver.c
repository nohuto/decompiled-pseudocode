/*
 * XREFs of MiRememberUnloadedDriver @ 0x140AC9A48
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

void __fastcall MiRememberUnloadedDriver(const void **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  char *v6; // rcx
  __int64 v7; // rax
  UNICODE_STRING *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  wchar_t *PoolMm; // rax
  int CurrentProcessorColor; // eax
  unsigned __int64 QpcTimeStamp; // [rsp+40h] [rbp+8h] BYREF

  v3 = a3;
  if ( *(_WORD *)a1 )
  {
    v6 = (char *)MmUnloadedDrivers;
    if ( MmUnloadedDrivers )
    {
      v7 = (unsigned int)MmLastUnloadedDriver;
      if ( (unsigned int)MmLastUnloadedDriver < 0x32 )
        goto LABEL_4;
    }
    else
    {
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      MmUnloadedDrivers = (PVOID)ExAllocatePoolMm(64LL, 0x7D0uLL, 1413770573, CurrentProcessorColor | 0x80000000);
      v6 = (char *)MmUnloadedDrivers;
      if ( !MmUnloadedDrivers )
        return;
    }
    v7 = 0LL;
    MmLastUnloadedDriver = 0;
LABEL_4:
    v8 = (UNICODE_STRING *)&v6[40 * v7];
    RtlFreeAnsiString(v8);
    v9 = *(unsigned __int16 *)a1;
    v10 = MmGetCurrentProcessorColor();
    PoolMm = (wchar_t *)ExAllocatePoolMm(64LL, v9, 1413770573, v10 | 0x80000000);
    v8->Buffer = PoolMm;
    if ( PoolMm )
    {
      memmove(PoolMm, a1[1], *(unsigned __int16 *)a1);
      v8->Length = *(_WORD *)a1;
      v8->MaximumLength = *((_WORD *)a1 + 1);
      *(_QWORD *)&v8[1].Length = a2;
      v8[1].Buffer = (wchar_t *)(a2 + v3);
      *(_QWORD *)&v8[2].Length = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      ++MmLastUnloadedDriver;
    }
    else
    {
      *(_DWORD *)&v8->Length = 0;
    }
  }
}
