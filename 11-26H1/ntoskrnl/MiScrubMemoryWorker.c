/*
 * XREFs of MiScrubMemoryWorker @ 0x140884240
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     MiScrubNodeHugeRanges @ 0x1407113F0 (MiScrubNodeHugeRanges.c)
 *     MiInitializeScrubPacket @ 0x140883E14 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x140884158 (MiReleaseScrubPacket.c)
 *     MiScrubNode @ 0x140AC8020 (MiScrubNode.c)
 */

void __fastcall MiScrubMemoryWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  __int64 v4; // r8
  unsigned __int64 v5; // rax

  v1 = *(_QWORD *)a1;
  v3 = MiInitializeScrubPacket((__int64 *)a1);
  if ( v3 >= 0 )
  {
    MiScrubNode(a1);
    MiScrubNodeHugeRanges(a1);
    MiReleaseScrubPacket(a1);
  }
  v5 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 12) = v3;
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 40), v5);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 )
    KeSignalGate(v1 + 8, 1LL, v4);
}
