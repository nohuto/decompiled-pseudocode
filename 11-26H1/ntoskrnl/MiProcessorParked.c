/*
 * XREFs of MiProcessorParked @ 0x1402F5654
 * Callers:
 *     MiMoveBackgroundZeroThreads @ 0x1402F53B0 (MiMoveBackgroundZeroThreads.c)
 *     MiZeroRemainOnProcessor @ 0x1402F5BCC (MiZeroRemainOnProcessor.c)
 *     MiGetIdleProcessorCount @ 0x1402F675C (MiGetIdleProcessorCount.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall MiProcessorParked(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  unsigned __int16 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 8);
  v2 = 0;
  v5 = 0;
  v6 = 0LL;
  RtlCopyVolatileMemory(&v5, &unk_140E2D988, 2uLL);
  if ( (unsigned __int16)v1 >= v5 )
    return 0LL;
  RtlCopyVolatileMemory(&v6, (char *)&unk_140E2D990 + 8 * v1, 8uLL);
  LOBYTE(v2) = (*(_QWORD *)a1 & v6) != 0;
  return v2;
}
