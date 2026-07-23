/*
 * XREFs of KsepStringConcatenate @ 0x1409D7A8C
 * Callers:
 *     KsepLoadShimProvider @ 0x140600A40 (KsepLoadShimProvider.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409D70DC (KsepDbQueryRegistryDeviceData.c)
 *     KsepRegistryOpenKey @ 0x1409D7988 (KsepRegistryOpenKey.c)
 *     KsepRegistryQueryDriverShims @ 0x1409D8644 (KsepRegistryQueryDriverShims.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall KsepStringConcatenate(__int64 a1, _WORD *a2, _WORD *a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  size_t v10; // rsi
  size_t v11; // r15
  __int64 v12; // rbx
  size_t v13; // rbp
  void *Paged; // rax
  __int16 v16; // bx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( !a1 )
  {
    v17 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                              1u)
         + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v17) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v17) = 197318;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("ResultString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x2C6u, 0LL);
  }
  if ( !a2 )
  {
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                              1u)
         + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v18) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v18) = 197319;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("LeftString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x2C7u, 0LL);
  }
  if ( !a3 )
  {
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                              1u)
         + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v19) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v19) = 197320;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("RightString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x2C8u, 0LL);
  }
  v8 = -1LL;
  *(_OWORD *)a1 = 0LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  v10 = 2 * v9;
  do
    ++v8;
  while ( a3[v8] );
  v11 = 2 * v8;
  v12 = -(__int64)(a4 != 0) & 2;
  v13 = v10 + v12 + 2 * v8;
  if ( v13 + 2 > 0xFFFF || v13 == -2LL )
    return 2147483653LL;
  Paged = (void *)KsepPoolAllocatePaged();
  if ( !Paged )
    return 3221225495LL;
  *(_QWORD *)(a1 + 8) = Paged;
  memmove(Paged, a2, v10);
  if ( a4 )
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * (v10 >> 1)) = 92;
  memmove((void *)(*(_QWORD *)(a1 + 8) + 2 * ((v12 + v10) >> 1)), a3, v11);
  v16 = v11 + v10 + v12;
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * (v13 >> 1)) = 0;
  *(_WORD *)a1 = v16;
  *(_WORD *)(a1 + 2) = v16 + 2;
  return 0LL;
}
